/*
 * XREFs of WPP_RECORDER_SF_qqD @ 0x1C005FA50
 * Callers:
 *     InitCreateSharedSection @ 0x1C0267138 (InitCreateSharedSection.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, ...)
{
  struct RECORDER_LOG__ *v6; // rbx
  int v8; // [rsp+20h] [rbp-58h]
  _QWORD v9[2]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v10; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v10 = va_arg(va1, _QWORD);
  v6 = gBaseLog;
  v9[0] = gpvSharedBase;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, __int64, _QWORD *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids,
      13LL,
      v9,
      8LL,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v8) = 13;
  return ((__int64 (__fastcall *)(struct RECORDER_LOG__ *, __int64, __int64, const union _LARGE_INTEGER *, int, _QWORD *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WppAutoLogTrace)(
           v6,
           4LL,
           14LL,
           &WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids,
           v8,
           v9,
           8LL,
           (__int64 *)va,
           8LL,
           va1,
           4LL,
           0LL);
}
