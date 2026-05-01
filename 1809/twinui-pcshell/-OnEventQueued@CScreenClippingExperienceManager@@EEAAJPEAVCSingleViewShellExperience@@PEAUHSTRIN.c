/*
 * XREFs of ?OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180180040
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x180021DE8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?BringToForegound@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18017CF54 (-BringToForegound@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?DestroyExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18017D4D0 (-DestroyExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?HandleNotifyWindowName@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18017E4E4 (-HandleNotifyWindowName@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foun.c)
 *     ?OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180180CC8 (-OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundati.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::OnEventQueued(
        CScreenClippingExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  const struct _TlgProvider_t *v7; // rdi
  const WCHAR *StringRawBuffer; // rax
  int v9; // eax
  __int64 v10; // rdx
  HSTRING_HEADER *v11; // rax
  HSTRING v13; // [rsp+30h] [rbp-50h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER pData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  Context = 0LL;
  v13 = a3;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    TlgCreateWsz(&pDesc, StringRawBuffer);
    TlgWrite(v7, &unk_18045318D, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
  }
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"CloseUI", 8u, 7u);
  if ( Microsoft::WRL::Wrappers::operator==(&v13, (__int64)&pData) )
  {
    v9 = CScreenClippingExperienceManager::DestroyExperience((CScreenClippingExperienceManager *)((char *)this - 80));
    if ( v9 < 0 )
    {
      v10 = 691LL;
LABEL_18:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    }
  }
  else
  {
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"OpenInScreenSketch", 0x13u, 0x12u);
    if ( Microsoft::WRL::Wrappers::operator==(&v13, (__int64)&pData) )
    {
      v9 = CScreenClippingExperienceManager::OpenInScreenSketch(
             (CScreenClippingExperienceManager *)((char *)this - 80),
             a4);
      if ( v9 < 0 )
      {
        v10 = 695LL;
        goto LABEL_18;
      }
    }
    else
    {
      v17 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"MoveToForeground", 0x11u, 0x10u);
      if ( Microsoft::WRL::Wrappers::operator==(&v13, (__int64)&pData) )
      {
        v9 = CScreenClippingExperienceManager::BringToForegound((CScreenClippingExperienceManager *)((char *)this - 80));
        if ( v9 < 0 )
        {
          v10 = 699LL;
          goto LABEL_18;
        }
      }
      else
      {
        v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)&off_180400188);
        if ( Microsoft::WRL::Wrappers::operator==(&v13, (__int64)v11) )
        {
          v9 = CScreenClippingExperienceManager::HandleNotifyWindowName(
                 (CScreenClippingExperienceManager *)((char *)this - 80),
                 a4);
          if ( v9 < 0 )
          {
            v10 = 703LL;
            goto LABEL_18;
          }
        }
      }
    }
  }
  return 0LL;
}
