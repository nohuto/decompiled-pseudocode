/*
 * XREFs of ?OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x180072F04
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18007508C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180005C40 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Micro.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x1800731FC (-PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 */

void __fastcall ControllerNavigationManager::OnPointerCrossedClientBounds(
        ControllerNavigationManager *this,
        struct tagPOINT a2)
{
  unsigned int *v2; // rdi
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  struct tagPOINT v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (unsigned int *)((char *)this + 224);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::lower_bound(
    (_QWORD *)this + 16,
    &v6,
    (unsigned __int8 *)this + 224);
  if ( v6 == *((__int64 **)this + 17) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      189LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v4);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, struct tagPOINT *))(*(_QWORD *)(v6[3] + 8) + 24LL))(v6[3] + 8, &v7);
  InputETW::ControllerNavigationManager::PointerCrossedClientBounds(*v2, v7);
}
