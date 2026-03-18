/*
 * XREFs of KiSelectIdealProcessor @ 0x14001C6C4
 * Callers:
 *     KeSelectIdealProcessor @ 0x14001C5E4 (KeSelectIdealProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectIdealProcessor(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // r9
  unsigned __int16 v5; // ax
  __int64 v7; // rsi
  int v8; // r11d
  __int64 v9; // rdx
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rcx
  __int64 j; // rcx
  unsigned __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx

  v3 = *(_WORD *)(a1 + 172);
  v5 = *(_WORD *)(a1 + 176);
  if ( v3 == v5 )
    return v3;
  v7 = *(_QWORD *)(a1 + 136);
  v8 = KiProcessorIndexToNumberMappingTable[(unsigned __int16)(v3 + (a2 - v3) % (v5 - v3 + 1))];
  v9 = 1LL << (v8 & 0x3F);
  if ( (v7 & v9) == 0 )
  {
    _BitScanForward64(&v19, __ROR8__(v7, v8 & 0x3F));
    v9 = 1LL << (((v8 & 0x3F) + v19) & 0x3F);
  }
  v10 = *(_QWORD *)(a1 + 160);
  v11 = v10;
  v12 = ~v7;
  for ( i = v10 & v7; (i & v9) == 0; i = v11 & ~v12 )
  {
    v12 |= v11;
    v11 *= 2LL;
  }
  for ( j = ~(v9 | (v9 - 1)) & i; (j & a3) == 0; j = v11 & ~v12 )
  {
    v17 = 2 * v11;
    v18 = v12 | v11;
    v11 = v10;
    v12 = ~v7;
    if ( (v7 & ~v18) != 0 )
    {
      v11 = v17;
      v12 = v18;
    }
  }
  _BitScanForward64(&v15, a3 & j);
  return LOWORD(KiProcessorNumberToIndexMappingTable[(unsigned int)v15 + (v8 & 0xFFFFFFC0)]);
}
