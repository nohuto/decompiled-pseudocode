/*
 * XREFs of MiFlushTbListEarly @ 0x1400F31E0
 * Callers:
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiReplenishBitMap @ 0x1400F29A0 (MiReplenishBitMap.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiResetAccessBitPteWorker @ 0x1402C8BE0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, __int64 a2, _KPROCESS *Process)
{
  unsigned __int64 v3; // r9

  v3 = qword_140465B50;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 && *(_DWORD *)a1 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].ActiveProcessors.Bitmap[19] )
      v3 = -1LL;
  }
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v3 )
    return 0LL;
  if ( (a2 & 2) == 0 )
  {
    if ( v3 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (a2 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    MiFlushTbList((int *)a1, a2, (__int64)Process, v3);
  }
  return 1LL;
}
