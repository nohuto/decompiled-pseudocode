/*
 * XREFs of ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x180080DD0
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800815B0 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180049B00 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ?ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z @ 0x1800803E0 (-ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x180080A7C (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CreativeFramework::Actions::InstallAppByStoreId(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        char a4,
        char a5,
        bool a6,
        const WCHAR *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  char v11; // r15
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rbx
  HSTRING *v15; // r9
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r8
  int v25; // eax
  HSTRING string; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  const WCHAR *v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  const WCHAR *v32; // [rsp+88h] [rbp-80h] BYREF
  PCWSTR StringRawBuffer; // [rsp+90h] [rbp-78h] BYREF
  PCWSTR v34; // [rsp+98h] [rbp-70h] BYREF
  const WCHAR *v35; // [rsp+A0h] [rbp-68h] BYREF
  const WCHAR *v36; // [rsp+A8h] [rbp-60h] BYREF
  const WCHAR *v37[2]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v38[32]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v39[32]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v40[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v41[32]; // [rsp+120h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v37[1] = (const WCHAR *)-2LL;
  v11 = (char)a3;
  v30 = this;
  v37[0] = a2;
  v36 = a7;
  v35 = a8;
  v32 = a9;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v31);
  v28 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, &v28);
  v13 = retaddr;
  if ( v12 < 0 )
    goto LABEL_14;
  if ( !a4 )
  {
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v38, &v30);
    WindowsDeleteString(0LL);
    string = 0LL;
    WindowsDeleteString(0LL);
    v27 = 0LL;
    v16 = CreativeFramework::StoreHelpers::ParseStoreId(*(HSTRING *)(v14 + 24), &v27, &string, v15);
    v17 = retaddr;
    if ( v16 < 0 )
    {
LABEL_15:
      wil::details::in1diag3::Throw_Hr(
        v17,
        (void *)0xB5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v16);
      JUMPOUT(0x18008106BLL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v34 = WindowsGetStringRawBuffer(v27, 0LL);
    v29 = v28;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    CreativeFramework::Actions::GetEntitlementForRecord(&v29, (WCHAR *)&v34, (WCHAR *)&StringRawBuffer, &v32, &a10, a5);
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v27);
  }
  v18 = v28;
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v38, &v35);
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v39, &v36);
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v40, v37);
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v41, &v30);
  v23 = *(_QWORD *)(v19 + 24);
  LOBYTE(v23) = a6;
  LOBYTE(v24) = v11;
  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v18 + 112LL))(
          v18,
          *(_QWORD *)(v22 + 24),
          v24,
          v23,
          *(_QWORD *)(v21 + 24),
          *(_QWORD *)(v20 + 24),
          *(_QWORD *)(v19 + 24),
          0LL);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v25);
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0xB0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_15;
  }
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
}
