/*
 * XREFs of ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180072670
 * Callers:
 *     ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x1800712B0 (-OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180005C40 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Micro.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18007274C (-ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180073DF8 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 */

void __fastcall ControllerNavigationManager::ClientStateChanged(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  unsigned int v4; // ebp
  const char *v5; // r9
  struct tagRECT v6; // xmm6
  struct tagPOINT *v7; // rax
  struct tagRECT v8; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 4) + 16LL))
                 + 32);
  v10 = v4;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::lower_bound(
    (_QWORD *)this + 16,
    &v11,
    (unsigned __int8 *)&v10);
  if ( v11 == *((__int64 **)this + 17) || (struct BamoControllerNavigationClientProxy *)v11[3] != a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      328LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v5);
    JUMPOUT(0x180072744LL);
  }
  v6 = *(struct tagRECT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 48LL))((char *)a2 + 8);
  v7 = (struct tagPOINT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8);
  v8 = v6;
  InputETW::ControllerNavigationManager::ClientStateChanged(v4, &v8, *v7);
  if ( *((_DWORD *)this + 56) == v4 )
    ControllerNavigationManager::SetCurrentStateWithClient(this, a2);
}
