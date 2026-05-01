/*
 * XREFs of ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801B2230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180027110 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180027C80 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801B0900 (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ??1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801B158C (--1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1801B514C (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801B5414 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1801B6890 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B6BF4 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B6CC4 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B6F1C (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B7DE4 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
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
  unsigned int v9; // ebx
  struct IApplicationView *v10; // rdx
  HolographicPositioner *v11; // rcx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // r8
  struct IApplicationView *v16; // rdx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  bool v26[4]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v27[12]; // [rsp+24h] [rbp-DCh] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+38h] [rbp-C8h]
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h]
  _QWORD v34[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v31 = -2LL;
  v29 = 0;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v34,
    (__int64)"ControlGainedForActivation");
  v34[0] = &HolographicPositionerTelemetry::ControlGainedForActivation::`vftable';
  HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity(
    (HolographicPositionerTelemetry::ControlGainedForActivation *)v34,
    a2,
    a4);
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           (struct IApplicationView *)a4,
                           (struct IUnknown *)v27,
                           0LL);
  v9 = DetailsForActivation;
  if ( DetailsForActivation >= 0 )
  {
    *(_QWORD *)&v27[4] = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27[4]);
      if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _BYTE *))a4->lpVtbl->QueryInterface)(
             a4,
             &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
             &v27[4]) >= 0 )
      {
        if ( (v27[0] & 8) != 0 )
        {
          v12 = HolographicPositioner::_HandleAppActivationResponse(
                  v11,
                  v10,
                  *(struct Windows::Foundation::Collections::IPropertySet **)&v27[4]);
          v9 = v12;
          if ( v12 < 0 )
          {
            v13 = (unsigned int)v12;
            v14 = 681LL;
LABEL_31:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v14,
              (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)v13);
            goto LABEL_37;
          }
        }
        v28 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v27[4];
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
        v33 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"ClientRequestedNavigationType",
          0x1Eu,
          0x1Du);
        v29 = 1;
        if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v28, v33, v15, &v30) >= 0
          && v30 == 1 )
        {
          v18 = HolographicPositioner::_HandleSwitchAsyncActivation(
                  (HolographicPositioner *)(a1 - 168),
                  v16,
                  *(struct Windows::Foundation::Collections::IPropertySet **)&v27[4]);
          v9 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2B1,
              (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v18);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
LABEL_37:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27[4]);
            goto LABEL_38;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      }
    }
    v26[0] = 0;
    v19 = HolographicPositioner::_EnsureShellStateForView((HolographicPositioner *)(a1 - 168), a2, v26);
    v9 = v19;
    if ( v19 < 0 )
    {
      v13 = (unsigned int)v19;
      v14 = 694LL;
      goto LABEL_31;
    }
    if ( v26[0] )
    {
      v20 = HolographicPositioner::_HandleControlGainedForView(
              (HolographicPositioner *)(a1 - 168),
              a2,
              *(struct Windows::Foundation::Collections::IPropertySet **)&v27[4]);
      v9 = v20;
      if ( v20 < 0 )
      {
        v13 = (unsigned int)v20;
        v14 = 700LL;
        goto LABEL_31;
      }
      v21 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 168), a2);
      v9 = v21;
      if ( v21 < 0 )
      {
        v13 = (unsigned int)v21;
        v14 = 706LL;
        goto LABEL_31;
      }
      if ( (v27[0] & 1) != 0 )
      {
LABEL_36:
        v9 = 0;
        goto LABEL_37;
      }
      v22 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)a2 + 432LL))(a2, 0LL);
      v9 = v22;
      if ( v22 < 0 )
      {
        v13 = (unsigned int)v22;
        v14 = 712LL;
        goto LABEL_31;
      }
      if ( (v27[0] & 4) == 0
        && (v27[0] & 2) == 0
        && (*(int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2) < 0 )
      {
        v23 = *(_QWORD *)(a1 + 64);
        if ( !v23 )
        {
          v9 = -2147019873;
          v13 = 2147947423LL;
          v14 = 729LL;
          goto LABEL_31;
        }
        if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23) >= 0 )
        {
          v24 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
          if ( v24 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              732LL,
              (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v24);
        }
      }
    }
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v34);
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A1,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
LABEL_38:
  HolographicPositionerTelemetry::ControlGainedForActivation::~ControlGainedForActivation((HolographicPositionerTelemetry::ControlGainedForActivation *)v34);
  return v9;
}
