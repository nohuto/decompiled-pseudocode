/*
 * XREFs of ?OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18000A2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800061E0 (-lower_bound@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash__ea_1800061E0.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18000A710 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@$.c)
 *     ??$_Insert@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@1@@Z @ 0x18000A7C0 (--$_Insert@AEAU-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$_List_unchecked_iterator@.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000A990 (--$_Emplace_reallocate@AEBV-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIMessag.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::OnAdded(
        ViewHierarchy *this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v7; // eax
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  struct IUnknownVtbl *v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rsi
  int v17; // r15d
  char v18; // r12
  int v19; // r9d
  __int64 *v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rbx
  __int64 *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v30; // [rsp+20h] [rbp-48h]
  unsigned __int8 v31[4]; // [rsp+30h] [rbp-38h] BYREF
  int v32; // [rsp+34h] [rbp-34h] BYREF
  __int64 v33; // [rsp+38h] [rbp-30h] BYREF
  __int64 v34; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v35[3]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  char v37; // [rsp+A8h] [rbp+40h] BYREF

  if ( a4 )
    ((void (__fastcall *)(struct IUnknown *, struct IMessageList *))a4->lpVtbl->AddRef)(a4, a2);
  lpVtbl = a4->lpVtbl;
  v34 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a4,
         &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
         &v34);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v7,
      v30);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v34 + 56LL))(v34, (char *)this + 24);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v8,
      v30);
    __debugbreak();
  }
  v9 = (_QWORD *)*((_QWORD *)this + 21);
  if ( *((_QWORD **)this + 22) == v9 )
  {
    std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IMessageProxy> const &>(
      (char *)this + 160,
      v9,
      &v34);
  }
  else
  {
    v10 = v34;
    *v9 = v34;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)this + 21) += 8LL;
  }
  v11 = a4->lpVtbl;
  v33 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v11->QueryInterface)(
          a4,
          &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa,
          &v33);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v12,
      v30);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v33 + 120LL))(v33, v31);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v13,
      v30);
    __debugbreak();
  }
  v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 144LL))(v33, &v32);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v14,
      v30);
    __debugbreak();
  }
  v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v33 + 160LL))(v33, &v37);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x100,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v15,
      v30);
    __debugbreak();
  }
  v16 = v33;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
  v17 = v32;
  v18 = v37;
  std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::lower_bound(
    (_QWORD *)this + 11,
    v35,
    v31);
  v20 = (__int64 *)*((_QWORD *)this + 12);
  v21 = v35[0];
  if ( v35[0] == v20 )
  {
    v22 = *v20;
    v35[0] = (__int64 *)v31;
    v23 = *(__int64 **)(v22 + 8);
    v24 = std::_List_buy<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            (unsigned int)v31,
            v22,
            (_DWORD)v23,
            v19,
            (__int64)v35);
    v25 = *((_QWORD *)this + 13);
    if ( v25 == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)this + 13) = v25 + 1;
    *(_QWORD *)(v22 + 8) = v24;
    *v23 = v24;
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::_Insert<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>>>>(
      (char *)this + 88,
      v35,
      **((_QWORD **)this + 12) + 16LL);
    v21 = v35[0];
  }
  v26 = v21[3];
  v21[3] = v16;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  *((_DWORD *)v21 + 8) = v17;
  *((_BYTE *)v21 + 36) = v18;
  v27 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
  return 0LL;
}
