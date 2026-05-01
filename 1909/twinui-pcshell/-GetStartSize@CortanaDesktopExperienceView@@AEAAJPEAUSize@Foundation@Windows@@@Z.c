/*
 * XREFs of ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800446F4
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180041304 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x1800863B0 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180044858 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v8)(__int64, HSTRING, _QWORD); // rdi
  HRESULT v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v18[1] = -2LL;
  v4 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4,
      v15);
    return v5;
  }
  v18[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, void *, GUID *, _QWORD *))(**((_QWORD **)this + 15) + 24LL))(
         *((_QWORD *)this + 15),
         &unk_18049AB28,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         v18);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v6,
      v15);
    goto LABEL_11;
  }
  v16 = 0LL;
  v7 = v18[0];
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v18[0] + 48LL);
  string = 0LL;
  v9 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.StartMenu", 0x2Au, &hstringHeader, &string);
  if ( v9 < 0 )
  {
    RaiseException(v9, 1u, 0, 0LL);
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v10 = v8(v7, string, &v16);
  v5 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A1,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v10,
      v15);
    goto LABEL_10;
  }
  v17 = 0LL;
  v11 = (**v16)(v16, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee, &v17);
  v5 = v11;
  if ( v11 < 0 )
  {
    v14 = 1699LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v11,
      v15);
    goto LABEL_9;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Size *))(*(_QWORD *)v17 + 96LL))(v17, a2);
  v5 = v11;
  if ( v11 < 0 )
  {
    v14 = 1700LL;
    goto LABEL_18;
  }
  v5 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  return v5;
}
