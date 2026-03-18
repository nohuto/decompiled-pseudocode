/*
 * XREFs of WPP_RECORDER_SF_ccccc @ 0x1C018E288
 * Callers:
 *     ShouldEnableInputVirtualization @ 0x1C0060D40 (ShouldEnableInputVirtualization.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ccccc()
{
  struct RECORDER_LOG__ *v0; // rbx
  int v2; // [rsp+28h] [rbp-69h]
  char v3[8]; // [rsp+88h] [rbp-9h] BYREF
  char v4[8]; // [rsp+90h] [rbp-1h] BYREF
  char v5[8]; // [rsp+98h] [rbp+7h] BYREF
  char v6[8]; // [rsp+A0h] [rbp+Fh] BYREF
  _BYTE v7[16]; // [rsp+A8h] [rbp+17h] BYREF

  v0 = gBaseLog;
  v3[0] = byte_1C0219930;
  v4[0] = byte_1C0219931;
  v5[0] = byte_1C0219932;
  v6[0] = byte_1C0219933;
  v7[0] = byte_1C0219934;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, _BYTE *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids,
      19LL,
      v7,
      1LL,
      v6,
      1LL,
      v5,
      1LL,
      v4,
      1LL,
      v3,
      1LL,
      0LL);
  LOWORD(v2) = 19;
  return WppAutoLogTrace(
           v0,
           4LL,
           12LL,
           &WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids,
           v2,
           v7,
           1LL,
           v6,
           1LL,
           v5,
           1LL,
           v4,
           1LL,
           v3,
           1LL,
           0LL);
}
