/*
 * XREFs of ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180054614
 * Callers:
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180051870 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180053F10 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1801CF9E0 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x18003E898 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800415B0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180054964 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CAX_NW4.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800549D0 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180055138 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180055C0C (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x180055C6C (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180197C00 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x1801CF548 (-GetCortanaHeightForImmersiveSearch@@YAHXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801D0F64 (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::GetActivateArgs(
        CortanaDesktopExperienceView *this,
        HSTRING a2,
        HSTRING *a3)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  HMONITOR v7; // rax
  ExperienceManagerUtils *v8; // r14
  unsigned int SpeechTextInputHeight; // r12d
  int v10; // eax
  unsigned int v11; // edi
  HRESULT v12; // eax
  const wchar_t *StringRawBuffer; // rax
  CortanaFlightingHelpers *v14; // rcx
  HMONITOR v15; // r8
  const wchar_t *v16; // r15
  bool v17; // di
  bool v18; // si
  bool v19; // r13
  wchar_t *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct wil::details::IFunctorHost *v23; // r8
  HMONITOR v24; // r8
  __m128i v25; // xmm0
  __int64 v27; // rdx
  HMONITOR v28; // r8
  __int64 v29; // rcx
  HMONITOR v30; // r8
  HSTRING newString; // [rsp+28h] [rbp-89h] BYREF
  HSTRING v32; // [rsp+30h] [rbp-81h] BYREF
  UINT32 length; // [rsp+38h] [rbp-79h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-71h] BYREF
  _BYTE v35[8]; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-51h] BYREF
  DiagnosticsInfo v38; // [rsp+70h] [rbp-41h] BYREF
  const char *v39; // [rsp+78h] [rbp-39h]
  __int64 v40; // [rsp+80h] [rbp-31h]
  __int16 v41; // [rsp+88h] [rbp-29h]
  __int64 v42; // [rsp+90h] [rbp-21h]
  _BYTE v43[8]; // [rsp+98h] [rbp-19h] BYREF
  CortanaFlightingHelpers *v44; // [rsp+A0h] [rbp-11h]
  int v45; // [rsp+ACh] [rbp-5h]
  RECT rc; // [rsp+C0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v42 = -2LL;
  string1 = a2;
  *a3 = 0LL;
  *(_WORD *)((char *)this + 237) = 0;
  v5 = *((float *)this + 49);
  rc.left = (int)v5;
  v6 = *((float *)this + 50);
  rc.top = (int)v6;
  rc.right = (int)(float)(v5 + *((float *)this + 51));
  rc.bottom = (int)(float)(v6 + *((float *)this + 52));
  v7 = MonitorFromRect(&rc, 0);
  v8 = (ExperienceManagerUtils *)v7;
  if ( v7 )
  {
    SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v7);
    WindowsDeleteString(0LL);
    v32 = 0LL;
    v10 = CortanaDesktopExperienceView::BuildAdditionalArgsString(
            this,
            (HMONITOR)v8,
            (HMONITOR)SpeechTextInputHeight,
            &v32);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x750,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v10,
        (int)newString);
      goto LABEL_24;
    }
    WindowsDeleteString(0LL);
    newString = 0LL;
    v12 = WindowsConcatString(string1, v32, &newString);
    v11 = v12;
    if ( v12 < 0 )
    {
      v27 = 1875LL;
    }
    else
    {
      v12 = WindowsDuplicateString(newString, a3);
      v11 = v12;
      if ( v12 >= 0 )
      {
        length = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(newString, &length);
        v16 = StringRawBuffer;
        if ( StringRawBuffer )
        {
          if ( wcsstr(StringRawBuffer, L"ForceAmbientMode=True") )
            *((_BYTE *)this + 237) = 1;
          v17 = wcsstr(v16, L"StartMode=NotificationAnimation") != 0LL;
          v18 = wcsstr(v16, L"StartMode=Attract") != 0LL;
          v19 = wcsstr(v16, L"QuerySource=LockScreen") != 0LL;
          if ( (wcsstr(v16, L"QuerySource=VoiceActivation")
             || (v20 = wcsstr(v16, L"QuerySource=VoiceActivationWithKeyword")) != 0LL)
            && ((LOBYTE(v20) = 1, *((_BYTE *)this + 296)) || *((_BYTE *)this + 255))
            || *((_BYTE *)this + 237)
            || v17
            || v18
            || v19 )
          {
            *((_BYTE *)this + 238) = 1;
          }
          if ( (_BYTE)v20 && !*((_BYTE *)this + 238) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
          *((_BYTE *)this + 244) = wcsstr(v16, L"&QuerySource=StartButton") != 0LL;
          v36[0] = this;
          v36[1] = &string1;
          v38 = (DiagnosticsInfo)retaddr;
          v39 = "pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp";
          v40 = 0LL;
          v41 = 1917;
          LOBYTE(v21) = 3;
          wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::ReportUsageToService(v22, v21);
          v37[0] = &off_180431BE0;
          v37[1] = v36;
          wil::details::FeatureFunctorHost::FeatureFunctorHost(
            (wil::details::FeatureFunctorHost *)v43,
            0x1126927u,
            &v38);
          wil::details::RunFunctor((wil::details *)v37, (struct wil::details::IFunctor *)v43, v23);
          v14 = v44;
          if ( v44 )
            *((_DWORD *)v44 + 4) = v45;
          if ( v17 )
          {
            v12 = CortanaDesktopExperienceView::SetPositioningAnchorForNotificationAnimation(this);
            v11 = v12;
            if ( v12 < 0 )
            {
              v27 = 1928LL;
              goto LABEL_36;
            }
          }
        }
        if ( *((_BYTE *)this + 296) )
        {
          *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                           (ExperienceManagerUtils *)0x1AC,
                                           v8,
                                           v15);
          v29 = 492LL;
        }
        else if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v14) && *((_DWORD *)this + 35) == 6 )
        {
          CortanaFeatureConfiguration::GetDWORD(0LL, v35);
          *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                           (ExperienceManagerUtils *)0x384,
                                           v8,
                                           v30);
          v29 = (unsigned int)GetCortanaHeightForImmersiveSearch() + 20;
        }
        else
        {
          *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                           (ExperienceManagerUtils *)0x140,
                                           v8,
                                           v24);
          if ( wcsstr(v16, L"StartMode=QFSearchBox") || wcsstr(v16, L"StartMode=NotificationAnimation") )
          {
            v25 = _mm_cvtsi32_si128(SpeechTextInputHeight);
LABEL_22:
            *((_DWORD *)this + 54) = _mm_cvtepi32_ps(v25).m128_u32[0];
            v11 = 0;
LABEL_23:
            WindowsDeleteString(newString);
            newString = 0LL;
LABEL_24:
            WindowsDeleteString(v32);
            return v11;
          }
          v29 = 656LL;
        }
        v25 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v29, v8, v28));
        goto LABEL_22;
      }
      v27 = 1876LL;
    }
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v12,
      (int)newString);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x74C,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL,
    (int)newString);
  return 2147549183LL;
}
