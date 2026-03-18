/*
 * XREFs of DxgkGetDeviceState @ 0x1C00D7D40
 * Callers:
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EFAC0 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkGetDeviceStateInternal @ 0x1C00D7D70 (DxgkGetDeviceStateInternal.c)
 */

__int64 __fastcall DxgkGetDeviceState(__int64 a1)
{
  __int64 v2; // rdx

  LOBYTE(v2) = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  return DxgkGetDeviceStateInternal(a1, v2);
}
