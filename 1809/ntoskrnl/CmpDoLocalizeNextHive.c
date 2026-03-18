/*
 * XREFs of CmpDoLocalizeNextHive @ 0x1407086D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpGetNextActiveHive @ 0x1405B1474 (CmpGetNextActiveHive.c)
 *     CmpLockRegistry @ 0x140645120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140645170 (CmpUnlockRegistry.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x14070877C (HvHiveConvertLockedPagesToCowByPolicy.c)
 */

char __fastcall CmpDoLocalizeNextHive(_BYTE *a1, _QWORD *a2)
{
  char v2; // di
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rsi
  int locked; // ebx

  v2 = 0;
  *a2 = 10000000LL * (unsigned int)dword_1403FEA74;
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 1;
  }
  return v2;
}
