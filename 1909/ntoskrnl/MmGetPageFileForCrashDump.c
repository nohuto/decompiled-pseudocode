/*
 * XREFs of MmGetPageFileForCrashDump @ 0x14088CB50
 * Callers:
 *     IoConfigureCrashDump @ 0x1401938E0 (IoConfigureCrashDump.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_1404685C8, 0LL);
  if ( Count )
  {
    v3 = (char *)&unk_14046A0A0;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_1404685C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_1404685C8);
  KeAbPostRelease((ULONG_PTR)qword_1404685C8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
