/*
 * XREFs of Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C00191E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointOkToCancelTransfers(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F180);
  return ESM_AddEvent((PVOID)(v1 + 288));
}
