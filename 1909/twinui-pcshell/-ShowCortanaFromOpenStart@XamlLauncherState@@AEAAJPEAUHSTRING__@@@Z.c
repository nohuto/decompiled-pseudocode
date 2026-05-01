/*
 * XREFs of ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004D688
 * Callers:
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18004D840 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18005E9C0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x18005EBA0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x18031CC30 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x18031D500 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004CC7C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004D610 (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004D7D8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CAX_N.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x18007D100 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     wil::details::ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___::operator() @ 0x180086270 (wil--details--ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1801DAE34 (CortanaHelpers--AllowCortanaAboveLock.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::ShowCortanaFromOpenStart(XamlLauncherState *this, HSTRING a2)
{
  char v4; // r14
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rdx
  int v11; // [rsp+28h] [rbp-18h] BYREF
  XamlLauncherState *v12; // [rsp+30h] [rbp-10h]
  char v13; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char v15; // [rsp+70h] [rbp+30h] BYREF
  HSTRING v16; // [rsp+78h] [rbp+38h] BYREF
  char v17; // [rsp+80h] [rbp+40h] BYREF
  char v18; // [rsp+88h] [rbp+48h] BYREF

  v16 = a2;
  v11 = *((_DWORD *)this + 16);
  v12 = this;
  v4 = 1;
  v13 = 1;
  v15 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 120LL))(*((_QWORD *)this + 10), &v15);
  v7 = v5;
  if ( v5 < 0 )
  {
    v10 = 2010LL;
    goto LABEL_28;
  }
  if ( !*((_BYTE *)this + 976)
    && ((*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 416LL))(*((_QWORD *)this + 11), &v18) < 0
     || !v18)
    || !(unsigned __int8)CortanaHelpers::AllowCortanaAboveLock(v6)
    || !XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24)) )
  {
    v4 = 0;
  }
  WindowsGetStringRawBuffer(a2, 0LL);
  wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::ReportUsageToService(v8);
  if ( v15 || v4 )
  {
    v7 = XamlLauncherState::ShowSearchOrCortana(this, a2);
    if ( v7 < 0 )
      goto LABEL_14;
    if ( v4 )
      goto LABEL_13;
  }
  else
  {
    v17 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 120LL))(*((_QWORD *)this + 11), &v17);
    v7 = v5;
    if ( v5 < 0 )
    {
      v10 = 2030LL;
      goto LABEL_28;
    }
    if ( !v17 )
    {
      *((_DWORD *)this + 16) = 14;
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
      v7 = v5;
      if ( v5 >= 0 )
      {
        v7 = XamlLauncherState::ShowSearchOrCortana(this, a2);
        if ( v7 < 0 )
          goto LABEL_14;
        goto LABEL_12;
      }
      v10 = 2048LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v5,
        -2);
      goto LABEL_14;
    }
    if ( a2 )
    {
      v5 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 125, &v16);
      v7 = v5;
      if ( v5 < 0 )
      {
        v10 = 2037LL;
        goto LABEL_28;
      }
    }
    *((_DWORD *)this + 16) = 12;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 112LL))(*((_QWORD *)this + 11), 2LL);
    v7 = v5;
    if ( v5 < 0 )
    {
      v10 = 2040LL;
      goto LABEL_28;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 112LL))(*((_QWORD *)this + 10));
    v7 = v5;
    if ( v5 < 0 )
    {
      v10 = 2041LL;
      goto LABEL_28;
    }
  }
LABEL_12:
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 104LL))(*((_QWORD *)this + 11));
  if ( v7 >= 0 )
LABEL_13:
    v7 = 0;
LABEL_14:
  wil::details::ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___::operator()(&v11);
  return (unsigned int)v7;
}
