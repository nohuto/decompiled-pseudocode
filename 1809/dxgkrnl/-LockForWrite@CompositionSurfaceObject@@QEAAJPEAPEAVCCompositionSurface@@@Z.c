/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000B6B0
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0001370 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtUnBindCompositionSurface @ 0x1C0007260 (NtUnBindCompositionSurface.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0008074 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtBindCompositionSurface @ 0x1C0009760 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D3B0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D950 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C0054B30 (NtNotifyPresentToCompositionSurface.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0055020 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0055120 (NtSetCompositionSurfaceStatistics.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z @ 0x1C005C8D4 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::LockForWrite(char *Object, struct CCompositionSurface **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(Object + 48));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (struct CCompositionSurface *)(Object + 40);
  }
  return (unsigned int)v4;
}
