/*
 * XREFs of ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18001DF4C
 * Callers:
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18001E130 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180077590 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180077CD0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1802A52A0 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1802A5BC0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001B5FC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18001E0D4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CAX_N.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180076E60 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18007E018 (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180188184 (CortanaHelpers--AllowCortanaAboveLock.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::ShowCortanaFromOpenStart(XamlLauncherState *this, HSTRING a2)
{
  _DWORD *v4; // r15
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  bool v8; // si
  __int64 v9; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v13; // [rsp+30h] [rbp-18h]
  char v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  char v16; // [rsp+80h] [rbp+38h] BYREF
  HSTRING v17; // [rsp+88h] [rbp+40h] BYREF
  char v18; // [rsp+90h] [rbp+48h] BYREF
  char v19; // [rsp+98h] [rbp+50h] BYREF

  v17 = a2;
  v4 = (_DWORD *)((char *)this + 64);
  v12 = *((_DWORD *)this + 16);
  v13 = this;
  v14 = 1;
  v16 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 120LL))(*((_QWORD *)this + 10), &v16);
  v7 = v5;
  if ( v5 < 0 )
  {
    v11 = 1974LL;
    goto LABEL_31;
  }
  v8 = (*((_BYTE *)this + 968)
     || (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 400LL))(*((_QWORD *)this + 11), &v19) >= 0
     && v19)
    && (unsigned __int8)CortanaHelpers::AllowCortanaAboveLock(v6)
    && XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24));
  WindowsGetStringRawBuffer(a2, 0LL);
  wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::ReportUsageToService(v9);
  if ( v16 || v8 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 11) + 56LL))(
           *((_QWORD *)this + 11),
           a2,
           1LL);
    v7 = v5;
    if ( v5 < 0 )
    {
      v11 = 1989LL;
      goto LABEL_31;
    }
    if ( v8 )
      goto LABEL_15;
  }
  else
  {
    v18 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 120LL))(*((_QWORD *)this + 11), &v18);
    v7 = v5;
    if ( v5 < 0 )
    {
      v11 = 1994LL;
      goto LABEL_31;
    }
    if ( v18 )
    {
      if ( a2 && (v5 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 124, &v17), v7 = v5, v5 < 0) )
      {
        v11 = 2000LL;
      }
      else
      {
        *v4 = 12;
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 112LL))(
               *((_QWORD *)this + 11),
               2LL);
        v7 = v5;
        if ( v5 < 0 )
        {
          v11 = 2003LL;
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 112LL))(*((_QWORD *)this + 10));
          v7 = v5;
          if ( v5 >= 0 )
            goto LABEL_14;
          v11 = 2004LL;
        }
      }
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v5,
        -2);
      goto LABEL_16;
    }
    *v4 = 14;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
    v7 = v5;
    if ( v5 < 0 )
    {
      v11 = 2011LL;
      goto LABEL_31;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 11) + 56LL))(
           *((_QWORD *)this + 11),
           a2,
           1LL);
    v7 = v5;
    if ( v5 < 0 )
    {
      v11 = 2013LL;
      goto LABEL_31;
    }
  }
LABEL_14:
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 104LL))(*((_QWORD *)this + 11));
  if ( v7 >= 0 )
LABEL_15:
    v7 = 0;
LABEL_16:
  v14 = 0;
  StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v12,
    v4);
  return (unsigned int)v7;
}
