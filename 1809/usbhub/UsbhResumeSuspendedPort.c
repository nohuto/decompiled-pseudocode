/*
 * XREFs of UsbhResumeSuspendedPort @ 0x1C000BD20
 * Callers:
 *     UsbhHandleSuspend @ 0x1C000BC64 (UsbhHandleSuspend.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C0001DE8 (UsbhSignalResumeEvent.c)
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhResumePort @ 0x1C000BDF8 (UsbhResumePort.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhResumeSuspendedPort(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  int v8; // r10d
  __int64 v10; // rax
  int v11; // r10d
  int v12; // r10d
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-10h]
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      *(_WORD *)(a4 + 4));
  Log(a1, 1024, 1936937549, a4, a3);
  FdoExt(a1);
  if ( (a3 & 0x1A) == 0x18 && a5 )
  {
    v10 = PdoExt(a5);
    *(_DWORD *)(v10 + 1420) |= 0x2000u;
  }
  if ( (a3 & 2) == 0 || (a3 & 0x10) == 0 )
    goto LABEL_9;
  v8 = UsbhResumePort(a1, a4, &v15);
  v13 = *(unsigned __int16 *)(a4 + 4);
  if ( v8 < 0 )
  {
    Log(a1, 16, 1347568944, v8, v13);
    if ( !Usb_Disconnected(v11) )
    {
      LOBYTE(v14) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 47, 0, 0, v12, v15, usbfile_busfunc_c, 3115, v14);
    }
LABEL_9:
    UsbhSignalResumeEvent(a1, a4);
    return 0LL;
  }
  Log(a1, 16, 2004111955, 0, v13);
  return 0LL;
}
