/*
 * XREFs of sub_1800D144C @ 0x1800D144C
 * Callers:
 *     sub_1800D1870 @ 0x1800D1870 (sub_1800D1870.c)
 *     sub_1800F74A8 @ 0x1800F74A8 (sub_1800F74A8.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800B2B6C @ 0x1800B2B6C (sub_1800B2B6C.c)
 *     sub_1800D1354 @ 0x1800D1354 (sub_1800D1354.c)
 */

__int64 *__fastcall sub_1800D144C(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a2[1] - *a2;
  v5 = v4 / 48;
  if ( v4 / 48 )
  {
    if ( v5 > 0x555555555555555LL )
      std::vector<void *>::_Xlen();
    v6 = sub_1800B2B6C((__int64)a1, v4 / 48);
    try
    {
      *a1 = (__int64)v6;
      a1[1] = (__int64)v6;
      a1[2] = *a1 + 48 * v5;
      a1[1] = sub_1800D1354(*a2, a2[1], *a1);
    }
    catch ( ... )
    {
      sub_1800D1FB4(a1);
      throw;
    }
  }
  return a1;
}
