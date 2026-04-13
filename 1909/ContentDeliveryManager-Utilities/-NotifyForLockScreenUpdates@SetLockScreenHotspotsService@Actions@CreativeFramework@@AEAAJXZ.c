/*
 * XREFs of ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x180097918
 * Callers:
 *     ?Invoke@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x180097440 (-Invoke@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800974B0 (-Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800975A0 (-Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180084294 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_180084294.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::NotifyForLockScreenUpdates(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD **); // rdi
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 (__fastcall *v9)(_QWORD *, PVOID, _QWORD, void *); // rbp
  HSTRING_HEADER *v10; // rax
  void *v11; // rdi
  PVOID Reserved1; // rsi
  DWORD LengthSid; // eax
  int v14; // eax
  _QWORD *v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v18; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v17[1] = -2LL;
  v16 = 0LL;
  v2 = wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v17);
  v3 = *(_QWORD *)v2;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD **))(**(_QWORD **)v2 + 112LL);
  v16 = 0LL;
  v5 = v4(v3, &v16);
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 140LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)v6);
    goto LABEL_9;
  }
  v8 = v16;
  v9 = *(__int64 (__fastcall **)(_QWORD *, PVOID, _QWORD, void *))(*v16 + 48LL);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, (const WCHAR **)off_1800F5FE0);
  v11 = (void *)*((_QWORD *)this + 1);
  Reserved1 = v10[1].Reserved.Reserved1;
  LengthSid = GetLengthSid(v11);
  v14 = v9(v8, Reserved1, LengthSid, v11);
  v5 = v14;
  if ( v14 < 0 )
  {
    v6 = (unsigned int)v14;
    v7 = 141LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_9:
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v16 + 16LL))(v16, *v16);
  return (unsigned int)v5;
}
