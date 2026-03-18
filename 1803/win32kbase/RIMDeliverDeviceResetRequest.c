/*
 * XREFs of RIMDeliverDeviceResetRequest @ 0x1C01094F8
 * Callers:
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 *     rimDeviceResetApc @ 0x1C01095A0 (rimDeviceResetApc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMDeliverDeviceResetRequest(char *ApcContext)
{
  NTSTATUS v2; // edi

  ObfReferenceObject(*((PVOID *)ApcContext + 4));
  v2 = ZwDeviceIoControlFile(
         *((HANDLE *)ApcContext + 28),
         0LL,
         rimDeviceResetApc,
         ApcContext,
         (PIO_STATUS_BLOCK)(ApcContext + 168),
         0xB0233u,
         0LL,
         0,
         0LL,
         0);
  if ( v2 < 0 )
  {
    ObfDereferenceObject(*((PVOID *)ApcContext + 4));
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xAu,
      (__int64)&WPP_6b9d1f25d2223c5010ae574a3e2ea54b_Traceguids);
  }
  return (unsigned int)v2;
}
