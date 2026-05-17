/*
 * XREFs of sub_18010B340 @ 0x18010B340
 * Callers:
 *     sub_18010B474 @ 0x18010B474 (sub_18010B474.c)
 * Callees:
 *     sub_18004A7A0 @ 0x18004A7A0 (sub_18004A7A0.c)
 */

__int64 __fastcall sub_18010B340(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx

  v1 = *(_BYTE *)(a1 + 13) & 7;
  if ( v1 <= 1 )
  {
    v3 = a1 + *(__int16 *)(a1 + 22);
    v4 = *(_QWORD *)(v3 + 56) + *(_QWORD *)(v3 + 40);
    if ( v4 < *(_QWORD *)(v3 + 72)
      && (v4 < *(_QWORD *)(v3 + 64)
       || *(_QWORD *)(v3 + 48) + *(_QWORD *)(v3 + 32) >= ((v4 * *(unsigned __int8 *)(v3 + 80)) << 9) / 0x64) )
    {
      return 1LL;
    }
  }
  else if ( v1 != 2 )
  {
    if ( v1 != 3 )
      return sub_18004A7A0() & 1;
    return 1LL;
  }
  return 0LL;
}
