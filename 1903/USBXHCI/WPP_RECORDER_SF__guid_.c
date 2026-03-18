/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1C0014A40
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0011940 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // [rsp+20h] [rbp-28h]

  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, char *, __int64, __int64, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      (char *)&Context.Logger + 4,
      201LL,
      a6,
      16LL,
      0LL);
  LOWORD(v8) = 201;
  return WppAutoLogTrace(a1, 4LL, 4LL, (char *)&Context.Logger + 4, v8, a6);
}
