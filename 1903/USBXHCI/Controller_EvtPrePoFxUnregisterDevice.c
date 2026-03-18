/*
 * XREFs of Controller_EvtPrePoFxUnregisterDevice @ 0x1C000E550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1,
             off_1C00563D8);
  *(_QWORD *)(*(_QWORD *)(result + 8) + 520LL) = 0LL;
  return result;
}
