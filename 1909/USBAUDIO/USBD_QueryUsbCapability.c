/*
 * XREFs of USBD_QueryUsbCapability @ 0x1C0010908
 * Callers:
 *     USBDeviceGetOffloadCapability @ 0x1C0029A40 (USBDeviceGetOffloadCapability.c)
 * Callees:
 *     USBDInternal_BuildandSendIoctlSynchronously @ 0x1C000F8CC (USBDInternal_BuildandSendIoctlSynchronously.c)
 *     __security_check_cookie @ 0x1C0010C20 (__security_check_cookie.c)
 *     memset @ 0x1C0012840 (memset.c)
 */

NTSTATUS __stdcall USBD_QueryUsbCapability(
        USBD_HANDLE USBDHandle,
        const GUID *CapabilityType,
        ULONG OutputBufferLength,
        PUCHAR OutputBuffer,
        PULONG ResultLength)
{
  NTSTATUS v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  struct _DEVICE_OBJECT *v10; // rdx
  struct _DEVICE_OBJECT *v11; // rcx
  _BYTE v13[40]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( ResultLength )
    *ResultLength = 0;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "PASSIVE_LEVEL required\n");
    return -1073741811;
  }
  if ( !USBDHandle )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    return -1073741811;
  }
  if ( !OutputBuffer )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "OutputBuffer cant be NULL if OutputBufferLength is not zero\n");
    return -1073741811;
  }
  v8 = *((_DWORD *)USBDHandle + 54);
  if ( v8 == -1 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(
        0x4Du,
        0,
        "Could not exchange an interface with the Underlying USB core stack, querrying for capability is not possible\n");
    return -1073741822;
  }
  if ( v8 == 1536 )
  {
    if ( RtlCompareMemory(
           &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD,
           &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE,
           0x10uLL) == 16 )
    {
      v7 = -1073741811;
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          0,
          "OutputBuffer must be NULL for GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE\n");
    }
    else
    {
      if ( RtlCompareMemory(&GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) != 16 )
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "QueryUsbCapability not supported/implemented by core stack\n");
        return -1073741822;
      }
      v7 = -1073741811;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "OutputBuffer must be NULL for GUID_USB_CAPABILITY_SELECTIVE_SUSPEND\n");
    }
  }
  else
  {
    v9 = *((_QWORD *)USBDHandle + 6);
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 26);
    v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 7);
    *(_DWORD *)&v13[4] = 0;
    *(_DWORD *)&v13[36] = 0;
    *(GUID *)&v13[16] = GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD;
    *(_DWORD *)v13 = 2621441;
    *(_QWORD *)&v13[8] = v9;
    *(_DWORD *)&v13[32] = 4;
    v7 = USBDInternal_BuildandSendIoctlSynchronously(v11, v10, (struct _IRP *)OutputBuffer, (ULONG_PTR)v13);
    if ( v7 >= 0 && ResultLength )
      *ResultLength = *(_DWORD *)&v13[36];
  }
  return v7;
}
