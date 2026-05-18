/*
 * XREFs of sub_180121734 @ 0x180121734
 * Callers:
 *     sub_180122600 @ 0x180122600 (sub_180122600.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180031E4C @ 0x180031E4C (sub_180031E4C.c)
 *     sub_1800AB9F8 @ 0x1800AB9F8 (sub_1800AB9F8.c)
 *     sub_1800B2A34 @ 0x1800B2A34 (sub_1800B2A34.c)
 *     sub_18012197C @ 0x18012197C (sub_18012197C.c)
 */

char *__fastcall sub_180121734(__int64 **a1, __int64 *a2, char *a3, char *a4)
{
  char *result; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  __int64 *v11; // rcx
  __int64 *v12; // r13
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r13
  char *v18; // r8
  __int64 *v19; // rcx
  __int64 *v20; // r14
  __int64 *v21; // r12
  __int64 *i; // r14
  char v24; // [rsp+28h] [rbp-60h]
  char *v25; // [rsp+38h] [rbp-50h]
  __int64 v26; // [rsp+40h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = (char *)&retaddr;
  v9 = (a4 - a3) >> 5;
  v10 = ((char *)a2 - (char *)*a1) >> 5;
  v24 = 1;
  if ( v9 == 1 && a2 == a1[1] || (v24 = 0, v9) )
  {
    v11 = a1[2];
    v12 = a1[1];
    if ( v9 <= ((char *)v11 - (char *)v12) >> 5 )
    {
      if ( v9 >= ((char *)v12 - (char *)a2) >> 5 )
      {
        a1[1] = (__int64 *)sub_1800AB9F8(a2, v12, (char *)&a2[4 * v9]);
        for ( i = a2; i != v12; i += 4 )
          unknown_libname_116(i);
      }
      else
      {
        a1[1] = (__int64 *)sub_1800AB9F8(&v12[-4 * v9], v12, (char *)v12);
        sub_18012197C(a2, &v12[-4 * v9], v12, 0LL, a1);
        v20 = a2;
        v21 = &a2[4 * v9];
        if ( a2 != v21 )
        {
          do
          {
            unknown_libname_116(v20);
            v20 += 4;
          }
          while ( v20 != v21 );
        }
      }
      return sub_1800AB9F8(a3, a4, (char *)a2);
    }
    else
    {
      v13 = ((char *)v12 - (char *)*a1) >> 5;
      if ( v9 > 0x7FFFFFFFFFFFFFFLL - v13 )
        std::vector<void *>::_Xlen();
      v14 = v9 + v13;
      v26 = v9 + v13;
      v15 = ((char *)v11 - (char *)*a1) >> 5;
      v16 = v15 >> 1;
      if ( v15 <= 0x7FFFFFFFFFFFFFFLL - (v15 >> 1) )
      {
        v17 = v16 + v15;
        if ( v16 + v15 < v14 )
          v17 = v14;
      }
      else
      {
        v17 = v9 + v13;
      }
      v25 = (char *)sub_180031E4C((__int64)a1, v17);
      sub_1800AB9F8(a3, a4, &v25[32 * v10]);
      v18 = v25;
      v19 = *a1;
      if ( !v24 )
      {
        sub_1800AB9F8(v19, a2, v25);
        v18 = &v25[32 * v10 + 32 * v9];
        v19 = a2;
      }
      sub_1800AB9F8(v19, a1[1], v18);
      return (char *)sub_1800B2A34((__int64)a1, (__int64)v25, v26, v17);
    }
  }
  return result;
}
