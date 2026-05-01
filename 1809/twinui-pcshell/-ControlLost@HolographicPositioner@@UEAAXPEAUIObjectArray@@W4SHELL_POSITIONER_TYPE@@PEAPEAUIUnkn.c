/*
 * XREFs of ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1801B25C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18014439C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180145570 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801B0900 (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801B1128 (--1-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801B284C (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1801B52B4 (-StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_PO.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801B5414 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ?_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1801B64CC (-_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B8458 (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B8718 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  struct IApplicationView *v6; // rbx
  int v7; // eax
  HolographicPositioner *v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  struct IApplicationView *v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-D0h]
  struct IApplicationView *v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  _QWORD v22[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v21 = -2LL;
  *a4 = 0LL;
  details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
    (__int64)&v16,
    a2);
  LODWORD(v12) = 0;
  v13 = 0LL;
  v14 = &v16;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v12);
  LODWORD(v18) = v17;
  v19 = 0LL;
  v20 = &v16;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v18);
  while ( (_DWORD)v12 != (_DWORD)v18 || v14 != v20 )
  {
    v6 = v13;
    v15 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v22,
      (__int64)"ControlLost");
    v22[0] = &HolographicPositionerTelemetry::ControlLost::`vftable';
    HolographicPositionerTelemetry::ControlLost::StartActivity(v22, v6, a3);
    HolographicPositioner::_TransitionViewFromHolographic((HolographicPositioner *)(a1 - 168), v6);
    v7 = HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)(a1 - 168), v6);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 1517LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_10;
    }
    v7 = HolographicPositioner::_EnableSystemVisuals(v8, v6, 1);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 1520LL;
      goto LABEL_6;
    }
    v9 = 0;
LABEL_10:
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        795LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
    v22[0] = &HolographicPositionerTelemetry::ControlLost::`vftable';
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    LODWORD(v12) = v12 + 1;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
}
