/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCProjectedShadowCaster@@@Z @ 0x180006EF4
 * Callers:
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18000500C (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180006990 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x180006F68 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjected_ea_180006F68.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
        __int64 *a1,
        unsigned __int64 *a2)
{
  __int64 v2; // r10
  __int64 v4; // r9
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v10; // r11
  __int64 v11; // rcx
  __int64 i; // rcx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = *(__int64 **)(*a1 + 8);
  v6 = (__int64)v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v10 = *a2;
    do
    {
      if ( *(_QWORD *)(v6 + 32) >= v10 )
      {
        if ( *(_BYTE *)(v4 + 25) && v10 < *(_QWORD *)(v6 + 32) )
          v4 = v6;
        v2 = v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( !*(_BYTE *)(v4 + 25) )
    v5 = *(__int64 **)v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *a2 >= v5[4] )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = (__int64)v5;
      v5 = (__int64 *)*v5;
    }
  }
  v7 = v2;
  v8 = 0LL;
  while ( v7 != v4 )
  {
    v11 = *(_QWORD *)(v7 + 16);
    ++v8;
    if ( *(_BYTE *)(v11 + 25) )
    {
      for ( i = *(_QWORD *)(v7 + 8); !*(_BYTE *)(i + 25) && v7 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        v7 = i;
      v7 = i;
    }
    else
    {
      v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
             v11,
             a2,
             v6);
    }
  }
  std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
    a1,
    &v13,
    v2,
    v4);
  return v8;
}
