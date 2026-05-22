/*
 * XREFs of ?OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18000DEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEAAAEAUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x18000EE04 (--A-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000F418 (--$_Emplace_reallocate@AEBV-$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@-$vecto.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  struct IUnknownVtbl *v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  int v16; // r14d
  char v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v23; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v24[4]; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v26[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v28; // [rsp+78h] [rbp+38h] BYREF

  if ( a4 )
    ((void (__fastcall *)(struct IUnknown *, struct IMessageList *))a4->lpVtbl->AddRef)(a4, a2);
  lpVtbl = a4->lpVtbl;
  v26[0] = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))lpVtbl->QueryInterface)(
         a4,
         &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
         v26);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v26[0] + 56LL))(v26[0], (char *)this + 24);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (_QWORD *)*((_QWORD *)this + 21);
  if ( *((_QWORD **)this + 22) == v9 )
  {
    std::vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy> const &>(
      (char *)this + 160,
      v9,
      v26);
  }
  else
  {
    *v9 = v26[0];
    if ( v26[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 8LL))(v26[0]);
    *((_QWORD *)this + 21) += 8LL;
  }
  v10 = a4->lpVtbl;
  v25 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v10->QueryInterface)(
          a4,
          &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa,
          &v25);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 120LL))(v25, v24);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 144LL))(v25, &v23);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x18000E176LL);
  }
  v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 160LL))(v25, &v28);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = v25;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  v16 = v23;
  v17 = v28;
  v18 = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::operator[]((char *)this + 88, v24);
  v19 = *(_QWORD *)v18;
  *(_QWORD *)v18 = v15;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  *(_DWORD *)(v18 + 8) = v16;
  *(_BYTE *)(v18 + 12) = v17;
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v26[0];
  if ( v26[0] )
  {
    v26[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
  return 0LL;
}
