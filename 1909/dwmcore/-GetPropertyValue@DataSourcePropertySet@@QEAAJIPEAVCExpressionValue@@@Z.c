/*
 * XREFs of ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x180196448
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x180196648 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@AEBI@Z @ 0x180197308 (-lower_bound@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V.c)
 */

__int64 __fastcall DataSourcePropertySet::GetPropertyValue(
        DataSourcePropertySet *this,
        int a2,
        struct CExpressionValue *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v28; // [rsp+30h] [rbp+8h] BYREF
  int v29; // [rsp+38h] [rbp+10h] BYREF

  v29 = a2;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::lower_bound(
    this,
    &v28,
    &v29);
  if ( v28 == *((_QWORD *)this + 1) )
    return 2147483659LL;
  v6 = *(unsigned int *)(v28 + 20);
  v7 = *((_QWORD *)this + 8);
  v8 = *(_DWORD *)(v7 + 8 * v6);
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v9 = v8 - 17;
  if ( !v9 )
  {
    *(_BYTE *)a3 = *(_BYTE *)((*(_DWORD *)(v7 + 8 * v6 + 4) & 0x1FFFFFFF) + *((_QWORD *)this + 12));
    *((_DWORD *)a3 + 18) = 17;
    goto LABEL_25;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_DWORD *)a3 = *(_DWORD *)((*(_DWORD *)(v7 + 8 * v6 + 4) & 0x1FFFFFFF) + *((_QWORD *)this + 12));
    *((_DWORD *)a3 + 18) = 18;
    goto LABEL_25;
  }
  v11 = v10 - 17;
  if ( !v11 )
  {
    v25 = *((_QWORD *)this + 12);
    v26 = *(_DWORD *)(v7 + 8 * v6 + 4) & 0x1FFFFFFF;
    *((_DWORD *)a3 + 18) = 35;
    *(_QWORD *)a3 = *(_QWORD *)(v26 + v25);
    goto LABEL_25;
  }
  v12 = v11 - 17;
  if ( !v12 )
  {
    v23 = *((_QWORD *)this + 12);
    v24 = *(_DWORD *)(v7 + 8 * v6 + 4) & 0x1FFFFFFF;
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *(_QWORD *)(v24 + v23);
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v24 + v23 + 8);
    goto LABEL_25;
  }
  v13 = v12 - 17;
  if ( !v13 )
  {
    v21 = *(_DWORD *)(v7 + 8 * v6 + 4);
    v22 = *((_QWORD *)this + 12);
    *((_DWORD *)a3 + 18) = 69;
    goto LABEL_18;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v21 = *(_DWORD *)(v7 + 8 * v6 + 4);
    v22 = *((_QWORD *)this + 12);
    *((_DWORD *)a3 + 18) = 70;
    goto LABEL_18;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v21 = *(_DWORD *)(v7 + 8 * v6 + 4);
    v22 = *((_QWORD *)this + 12);
    *((_DWORD *)a3 + 18) = 71;
LABEL_18:
    *(_OWORD *)a3 = *(_OWORD *)((v21 & 0x1FFFFFFF) + v22);
    goto LABEL_25;
  }
  v16 = v15 - 33;
  if ( v16 )
  {
    if ( v16 != 161 )
      return 2147500037LL;
    v17 = *(_DWORD *)(v7 + 8 * v6 + 4);
    v18 = *((_QWORD *)this + 12);
    v17 &= 0x1FFFFFFFu;
    *((_DWORD *)a3 + 18) = 265;
    *(_OWORD *)a3 = *(_OWORD *)(v17 + v18);
    *((_OWORD *)a3 + 1) = *(_OWORD *)(v17 + v18 + 16);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(v17 + v18 + 32);
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v17 + v18 + 48);
  }
  else
  {
    v19 = *((_QWORD *)this + 12);
    v20 = *(_DWORD *)(v7 + 8 * v6 + 4) & 0x1FFFFFFF;
    *((_DWORD *)a3 + 18) = 104;
    *(_OWORD *)a3 = *(_OWORD *)(v20 + v19);
    *((_QWORD *)a3 + 2) = *(_QWORD *)(v20 + v19 + 16);
  }
LABEL_25:
  *((_BYTE *)a3 + 76) = 1;
  return 0LL;
}
