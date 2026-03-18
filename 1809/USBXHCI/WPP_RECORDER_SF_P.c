/*
 * XREFs of WPP_RECORDER_SF_P @ 0x1C0011E68
 * Callers:
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C000C200 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_RetrieveUrsData @ 0x1C005AAC8 (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_P(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, char *, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      (char *)&Context.Logger + 4,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 2LL, 4LL, (char *)&Context.Logger + 4, v8, va);
}
