/*
 * XREFs of sub_1800FB9C0 @ 0x1800FB9C0
 * Callers:
 *     sub_180116CF8 @ 0x180116CF8 (sub_180116CF8.c)
 *     sub_18011746C @ 0x18011746C (sub_18011746C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800F667C @ 0x1800F667C (sub_1800F667C.c)
 */

_QWORD *__fastcall sub_1800FB9C0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v4; // rax
  _DWORD *v5; // rax

  v2 = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1555555555555555LL )
      std::vector<void *>::_Xlen();
    v4 = sub_1800F667C((__int64)a1, a2);
    *a1 = v4;
    a1[1] = v4;
    v5 = (_DWORD *)*a1;
    for ( a1[2] = *a1 + 12 * v2; v2; --v2 )
    {
      *v5 = 0;
      v5[1] = 0;
      v5[2] = 0;
      v5 += 3;
    }
    a1[1] = v5;
  }
  return a1;
}
