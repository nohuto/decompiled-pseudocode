/*
 * XREFs of ??1CInsightsExperienceManager@@EEAA@XZ @ 0x1801B7B44
 * Callers:
 *     ??_GCInsightsExperienceManager@@EEAAPEAXI@Z @ 0x1801B7D00 (--_GCInsightsExperienceManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIScaleChangeSink@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801A7168 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperie.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18041063C (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall CInsightsExperienceManager::~CInsightsExperienceManager(CInsightsExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  HWND v3; // rcx
  __int64 v4; // rcx
  WINBOOL v5; // [rsp+30h] [rbp-48h] BYREF
  LPVOID v6[2]; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-30h] BYREF

  v6[1] = (LPVOID)-2LL;
  *(_QWORD *)this = &CInsightsExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>'};
  *((_QWORD *)this + 1) = &CInsightsExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &CInsightsExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>'};
  *((_QWORD *)this + 3) = &CInsightsExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 4) = &CInsightsExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IInsightsExperienceManager>'};
  *((_QWORD *)this + 7) = &CInsightsExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  v6[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v5, v6) && v5 )
  {
    v6[0] = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)v6[0] + 1);
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1804C4C7E, 0LL, 0LL, 2u, &pData);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 39);
  v3 = (HWND)*((_QWORD *)this + 38);
  if ( v3 )
    DestroyWindow(v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
  v4 = *((_QWORD *)this + 33);
  if ( v4 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 32);
  CSingleViewShellExperience::~CSingleViewShellExperience((CInsightsExperienceManager *)((char *)this + 64));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>((__int64)this);
}
