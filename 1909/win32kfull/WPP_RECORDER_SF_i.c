/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C01F6704
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C000839C (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_i(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  struct RECORDER_LOG__ *v5; // rbx
  int v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-8h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = gFullLog;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8438351599043bf8e2667f448536d6b5_Traceguids,
      12LL,
      va,
      8LL,
      0LL);
  LOWORD(v7) = 12;
  return WppAutoLogTrace(v5, 4LL, 10LL, &WPP_8438351599043bf8e2667f448536d6b5_Traceguids, v7, va, 8LL, 0LL, v8);
}
