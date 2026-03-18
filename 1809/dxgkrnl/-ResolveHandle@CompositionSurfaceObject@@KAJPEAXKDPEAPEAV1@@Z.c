/*
 * XREFs of ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0001010 (NtQueryCompositionSurfaceStatistics.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0001370 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtUnBindCompositionSurface @ 0x1C0007260 (NtUnBindCompositionSurface.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0008074 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00084FC (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@.c)
 *     NtBindCompositionSurface @ 0x1C0009760 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0009A90 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0009CA0 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000A320 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000AC00 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C000CA24 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     NtValidateCompositionSurfaceHandle @ 0x1C00176F0 (NtValidateCompositionSurfaceHandle.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C00196A0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001B568 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D3B0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D950 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0054A78 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C0054B30 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C0054E30 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0055020 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0055120 (NtSetCompositionSurfaceStatistics.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C005C87C (-Initialize@CContentResource@@IEAAJXZ.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0230F4C (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C025E3F0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct CompositionSurfaceObject **a4)
{
  struct CompositionSurfaceObject *v5; // rsi
  NTSTATUS v6; // eax
  struct CompositionSurfaceObject *v7; // rdi
  int v8; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v5 = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v7 = (struct CompositionSurfaceObject *)Object;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)v7 + 2) + 16LL))(*((_QWORD **)v7 + 2)) == 1 )
        v5 = v7;
      else
        v8 = -1073741788;
    }
    else
    {
      v8 = -1073741816;
    }
    if ( v8 < 0 )
      ObfDereferenceObject(v7);
    else
      *a4 = v5;
  }
  return (unsigned int)v8;
}
