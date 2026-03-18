/*
 * XREFs of ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0011300
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C000FA40 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C000FBA0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtUnBindCompositionSurface @ 0x1C00101A0 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C0010600 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0010930 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0010B40 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0010DF0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C0011070 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D070 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D3B0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C005B940 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C005BC40 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C005BE40 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C005BF40 (NtSetCompositionSurfaceStatistics.c)
 *     ??1CContentResource@@UEAA@XZ @ 0x1C0063874 (--1CContentResource@@UEAA@XZ.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C0063A5C (-Initialize@CContentResource@@IEAAJXZ.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z @ 0x1C0063B8C (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z.c)
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
