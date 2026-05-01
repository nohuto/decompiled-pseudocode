/*
 * XREFs of ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B8E20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18003F9F4 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ @ 0x1801B7EB0 (-CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x1801B8130 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ @ 0x1801B8260 (-DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x1801B83BC (-EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 *     ?HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B8710 (-HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SmartInsights@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801B98B8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SmartInsights@@@wil@@CAX_NW4Reportin.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnEventQueued(
        HWND *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  const struct _TlgProvider_t *v8; // rsi
  const WCHAR *StringRawBuffer; // rax
  HSTRING_HEADER *v10; // rax
  HSTRING v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  HSTRING_HEADER *v14; // rax
  HSTRING v15; // r8
  HSTRING_HEADER *v16; // rax
  HSTRING v17; // r8
  HSTRING_HEADER *v18; // rax
  HSTRING v19; // r8
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v20; // rdx
  HSTRING_HEADER *v21; // rax
  HSTRING v22; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  LPVOID Context[2]; // [rsp+38h] [rbp-21h] BYREF
  HSTRING_HEADER pData; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  Context[1] = (LPVOID)-2LL;
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a3, 0LL);
    TlgCreateWsz(&pDesc, StringRawBuffer);
    TlgWrite(v8, &unk_1804C4A39, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_1804679F0);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       a3,
                       (HSTRING)v10[1].Reserved.Reserved1,
                       v11) )
  {
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_180467A10);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a3,
                         (HSTRING)v14[1].Reserved.Reserved1,
                         v15) )
    {
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_1804679F8);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           a3,
                           (HSTRING)v16[1].Reserved.Reserved1,
                           v17) )
      {
        v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_180467A00);
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                             a3,
                             (HSTRING)v18[1].Reserved.Reserved1,
                             v19) )
        {
          v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_180467A08);
          if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                a3,
                                (HSTRING)v21[1].Reserved.Reserved1,
                                v22) )
            CInsightsExperienceManager::EnableLightDismissRequested(this - 7, a2);
        }
        else
        {
          CInsightsExperienceManager::DisableLightDismissRequested((CInsightsExperienceManager *)(this - 7), v20);
        }
      }
      else
      {
        wil::Feature<__WilFeatureTraits_Feature_SmartInsights>::ReportUsageToService();
        CInsightsExperienceManager::CloseExperienceIfRunning((CInsightsExperienceManager *)(this - 7));
      }
    }
    else
    {
      v12 = CInsightsExperienceManager::HandleNotifyWindowName((CInsightsExperienceManager *)(this - 7), a4);
      if ( v12 < 0 )
      {
        v13 = 333LL;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v12 = CInsightsExperienceManager::DestroyExperience(this - 7);
    if ( v12 < 0 )
    {
      v13 = 329LL;
LABEL_12:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    }
  }
  return 0LL;
}
