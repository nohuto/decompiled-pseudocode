/*
 * XREFs of UsbhGetHubClassDescriptor @ 0x1C001E004
 * Callers:
 *     UsbhCheckHubPowerStatus @ 0x1C000848C (UsbhCheckHubPowerStatus.c)
 *     UsbhInitialize @ 0x1C001EBF0 (UsbhInitialize.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhGetDescriptor @ 0x1C001E114 (UsbhGetDescriptor.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubClassDescriptor(__int64 a1, void *a2)
{
  _DWORD *v4; // rsi
  int Descriptor; // ebx
  unsigned __int16 v6; // r10
  int v7; // r11d
  unsigned __int16 v9; // r10
  int v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+48h] [rbp-20h]
  _DWORD *v12; // [rsp+88h] [rbp+20h] BYREF

  v4 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
  v12 = v4 + 734;
  memset(a2, 0, 0x47uLL);
  Descriptor = UsbhGetDescriptor(a1, v10, 1);
  Log(a1, 8, 1214475379, Descriptor, 71LL);
  if ( (Descriptor & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(Descriptor) )
    {
      LOBYTE(v11) = 0;
      UsbhException(a1, 0, 14, (int)&v12, v9, Descriptor, -1, usbfile_hub_c, 4089, v11);
    }
  }
  else if ( *((_BYTE *)v12 + 2) )
  {
    v4[640] |= 0x400000u;
    Log(a1, v7, 1214475364, (__int64)v12, *((unsigned __int8 *)v12 + 2));
  }
  else
  {
    LOBYTE(v11) = 0;
    Descriptor = -1073741811;
    UsbhException(a1, 0, 15, (int)&v12, v6, -1073741811, -1, usbfile_hub_c, 4098, v11);
  }
  return (unsigned int)Descriptor;
}
