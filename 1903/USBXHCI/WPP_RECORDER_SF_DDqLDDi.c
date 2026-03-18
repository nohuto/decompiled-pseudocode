/*
 * XREFs of WPP_RECORDER_SF_DDqLDDi @ 0x1C00043A4
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x1C002A818 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C002AB34 (Control_ProcessTransferEventWithED1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDqLDDi(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+28h] [rbp-69h]
  __int64 v9; // [rsp+E0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E0h] [rbp+4Fh]
  __int64 v11; // [rsp+E8h] [rbp+57h] BYREF
  va_list va1; // [rsp+E8h] [rbp+57h]
  __int64 v13; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+F0h] [rbp+5Fh]
  __int64 v15; // [rsp+F8h] [rbp+67h] BYREF
  va_list va3; // [rsp+F8h] [rbp+67h]
  __int64 v17; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+100h] [rbp+6Fh]
  __int64 v19; // [rsp+108h] [rbp+77h] BYREF
  va_list va5; // [rsp+108h] [rbp+77h]
  va_list va6; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v15 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v17 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v19 = va_arg(va6, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      va6,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 14LL, &WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids, v8, (__int64 *)va);
}
