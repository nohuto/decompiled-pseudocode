/*
 * XREFs of ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0001010 (NtQueryCompositionSurfaceStatistics.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0001370 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtUnBindCompositionSurface @ 0x1C0007260 (NtUnBindCompositionSurface.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0008074 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtBindCompositionSurface @ 0x1C0009760 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0009A90 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0009CA0 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000A320 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000AC00 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C00196A0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D3B0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D950 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C0054B30 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C0054E30 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0055020 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0055120 (NtSetCompositionSurfaceStatistics.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z @ 0x1C005C8D4 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurface::UnlockAndRelease(CCompositionSurface *this)
{
  char *v2; // rcx

  v2 = (char *)this + 16;
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 3) )
  {
    *((_QWORD *)this + 3) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v2, 0LL);
  }
  KeLeaveCriticalRegion();
  return ObfDereferenceObject((char *)this - 40) == 0;
}
