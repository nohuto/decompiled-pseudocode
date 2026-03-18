/*
 * XREFs of Controller_UcxEvtReset @ 0x1C0011EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 */

__int64 __fastcall Controller_UcxEvtReset(__int64 a1)
{
  __m128i *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v2 = (__m128i *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    a1,
                    off_1C0056428);
  if ( Controller_IsControllerAccessible((__int64)v2) )
  {
    Controller_InternalReset(v2, v3, v4);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(v2[4].m128i_i64[1], 2u, 4u, 0xB6u, (__int64)&Context.Logger + 4);
  }
  v7 = 1;
  v6 = 12LL;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64 *))qword_1C0057678)(UcxDriverGlobals, a1, &v6);
}
