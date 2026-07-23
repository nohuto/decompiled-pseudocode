/*
 * XREFs of WmiSetNetworkNotify @ 0x1408B5650
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406C6A30 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1406C6CCC (EtwpDisableKernelTrace.c)
 * Callees:
 *     WmipBuildTraceDeviceList @ 0x14018C64C (WmipBuildTraceDeviceList.c)
 *     WmipFreeTraceDeviceList @ 0x140754E8C (WmipFreeTraceDeviceList.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140754EDC (WmipSendWmiIrpToTraceDeviceList.c)
 */

__int64 __fastcall WmiSetNetworkNotify(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  P = 0LL;
  v4 = 0;
  v1 = WmipBuildTraceDeviceList(0x200000, &P, &v4);
  if ( v1 >= 0 )
  {
    v1 = WmipSendWmiIrpToTraceDeviceList((__int64)P, v4, 0xAu, 8u, (__int64)&v3);
    if ( v1 >= 0 )
      v1 = 0;
  }
  if ( P )
    WmipFreeTraceDeviceList((__int64 *)P, v4);
  return (unsigned int)v1;
}
