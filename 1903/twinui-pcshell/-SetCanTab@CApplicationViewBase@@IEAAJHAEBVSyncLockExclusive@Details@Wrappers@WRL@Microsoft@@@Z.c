/*
 * XREFs of ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18015EA9C
 * Callers:
 *     ?RefreshCanTab@CApplicationViewBase@@UEAAJXZ @ 0x18015E950 (-RefreshCanTab@CApplicationViewBase@@UEAAJXZ.c)
 *     ?SetCanTab@CApplicationViewBase@@UEAAJH@Z @ 0x18015EC90 (-SetCanTab@CApplicationViewBase@@UEAAJH@Z.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800282B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ @ 0x18015E2FC (-Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewBase::SetCanTab(
        CApplicationViewBase *this,
        int a2,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *a3)
{
  int v4; // ebx
  int v5; // edi
  const struct _TlgProvider_t *v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // [rsp+38h] [rbp-29h]
  WINBOOL fPending; // [rsp+40h] [rbp-21h] BYREF
  int v13; // [rsp+44h] [rbp-1Dh] BYREF
  int v14; // [rsp+48h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-11h] BYREF
  __int64 v16[2]; // [rsp+58h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  int *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  int *v21; // [rsp+98h] [rbp+37h]
  int v22; // [rsp+A0h] [rbp+3Fh]
  int v23; // [rsp+A4h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v16[1] = -2LL;
  v4 = 2 - (a2 != 0);
  v5 = *((_DWORD *)this + 33);
  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    Context = qword_180599C30;
    qword_180599C30[0] = &IamTraceLogging::`vftable';
    atexit(lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_);
    ApplicationViewManagement::ApplicationViewTelemetry::Create((ApplicationViewManagement::ApplicationViewTelemetry *)qword_180599C30);
    InitOnceComplete(&`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper, 0, qword_180599C30);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v13 = v5;
    v18 = &v13;
    v19 = 4;
    v20 = 0;
    v14 = v4;
    v21 = &v14;
    v22 = 4;
    v23 = 0;
    TlgWrite(v6, &unk_1804BB6E3, 0LL, 0LL, 4u, &pData);
  }
  if ( v5 != v4 )
  {
    *((_DWORD *)this + 33) = v4;
    if ( v5 )
    {
      v11 = 0LL;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(v16);
      v7 = (volatile signed __int32 *)v16[0];
      if ( v16[0] )
      {
        v8 = *(_QWORD *)(v16[0] + 48);
        if ( v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 236));
          v7 = (volatile signed __int32 *)v16[0];
          v11 = v8;
        }
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v7);
      }
      v9 = CApplicationViewManager::RaiseApplicationViewChanged(
             v11 + 136,
             (void (__fastcall ***)(_QWORD, GUID *, __int64 *))this,
             0x14u,
             0LL);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x168,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
          (const char *)(unsigned int)v9);
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(v11);
    }
  }
  return 0LL;
}
