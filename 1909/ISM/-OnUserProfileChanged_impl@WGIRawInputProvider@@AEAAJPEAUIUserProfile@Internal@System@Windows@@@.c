/*
 * XREFs of ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x1800A787C
 * Callers:
 *     ?OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Internal@System@Windows@@@Z @ 0x1800A77D0 (-OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Inte.c)
 *     ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800A7A4C (-StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x1800A8D5C (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnUserProfileChanged_impl(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::System::Internal::IUserProfile *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  WGIController **i; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v4 = this + 3;
  EnterCriticalSection(this + 3);
  v11 = v4;
  v5 = (*(__int64 (__fastcall **)(struct Windows::System::Internal::IUserProfile *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    for ( i = (WGIController **)this[2].OwningThread; i != this[2].LockSemaphore; ++i )
      WGIController::ApplyUserSettingsForController(*i, &v10);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v11);
  return v6;
}
