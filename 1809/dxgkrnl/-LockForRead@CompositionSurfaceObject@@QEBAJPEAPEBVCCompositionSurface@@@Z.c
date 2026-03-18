/*
 * XREFs of ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000B938
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0001010 (NtQueryCompositionSurfaceStatistics.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0009A90 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0009CA0 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000A320 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000AC00 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C00196A0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C0054E30 (NtOpenCompositionSurfaceSectionInfo.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000DC9C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::LockForRead(char *Object, const struct CCompositionSurface **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockShared((CPushLock *)(Object + 48));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (const struct CCompositionSurface *)(Object + 40);
  }
  return (unsigned int)v4;
}
