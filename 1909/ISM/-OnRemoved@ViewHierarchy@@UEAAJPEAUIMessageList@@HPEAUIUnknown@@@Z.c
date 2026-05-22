/*
 * XREFs of ?OnRemoved@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x1800029F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180059C08 (-clear@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$hash@I@.c)
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
  char *v9; // rbx
  char *v10; // rdi
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct IUnknownVtbl *v15; // rax
  int v16; // eax
  int v17; // eax
  unsigned __int8 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // r9
  __int64 v24; // rdx
  _QWORD *v25; // r10
  __int64 v26; // rcx
  _QWORD *i; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rsi
  _QWORD *v31; // rax
  _QWORD *j; // rax
  _QWORD *v33; // r11
  __int64 v34; // r10
  _QWORD *v35; // rdi
  __int64 v36; // rdx
  unsigned __int8 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v45[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v46; // [rsp+28h] [rbp-40h] BYREF
  char v47; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v49; // [rsp+88h] [rbp+20h] BYREF

  if ( a4 )
    ((void (__fastcall *)(struct IUnknown *, struct IMessageList *))a4->lpVtbl->AddRef)(a4, a2);
  lpVtbl = a4->lpVtbl;
  *(_QWORD *)v45 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, int *))lpVtbl->QueryInterface)(
         a4,
         &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
         v45);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x10B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v7,
      v45[0]);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)v45 + 64LL))(*(_QWORD *)v45, (char *)this + 24);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x10C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v8,
      v45[0]);
    __debugbreak();
  }
  v9 = (char *)*((_QWORD *)this + 20);
  v10 = (char *)*((_QWORD *)this + 21);
  if ( v9 != v10 )
  {
    while ( *(_QWORD *)v9 != *(_QWORD *)v45 )
    {
      v9 += 8;
      if ( v9 == v10 )
        goto LABEL_20;
    }
    if ( v9 != v10 )
    {
      v11 = v9 + 8;
      if ( v9 + 8 != v10 )
      {
        do
        {
          v12 = 0LL;
          if ( &v47 != v11 )
          {
            v12 = *(_QWORD *)v11;
            *(_QWORD *)v11 = 0LL;
          }
          v13 = *((_QWORD *)v11 - 1);
          *((_QWORD *)v11 - 1) = v12;
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v11 += 8;
        }
        while ( v11 != v10 );
        v10 = (char *)*((_QWORD *)this + 21);
      }
      v14 = *((_QWORD *)v10 - 1);
      if ( v14 )
      {
        *((_QWORD *)v10 - 1) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      *((_QWORD *)this + 21) -= 8LL;
    }
  }
LABEL_20:
  v15 = a4->lpVtbl;
  v46 = 0LL;
  v16 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v15->QueryInterface)(
          a4,
          &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa,
          &v46);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v16,
      v45[0]);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v46 + 120LL))(v46, &v49);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v17,
      v45[0]);
    __debugbreak();
  }
  v18 = (unsigned __int8 *)&v49;
  v19 = 0xCBF29CE484222325uLL;
  v20 = 4LL;
  do
  {
    v21 = *v18++;
    v19 = 0x100000001B3LL * (v21 ^ v19);
    --v20;
  }
  while ( v20 );
  v22 = *((_QWORD *)this + 14);
  v23 = (_QWORD *)*((_QWORD *)this + 12);
  v24 = 2 * (v19 & *((_QWORD *)this + 17));
  v25 = *(_QWORD **)(v22 + 16 * (v19 & *((_QWORD *)this + 17)));
  v26 = v22 + 16 * (v19 & *((_QWORD *)this + 17));
  for ( i = v25; ; i = (_QWORD *)*i )
  {
    if ( v25 == v23 )
      v28 = (_QWORD *)*((_QWORD *)this + 12);
    else
      v28 = **(_QWORD ***)(v26 + 8);
    if ( i == v28 )
      goto LABEL_62;
    if ( *((_DWORD *)i + 4) == v49 )
      break;
  }
  v29 = i;
  v30 = i;
  while ( 1 )
  {
    v31 = v25 == v23 ? (_QWORD *)*((_QWORD *)this + 12) : **(_QWORD ***)(v22 + 8 * v24 + 8);
    if ( i == v31 || v49 != *((_DWORD *)i + 4) )
      break;
    i = (_QWORD *)*i;
  }
  if ( v29 == i )
  {
LABEL_62:
    v30 = (_QWORD *)*((_QWORD *)this + 12);
    i = v30;
  }
  for ( j = v30; j != i; j = (_QWORD *)*j )
    ;
  if ( v30 == (_QWORD *)*v23 && i == v23 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::clear((char *)this + 88);
  }
  else
  {
    while ( 1 )
    {
      v33 = v30;
      if ( v30 == i )
        break;
      v34 = *v30;
      v35 = v30;
      v30 = (_QWORD *)*v30;
      v36 = 0xCBF29CE484222325uLL;
      v37 = (unsigned __int8 *)(v35 + 2);
      if ( v35 + 2 <= (_QWORD *)((char *)v35 + 20) )
      {
        do
        {
          v38 = *v37++;
          v36 = 0x100000001B3LL * (v38 ^ v36);
        }
        while ( v37 - (unsigned __int8 *)(v35 + 2) != 4 );
        v34 = *v35;
      }
      v39 = *((_QWORD *)this + 17) & v36;
      v40 = (_QWORD *)(*((_QWORD *)this + 14) + 16 * v39);
      if ( (_QWORD *)v40[1] == v35 )
      {
        if ( (_QWORD *)*v40 == v35 )
        {
          *v40 = *((_QWORD *)this + 12);
          *(_QWORD *)(*((_QWORD *)this + 14) + 16 * v39 + 8) = *((_QWORD *)this + 12);
        }
        else
        {
          v40[1] = v35[1];
        }
      }
      else if ( (_QWORD *)*v40 == v33 )
      {
        *v40 = v34;
      }
      *(_QWORD *)v35[1] = *v35;
      *(_QWORD *)(*v35 + 8LL) = v35[1];
      --*((_QWORD *)this + 13);
      v41 = v35[3];
      if ( v41 )
      {
        v35[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
      operator delete(v35, (const struct std::nothrow_t *)0x28);
    }
  }
  v42 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  v43 = *(_QWORD *)v45;
  if ( *(_QWORD *)v45 )
  {
    *(_QWORD *)v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
  return 0LL;
}
