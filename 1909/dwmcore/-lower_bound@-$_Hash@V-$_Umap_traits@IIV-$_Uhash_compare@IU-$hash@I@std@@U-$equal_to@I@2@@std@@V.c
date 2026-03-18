/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@AEBI@Z @ 0x180197308
 * Callers:
 *     ??$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801957C4 (--$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801958A0 (--$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSIO.c)
 *     ??$SetProperty@UD2DQuaternion@@@DataSourcePropertySet@@QEAAJIPEBUD2DQuaternion@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195988 (--$SetProperty@UD2DQuaternion@@@DataSourcePropertySet@@QEAAJIPEBUD2DQuaternion@@W4DCOMPOSITION_E.c)
 *     ??$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195A68 (--$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESS.c)
 *     ??$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195B48 (--$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESS.c)
 *     ??$SetProperty@UD2DVector4@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector4@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195C30 (--$SetProperty@UD2DVector4@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector4@@W4DCOMPOSITION_EXPRESS.c)
 *     ??$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJIPEBUD2D_MATRIX_3X2_F@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195D10 (--$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJIPEBUD2D_MATRIX_3X2_F@@W4DCOMPOSI.c)
 *     ??$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195DFC (--$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION.c)
 *     ??$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195EDC (--$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x180196448 (-GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x180196FC8 (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::lower_bound(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10
  _QWORD *v11; // r11
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v5 = 0xCBF29CE484222325uLL;
  v6 = a3 + 4 >= a3 ? 4 : 0;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v7 = *a3++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( a3 - v3 != v6 );
  }
  v8 = v5 & *(_QWORD *)(a1 + 48);
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
           a1,
           &v13,
           v8);
    if ( v10 == *v9 )
      break;
    if ( *(_DWORD *)(v10 + 16) == *(_DWORD *)v3 )
    {
      *v11 = v10;
      return v11;
    }
  }
  *v11 = *(_QWORD *)(a1 + 8);
  return v11;
}
