/*
 * XREFs of WPP_RECORDER_SF_I @ 0x1C00146DC
 * Callers:
 *     Controller_D0EntryRestoreState @ 0x1C000D8D8 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C000DCC0 (Controller_D0ExitSaveState.c)
 *     Controller_Start @ 0x1C00103F0 (Controller_Start.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_I(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v9; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, char *, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      (char *)&Context.Logger + 4,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, a2, 4LL, (char *)&Context.Logger + 4, v9, va);
}
