/*
 * XREFs of ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180040CA0
 * Callers:
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800499A8 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180024F98 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x180025240 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800412D8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180043D38 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180043D70 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180043F88 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x1800492C0 (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$CortanaExperienceManager_SetPositioningAnchorRect@AEAMAEAMAEAMAEAM@CortanaProactiveTelemetry@@SAXAEAM000@Z @ 0x1801ED8A0 (--$CortanaExperienceManager_SetPositioningAnchorRect@AEAMAEAMAEAMAEAM@CortanaProactiveTelemetry@.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnTraySearchItemChanged(__int64 a1, float *a2, __int64 a3)
{
  float v4; // xmm6_4
  float v7; // xmm0_4
  HMONITOR v8; // rsi
  int MonitorInformation; // edi
  HMONITOR v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  LONG right; // r13d
  LONG left; // r15d
  int v15; // r12d
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  LANGID ThreadUILanguage; // ax
  int v20; // eax
  unsigned int v21; // ecx
  __m128i v22; // xmm0
  int v23; // eax
  LANGID v24; // ax
  int v25; // eax
  int v26; // ecx
  LONG top; // r14d
  LONG bottom; // esi
  __m128i v29; // xmm0
  float v30; // xmm1_4
  LANGID v31; // ax
  int v32; // eax
  __m128i v33; // xmm0
  LANGID v34; // ax
  __m128i v35; // xmm0
  float v36; // xmm1_4
  __int64 v38; // rdx
  int v39; // [rsp+28h] [rbp-59h]
  bool v40; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v41[3]; // [rsp+49h] [rbp-38h] BYREF
  int v42; // [rsp+4Ch] [rbp-35h] BYREF
  struct tagRECT v43; // [rsp+50h] [rbp-31h] BYREF
  struct tagRECT v44; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v45; // [rsp+70h] [rbp-11h] BYREF
  RECT rc; // [rsp+80h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v4 = a2[1] + a2[3];
  if ( !IsSearchAndCortanaSplitEnabled() )
  {
    if ( (float)(*(float *)(a3 + 12) + *(float *)(a3 + 4)) > v4 )
      *(float *)(a3 + 4) = v4 - *(float *)(a3 + 12);
    *(_OWORD *)(a1 + 180) = *(_OWORD *)a3;
    CortanaProactiveTelemetry::CortanaExperienceManager_SetPositioningAnchorRect<float &,float &,float &,float &>(
      a1 + 180,
      a1 + 184,
      a1 + 188,
      a1 + 192);
    return 0LL;
  }
  v7 = *a2 + a2[2];
  rc.left = (int)*a2;
  rc.top = (int)a2[1];
  rc.right = (int)v7;
  rc.bottom = (int)v4;
  v8 = MonitorFromRect(&rc, 0);
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         (CortanaDesktopExperienceView *)(a1 - 16),
                         v8,
                         &v44,
                         &v45,
                         &v43,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v42,
                         &v40);
  if ( MonitorInformation < 0 )
  {
    v38 = 607LL;
  }
  else
  {
    v40 = 0;
    MonitorInformation = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                           (CortanaDesktopExperienceView *)(a1 - 16),
                           v8,
                           &v40);
    if ( MonitorInformation >= 0 )
    {
      v11 = 344LL;
      if ( v44.right - v44.left < 1196 )
        v11 = 320LL;
      v12 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v11, (int)v8, v10);
      right = v43.right;
      left = v43.left;
      v41[0] = 0;
      v15 = v43.right - v43.left;
      v16 = v12;
      CortanaCapabilities::HasCortanaCapabilities(2048LL, v41);
      if ( v41[0] && IsReducedSearchBoxWidthEnabled(v18, v17) )
        v16 -= v15;
      if ( ((v42 - 1) & 0xFFFFFFFD) != 0 )
      {
        v22 = _mm_cvtsi32_si128(left);
      }
      else
      {
        ThreadUILanguage = GetThreadUILanguage();
        v20 = IsBiDiLocale(ThreadUILanguage);
        v21 = right;
        if ( v20 )
          v21 = left;
        v22 = _mm_cvtsi32_si128(v21);
      }
      v23 = v15;
      *(_DWORD *)(a1 + 180) = _mm_cvtepi32_ps(v22).m128_u32[0];
      if ( v40 )
        v23 = v16;
      *(float *)(a1 + 188) = (float)v23;
      v24 = GetThreadUILanguage();
      v25 = IsBiDiLocale(v24);
      v26 = v42;
      if ( v25 && ((v42 - 1) & 0xFFFFFFFD) == 0 )
        *(float *)(a1 + 180) = *(float *)(a1 + 180) - *(float *)(a1 + 188);
      top = v43.top;
      bottom = v43.bottom;
      if ( ((v26 - 1) & 0xFFFFFFFD) != 0 )
        v29 = _mm_cvtsi32_si128(v43.bottom);
      else
        v29 = _mm_cvtsi32_si128(v43.top);
      *(_DWORD *)(a1 + 184) = _mm_cvtepi32_ps(v29).m128_u32[0];
      v30 = (float)(bottom - top);
      *(float *)(a1 + 192) = v30;
      if ( (float)(v30 + *(float *)(a1 + 184)) > v4 )
        *(float *)(a1 + 184) = v4 - v30;
      if ( ((v26 - 1) & 0xFFFFFFFD) != 0 )
      {
        v33 = _mm_cvtsi32_si128(left);
      }
      else
      {
        v31 = GetThreadUILanguage();
        v32 = IsBiDiLocale(v31);
        v26 = v42;
        if ( v32 )
          right = left;
        v33 = _mm_cvtsi32_si128(right);
      }
      *(_DWORD *)(a1 + 204) = _mm_cvtepi32_ps(v33).m128_u32[0];
      if ( v40 )
      {
        v34 = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(v34) )
          v16 = -v16;
        v26 = v42;
        *(float *)(a1 + 204) = (float)v16 + *(float *)(a1 + 204);
      }
      *(float *)(a1 + 212) = (float)v15;
      if ( ((v26 - 1) & 0xFFFFFFFD) != 0 )
        v35 = _mm_cvtsi32_si128(bottom);
      else
        v35 = _mm_cvtsi32_si128(top);
      *(_DWORD *)(a1 + 208) = _mm_cvtepi32_ps(v35).m128_u32[0];
      v36 = (float)(bottom - top);
      *(float *)(a1 + 216) = v36;
      if ( (float)(v36 + *(float *)(a1 + 208)) > v4 )
        *(float *)(a1 + 208) = v4 - v36;
      return 0LL;
    }
    v38 = 610LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v38,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)MonitorInformation,
    v39);
  return (unsigned int)MonitorInformation;
}
