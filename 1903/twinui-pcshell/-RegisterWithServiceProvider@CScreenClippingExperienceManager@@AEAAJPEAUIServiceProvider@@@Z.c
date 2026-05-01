/*
 * XREFs of ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801B1CDC
 * Callers:
 *     ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B2364 (-RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801AB7B4 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B1690 (-RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForMonitorNotification@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B1890 (-RegisterForMonitorNotification@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForSessionIdleDetector@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B1980 (-RegisterForSessionIdleDetector@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B1A3C (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewPresentationMediator@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B1B84 (-RegisterForViewPresentationMediator@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::RegisterWithServiceProvider(
        CScreenClippingExperienceManager *this,
        struct IServiceProvider *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  WINBOOL v10; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v11 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v10, (LPVOID *)&v11) && v10 )
  {
    v11 = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v4 = (const struct _TlgProvider_t *)v11[1];
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_1804C3872, 0LL, 0LL, 2u, &pData);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 38, (__int64)a2);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 52);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IRealmActivationHistory,
         &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
         (char *)this + 416);
  if ( v6 < 0 )
  {
    v7 = 1073LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( !*((_QWORD *)this + 50) )
  {
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 50);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 50);
    if ( v6 < 0 )
    {
      v7 = 1078LL;
      goto LABEL_8;
    }
  }
  v6 = CScreenClippingExperienceManager::RegisterForViewExperience((struct IServiceProvider **)this);
  if ( v6 < 0 )
  {
    v7 = 1081LL;
    goto LABEL_8;
  }
  v6 = CScreenClippingExperienceManager::RegisterForSessionIdleDetector(this);
  if ( v6 < 0 )
  {
    v7 = 1082LL;
    goto LABEL_8;
  }
  v6 = CScreenClippingExperienceManager::RegisterForMonitorNotification(this);
  if ( v6 < 0 )
  {
    v7 = 1083LL;
    goto LABEL_8;
  }
  v6 = CScreenClippingExperienceManager::RegisterForViewPresentationMediator(this);
  if ( v6 < 0 )
  {
    v7 = 1084LL;
    goto LABEL_8;
  }
  v9 = CScreenClippingExperienceManager::RegisterForHotKeyHandling((wil::details::registry_watcher_state **)this);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x43D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  return 0LL;
}
