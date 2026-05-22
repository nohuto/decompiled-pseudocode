/*
 * XREFs of ?OnUserProfileChanged@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Internal@System@Windows@@@Z @ 0x1800A7960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x1800A7A0C (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnUserProfileChanged(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::System::Internal::IUserProfileEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct Windows::System::Internal::IUserProfile *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::System::Internal::IUserProfile *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::System::Internal::IUserProfileEventArgs *, struct Windows::System::Internal::IUserProfile **))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 301LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_7;
  }
  v4 = WGIRawInputProvider::OnUserProfileChanged_impl(this, v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 302LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::Internal::IUserProfile *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
