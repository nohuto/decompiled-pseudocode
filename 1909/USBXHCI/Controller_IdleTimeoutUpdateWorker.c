/*
 * XREFs of Controller_IdleTimeoutUpdateWorker @ 0x1C000EA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00630D0 (Controller_UpdateIdleTimeout.c)
 */

_UNKNOWN **__fastcall Controller_IdleTimeoutUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  _UNKNOWN **result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3048))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C0056428);
  Controller_UpdateIdleTimeout(v2, 1LL);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 1;
    return (_UNKNOWN **)WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), 2u, 4u, 0x1Du, (__int64)&Context.Logger + 4, v4);
  }
  return result;
}
