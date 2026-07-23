/*
 * XREFs of PpmHeteroRestrictToFavoredClass @ 0x1402E453C
 * Callers:
 *     PpmParkChooseCoresToUnpark @ 0x1402E7980 (PpmParkChooseCoresToUnpark.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 */

__int64 __fastcall PpmHeteroRestrictToFavoredClass(unsigned __int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int8 v5; // si
  unsigned __int64 v6; // r15
  int v7; // ebp
  unsigned __int64 v8; // rax
  __int64 Prcb; // rdx
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx

  v2 = 0LL;
  v4 = a1;
  v5 = 0;
  v6 = a1;
  if ( a1 )
  {
    v7 = a2 << 6;
    do
    {
      _BitScanForward64(&v8, v6);
      Prcb = KeGetPrcb(KiProcessorNumberToIndexMappingTable[v7 + (v8 & 0x3F)]);
      v10 = v5;
      if ( v5 <= *(_BYTE *)(Prcb + 24225) )
        v10 = *(_BYTE *)(Prcb + 24225);
      v5 = v10;
      v6 &= ~*(_QWORD *)(Prcb + 200);
    }
    while ( v6 );
  }
  for ( ; v4; v4 &= ~v13 )
  {
    _BitScanForward64(&v11, v4);
    v12 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v11 & 0x3F)]);
    v13 = *(_QWORD *)(v12 + 200);
    if ( *(_BYTE *)(v12 + 24225) == v5 )
      v2 |= v13;
  }
  return v2;
}
