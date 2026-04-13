/*
 * XREFs of ?Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800818D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180049B00 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::AppUninstallService::Invoke(
        CreativeFramework::Actions::AppUninstallService *this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  const WCHAR *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+28h] [rbp-50h] BYREF
  const WCHAR *v10[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v10[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v9);
  v8 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, &v8);
  v3 = retaddr;
  if ( v2 < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x115,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x1800819D6LL);
  }
  v4 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v4 = *(const WCHAR **)v4;
  v10[0] = v4;
  v5 = v8;
  v6 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v11, v10) + 24);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 104LL))(v5, v6);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_11;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
