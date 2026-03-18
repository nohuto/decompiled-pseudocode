/*
 * XREFs of DxDdCleanupDxGraphics @ 0x1C00B6BA0
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00B6B0C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 DxDdCleanupDxGraphics()
{
  if ( qword_1C0215030 )
    qword_1C0215030(qword_1C0215020);
  memset(&gDxgkInterface, 0, 0x318uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  if ( qword_1C0215030 )
    qword_1C0215030(qword_1C0215020);
  memset(&gDxgkInterface, 0, 0x318uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return 0LL;
}
