/*
 * XREFs of FsRtlLookupLastBaseMcbEntry @ 0x1401195E0
 * Callers:
 *     FsRtlLookupLastLargeMcbEntry @ 0x14026EBE0 (FsRtlLookupLastLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupLastBaseMcbEntry(PBASE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ULONG PairCount; // r9d
  int v4; // eax
  _DWORD *Mapping; // r11
  __int64 v8; // rbx
  unsigned int v9; // ecx
  int v10; // edx

  PairCount = Mcb->PairCount;
  v4 = 0;
  if ( PairCount )
  {
    Mapping = Mcb->Mapping;
    v8 = PairCount - 1;
    v9 = -1;
    v10 = Mapping[2 * v8 + 1];
    if ( v10 != -1 )
    {
      if ( PairCount != 1 )
        v4 = Mapping[2 * PairCount - 4];
      v9 = v10 - v4 + Mapping[2 * v8] - 1;
    }
    *Lbn = v9;
    *Vbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * (Mcb->PairCount - 1)) - 1);
    LOBYTE(v4) = 1;
  }
  return v4;
}
