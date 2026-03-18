/*
 * XREFs of UsbhSetHubOvercurrentDetectedKey @ 0x1C0050AB0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0028CE0 (UsbhSetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhSetHubOvercurrentDetectedKey(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rcx
  int Data; // [rsp+58h] [rbp+20h] BYREF

  v1 = (struct _DEVICE_OBJECT *)*((_QWORD *)FdoExt(a1) + 149);
  Data = 1;
  return UsbhSetPdoRegistryParameter(v1, L"OvercurrentDetected", 4u, &Data, 4u);
}
