/*
 * XREFs of WPP_RECORDER_SF_DDDDDDD @ 0x1C0038758
 * Callers:
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C003685C (Bulk_Stage_EstimateRequiredSegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDDDDDD(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+28h] [rbp-69h]
  __int64 v8; // [rsp+E0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E0h] [rbp+4Fh]
  __int64 v10; // [rsp+E8h] [rbp+57h] BYREF
  va_list va1; // [rsp+E8h] [rbp+57h]
  __int64 v12; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+F0h] [rbp+5Fh]
  __int64 v14; // [rsp+F8h] [rbp+67h] BYREF
  va_list va3; // [rsp+F8h] [rbp+67h]
  __int64 v16; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+100h] [rbp+6Fh]
  __int64 v18; // [rsp+108h] [rbp+77h] BYREF
  va_list va5; // [rsp+108h] [rbp+77h]
  va_list va6; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v16 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v18 = va_arg(va6, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
      32LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      va6,
      4LL,
      0LL);
  LOWORD(v7) = 32;
  return WppAutoLogTrace(a1, 5LL, 14LL, &WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids, v7, (__int64 *)va);
}
