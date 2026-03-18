/*
 * XREFs of MmGetPageFileForCrashDump @ 0x14088D330
 * Callers:
 *     IoConfigureCrashDump @ 0x140193100 (IoConfigureCrashDump.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

__int64 MmGetPageFileForCrashDump()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  unsigned __int64 v2; // rbp
  char *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140468888, 0LL);
  if ( Count )
  {
    v3 = (char *)&unk_14046A360;
    v4 = Count;
    do
    {
      v5 = *(_QWORD *)v3;
      if ( (*(_BYTE *)(*(_QWORD *)v3 + 204LL) & 0x50) == 0 && *(_QWORD *)(v5 + 16) > v2 )
      {
        v1 = *(_QWORD *)(v5 + 224);
        v2 = *(_QWORD *)(v5 + 16);
      }
      v3 += 8;
      --v4;
    }
    while ( v4 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140468888, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140468888);
  KeAbPostRelease((ULONG_PTR)qword_140468888);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
