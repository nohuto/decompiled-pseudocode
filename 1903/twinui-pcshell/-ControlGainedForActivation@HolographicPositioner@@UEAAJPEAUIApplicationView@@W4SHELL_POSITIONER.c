/*
 * XREFs of ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801FF520
 * Callers:
 *     ?InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180201150 (-InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknow.c)
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18003AE00 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18003C6A0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801FDCF4 (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ??1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801FE8C8 (--1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1802025B0 (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802028A8 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180203D88 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180204464 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180204534 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18020488C (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802056EC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::ControlGainedForActivation(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  PositionerPropertySetHelpers *v7; // rcx
  int DetailsForActivation; // eax
  unsigned int v9; // edi
  struct Windows::Foundation::Collections::IPropertySet *v10; // rbx
  struct IApplicationView *v11; // rdx
  HolographicPositioner *v12; // rcx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  struct IApplicationView *v17; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  struct IUnknown v27; // [rsp+28h] [rbp-E0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v28; // [rsp+30h] [rbp-D8h] BYREF
  int v29; // [rsp+38h] [rbp-D0h]
  int v30; // [rsp+3Ch] [rbp-CCh] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+40h] [rbp-C8h]
  __int64 v32; // [rsp+48h] [rbp-C0h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h]
  _QWORD v35[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v32 = -2LL;
  v29 = 0;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v35,
    (__int64)"ControlGainedForActivation");
  v35[0] = &HolographicPositionerTelemetry::ControlGainedForActivation::`vftable';
  HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity(
    (HolographicPositionerTelemetry::ControlGainedForActivation *)v35,
    a2,
    a4);
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           (struct IApplicationView *)a4,
                           (struct IUnknown *)((char *)&v27.lpVtbl + 4),
                           0LL);
  v9 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32D,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
    goto LABEL_39;
  }
  v10 = 0LL;
  v31 = 0LL;
  if ( a4 )
  {
    ((void (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a4->lpVtbl->QueryInterface)(
      a4,
      &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
      &v28);
    v10 = v28;
    v31 = v28;
    if ( v28 )
    {
      if ( (BYTE4(v27.lpVtbl) & 8) != 0 )
      {
        v13 = HolographicPositioner::_HandleAppActivationResponse(v12, v11, v28);
        v9 = v13;
        if ( v13 < 0 )
        {
          v14 = (unsigned int)v13;
          v15 = 826LL;
LABEL_31:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)v14);
          goto LABEL_37;
        }
      }
      v28 = v10;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
      v34 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ClientRequestedNavigationType",
        0x1Eu,
        0x1Du);
      v29 = 1;
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v28,
                  v34,
                  v16,
                  &v30) >= 0
        && v30 == 1 )
      {
        v19 = HolographicPositioner::_HandleSwitchAsyncActivation((HolographicPositioner *)(a1 - 168), v17, v10);
        v9 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x342,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
          goto LABEL_37;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    }
  }
  LOBYTE(v27.lpVtbl) = 0;
  v20 = HolographicPositioner::_EnsureShellStateForView((HolographicPositioner *)(a1 - 168), a2, (bool *)&v27);
  v9 = v20;
  if ( v20 < 0 )
  {
    v14 = (unsigned int)v20;
    v15 = 839LL;
    goto LABEL_31;
  }
  if ( !LOBYTE(v27.lpVtbl) )
    goto LABEL_35;
  v21 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)(a1 - 168), a2, v10);
  v9 = v21;
  if ( v21 < 0 )
  {
    v14 = (unsigned int)v21;
    v15 = 845LL;
    goto LABEL_31;
  }
  v22 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 168), a2);
  v9 = v22;
  if ( v22 < 0 )
  {
    v14 = (unsigned int)v22;
    v15 = 851LL;
    goto LABEL_31;
  }
  if ( (BYTE4(v27.lpVtbl) & 1) == 0 )
  {
    v23 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)a2 + 432LL))(a2, 0LL);
    v9 = v23;
    if ( v23 < 0 )
    {
      v14 = (unsigned int)v23;
      v15 = 857LL;
      goto LABEL_31;
    }
    if ( (BYTE4(v27.lpVtbl) & 4) == 0
      && (BYTE4(v27.lpVtbl) & 2) == 0
      && (*(int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2) < 0 )
    {
      v24 = *(_QWORD *)(a1 + 72);
      if ( !v24 )
      {
        v9 = -2147019873;
        v14 = 2147947423LL;
        v15 = 874LL;
        goto LABEL_31;
      }
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24) >= 0 )
      {
        v25 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
        if ( v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x36D,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v25);
      }
    }
LABEL_35:
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v35);
  }
  v9 = 0;
LABEL_37:
  if ( v10 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_39:
  HolographicPositionerTelemetry::ControlGainedForActivation::~ControlGainedForActivation((HolographicPositionerTelemetry::ControlGainedForActivation *)v35);
  return v9;
}
