/*
 * XREFs of ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18011CF90
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18001FF50 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002E180 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180065238 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _lambda_38fe7d99edb05f0a6ae9d60cf489452e_::operator() @ 0x18008CA3C (_lambda_38fe7d99edb05f0a6ae9d60cf489452e_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemetry@@SAXAEAK$$QEAPEBG$$QEAW4CloseRequestInputSource@0@@Z @ 0x18010C0F4 (--$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemet.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010CF08 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_18010CF08.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18010DDC0 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?IsEnabled@AppCloseTelemetry@@SA_NE_K@Z @ 0x180114354 (-IsEnabled@AppCloseTelemetry@@SA_NE_K@Z.c)
 *     ?StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x180118178 (-StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?TryClosePopupForWindow@CApplicationManager@@AEAA_NQEAUHWND__@@@Z @ 0x18011ABB0 (-TryClosePopupForWindow@CApplicationManager@@AEAA_NQEAUHWND__@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011F55C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
        v9 = (IUnknown *)&String2;
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
      if ( (int)lambda_38fe7d99edb05f0a6ae9d60cf489452e_::operator()((__int64)punk, v14) >= 0 && v14[0] )
      {
        ppvOut = 0LL;
        punk[0] = 0LL;
        v15 = 2;
        ((void (__fastcall *)(IUnknown *, GUID *, IUnknown **))this[6].lpVtbl[1].AddRef)(
          &this[6],
          &GUID_00000000_0000_0000_c000_000000000046,
          punk);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        v10 = IUnknown_QueryService(punk[0], &stru_1804E78F8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
        if ( v10 >= 0 )
        {
          v11 = 1;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1C07,
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
                (void *)0x1C10,
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
        (void *)0x1C1A,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        v13);
    }
  }
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v24);
  v24[0] = &CAppManagerTelemetry::AltF4CloseRequested::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
}
