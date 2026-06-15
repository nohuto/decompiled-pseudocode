/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800D503C
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800468C0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800F1D14 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 *     _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800F2098 (_lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator().c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F25C0 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F29A0 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003890 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800369E4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800D7CA0 (-_Change_array@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIS.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
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
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  char *v13; // r14
  __int64 *v14; // r15
  char *v15; // rdx
  char *v16; // rcx
  signed __int64 v17; // r9
  __int64 v18; // r15
  signed __int64 v20; // r8
  char *v21; // r9
  __int64 *v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+80h] [rbp+8h]

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
  v23 = 8 * v6;
  v14 = (__int64 *)&v13[8 * v6];
  v22 = v14 + 1;
  *v14 = *a3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v14);
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
    v18 = v23;
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
  v18 = v23;
  v21 = &v13[v23 - (_QWORD)v4 + 8];
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
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Change_array(a1, v13, v8, v11, v22, v13, -2LL);
  return &(*a1)[v18];
}
