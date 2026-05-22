/*
 * XREFs of ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DFD4
 * Callers:
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x18000B0F0 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000D1D0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000D750 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800229C8 (--0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     _lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_ @ 0x180053160 (_lambda_98d8c15e91123ccd84ca1af9146cf167_--_lambda_invoker_cdecl_.c)
 *     ?FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z @ 0x180053900 (-FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180053A18 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x180054050 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x180054748 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180055400 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180055BF4 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180055DE0 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x180081164 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x18008358C (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x1800C6230 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FB840 (-OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespo.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800FEFC4 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     ?Create@ViewHierarchy@@SA?AV?$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@XZ @ 0x180027F6C (-Create@ViewHierarchy@@SA-AV-$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@XZ.c)
 *     ??4?$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18002A7B4 (--4-$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

struct IViewHierarchy *ISMStatics::GetViewHierarchy(void)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !ISMStatics::s_viewHierarchy )
  {
    v1 = ViewHierarchy::Create(&v3);
    Microsoft::WRL::ComPtr<IViewHierarchy>::operator=(&ISMStatics::s_viewHierarchy, v1);
    v2 = v3;
    if ( v3 )
    {
      v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return (struct IViewHierarchy *)ISMStatics::s_viewHierarchy;
}
