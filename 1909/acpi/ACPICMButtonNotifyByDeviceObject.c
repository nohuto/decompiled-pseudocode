/*
 * XREFs of ACPICMButtonNotifyByDeviceObject @ 0x1C004E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPICMButtonNotify @ 0x1C004E488 (ACPICMButtonNotify.c)
 */

void __fastcall ACPICMButtonNotifyByDeviceObject(ULONG_PTR a1, unsigned int a2)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( DeviceExtension )
    ACPICMButtonNotify(a1, DeviceExtension, a2);
}
