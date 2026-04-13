/*
 * XREFs of ?Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180049B00 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::NotificationManagerService::Revert(
        CreativeFramework::Actions::NotificationManagerService *this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  const WCHAR *v4; // rax
  const WCHAR *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // [rsp+28h] [rbp-19h] BYREF
  __int64 v11; // [rsp+30h] [rbp-11h] BYREF
  const WCHAR *v12; // [rsp+38h] [rbp-9h] BYREF
  const WCHAR *v13[2]; // [rsp+40h] [rbp-1h] BYREF
  _BYTE v14[32]; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v15[32]; // [rsp+70h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v13[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v11);
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 72LL))(v11, &v10);
  v3 = retaddr;
  if ( v2 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x7C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x18008EF0DLL);
  }
  v4 = (const WCHAR *)((char *)this + 80);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v4 = *(const WCHAR **)v4;
  v12 = v4;
  v5 = (const WCHAR *)((char *)this + 48);
  if ( *((_QWORD *)this + 9) >= 8uLL )
    v5 = *(const WCHAR **)v5;
  v13[0] = v5;
  v6 = v10;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v14, &v12);
  v8 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v15, v13) + 24);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, v8, *(_QWORD *)(v7 + 24));
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_13;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
}
