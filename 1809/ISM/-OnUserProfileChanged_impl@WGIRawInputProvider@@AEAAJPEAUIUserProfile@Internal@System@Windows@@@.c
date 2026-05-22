/*
 * XREFs of ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x18006B5A4
 * Callers:
 *     ?OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Internal@System@Windows@@@Z @ 0x18006B660 (-OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Inte.c)
 *     ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18006BBD4 (-StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x18006DC48 (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnUserProfileChanged_impl(
        WGIRawInputProvider *this,
        struct Windows::System::Internal::IUserProfile *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  WGIController **i; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+10h]

  v10 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v11 = v4;
  v5 = (*(__int64 (__fastcall **)(struct Windows::System::Internal::IUserProfile *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    for ( i = (WGIController **)*((_QWORD *)this + 11); i != *((WGIController ***)this + 12); ++i )
      WGIController::ApplyUserSettingsForController(*i, &v10);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x117,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
