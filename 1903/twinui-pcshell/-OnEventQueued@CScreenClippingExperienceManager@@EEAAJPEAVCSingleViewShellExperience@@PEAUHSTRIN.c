/*
 * XREFs of ?OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801AFB90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18003F9F4 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?BringToForegound@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801AC604 (-BringToForegound@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?DestroyExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801ACB80 (-DestroyExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?HandleNotifyWindowName@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801ADBAC (-HandleNotifyWindowName@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foun.c)
 *     ?OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B0858 (-OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundati.c)
 *     ?OpenWindowsSearch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B0CE0 (-OpenWindowsSearch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundatio.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::OnEventQueued(
        CScreenClippingExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  const struct _TlgProvider_t *v7; // rsi
  const WCHAR *StringRawBuffer; // rax
  HSTRING v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  HSTRING v12; // r8
  HSTRING v13; // r8
  HSTRING v14; // r8
  CScreenClippingExperienceManager *v15; // rcx
  HSTRING_HEADER *v16; // rax
  HSTRING v17; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER pData; // [rsp+40h] [rbp-40h] BYREF
  HSTRING v22; // [rsp+58h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a3, 0LL);
    TlgCreateWsz(&pDesc, StringRawBuffer);
    TlgWrite(v7, &unk_1804C40A9, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
  }
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"CloseUI", 8u, 7u);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, v22, v9) )
  {
    v22 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"OpenInScreenSketch", 0x13u, 0x12u);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, v22, v12) )
    {
      v22 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"MoveToForeground", 0x11u, 0x10u);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, v22, v13) )
      {
        v22 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"OpenWindowsSearch", 0x12u, 0x11u);
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, v22, v14) )
        {
          v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_1804679E0);
          if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                a3,
                                (HSTRING)v16[1].Reserved.Reserved1,
                                v17) )
          {
            v10 = CScreenClippingExperienceManager::HandleNotifyWindowName(
                    (CScreenClippingExperienceManager *)((char *)this - 80),
                    a4);
            if ( v10 < 0 )
            {
              v11 = 727LL;
              goto LABEL_21;
            }
          }
        }
        else
        {
          v10 = CScreenClippingExperienceManager::OpenWindowsSearch(v15, a4);
          if ( v10 < 0 )
          {
            v11 = 723LL;
            goto LABEL_21;
          }
        }
      }
      else
      {
        v10 = CScreenClippingExperienceManager::BringToForegound((CScreenClippingExperienceManager *)((char *)this - 80));
        if ( v10 < 0 )
        {
          v11 = 719LL;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v10 = CScreenClippingExperienceManager::OpenInScreenSketch(
              (CScreenClippingExperienceManager *)((char *)this - 80),
              a4);
      if ( v10 < 0 )
      {
        v11 = 715LL;
        goto LABEL_21;
      }
    }
  }
  else
  {
    v10 = CScreenClippingExperienceManager::DestroyExperience((CScreenClippingExperienceManager *)((char *)this - 80));
    if ( v10 < 0 )
    {
      v11 = 711LL;
LABEL_21:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    }
  }
  return 0LL;
}
