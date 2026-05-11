/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00011B4
 * Callers:
 *     DeviceCreate @ 0x1C0001DC0 (DeviceCreate.c)
 *     DeviceRemove @ 0x1C00020F0 (DeviceRemove.c)
 *     USBCaptureProcessPin @ 0x1C0005C70 (USBCaptureProcessPin.c)
 *     DeviceStart @ 0x1C001F270 (DeviceStart.c)
 *     DeviceStop @ 0x1C001F880 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C001FA40 (DeviceSurpriseRemoval.c)
 *     PinCreate @ 0x1C0020C80 (PinCreate.c)
 *     PinClose @ 0x1C0021080 (PinClose.c)
 *     PinProcess @ 0x1C0021110 (PinProcess.c)
 *     USBType1RenderCreatePin @ 0x1C002E880 (USBType1RenderCreatePin.c)
 *     USBType1RenderClosePin @ 0x1C002EA50 (USBType1RenderClosePin.c)
 *     USBType1SurpriseRemove @ 0x1C002EAF0 (USBType1SurpriseRemove.c)
 *     USBCaptureCreatePin @ 0x1C002EDA0 (USBCaptureCreatePin.c)
 *     USBCaptureClosePin @ 0x1C002F110 (USBCaptureClosePin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
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
