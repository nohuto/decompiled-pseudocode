/*
 * XREFs of MiSelectRelocationStartHint @ 0x14064FBC4
 * Callers:
 *     MiSelectImageBase @ 0x14064F7FC (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x14064FADC (MiObtainRelocationBits.c)
 * Callees:
 *     RtlCopyBitMap @ 0x14000F710 (RtlCopyBitMap.c)
 *     RtlMergeBitMaps @ 0x14000FA94 (RtlMergeBitMaps.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     RtlFindClearBits @ 0x140077ED0 (RtlFindClearBits.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 */

ULONG __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, ULONG a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG ClearBits; // esi

  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBits(*(PRTL_BITMAP *)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140438D80, 0LL);
  }
  RtlCopyBitMap(*(unsigned int **)a1, (__int64)&stru_140438DC0, 0);
  RtlMergeBitMaps((__int64)&stru_140438DC0, *(unsigned int **)(a1 + 8));
  ClearBits = RtlFindClearBits(&stru_140438DC0, a2, a3);
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140438D80, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140438D80);
    KeAbPostRelease((ULONG_PTR)&qword_140438D80);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return ClearBits;
}
