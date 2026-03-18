/*
 * XREFs of DxDdCleanupDxGraphics @ 0x1C00B40C0
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00B402C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 DxDdCleanupDxGraphics()
{
  if ( qword_1C0212030 )
    qword_1C0212030(qword_1C0212020);
  memset(&gDxgkInterface, 0, 0x318uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  if ( qword_1C0212030 )
    qword_1C0212030(qword_1C0212020);
  memset(&gDxgkInterface, 0, 0x318uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return 0LL;
}
