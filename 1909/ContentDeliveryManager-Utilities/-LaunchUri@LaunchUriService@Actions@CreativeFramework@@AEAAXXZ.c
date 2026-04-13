/*
 * XREFs of ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008AA0C
 * Callers:
 *     ?Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008AA00 (-Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024328 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18004B5C0 (--$wait_for_completion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180067D10 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067F1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180084294 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_180084294.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18008A228 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::LaunchUriService::LaunchUri(void **this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, PVOID, PVOID, _QWORD **); // r12
  void **v8; // rax
  HSTRING_HEADER *v9; // r15
  _QWORD *v10; // rcx
  HSTRING_HEADER *v11; // r14
  _QWORD *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, void *, _QWORD); // r12
  const WCHAR *v17; // r15
  const WCHAR *v18; // r14
  unsigned int v19; // eax
  HSTRING_HEADER *Reserved1; // rax
  HSTRING_HEADER *v21; // rax
  int v22; // eax
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  UINT32 applicationUserModelIdLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-B0h] BYREF
  void *v28[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  unsigned __int64 v30; // [rsp+80h] [rbp-88h]
  HSTRING_HEADER v31; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v32; // [rsp+A0h] [rbp-68h]
  HSTRING_HEADER v33; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-48h]
  WCHAR applicationUserModelId[136]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v27[1] = -2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v27);
  v26 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v27[0] + 88LL))(v27[0], &v26);
  v3 = retaddr;
  if ( v2 < 0 )
    goto LABEL_37;
  v4 = 7LL;
  v30 = 7LL;
  v29 = 0LL;
  LOWORD(v28[0]) = 0;
  v5 = -1LL;
  if ( *((_BYTE *)this + 113) && v28 != this + 5 )
  {
    std::wstring::assign(v28, this + 5, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v4 = v30;
  }
  v25 = 0LL;
  v6 = v26;
  v7 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, _QWORD **))(*(_QWORD *)v26 + 48LL);
  v8 = v28;
  if ( v4 >= 8 )
    v8 = (void **)v28[0];
  *(_QWORD *)applicationUserModelIdLength = v8;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, (const WCHAR **)applicationUserModelIdLength);
  v10 = this + 1;
  if ( (unsigned __int64)this[4] >= 8 )
    v10 = (_QWORD *)*v10;
  *(_QWORD *)applicationUserModelIdLength = v10;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)applicationUserModelIdLength);
  v12 = v25;
  v25 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v12 + 16LL))(v12, *v12);
  v13 = v7(v6, v11[1].Reserved.Reserved1, v9[1].Reserved.Reserved1, &v25);
  v14 = retaddr;
  if ( v13 < 0 )
  {
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x18008AD72LL);
  }
  wil::wait_for_completion<bool,wil::details::MapToSmartType<unsigned char,void>::type>((__int64)&v23, (__int64)v25);
  if ( !*((_BYTE *)this + 112) )
    goto LABEL_27;
  v15 = v26;
  v16 = *(__int64 (__fastcall **)(__int64, PVOID, void *, _QWORD))(*(_QWORD *)v26 + 56LL);
  v17 = (const WCHAR *)(this + 9);
  if ( (unsigned __int64)this[12] >= 8 )
    v17 = *(const WCHAR **)v17;
  v18 = (const WCHAR *)(this + 5);
  if ( (unsigned __int64)this[8] >= 8 )
    v18 = *(const WCHAR **)v18;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength[0] = 130;
  v19 = FormatApplicationUserModelId(v18, v17, applicationUserModelIdLength, applicationUserModelId);
  if ( v19 )
  {
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x8E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)v19);
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_38;
  }
  v32 = 7LL;
  *(_QWORD *)&v31.Reserved.Reserved2[16] = 0LL;
  LOWORD(v31.Reserved.Reserved1) = 0;
  if ( applicationUserModelId[0] )
  {
    do
      ++v5;
    while ( applicationUserModelId[v5] );
  }
  else
  {
    v5 = 0LL;
  }
  std::wstring::assign(&v31, (char *)applicationUserModelId, v5);
  Reserved1 = &v31;
  if ( v32 >= 8 )
    Reserved1 = (HSTRING_HEADER *)v31.Reserved.Reserved1;
  *(_QWORD *)applicationUserModelIdLength = Reserved1;
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, (const WCHAR **)applicationUserModelIdLength);
  v22 = v16(v15, v21[1].Reserved.Reserved1, this[13], *((unsigned int *)this + 29));
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v22);
  v34 = 0LL;
  if ( v32 >= 8 )
    operator delete(v31.Reserved.Reserved1);
LABEL_27:
  if ( v25 )
    (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
  if ( v30 >= 8 )
    operator delete(v28[0]);
  v30 = 7LL;
  v29 = 0LL;
  LOWORD(v28[0]) = 0;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
}
