/*
 * XREFs of ?Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800834B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800840E4 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800840E4.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::AppUninstallService::Invoke(
        CreativeFramework::Actions::AppUninstallService *this)
{
  __int64 v2; // rax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID); // rsi
  const WCHAR *v7; // rax
  PVOID Reserved1; // rdx
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-50h] BYREF
  const WCHAR *v12[2]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v13; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v12[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v11);
  v10 = 0LL;
  v2 = *v11;
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 48))(v11, &v10);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x115,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800835D3LL);
  }
  v5 = v10;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v10 + 104LL);
  v7 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v7 = *(const WCHAR **)v7;
  v12[0] = v7;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v13, v12)[1].Reserved.Reserved1;
  v9 = v6(v5, Reserved1);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
}
