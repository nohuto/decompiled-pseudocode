/*
 * XREFs of WPP_RECORDER_SF_qqdDdd @ 0x1C0002590
 * Callers:
 *     KeyboardClassCreate @ 0x1C0001D40 (KeyboardClassCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002E90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqdDdd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-88h]
  _DWORD v8[6]; // [rsp+90h] [rbp-18h] BYREF
  __int64 v9; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  __int64 v11; // [rsp+E0h] [rbp+38h] BYREF
  va_list va1; // [rsp+E0h] [rbp+38h]
  __int64 v13; // [rsp+E8h] [rbp+40h]
  __int64 v14; // [rsp+F0h] [rbp+48h] BYREF
  va_list va2; // [rsp+F0h] [rbp+48h]
  __int64 v16; // [rsp+F8h] [rbp+50h] BYREF
  va_list va3; // [rsp+F8h] [rbp+50h]
  va_list va4; // [rsp+100h] [rbp+58h] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v16 = va_arg(va4, _QWORD);
  v8[0] = -1073741790;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, _DWORD *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids,
      30LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      v8,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      4LL,
      va4,
      4LL,
      0LL);
  LOWORD(v7) = 30;
  return WppAutoLogTrace(
           a1,
           2LL,
           2LL,
           &WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v8);
}
