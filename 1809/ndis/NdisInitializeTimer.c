/*
 * XREFs of NdisInitializeTimer @ 0x1C001DCF0
 * Callers:
 *     ndisPeriodicReceivesAddCpu @ 0x1C0050588 (ndisPeriodicReceivesAddCpu.c)
 *     ndisMInitializeInitMode @ 0x1C00C99F8 (ndisMInitializeInitMode.c)
 *     ndisMInitializePDCTaskClient @ 0x1C00F539C (ndisMInitializePDCTaskClient.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00FC5B0 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FCA88 (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     NdisMSetAttributesEx @ 0x1C010E770 (NdisMSetAttributesEx.c)
 *     ndisInitializePeriodicReceives @ 0x1C0126C84 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeTimer(PNDIS_TIMER Timer, PNDIS_TIMER_FUNCTION TimerFunction, PVOID FunctionContext)
{
  KeInitializeTimer(&Timer->Timer);
  KeInitializeDpc(&Timer->Dpc, (PKDEFERRED_ROUTINE)TimerFunction, FunctionContext);
  KeSetImportanceDpc(&Timer->Dpc, LowImportance);
}
