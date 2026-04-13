/*
 * XREFs of ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x180082C3C
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x180083190 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x180082630 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800840E4 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800840E4.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::Actions::InstallAppByProductAndSku(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        bool a5,
        char a6,
        bool a7,
        const WCHAR *a8,
        const wchar_t *a9)
{
  char v9; // r15
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, PVOID, __int64, int, PVOID, _QWORD); // r14
  HSTRING_HEADER *v15; // rsi
  HSTRING_HEADER *v16; // rdi
  HSTRING_HEADER *v17; // rax
  __int64 v18; // r9
  int v19; // eax
  int v20; // [rsp+20h] [rbp-D1h]
  __int64 v21; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v22; // [rsp+48h] [rbp-A9h] BYREF
  const WCHAR *v23; // [rsp+50h] [rbp-A1h] BYREF
  const WCHAR *v24; // [rsp+58h] [rbp-99h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-91h] BYREF
  const WCHAR *v26; // [rsp+68h] [rbp-89h] BYREF
  const WCHAR *v27[2]; // [rsp+70h] [rbp-81h] BYREF
  HSTRING_HEADER v28; // [rsp+80h] [rbp-71h] BYREF
  HSTRING_HEADER v29; // [rsp+A0h] [rbp-51h] BYREF
  HSTRING_HEADER v30; // [rsp+C0h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+37h]

  v27[1] = (const WCHAR *)-2LL;
  v9 = (char)a4;
  v24 = this;
  v23 = a2;
  v27[0] = a3;
  v26 = a8;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v25);
  v21 = 0LL;
  v10 = *v25;
  v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 48))(v25, &v21);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0xC8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x180082DF0LL);
  }
  if ( !a5 )
  {
    v22 = v21;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    CreativeFramework::Actions::GetEntitlementForRecord(&v22, (WCHAR *)&v24, (WCHAR *)&v23, &v26, &a9, a6);
  }
  v13 = v21;
  v14 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64, int, PVOID, _QWORD))(*(_QWORD *)v21 + 128LL);
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, v27);
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, &v23);
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &v24);
  LOBYTE(v20) = a7;
  LOBYTE(v18) = v9;
  v19 = v14(v13, v17[1].Reserved.Reserved1, v16[1].Reserved.Reserved1, v18, v20, v15[1].Reserved.Reserved1, 0LL);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_13;
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v25 )
    (*(void (__fastcall **)(__int64 *))(*v25 + 16))(v25);
}
