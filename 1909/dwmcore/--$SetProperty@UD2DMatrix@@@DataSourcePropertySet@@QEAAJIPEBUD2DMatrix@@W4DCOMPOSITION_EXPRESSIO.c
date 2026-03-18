/*
 * XREFs of ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801958A0
 * Callers:
 *     ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x180196BE0 (-SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1800A2250 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x180196124 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@AEBI@Z @ 0x180197308 (-lower_bound@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<D2DMatrix>(_QWORD *a1, int a2, _OWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = a2;
  v16 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::lower_bound(
    a1,
    &v14,
    &v15);
  if ( v14 == a1[1] )
  {
    v5 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DMatrix>(
           (__int64)(a1 + 8),
           265,
           a3,
           &v16);
    if ( v5 < 0 )
    {
      v6 = 37LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<unsigned int &,unsigned int &>(
      a1,
      v12,
      &v15,
      &v16);
  }
  else
  {
    v8 = *(unsigned int *)(v14 + 20);
    v9 = a1[8];
    if ( *(_DWORD *)(v9 + 8 * v8) != 265 )
    {
      v5 = -2147024809;
      v6 = 48LL;
      goto LABEL_4;
    }
    v10 = *(_DWORD *)(v9 + 8 * v8 + 4) & 0x1FFFFFFF;
    v11 = a1[12];
    *(_OWORD *)(v10 + v11) = *a3;
    *(_OWORD *)(v10 + v11 + 16) = a3[1];
    *(_OWORD *)(v10 + v11 + 32) = a3[2];
    *(_OWORD *)(v10 + v11 + 48) = a3[3];
  }
  return 0LL;
}
