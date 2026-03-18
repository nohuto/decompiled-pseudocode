/*
 * XREFs of WPP_RECORDER_SF__guid_d @ 0x1C00120F4
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C0059160 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_d(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v8; // [rsp+20h] [rbp-48h]
  int v9[6]; // [rsp+50h] [rbp-18h] BYREF

  v9[0] = -1073741670;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, char *, __int64, __int64, __int64, int *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      (char *)&Context.Logger + 4,
      248LL,
      a6,
      16LL,
      v9,
      4LL,
      0LL);
  LOWORD(v8) = 248;
  return WppAutoLogTrace(a1, 2LL, 4LL, (char *)&Context.Logger + 4, v8, a6);
}
