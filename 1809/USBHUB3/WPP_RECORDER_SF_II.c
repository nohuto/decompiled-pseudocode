/*
 * XREFs of WPP_RECORDER_SF_II @ 0x1C00116D0
 * Callers:
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C0070D70 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_II(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8[3]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v8[0] = 300000000LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
      155LL,
      va,
      8LL,
      v8,
      8LL,
      0LL);
  LOWORD(v7) = 155;
  return WppAutoLogTrace(a1, 3LL, 2LL, &WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids, v7, va);
}
