/*
 * XREFs of CmpDoLocalizeNextHive @ 0x1407357E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpGetNextActiveHive @ 0x140638590 (CmpGetNextActiveHive.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x14073588C (HvHiveConvertLockedPagesToCowByPolicy.c)
 */

char __fastcall CmpDoLocalizeNextHive(_BYTE *a1, _QWORD *a2)
{
  char v2; // di
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rsi
  int locked; // ebx

  v2 = 0;
  *a2 = 10000000LL * (unsigned int)dword_140424A74;
  *a1 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)NextActiveHive )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      if ( !NextActiveHive )
        break;
      CmpLockRegistry();
      locked = HvHiveConvertLockedPagesToCowByPolicy(NextActiveHive);
      CmpUnlockRegistry();
      if ( locked < 0 )
      {
        v2 = 1;
        break;
      }
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 1;
  }
  return v2;
}
