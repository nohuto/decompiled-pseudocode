/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010F18
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C000F2A0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtUnBindCompositionSurface @ 0x1C000FA00 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C000FE60 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D020 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D360 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C005B900 (NtNotifyPresentToCompositionSurface.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C005BE00 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C005BF00 (NtSetCompositionSurfaceStatistics.c)
 *     ??1CContentResource@@UEAA@XZ @ 0x1C0063834 (--1CContentResource@@UEAA@XZ.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z @ 0x1C0063B4C (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
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
