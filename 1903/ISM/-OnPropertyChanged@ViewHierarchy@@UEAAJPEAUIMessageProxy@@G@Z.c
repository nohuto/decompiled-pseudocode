/*
 * XREFs of ?OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18000A500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800061E0 (-lower_bound@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash__ea_1800061E0.c)
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x180010D38 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180058DBC (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Hash@V-$_Umap_trait.c)
 */

__int64 __fastcall ViewHierarchy::OnPropertyChanged(ViewHierarchy *this, struct IMessageProxy *a2, __int16 a3)
{
  int (__fastcall **v6)(struct IMessageProxy *, GUID *, __int64 *); // rax
  __int64 v7; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // r15
  int v13; // r13d
  __int64 v14; // r8
  __int64 *v15; // rbx
  __int64 v16; // rcx
  char v17; // al
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+20h] [rbp-50h]
  unsigned __int8 v24[4]; // [rsp+30h] [rbp-40h] BYREF
  int v25; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v28; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v30; // [rsp+A8h] [rbp+38h] BYREF
  char v31; // [rsp+B8h] [rbp+48h]

  if ( a2 )
    (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = *(int (__fastcall ***)(struct IMessageProxy *, GUID *, __int64 *))a2;
  v26 = 0LL;
  if ( (*v6)(a2, &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa, &v26) >= 0 && (a3 == 15 || a3 == 17) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v26 + 120LL))(v26, v24);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v9,
        v23);
      __debugbreak();
    }
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 144LL))(v26, &v25);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBE,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v10,
        v23);
      __debugbreak();
    }
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 160LL))(v26, &v30);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC2,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v11,
        v23);
      __debugbreak();
    }
    v12 = v26;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
    v13 = v25;
    v31 = v30;
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::lower_bound(
      (_QWORD *)this + 12,
      &v27,
      v24);
    v15 = v27;
    if ( v27 == *((__int64 **)this + 13) )
    {
      v27 = (__int64 *)v24;
      std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        (char *)this + 96,
        &v28,
        v14,
        &v27);
      v15 = v28;
    }
    v16 = v15[3];
    v15[3] = v12;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = v31;
    *((_DWORD *)v15 + 8) = v13;
    *((_BYTE *)v15 + 36) = v17;
  }
  if ( *((struct IMessageProxy **)this + 8) == a2 )
  {
    if ( a3 == 1 )
    {
      (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16, &v30);
      v18 = (_DWORD *)((char *)this + 200);
      if ( v30 )
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v30 + 120LL))(v30, v18);
      else
        *v18 = 0;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v30);
    }
    else if ( a3 != 2 )
    {
      goto LABEL_7;
    }
    if ( !*((_QWORD *)this + 10) )
    {
      ViewHierarchy::RemoveListListenerReference(this);
      v19 = *((_QWORD *)this + 10);
      v20 = *((_QWORD *)this + 9);
      if ( v19 )
      {
        *((_QWORD *)this + 10) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 40LL))(v20, (char *)this + 80);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
          (const char *)(unsigned int)v21,
          v23);
        __debugbreak();
      }
      v22 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 64LL))(
              *((_QWORD *)this + 10),
              (char *)this + 8);
      if ( v22 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE3,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
          (const char *)(unsigned int)v22,
          v23);
        __debugbreak();
      }
    }
  }
LABEL_7:
  v7 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)a2 + 16LL))(a2);
  return 0LL;
}
