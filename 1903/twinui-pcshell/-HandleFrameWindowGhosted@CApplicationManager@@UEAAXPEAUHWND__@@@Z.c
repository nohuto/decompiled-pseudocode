/*
 * XREFs of ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801131C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180011558 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180011774 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002B088 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180059BD0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180081058 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010A874 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ @ 0x1801182E0 (-StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CApplicationManager::HandleFrameWindowGhosted(CApplicationManager *this, IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rbx
  bool v5; // bl
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-C8h] BYREF
  PSRWLOCK v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h]
  IUnknown *punk; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A8h]
  __int64 v13; // [rsp+68h] [rbp-A0h]
  _QWORD v14[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v13 = -2LL;
  LODWORD(v10) = 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"CloseHungApp");
  v14[0] = &CAppManagerTelemetry::CloseHungApp::`vftable';
  CAppManagerTelemetry::CloseHungApp::StartActivity((CAppManagerTelemetry::CloseHungApp *)v14);
  v7 = 0LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
  punk = a2;
  LODWORD(v12) = 2;
  CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this - 240, (__int64 *)&punk, &v7, 0LL);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( v7 )
  {
    v9 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v7, (__int64 *)&v9) >= 0 )
    {
      ppvOut = 0LL;
      punk = 0LL;
      LODWORD(v10) = 2;
      (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 24) + 32LL))(
        (char *)this - 192,
        &GUID_00000000_0000_0000_c000_000000000046,
        &punk);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v5 = IUnknown_QueryService(punk, &stru_1804E78F8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut) >= 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      if ( v5 )
      {
        v6 = (*(__int64 (__fastcall **)(void *, PSRWLOCK, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, v9, 9LL);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xE58,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v6);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14, 0);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
  v14[0] = &CAppManagerTelemetry::CloseHungApp::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
}
