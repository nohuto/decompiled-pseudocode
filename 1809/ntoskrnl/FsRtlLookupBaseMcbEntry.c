/*
 * XREFs of FsRtlLookupBaseMcbEntry @ 0x140109E20
 * Callers:
 *     FsRtlLookupLargeMcbEntry @ 0x14026EB30 (FsRtlLookupLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupBaseMcbEntry(
        PBASE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  int v7; // ebp
  signed int v8; // r10d
  signed int v12; // ebx
  _DWORD *Mapping; // r8
  ULONG v14; // eax
  int v15; // r9d
  int v16; // ecx
  LONGLONG v18; // r8
  _DWORD *v19; // r10

  v7 = 0;
  v8 = Mcb->PairCount - 1;
  v12 = 0;
  if ( v8 < 0 )
    return 0;
  while ( 1 )
  {
    Mapping = Mcb->Mapping;
    v14 = (v8 + v12) / 2;
    if ( !v14 || (unsigned int)Vbn >= Mapping[2 * v14 - 2] )
      break;
    v8 = v14 - 1;
LABEL_19:
    if ( v12 > v8 )
      return 0;
  }
  if ( (unsigned int)Vbn > Mapping[2 * v14] - 1 )
  {
    v12 = v14 + 1;
    goto LABEL_19;
  }
  if ( Lbn )
  {
    v15 = Mapping[2 * v14 + 1];
    if ( v15 == -1 )
    {
      *Lbn = -1LL;
    }
    else
    {
      if ( v14 )
        v16 = Mapping[2 * v14 - 2];
      else
        v16 = 0;
      *Lbn = (unsigned int)(Vbn + v15 - v16);
    }
  }
  if ( SectorCountFromLbn )
    *SectorCountFromLbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * v14) - Vbn);
  if ( StartingLbn )
  {
    v18 = *((unsigned int *)Mcb->Mapping + 2 * v14 + 1);
    if ( (_DWORD)v18 == -1 )
      *StartingLbn = -1LL;
    else
      *StartingLbn = v18;
  }
  if ( SectorCountFromStartingLbn )
  {
    v19 = Mcb->Mapping;
    if ( v14 )
      v7 = v19[2 * v14 - 2];
    *SectorCountFromStartingLbn = (unsigned int)(v19[2 * v14] - v7);
  }
  if ( Index )
    *Index = v14;
  return 1;
}
