/*
 * XREFs of sub_18012197C @ 0x18012197C
 * Callers:
 *     sub_180121734 @ 0x180121734 (sub_180121734.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 */

__int64 __fastcall sub_18012197C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx

  if ( a2 != a1 )
  {
    v5 = a2 - 32;
    do
    {
      a3 -= 32LL;
      if ( a3 != v5 )
      {
        unknown_libname_116((__int64 *)a3);
        *(_OWORD *)a3 = *(_OWORD *)v5;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 16);
        *(_QWORD *)(v5 + 16) = 0LL;
        *(_QWORD *)(v5 + 24) = 7LL;
        *(_WORD *)v5 = 0;
      }
      v5 -= 32LL;
    }
    while ( v5 + 32 != a1 );
  }
  return a3;
}
