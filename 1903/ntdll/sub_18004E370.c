/*
 * XREFs of sub_18004E370 @ 0x18004E370
 * Callers:
 *     sub_18004DE5C @ 0x18004DE5C (sub_18004DE5C.c)
 *     sub_18004E2D4 @ 0x18004E2D4 (sub_18004E2D4.c)
 * Callees:
 *     sub_18004E460 @ 0x18004E460 (sub_18004E460.c)
 *     sub_18004FF08 @ 0x18004FF08 (sub_18004FF08.c)
 */

_BYTE *__fastcall sub_18004E370(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v7; // r14
  _BYTE *v8; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rbp
  __int64 v12; // rax

  v3 = 0LL;
  if ( (*(_BYTE *)a3 & 4) != 0 )
    v7 = *(_QWORD *)(a3 + 24);
  else
    v7 = *(unsigned __int16 *)(a3 + 24);
  v8 = (_BYTE *)sub_18004E460(
                  *(_QWORD *)(a1 + 24) + 16LL,
                  (unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20);
  v9 = v8;
  if ( v8 )
  {
    if ( (*v8 & 4) != 0 )
      return v9;
    *(_BYTE *)a3 |= 2u;
    v3 = 1LL;
    v10 = a2 + 0x100000;
    *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 2309737967LL;
    if ( v7 <= 1 )
      return v9;
    do
    {
      if ( !sub_18004E460(
              *(_QWORD *)(a1 + 24) + 16LL,
              (unsigned __int64)(v10 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20) )
        break;
      ++v3;
      v10 += 0x100000LL;
    }
    while ( v3 < v7 );
  }
  else
  {
    v9 = 0LL;
  }
  if ( v3 < v7 )
  {
    for ( ; v3; --v3 )
    {
      v12 = *(_QWORD *)(a1 + 24);
      sub_18004FF08(
        v12 + 32,
        8 * ((__int64)&v9[-*(_QWORD *)(v12 + 40)] >> *(_DWORD *)(v12 + 24) << *(_DWORD *)(v12 + 24)),
        8 * (1LL << *(_DWORD *)(v12 + 24)));
      v9 += 32;
    }
    return 0LL;
  }
  return v9;
}
