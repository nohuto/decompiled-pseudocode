/*
 * XREFs of ?OnViewEventQueued@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009E5CC
 * Callers:
 *     ?OnViewEvent@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x18009E4D0 (-OnViewEvent@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Int.c)
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180042D24 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$ShellFeedsDesktopExperienceView_OnViewEventQueued@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z @ 0x18009B648 (--$ShellFeedsDesktopExperienceView_OnViewEventQueued@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x18009D61C (-IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 *     ?OnRequestUncloak@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009DF54 (-OnRequestUncloak@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::OnViewEventQueued(
        ShellFeedsDesktopExperienceView *this,
        Microsoft::WRL::Wrappers::Details *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  HSTRING_HEADER *v5; // rax
  HSTRING v6; // r8
  HSTRING_HEADER *v8; // rax
  HSTRING v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v13; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)v12 = WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
  ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_OnViewEventQueued<unsigned short const *>((LPCWSTR *)v12);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v13, (const WCHAR **)off_180451528);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, (HSTRING)v5[1].Reserved.Reserved1, v6) )
  {
    if ( ShellFeedsDesktopExperienceView::IsViewVisible(this) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9));
    return 0LL;
  }
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v13, (const WCHAR **)off_180451520);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, (HSTRING)v8[1].Reserved.Reserved1, v9) )
    return 0LL;
  v10 = ShellFeedsDesktopExperienceView::OnRequestUncloak(this);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AC,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
