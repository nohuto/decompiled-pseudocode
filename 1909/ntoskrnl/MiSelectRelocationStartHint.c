/*
 * XREFs of MiSelectRelocationStartHint @ 0x140649408
 * Callers:
 *     MiSelectImageBase @ 0x14064904C (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x14064932C (MiObtainRelocationBits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     RtlFindClearBitsEx @ 0x140073900 (RtlFindClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlCopyBitMapEx @ 0x140118B30 (RtlCopyBitMapEx.c)
 *     RtlMergeBitMapsEx @ 0x140197C68 (RtlMergeBitMapsEx.c)
 */

unsigned __int64 __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 ClearBits; // rsi

  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140464448, 0LL);
  }
  RtlCopyBitMapEx(*(_QWORD *)a1, &qword_1404644D0, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_1404644D0, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_1404644D0, a2, a3);
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140464448, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140464448);
    KeAbPostRelease((ULONG_PTR)&qword_140464448);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return ClearBits;
}
