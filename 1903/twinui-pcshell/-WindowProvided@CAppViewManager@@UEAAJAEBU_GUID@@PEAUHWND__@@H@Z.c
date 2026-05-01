/*
 * XREFs of ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x1801368E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180010624 (-_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180011774 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180059BD0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800724C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_29a847c4660959470cc6efb1525d9b8c___1_long___lambda_29a847c4660959470cc6efb1525d9b8c___ @ 0x18012C87C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_18012C87C.c)
 *     ??1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18012DE74 (--1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z @ 0x1801339CC (-StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180137C84 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CAppViewManager::WindowProvided(CAppViewManager *this, const struct _GUID *a2, HWND a3, int a4)
{
  CAppViewManager *v8; // rbx
  unsigned int v9; // edi
  volatile signed __int32 **v10; // rax
  struct IAsyncCallback *v11; // rdi
  volatile signed __int32 *v12; // rcx
  int v13; // eax
  int v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  volatile signed __int32 *v16; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  CAppViewManager *v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _GUID v19; // [rsp+48h] [rbp-B8h]
  HWND v20; // [rsp+58h] [rbp-A8h]
  _QWORD v21[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v17[1] = -2LL;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"WindowProvided");
  v21[0] = &CAppViewManagerTelemetry::WindowProvided::`vftable';
  CAppViewManagerTelemetry::WindowProvided::StartActivity((CAppViewManagerTelemetry::WindowProvided *)v21, a2, a3);
  v8 = (CAppViewManager *)((char *)this - 56);
  if ( a4 )
  {
    v9 = -2147467260;
  }
  else
  {
    *(_QWORD *)v15 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v15);
    v18 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v19 = *a2;
    v20 = a3;
    v10 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_29a847c4660959470cc6efb1525d9b8c___1_long___lambda_29a847c4660959470cc6efb1525d9b8c___(
            &v16,
            (char *)&v18);
    v11 = (struct IAsyncCallback *)*v10;
    v17[0] = (__int64)*v10;
    *v10 = 0LL;
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::Release(v12);
    }
    v13 = CAppViewManager::_AddDelayedOperation(v8, v11);
    v9 = v13;
    if ( v13 >= 0 )
    {
      wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v21, 0);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
      v9 = 0;
      goto LABEL_9;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x591,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
  }
  CAppViewManager::_ObliterateOperation(v8, a2);
LABEL_9:
  CAppViewManagerTelemetry::WindowProvided::~WindowProvided((CAppViewManagerTelemetry::WindowProvided *)v21);
  return v9;
}
