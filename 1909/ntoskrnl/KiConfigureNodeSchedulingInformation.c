/*
 * XREFs of KiConfigureNodeSchedulingInformation @ 0x140185BD0
 * Callers:
 *     KiConfigureAllSchedulingInformation @ 0x1409ED5F4 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiConfigureNodeSchedulingInformation(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // r10
  unsigned __int16 v4; // si
  __int64 v5; // r9
  char v6; // bp
  __int64 v7; // r11
  unsigned __int64 i; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx

  result = HalIsHyperThreadingEnabled();
  v3 = *(_QWORD *)(a1 + 136);
  v4 = *(_WORD *)(a1 + 144);
  v5 = 0LL;
  v6 = result;
  v7 = 0LL;
  for ( i = v3; i; i &= ~v11 )
  {
    _BitScanForward64((unsigned __int64 *)&v9, i);
    v10 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v4 + (int)v9]];
    if ( v6 )
      v11 = *(_QWORD *)(v10 + 24920);
    else
      v11 = v3 & *(_QWORD *)(v10 + 8LL * *(unsigned __int8 *)(v10 + 208) + 24728);
    result = (unsigned int)v9;
    v7 |= 1LL << v9;
  }
  v12 = 0LL;
  v13 = *(_QWORD *)(a1 + 136);
  if ( v3 )
  {
    do
    {
      _BitScanForward64(&v14, v13);
      v12 |= 1LL << v14;
      v13 &= ~*(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v4 + (int)v14]] + 24936);
    }
    while ( v13 );
    do
    {
      _BitScanForward64(&v15, v3);
      v16 = *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v4 + (int)v15]] + 24896);
      v5 |= v16;
      result = (unsigned int)v15;
      v3 &= ~v16 & ~(1LL << v15);
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 352) = v12;
  *(_QWORD *)(a1 + 160) = v7;
  *(_QWORD *)(a1 + 152) = v5;
  return result;
}
