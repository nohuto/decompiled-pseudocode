/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C0059CE8
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00ADA68 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Dd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
      40LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 40;
  return WppAutoLogTrace(a1, 2LL, 21LL, &WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids, v7, (__int64 *)va);
}
