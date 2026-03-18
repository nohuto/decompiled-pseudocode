/*
 * XREFs of ESM_WaitingToReissueStopEndpointCommand1 @ 0x1C0046830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_WaitingToReissueStopEndpointCommand1(__int64 a1)
{
  (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 1296LL),
    -2000000LL);
  return 1000LL;
}
