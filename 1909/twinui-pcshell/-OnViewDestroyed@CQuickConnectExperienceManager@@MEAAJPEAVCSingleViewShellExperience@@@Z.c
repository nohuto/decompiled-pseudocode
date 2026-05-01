/*
 * XREFs of ?OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C19A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800394C0 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18004ED28 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$ExperienceManager_OnViewDestroyed_Params@AEAU_GUID@@@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1801BE444 (--$ExperienceManager_OnViewDestroyed_Params@AEAU_GUID@@@ExperienceManager_OnViewDestroyed@QuickC.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801BF1D0 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801BF1D0.c)
 *     ??1ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAA@XZ @ 0x1801BF620 (--1ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?ExperienceManager_OnViewDestroyed_ReleasedLifeTime@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x1801C0688 (-ExperienceManager_OnViewDestroyed_ReleasedLifeTime@ExperienceManager_OnViewDestroyed@QuickConne.c)
 *     ?ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x1801C070C (-ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation@ExperienceManage.c)
 *     ?StartActivity@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x1801C2D98 (-StartActivity@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801C3270 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x1801C5080 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CQuickConnectExperienceManager::OnViewDestroyed(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v12[40]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v11[1] = -2LL;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"ExperienceManager_OnViewDestroyed");
  v12[0] = &QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v12);
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_Params<_GUID &>(
    (__int64)v12,
    (__int128 *)this + 15);
  SingleViewLightDismissHelper::UnregisterWithLightDismiss((CQuickConnectExperienceManager *)((char *)this + 216));
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<QuickConnectLoggingProvider>::get(
                                           v4,
                                           lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u && TlgKeywordOn(v5, 0x200000000000uLL) )
    TlgWrite(v6, &unk_1804E7738, (LPCGUID)(v12[6] + 8LL), 0LL, 2u, &pData);
  v11[0] = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 3,
         v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11[0] + 88LL))(v11[0], *((_QWORD *)this + 2));
    v8 = v7;
    if ( v7 >= 0 )
    {
      QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v12);
      *((_QWORD *)this + 2) = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
      QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_ReleasedLifeTime((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v12);
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
      v8 = 0;
      goto LABEL_10;
    }
    v9 = 650LL;
  }
  else
  {
    v9 = 649LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::~ExperienceManager_OnViewDestroyed((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v12);
  return v8;
}
