/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00011B4
 * Callers:
 *     DeviceCreate @ 0x1C0001BE0 (DeviceCreate.c)
 *     DeviceRemove @ 0x1C0001F40 (DeviceRemove.c)
 *     USBCaptureProcessPin @ 0x1C0005C70 (USBCaptureProcessPin.c)
 *     DeviceStart @ 0x1C0020270 (DeviceStart.c)
 *     DeviceStop @ 0x1C0020900 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C0020AD0 (DeviceSurpriseRemoval.c)
 *     PinCreate @ 0x1C0021E00 (PinCreate.c)
 *     PinClose @ 0x1C00221F0 (PinClose.c)
 *     PinProcess @ 0x1C0022290 (PinProcess.c)
 *     USBType1RenderCreatePin @ 0x1C002FB60 (USBType1RenderCreatePin.c)
 *     USBType1RenderClosePin @ 0x1C002FD50 (USBType1RenderClosePin.c)
 *     USBType1SurpriseRemove @ 0x1C002FE00 (USBType1SurpriseRemove.c)
 *     USBCaptureCreatePin @ 0x1C00300D0 (USBCaptureCreatePin.c)
 *     USBCaptureClosePin @ 0x1C0030470 (USBCaptureClosePin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}
