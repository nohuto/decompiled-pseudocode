/*
 * XREFs of sub_1800D884C @ 0x1800D884C
 * Callers:
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800B2C7C @ 0x1800B2C7C (sub_1800B2C7C.c)
 *     sub_1800D85C8 @ 0x1800D85C8 (sub_1800D85C8.c)
 */

__int64 __fastcall sub_1800D884C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = a2[1] - *a2;
  v5 = v4 / 48;
  if ( v4 / 48 )
  {
    if ( v5 > 0x555555555555555LL )
      std::vector<void *>::_Xlen();
    v6 = sub_1800B2C7C(a1, v4 / 48);
    try
    {
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 48 * v5;
      *(_QWORD *)(a1 + 8) = sub_1800D85C8(*a2, a2[1], *(_QWORD **)a1);
    }
    catch ( ... )
    {
      sub_1800D20C4(a1);
      throw;
    }
  }
  return a1;
}
