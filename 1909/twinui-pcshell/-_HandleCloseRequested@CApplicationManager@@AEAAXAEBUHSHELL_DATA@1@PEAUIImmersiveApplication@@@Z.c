/*
 * XREFs of ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18013C430
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180029C10 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180036ED0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800674A8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _lambda_07e2480195fd463dd539f4feacdfa4d2_::operator() @ 0x18008F3C8 (_lambda_07e2480195fd463dd539f4feacdfa4d2_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemetry@@SAXAEAK$$QEAPEBG$$QEAW4CloseRequestInputSource@0@@Z @ 0x18012B330 (--$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemet.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18012C154 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_18012C154.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18012D00C (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?IsEnabled@AppCloseTelemetry@@SA_NE_K@Z @ 0x1801337C4 (-IsEnabled@AppCloseTelemetry@@SA_NE_K@Z.c)
 *     ?StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x1801375B8 (-StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?TryClosePopupForWindow@CApplicationManager@@AEAA_NQEAUHWND__@@@Z @ 0x18013A050 (-TryClosePopupForWindow@CApplicationManager@@AEAA_NQEAUHWND__@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013E9FC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleCloseRequested(IUnknown *this, HWND *a2, struct IImmersiveApplication *a3)
{
  CApplicationManager *v5; // rcx
  __int64 v6; // rcx
  char v7; // cl
  void (__fastcall *v8)(struct IImmersiveApplication *, IUnknown **); // rbx
  IUnknown *v9; // rcx
  HRESULT v10; // eax
  char v11; // bl
  int v12; // eax
  const char *v13; // r9
  bool v14[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  struct IImmersiveApplication *v17; // [rsp+58h] [rbp-B0h] BYREF
  void *ppvOut; // [rsp+60h] [rbp-A8h] BYREF
  IUnknown *punk[2]; // [rsp+68h] [rbp-A0h] BYREF
  IUnknown *v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+80h] [rbp-88h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  _QWORD v24[40]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v23 = -2LL;
  v17 = a3;
  v15 = 0;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"AltF4CloseRequested");
  v24[0] = &CAppManagerTelemetry::AltF4CloseRequested::`vftable';
  CAppManagerTelemetry::AltF4CloseRequested::StartActivity((CAppManagerTelemetry::AltF4CloseRequested *)v24);
  if ( !CApplicationManager::TryClosePopupForWindow(v5, a2[1]) )
  {
    v14[1] = 0;
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v6, 3u);
    if ( v17 )
    {
      LODWORD(v16) = GetTickCount();
      if ( AppCloseTelemetry::IsEnabled(v7) )
      {
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v8 = *(void (__fastcall **)(struct IImmersiveApplication *, IUnknown **))(*(_QWORD *)v17 + 32LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
        v21 = -1LL;
        v22 = -1LL;
        v8(v17, &v20);
        v15 = 2;
        v9 = (IUnknown *)&szAgent;
        if ( v20 )
          v9 = v20;
        punk[0] = v9;
        AppCloseTelemetry::UserInputCloseRequested<unsigned long &,unsigned short const *,enum AppCloseTelemetry::CloseRequestInputSource>(
          (__int64)&v16,
          (const WCHAR **)punk,
          &v15);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
      }
      punk[0] = (IUnknown *)&v17;
      punk[1] = this;
      v14[0] = 1;
      if ( (int)lambda_07e2480195fd463dd539f4feacdfa4d2_::operator()((__int64)punk, v14) >= 0 && v14[0] )
      {
        ppvOut = 0LL;
        punk[0] = 0LL;
        v15 = 2;
        ((void (__fastcall *)(IUnknown *, GUID *, IUnknown **))this[6].lpVtbl[1].AddRef)(
          &this[6],
          &GUID_00000000_0000_0000_c000_000000000046,
          punk);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        v10 = IUnknown_QueryService(punk[0], &stru_18050E1D8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
        if ( v10 >= 0 )
        {
          v11 = 1;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1BF8,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v10);
          v11 = 0;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
        if ( v11 )
        {
          if ( (*(int (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr) >= 0 )
          {
            v12 = (*(__int64 (__fastcall **)(void *, struct IImmersiveApplication *, __int64))(*(_QWORD *)ppvOut + 40LL))(
                    ppvOut,
                    v17,
                    2LL);
            if ( v12 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1C01,
                (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v12);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      }
    }
    else if ( !PostMessageW(a2[1], 0x112u, 0xF060uLL, 0LL) )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1C0B,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        v13);
    }
  }
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v24);
  v24[0] = &CAppManagerTelemetry::AltF4CloseRequested::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
}
