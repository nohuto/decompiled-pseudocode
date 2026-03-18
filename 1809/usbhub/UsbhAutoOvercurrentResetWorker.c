/*
 * XREFs of UsbhAutoOvercurrentResetWorker @ 0x1C00413C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C000E0A0 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x1C000E1D0 (UsbhReferenceListAdd.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     Usbh__TestPoint__Ulong @ 0x1C001C6C8 (Usbh__TestPoint__Ulong.c)
 *     UsbhOvercurrentResetWorker @ 0x1C00415C0 (UsbhOvercurrentResetWorker.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C0041AEC (Usbh_OvercurrentDerefHubBusy.c)
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
