/*
 * XREFs of sub_1800D873C @ 0x1800D873C
 * Callers:
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800B2B6C @ 0x1800B2B6C (sub_1800B2B6C.c)
 *     sub_1800D84B8 @ 0x1800D84B8 (sub_1800D84B8.c)
 */

__int64 __fastcall sub_1800D873C(__int64 a1, __int64 *a2)
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
    v6 = sub_1800B2B6C(a1, v4 / 48);
    try
    {
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 48 * v5;
      *(_QWORD *)(a1 + 8) = sub_1800D84B8(*a2, a2[1], *(_QWORD **)a1);
    }
    catch ( ... )
    {
      sub_1800D1FB4(a1);
      throw;
    }
  }
  return a1;
}
