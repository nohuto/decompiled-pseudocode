/*
 * XREFs of ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180014244
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800187CC (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x180110560 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x18011AAC0 (-TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiv.c)
 * Callees:
 *     ?StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x180015808 (-StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800169B8 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002B088 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004A8EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180059BD0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006A290 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_AddViewToGlom(__int64 a1, __int64 a2, void *a3, int a4, __int64 a5)
{
  const unsigned __int16 *v9; // rbx
  int v10; // ebx
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h]
  void **v16; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[3]; // [rsp+68h] [rbp-98h] BYREF
  int v18; // [rsp+80h] [rbp-80h]
  int *v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h] BYREF
  char v22; // [rsp+9Ch] [rbp-64h]
  _BYTE v23[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v24; // [rsp+C0h] [rbp-40h] BYREF
  const char *v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D0h] [rbp-30h]
  char v27; // [rsp+D8h] [rbp-28h]
  __int64 v28; // [rsp+E0h] [rbp-20h]
  _BYTE v29[144]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v30[3]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v31; // [rsp+190h] [rbp+90h] BYREF

  v15 = -2LL;
  v9 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)a3 + 24LL))(a3);
  v17[0] = 0LL;
  v17[1] = &v16;
  v17[2] = 0LL;
  v18 = 0;
  v19 = &v24;
  v20 = &v21;
  v21 = 0;
  v22 = 0;
  v27 = 0;
  v24 = 0;
  v25 = "AddWindowToGlom";
  v26 = 0LL;
  v28 = 1LL;
  v30[0] = 0LL;
  memset_0(v29, 0, sizeof(v29));
  v30[1] = 0LL;
  v30[2] = 0LL;
  v31 = 0LL;
  v16 = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  CAppManagerTelemetry::AddWindowToGlom::StartActivity((CAppManagerTelemetry::AddWindowToGlom *)&v16, v9);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 576) + 32LL))(
          *(_QWORD *)(a1 + 576),
          0LL,
          &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
          &v13);
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, __int64, int, __int64))(*(_QWORD *)v13 + 48LL))(
            v13,
            a3,
            0LL,
            a2,
            a4,
            a5);
    if ( v10 >= 0 && !a4 )
    {
      Context = a3;
      if ( a3 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)a3 + 8LL))(a3);
      v10 = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp((CActivationBasedAppAndGlomCollection *)(a1 + 624));
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&Context);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v16, (unsigned int)v10);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v16 = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v16);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v31);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v30);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((wil::details::StoredCallContextInfo *)&v24);
  if ( v21 == 1 )
  {
    v21 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_180599AE8;
      qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
      qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v23);
  }
  v21 = 3;
  if ( v18 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
  return (unsigned int)v10;
}
