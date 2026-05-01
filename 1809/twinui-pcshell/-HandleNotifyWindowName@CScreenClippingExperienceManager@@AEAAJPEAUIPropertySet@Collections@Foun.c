/*
 * XREFs of ?HandleNotifyWindowName@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18017E4E4
 * Callers:
 *     ?OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180180040 (-OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002785C (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x18009DF9C (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CScreenClippingExperienceManager::HandleNotifyWindowName(
        CScreenClippingExperienceManager *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // edi
  const struct _TlgProvider_t *v6; // rcx
  HSTRING_HEADER *v8; // rbx
  HSTRING Reserved1; // rdx
  int PropVal; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v14; // rdx
  ExperienceManagerUtils *v15; // rcx
  HWND v16; // rbx
  const struct _TlgProvider_t *v17; // rcx
  const WCHAR *StringRawBuffer; // rax
  WINBOOL fPending[2]; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+40h] [rbp-40h]
  __int64 v22[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER pData; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v22[1] = -2LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_180452386, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
  v5 = -2147024809;
  if ( a2 )
  {
    v22[0] = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v22);
    string = 0LL;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)&off_180400190);
    WindowsDeleteString(string);
    string = 0LL;
    Reserved1 = (HSTRING)v8[1].Reserved.Reserved1;
    string = 0LL;
    *(_QWORD *)fPending = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)v22,
                Reserved1,
                (struct Windows::Foundation::IPropertyValue **)fPending);
    if ( PropVal >= 0 )
    {
      v11 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}(*(__int64 *)fPending);
      PropVal = v11;
      if ( v11 >= 0 )
      {
        v12 = *(_QWORD *)fPending;
        if ( *(_QWORD *)fPending )
        {
          *(_QWORD *)fPending = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        PropVal = 0;
LABEL_20:
        if ( PropVal < 0 )
        {
          v13 = 1425LL;
LABEL_29:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
            (const char *)(unsigned int)PropVal);
LABEL_37:
          WindowsDeleteString(string);
          string = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
          return (unsigned int)PropVal;
        }
        if ( string && WindowsGetStringLen(string) )
        {
          v15 = (ExperienceManagerUtils *)*((_QWORD *)this + 14);
          if ( !v15 )
          {
            PropVal = -2147418113;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x5A6,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
              (const char *)0x8000FFFFLL);
LABEL_28:
            v13 = 1430LL;
            goto LABEL_29;
          }
          v16 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v15, v14);
          if ( !v16 )
          {
            PropVal = -2147467259;
            goto LABEL_28;
          }
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
            && fPending[0] )
          {
            Context = qword_18050F938;
            qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
            qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
            InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
          }
          v17 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
          if ( *(_DWORD *)v17 > 5u )
            TlgWrite(v17, &unk_18045221C, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          SetWindowTextW(v16, StringRawBuffer);
          v5 = 0;
        }
        PropVal = v5;
        goto LABEL_37;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)fPending);
    goto LABEL_20;
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
    TlgWrite(v6, &unk_1804523D6, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
  return 2147942487LL;
}
