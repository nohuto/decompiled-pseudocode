/*
 * XREFs of ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x1C003C7B8
 * Callers:
 *     ??1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ @ 0x1C003C764 (--1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021FC80 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1CDriverStoreCopy@@QEAA@XZ @ 0x1C023AC24 (--1CDriverStoreCopy@@QEAA@XZ.c)
 */

CDriverStoreCopy *__fastcall CDriverStoreCopy::`scalar deleting destructor'(CDriverStoreCopy *P)
{
  CDriverStoreCopy::~CDriverStoreCopy(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
