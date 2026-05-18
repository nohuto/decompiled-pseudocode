/*
 * XREFs of sub_180026780 @ 0x180026780
 * Callers:
 *     sub_18001C908 @ 0x18001C908 (sub_18001C908.c)
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 * Callees:
 *     sub_18001F3D4 @ 0x18001F3D4 (sub_18001F3D4.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x1800261E8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

const void **__fastcall sub_180026780(_QWORD *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r8
  _QWORD *v7; // r14
  bool v8; // cf
  char *v9; // r12
  __int64 v10; // rdi

  v6 = a1[2];
  v7 = a1;
  if ( v6 < a2 )
    std::vector<void *>::_Xlen();
  if ( a4 > a1[3] - v6 )
  {
    LOBYTE(v6) = 0;
    return sub_18001F3D4((const void **)a1, a4, v6, a2, a3, a4);
  }
  else
  {
    v8 = a1[3] < 8uLL;
    a1[2] = v6 + a4;
    if ( !v8 )
      a1 = (_QWORD *)*a1;
    v9 = (char *)a1 + 2 * a2;
    if ( &a3[2 * a4] <= v9 || a3 > (char *)a1 + 2 * v6 )
    {
      v10 = a4;
    }
    else if ( v9 > a3 )
    {
      v10 = (v9 - a3) >> 1;
    }
    else
    {
      v10 = 0LL;
    }
    memmove(&v9[2 * a4], v9, 2 * (v6 - a2) + 2);
    memcpy(v9, a3, 2 * v10);
    memcpy(&v9[2 * v10], &a3[2 * v10 + 2 * a4], 2 * (a4 - v10));
    return (const void **)v7;
  }
}
