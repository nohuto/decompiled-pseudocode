/*
 * XREFs of ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180010054
 * Callers:
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1800109D0 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18001DE50 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180189280 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1800106C8 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800108A0 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800153F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180016D60 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180022DAC (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x180188D60 (-GetCortanaHeightForImmersiveSearch@@YAHXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18018A81C (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::GetActivateArgs(
        CortanaDesktopExperienceView *this,
        HSTRING a2,
        HSTRING *a3)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  HMONITOR v8; // rax
  HMONITOR v9; // r14
  unsigned int SpeechTextInputHeight; // r12d
  int v11; // eax
  unsigned int v12; // edi
  HRESULT v13; // eax
  const wchar_t *StringRawBuffer; // rax
  CortanaFlightingHelpers *v15; // rcx
  HMONITOR v16; // r8
  const wchar_t *v17; // rsi
  bool v18; // di
  bool v19; // r15
  bool v20; // r13
  wchar_t *v21; // rax
  HMONITOR v22; // r8
  __m128i v23; // xmm0
  __int64 v25; // rdx
  HMONITOR v26; // r8
  __int64 v27; // rcx
  HMONITOR v28; // r8
  HSTRING newString; // [rsp+20h] [rbp-40h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-38h] BYREF
  UINT32 length; // [rsp+30h] [rbp-30h] BYREF
  int v32; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v33; // [rsp+38h] [rbp-28h]
  RECT rc; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v33 = -2LL;
  *a3 = 0LL;
  *(_WORD *)((char *)this + 221) = 0;
  v6 = *((float *)this + 49);
  rc.left = (int)v6;
  v7 = *((float *)this + 50);
  rc.top = (int)v7;
  rc.right = (int)(float)(v6 + *((float *)this + 51));
  rc.bottom = (int)(float)(v7 + *((float *)this + 52));
  v8 = MonitorFromRect(&rc, 0);
  v9 = v8;
  if ( v8 )
  {
    SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v8);
    WindowsDeleteString(0LL);
    string2 = 0LL;
    v11 = CortanaDesktopExperienceView::BuildAdditionalArgsString(
            this,
            v9,
            (ExperienceManagerUtils *)SpeechTextInputHeight,
            &string2);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68B,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v11,
        (int)newString);
      goto LABEL_22;
    }
    WindowsDeleteString(0LL);
    newString = 0LL;
    v13 = WindowsConcatString(a2, string2, &newString);
    v12 = v13;
    if ( v13 < 0 )
    {
      v25 = 1678LL;
    }
    else
    {
      v13 = WindowsDuplicateString(newString, a3);
      v12 = v13;
      if ( v13 >= 0 )
      {
        length = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(newString, &length);
        v17 = StringRawBuffer;
        if ( StringRawBuffer )
        {
          if ( wcsstr(StringRawBuffer, L"ForceAmbientMode=True") )
            *((_BYTE *)this + 221) = 1;
          v18 = wcsstr(v17, L"StartMode=NotificationAnimation") != 0LL;
          v19 = wcsstr(v17, L"StartMode=Attract") != 0LL;
          v20 = wcsstr(v17, L"QuerySource=LockScreen") != 0LL;
          if ( (wcsstr(v17, L"QuerySource=VoiceActivation")
             || (v21 = wcsstr(v17, L"QuerySource=VoiceActivationWithKeyword")) != 0LL)
            && ((LOBYTE(v21) = 1, *((_BYTE *)this + 264)) || *((_BYTE *)this + 231))
            || *((_BYTE *)this + 221)
            || v18
            || v19
            || v20 )
          {
            *((_BYTE *)this + 222) = 1;
          }
          if ( (_BYTE)v21 && !*((_BYTE *)this + 222) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
          *((_BYTE *)this + 228) = wcsstr(v17, L"&QuerySource=StartButton") != 0LL;
          if ( v18 )
          {
            v13 = CortanaDesktopExperienceView::SetPositioningAnchorForNotificationAnimation(this);
            v12 = v13;
            if ( v13 < 0 )
            {
              v25 = 1722LL;
              goto LABEL_34;
            }
          }
        }
        if ( *((_BYTE *)this + 264) )
        {
          *((float *)this + 53) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                                (ExperienceManagerUtils *)0x1AC,
                                                (int)v9,
                                                v16);
          v27 = 492LL;
        }
        else if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v15) && *((_DWORD *)this + 35) == 6 )
        {
          v32 = 0;
          CortanaFeatureConfiguration::GetDWORD(0LL, &v32);
          *((float *)this + 53) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                                (ExperienceManagerUtils *)0x384,
                                                (int)v9,
                                                v28);
          v27 = (unsigned int)GetCortanaHeightForImmersiveSearch() + 20;
        }
        else
        {
          *((float *)this + 53) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                                (ExperienceManagerUtils *)0x140,
                                                (int)v9,
                                                v22);
          if ( wcsstr(v17, L"StartMode=QFSearchBox") || wcsstr(v17, L"StartMode=NotificationAnimation") )
          {
            v23 = _mm_cvtsi32_si128(SpeechTextInputHeight);
LABEL_20:
            *((_DWORD *)this + 54) = _mm_cvtepi32_ps(v23).m128_u32[0];
            v12 = 0;
LABEL_21:
            WindowsDeleteString(newString);
            newString = 0LL;
LABEL_22:
            WindowsDeleteString(string2);
            return v12;
          }
          v27 = 656LL;
        }
        v23 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v27, (int)v9, v26));
        goto LABEL_20;
      }
      v25 = 1679LL;
    }
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v13,
      (int)newString);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x687,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL,
    (int)newString);
  return 2147549183LL;
}
