/*
 * XREFs of UsbhPCE_QueueDriverReset @ 0x1C0008B58
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueDriverReset(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      81,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      a2);
  Log(a1, 512, 1953452114, 0, a2);
  result = UsbhGetPortData(a1, a2);
  if ( result )
    return UsbhDispatch_PortChangeQueueEventEx(a1, result, 15, a4, a3, 1, a5, 0LL);
  return result;
}
