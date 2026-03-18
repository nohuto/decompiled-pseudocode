/*
 * XREFs of DpiFdoGetVirtualGpuType @ 0x1C02A0904
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C004B998 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiFdoDispatchIoctl @ 0x1C029F6C0 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02A3AF0 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C02A3F3C (DpiSriovAttach.c)
 *     DpiSriovNotification @ 0x1C02A4380 (DpiSriovNotification.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DpiFdoGetVirtualGpuType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\GPUPARAV");
  v2 = *(_QWORD *)(v1 + 48);
  return v2 && !RtlCompareUnicodeString((PCUNICODE_STRING)(v2 + 88), &DestinationString, 0);
}
