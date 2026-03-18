/*
 * XREFs of ??$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJIPEBUD2D_MATRIX_3X2_F@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801975C8
 * Callers:
 *     ?SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180198450 (-SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1800BB920 (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x1801979DC (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@AEBI@Z @ 0x180198BC8 (-lower_bound@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<D2D_MATRIX_3X2_F>(_QWORD *a1, int a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF
  int v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = a2;
  v16 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::lower_bound(
    a1,
    &v14,
    &v15);
  if ( v14 == a1[1] )
  {
    v5 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2D_MATRIX_3X2_F>(
           (__int64)(a1 + 8),
           104,
           a3,
           &v16);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
        (const char *)(unsigned int)v5);
      return v6;
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
    if ( *(_DWORD *)(v9 + 8 * v8) != 104 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v10 = *(_DWORD *)(v9 + 8 * v8 + 4);
    v11 = a1[12];
    v10 &= 0x1FFFFFFFu;
    *(_OWORD *)(v10 + v11) = *(_OWORD *)a3;
    *(_QWORD *)(v10 + v11 + 16) = *(_QWORD *)(a3 + 16);
  }
  return 0LL;
}
