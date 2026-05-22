/*
 * XREFs of ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800733C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180005C40 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Micro.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180071F30 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V_ea_180071F30.c)
 *     ?RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18007350C (-RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180073BB8 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 */

__int64 __fastcall ControllerNavigationManager::RegisterClient(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationManagerStub *a2,
        struct BamoControllerNavigationClientProxy *a3)
{
  unsigned int v5; // r14d
  const char *v6; // r9
  struct tagRECT v7; // xmm6
  struct tagPOINT *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rbx
  __int64 v11; // rcx
  struct tagRECT v13; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v16; // [rsp+90h] [rbp+40h] BYREF

  v5 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, struct BamoControllerNavigationManagerStub *))(**(_QWORD **)(*((_QWORD *)a3 + 4) + 16LL) + 8LL))(
                     *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL),
                     a2)
                 + 32);
  v15 = v5;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::lower_bound(
    (_QWORD *)this + 16,
    &v16,
    (unsigned __int8 *)&v15);
  if ( v16 != *((__int64 **)this + 17) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      301LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v6);
    __debugbreak();
  }
  v7 = *(struct tagRECT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 48LL))((char *)a3 + 8);
  v8 = (struct tagPOINT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 56LL))((char *)a3 + 8);
  v13 = v7;
  InputETW::ControllerNavigationManager::RegisterClient(v5, &v13, *v8);
  v15 = v5;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::lower_bound(
    (_QWORD *)this + 16,
    &v16,
    (unsigned __int8 *)&v15);
  v10 = v16;
  if ( v16 == *((__int64 **)this + 17) )
  {
    v16 = (__int64 *)&v15;
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
      (__int64)this + 128,
      (__int64)&v13,
      v9,
      (_DWORD **)&v16);
    v10 = *(__int64 **)&v13.left;
  }
  if ( (struct BamoControllerNavigationClientProxy *)v10[3] != a3 )
  {
    v16 = (__int64 *)a3;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v16);
    v11 = v10[3];
    v10[3] = (__int64)a3;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  if ( *((_DWORD *)this + 56) == v5 )
    ControllerNavigationManager::SetCurrentStateWithClient(this, a3);
  return 0LL;
}
