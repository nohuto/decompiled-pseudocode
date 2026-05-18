/*
 * XREFs of sub_1800AB5D0 @ 0x1800AB5D0
 * Callers:
 *     sub_1800AB644 @ 0x1800AB644 (sub_1800AB644.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 */

__int64 __fastcall sub_1800AB5D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx

  for ( i = a1; i != a2; i += 32LL )
  {
    if ( a3 != i )
    {
      unknown_libname_116((__int64 *)a3);
      *(_OWORD *)a3 = *(_OWORD *)i;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(i + 16);
      *(_QWORD *)(i + 16) = 0LL;
      *(_QWORD *)(i + 24) = 7LL;
      *(_WORD *)i = 0;
    }
    a3 += 32LL;
  }
  return a3;
}
