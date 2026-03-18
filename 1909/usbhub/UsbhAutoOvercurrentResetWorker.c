/*
 * XREFs of UsbhAutoOvercurrentResetWorker @ 0x1C00429F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C000E800 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C000E930 (UsbhReferenceListRemove.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     Usbh__TestPoint__Ulong @ 0x1C001D1AC (Usbh__TestPoint__Ulong.c)
 *     UsbhOvercurrentResetWorker @ 0x1C0042BF0 (UsbhOvercurrentResetWorker.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C004313C (Usbh_OvercurrentDerefHubBusy.c)
 */

void __fastcall UsbhAutoOvercurrentResetWorker(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 PortData; // rbp
  __int64 v7; // r8
  __int64 v8; // r9

  FdoExt(a1);
  PortData = UsbhGetPortData(a1, a2);
  if ( (int)Usbh__TestPoint__Ulong(a1, 8u, 0, a2) < 0 || (int)UsbhReferenceListAdd(a1, a3, 1466000239) < 0 )
  {
    LOBYTE(v7) = 1;
    Usbh_OvercurrentDerefHubBusy(a1, PortData, v7);
  }
  else
  {
    LOBYTE(v8) = 1;
    UsbhOvercurrentResetWorker(a1, a2, a3, v8);
    UsbhReferenceListRemove(a1, a3);
  }
}
