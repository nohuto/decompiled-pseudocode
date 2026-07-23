/*
 * XREFs of RtlpHpSegSegmentInitialize @ 0x14000DC20
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x14000B270 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x140140FFC (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x14000A390 (RtlpHpQueryVA.c)
 */

__int64 __fastcall RtlpHpSegSegmentInitialize(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  __int64 result; // rax
  unsigned __int8 *v11; // rcx
  unsigned __int8 v12; // al
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    v13 = *(_OWORD *)(a1 + 40);
    RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, &v13, &v14, 0LL);
    *(_QWORD *)(a2 + 24) = v14;
  }
  v6 = a3;
  v7 = a2 + 32LL * *(unsigned __int8 *)(a1 + 10);
  *(_BYTE *)(v7 + 31) = -*(_BYTE *)(a1 + 10);
  *(_BYTE *)(v7 + 24) |= 2u;
  v8 = 1 << *(_BYTE *)(a1 + 9);
  if ( a3 )
  {
    v11 = (unsigned __int8 *)(v7 + 25);
    do
    {
      v12 = v8;
      if ( v6 < v8 )
        v12 = v6;
      *v11 = v12;
      v11 += 32;
      v6 -= v12;
    }
    while ( v6 );
  }
  v9 = *(unsigned __int8 *)(v7 + 31) - 1;
  *(_WORD *)(v7 + 28) = ~(_WORD)a3;
  result = 32LL * v9;
  *(_BYTE *)(result + v7 + 31) = v9;
  *(_DWORD *)v7 = -857879331;
  return result;
}
