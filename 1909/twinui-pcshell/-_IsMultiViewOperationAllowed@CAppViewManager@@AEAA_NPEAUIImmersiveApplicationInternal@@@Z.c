/*
 * XREFs of ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180056470
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800556C0 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18005630C (-_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUII.c)
 *     ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x180156490 (-_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@V.c)
 *     ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801569B0 (-_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersi.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180157614 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CAppViewManager::_IsMultiViewOperationAllowed(
        CAppViewManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  char v2; // bl
  CAppViewManager *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v2 = 1;
  if ( (*(int (__fastcall **)(struct IImmersiveApplicationInternal *, CAppViewManager **))(*(_QWORD *)a2 + 232LL))(
         a2,
         &v4) >= 0 )
    return ((unsigned __int8)v4 & 2) == 0;
  return v2;
}
