/*
 * XREFs of ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00172E0
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0008090 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AD00 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C000FA40 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C000FBA0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtUnBindCompositionSurface @ 0x1C00101A0 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C0010600 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0010930 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0010B40 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0010DF0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C00163E0 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     NtValidateCompositionSurfaceHandle @ 0x1C0019920 (NtValidateCompositionSurfaceHandle.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001C028 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D070 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D3B0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B890 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C005B940 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C005BC40 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C005BE40 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C005BF40 (NtSetCompositionSurfaceStatistics.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C0063A5C (-Initialize@CContentResource@@IEAAJXZ.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0265ADC (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0294980 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
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
