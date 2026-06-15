/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E6A04
 * Callers:
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800E7084 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180016220 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001D500 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800E5CD0 (-_Change_array@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDe.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ISaDeviceProxy> const &>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rcx
  char *v13; // r14
  __int64 *v14; // r15
  char *v15; // rdx
  char *v16; // rcx
  signed __int64 v17; // r9
  __int64 v18; // r15
  signed __int64 v20; // r8
  char *v21; // r9
  __int64 v22; // [rsp+80h] [rbp+8h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v22 = 8 * v6;
  v14 = (__int64 *)&v13[8 * v6];
  *v14 = *a3;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v14);
  v15 = a1[1];
  v16 = *a1;
  if ( v4 == v15 )
  {
    if ( v16 != v15 )
    {
      v17 = v13 - v16;
      do
      {
        *(_QWORD *)&v16[v17] = 0LL;
        if ( &v16[v17] != v16 )
        {
          *(_QWORD *)&v16[v17] = *(_QWORD *)v16;
          *(_QWORD *)v16 = 0LL;
        }
        v16 += 8;
      }
      while ( v16 != v15 );
    }
LABEL_15:
    v18 = v22;
    goto LABEL_16;
  }
  if ( v16 != v4 )
  {
    v20 = v13 - v16;
    do
    {
      *(_QWORD *)&v16[v20] = 0LL;
      if ( &v16[v20] != v16 )
      {
        *(_QWORD *)&v16[v20] = *(_QWORD *)v16;
        *(_QWORD *)v16 = 0LL;
      }
      v16 += 8;
    }
    while ( v16 != v4 );
    v15 = a1[1];
  }
  if ( v4 == v15 )
    goto LABEL_15;
  v18 = v22;
  v21 = &v13[v22 - (_QWORD)v4 + 8];
  do
  {
    *(_QWORD *)&v21[(_QWORD)v4] = 0LL;
    if ( &v21[(_QWORD)v4] != v4 )
    {
      *(_QWORD *)&v21[(_QWORD)v4] = *(_QWORD *)v4;
      *(_QWORD *)v4 = 0LL;
    }
    v4 += 8;
  }
  while ( v4 != v15 );
LABEL_16:
  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Change_array((__int64)a1, (__int64)v13, v8, v11);
  return &(*a1)[v18];
}
