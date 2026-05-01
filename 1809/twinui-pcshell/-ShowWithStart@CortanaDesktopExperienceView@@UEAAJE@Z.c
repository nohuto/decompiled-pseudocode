/*
 * XREFs of ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1800109D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180010054 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x180010318 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 *     ??1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18001101C (--1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180011048 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180011374 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180011E0C (-StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180016FBC (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::ShowWithStart(CortanaDesktopExperienceView *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int ActivateArgs; // eax
  __int64 v8; // rdx
  HSTRING string[2]; // [rsp+28h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING v11; // [rsp+50h] [rbp-B8h]
  _QWORD v12[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  string[1] = (HSTRING)-2LL;
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>(
    v12,
    "CortanaExperienceManager_ShowWithStart");
  v12[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)v12);
  *((_BYTE *)this + 202) = 0;
  v4 = CortanaDesktopExperienceView::PositionAlongsideStart((CortanaDesktopExperienceView *)((char *)this - 24));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FF,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4,
      (int)string[0]);
    goto LABEL_6;
  }
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"StartMode=QFSearchBox&QuerySource=StartButton&Positioner=desktop",
    0x41u,
    0x40u);
  WindowsDeleteString(0LL);
  string[0] = 0LL;
  ActivateArgs = CortanaDesktopExperienceView::GetActivateArgs(
                   (CortanaDesktopExperienceView *)((char *)this - 24),
                   v11,
                   string);
  v5 = ActivateArgs;
  if ( ActivateArgs < 0 )
  {
    v8 = 770LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs,
      (int)string[0]);
    goto LABEL_5;
  }
  *((_BYTE *)this + 199) = 1;
  ActivateArgs = CortanaDesktopExperienceView::ShowInternal((__int64)this - 24, (__int64)string[0], a2 != 0, 0);
  v5 = ActivateArgs;
  if ( ActivateArgs < 0 )
  {
    v8 = 777LL;
    goto LABEL_10;
  }
  *((_BYTE *)this + 204) = 1;
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
  v5 = 0;
LABEL_5:
  WindowsDeleteString(string[0]);
  string[0] = 0LL;
LABEL_6:
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::~CortanaExperienceManager_ShowWithStart((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)v12);
  return v5;
}
