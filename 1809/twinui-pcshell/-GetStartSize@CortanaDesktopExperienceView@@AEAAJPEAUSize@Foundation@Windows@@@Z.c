/*
 * XREFs of ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800162E4
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180079AF0 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800168E0 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::GetStartSize(
        CortanaDesktopExperienceView *this,
        struct Windows::Foundation::Size *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rbx
  HRESULT v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v17[1] = -2LL;
  v4 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4,
      v14);
    return v5;
  }
  v17[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, GUID *, _QWORD *))(**((_QWORD **)this + 15) + 24LL))(
         *((_QWORD *)this + 15),
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         v17);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DB,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v6,
      v14);
    goto LABEL_11;
  }
  v15 = 0LL;
  v7 = v17[0];
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.StartMenu", 0x2Au, &hstringHeader, &string);
  if ( v8 < 0 )
  {
    RaiseException(v8, 1u, 0, 0LL);
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, string, &v15);
  v5 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DD,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v9,
      v14);
    goto LABEL_10;
  }
  v16 = 0LL;
  v10 = (**v15)(v15, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee, &v16);
  v5 = v10;
  if ( v10 < 0 )
  {
    v13 = 1503LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v10,
      v14);
    goto LABEL_9;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Size *))(*(_QWORD *)v16 + 96LL))(v16, a2);
  v5 = v10;
  if ( v10 < 0 )
  {
    v13 = 1504LL;
    goto LABEL_18;
  }
  v5 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
  return v5;
}
