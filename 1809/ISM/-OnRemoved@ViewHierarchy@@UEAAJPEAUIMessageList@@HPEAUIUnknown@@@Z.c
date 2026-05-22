/*
 * XREFs of ?OnRemoved@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18000E180
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18000ECD0 (-clear@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$hash@I@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@Z @ 0x18000F168 (-erase@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$hash@I@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::OnRemoved(
        ViewHierarchy *this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v7; // eax
  int v8; // eax
  __int64 *v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct IUnknownVtbl *v15; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 i; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r11
  __int64 v25; // rcx
  _QWORD *v26; // r9
  _QWORD *j; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v36; // [rsp+20h] [rbp-20h] BYREF
  __int64 v37; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v38[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v40; // [rsp+78h] [rbp+38h] BYREF

  if ( a4 )
    ((void (__fastcall *)(struct IUnknown *, struct IMessageList *))a4->lpVtbl->AddRef)(a4, a2);
  lpVtbl = a4->lpVtbl;
  v36 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a4,
         &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
         &v36);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v36 + 64LL))(v36, (char *)this + 24);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (__int64 *)*((_QWORD *)this + 21);
  v10 = (__int64 *)*((_QWORD *)this + 20);
  if ( v10 != v9 )
  {
    do
    {
      if ( *v10 == v36 )
        break;
      ++v10;
    }
    while ( v10 != v9 );
    if ( v10 != v9 )
    {
      v11 = v10 + 1;
      if ( v10 + 1 != v9 )
      {
        do
        {
          v12 = 0LL;
          if ( v38 != v11 )
          {
            v12 = *v11;
            *v11 = 0LL;
          }
          v13 = *(v11 - 1);
          *(v11 - 1) = v12;
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          ++v11;
        }
        while ( v11 != v9 );
        v9 = (__int64 *)*((_QWORD *)this + 21);
      }
      v14 = *(v9 - 1);
      if ( v14 )
      {
        *(v9 - 1) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      *((_QWORD *)this + 21) -= 8LL;
    }
  }
  v15 = a4->lpVtbl;
  v37 = 0LL;
  v16 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v15->QueryInterface)(
          a4,
          &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa,
          &v37);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x18000E474LL);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 120LL))(v37, &v40);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xED,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v18 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v20 = *((unsigned __int8 *)&v40 + i);
    v18 = 0x100000001B3LL * (v20 ^ v18);
  }
  v21 = *((_QWORD *)this + 14);
  v22 = (_QWORD *)*((_QWORD *)this + 12);
  v23 = v18 & *((_QWORD *)this + 17);
  v24 = 2 * v23;
  v25 = 2 * v23;
  v26 = *(_QWORD **)(v21 + 16 * v23);
  for ( j = v26; ; j = (_QWORD *)*j )
  {
    if ( v26 == v22 )
      v28 = (_QWORD *)*((_QWORD *)this + 12);
    else
      v28 = **(_QWORD ***)(v21 + 8 * v25 + 8);
    if ( j == v28 )
      goto LABEL_38;
    if ( *((_DWORD *)j + 4) == v40 )
      break;
  }
  v29 = j;
  v30 = j;
  while ( 1 )
  {
    v31 = v26 == v22 ? (_QWORD *)*((_QWORD *)this + 12) : **(_QWORD ***)(v21 + 8 * v24 + 8);
    if ( j == v31 || v40 != *((_DWORD *)j + 4) )
      break;
    j = (_QWORD *)*j;
  }
  if ( v29 == j )
  {
LABEL_38:
    v30 = (_QWORD *)*((_QWORD *)this + 12);
    j = v30;
  }
  v38[0] = v30;
  if ( v30 == (_QWORD *)*v22 && j == v22 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::clear((char *)this + 88);
  }
  else
  {
    while ( v30 != j )
    {
      v32 = v30;
      v30 = (_QWORD *)*v30;
      std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::erase(
        (char *)this + 88,
        v38,
        v32);
    }
  }
  v33 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
  return 0LL;
}
