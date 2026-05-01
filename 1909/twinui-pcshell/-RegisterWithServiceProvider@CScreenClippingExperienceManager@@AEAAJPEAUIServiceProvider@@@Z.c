/*
 * XREFs of ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801D0C0C
 * Callers:
 *     ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801D12C4 (-RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801CA6E4 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CE1E8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D05C0 (-RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForMonitorNotification@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D07C0 (-RegisterForMonitorNotification@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForSessionIdleDetector@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D08B0 (-RegisterForSessionIdleDetector@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D096C (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewPresentationMediator@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D0AB4 (-RegisterForViewPresentationMediator@CScreenClippingExperienceManager@@AEAAJXZ.c)
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
    v11 = qword_1805C20F0;
    qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
  }
  v4 = (const struct _TlgProvider_t *)v11[1];
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_1804E8EB1, 0LL, 0LL, 2u, &pData);
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
