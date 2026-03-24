/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C0006C60
 * Callers:
 *     KeyboardClassWaitWakeComplete @ 0x1C0005C00 (KeyboardClassWaitWakeComplete.c)
 *     KeyboardClassDeviceControl @ 0x1C000D180 (KeyboardClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002E90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqd(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v15; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  va_list va2; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      &WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(
           a1,
           a2,
           a3,
           &WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids,
           v12,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2);
}
