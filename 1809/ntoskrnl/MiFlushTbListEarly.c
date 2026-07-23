/*
 * XREFs of MiFlushTbListEarly @ 0x1400854CC
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiReplenishBitMap @ 0x1400EFE70 (MiReplenishBitMap.c)
 *     MiResetAccessBitPteWorker @ 0x1402B3970 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, _KPROCESS *Process)
{
  unsigned __int64 v2; // r9
  char v3; // r10

  v2 = qword_14043B1D0;
  v3 = (char)Process;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 && *(_DWORD *)a1 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].ActiveProcessors.Bitmap[15] )
      v2 = -1LL;
  }
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v2 )
    return 0LL;
  if ( (v3 & 2) == 0 )
  {
    if ( v2 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (v3 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    MiFlushTbList((int *)a1, (__int64)Process, a1, v2);
  }
  return 1LL;
}
