/*
 * XREFs of ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x180088ABC
 * Callers:
 *     ?Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ @ 0x180088AB0 (-Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023C88 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180049B00 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ??$WaitForCompletion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18004A1BC (--$WaitForCompletion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType@E.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180065FE4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800882B8 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::LaunchUriService::LaunchUri(void **this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  void **v6; // rax
  const WCHAR *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  const WCHAR *v13; // rsi
  const WCHAR *v14; // r14
  unsigned int v15; // eax
  const WCHAR *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  UINT32 applicationUserModelIdLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  const WCHAR *v24; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-A8h] BYREF
  void *v26[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v27; // [rsp+80h] [rbp-88h]
  unsigned __int64 v28; // [rsp+88h] [rbp-80h]
  void *v29[3]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v30; // [rsp+A8h] [rbp-60h]
  _BYTE v31[24]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-40h]
  WCHAR applicationUserModelId[136]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v25[1] = -2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v25);
  v22 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v25[0] + 88LL))(v25[0], &v22);
  v3 = retaddr;
  if ( v2 < 0 )
    goto LABEL_35;
  v4 = 7LL;
  v28 = 7LL;
  v27 = 0LL;
  LOWORD(v26[0]) = 0;
  v5 = -1LL;
  if ( *((_BYTE *)this + 113) && v26 != this + 5 )
  {
    std::wstring::assign(v26, this + 5, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v4 = v28;
  }
  v21 = 0LL;
  v6 = v26;
  if ( v4 >= 8 )
    v6 = (void **)v26[0];
  *(_QWORD *)applicationUserModelIdLength = v6;
  v7 = (const WCHAR *)(this + 1);
  if ( (unsigned __int64)this[4] >= 8 )
    v7 = *(const WCHAR **)v7;
  v24 = v7;
  v8 = v22;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)v31,
         (const WCHAR **)applicationUserModelIdLength);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v29, &v24);
  v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v8 + 48LL))(
          v8,
          *(_QWORD *)(v10 + 24),
          *(_QWORD *)(v9 + 24),
          &v21);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x180088E0FLL);
  }
  wil::WaitForCompletion<bool,wil::details::MapToSmartType<unsigned char,void>::type>((__int64)&v20, v21);
  if ( !*((_BYTE *)this + 112) )
    goto LABEL_25;
  v13 = (const WCHAR *)(this + 9);
  if ( (unsigned __int64)this[12] >= 8 )
    v13 = *(const WCHAR **)v13;
  v14 = (const WCHAR *)(this + 5);
  if ( (unsigned __int64)this[8] >= 8 )
    v14 = *(const WCHAR **)v14;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength[0] = 130;
  v15 = FormatApplicationUserModelId(v14, v13, applicationUserModelIdLength, applicationUserModelId);
  if ( v15 )
  {
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x8E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)v15);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_36;
  }
  v30 = 7LL;
  v29[2] = 0LL;
  LOWORD(v29[0]) = 0;
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
  std::wstring::assign(v29, (char *)applicationUserModelId, v5);
  v16 = (const WCHAR *)v29;
  if ( v30 >= 8 )
    v16 = (const WCHAR *)v29[0];
  v24 = v16;
  v17 = v22;
  v18 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v31, &v24) + 24);
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, void *, _QWORD))(*(_QWORD *)v17 + 56LL))(
          v17,
          v18,
          this[13],
          *((unsigned int *)this + 29));
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v19);
  v32 = 0LL;
  if ( v30 >= 8 )
    operator delete(v29[0]);
LABEL_25:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v28 >= 8 )
    operator delete(v26[0]);
  v28 = 7LL;
  v27 = 0LL;
  LOWORD(v26[0]) = 0;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v25[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
}
