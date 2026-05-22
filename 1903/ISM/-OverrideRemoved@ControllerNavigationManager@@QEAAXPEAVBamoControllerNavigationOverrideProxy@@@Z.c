/*
 * XREFs of ?OverrideRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180073008
 * Callers:
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x180071280 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180070DBC (-erase@-$vector@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V-$allocator@V.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_________lambda_9df4cfb49f9aeda31819750223cddec6___ @ 0x180072210 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 *     ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180073D08 (-ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@.c)
 */

void __fastcall ControllerNavigationManager::OverrideRemoved(
        __int64 **this,
        struct BamoControllerNavigationOverrideProxy *a2)
{
  char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( this[24] == (__int64 *)a2 )
    ControllerNavigationManager::ResumeNavigation((ControllerNavigationManager *)this, 0LL);
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_________lambda_9df4cfb49f9aeda31819750223cddec6___(
    &v6,
    this[25],
    this[26],
    a2);
  v4 = (char *)this[26];
  if ( v6 == (__int64 *)v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      420LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v4);
    __debugbreak();
  }
  std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::erase((__int64)(this + 25), &v6, v6, v4);
}
