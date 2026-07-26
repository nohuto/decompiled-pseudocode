/*
 * XREFs of NdisInitializeTimer @ 0x1C002FB50
 * Callers:
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1C007CABC (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 *     ndisMInitializeInitMode @ 0x1C0108510 (ndisMInitializeInitMode.c)
 *     ndisMInitializePDCTaskClient @ 0x1C01194EC (ndisMInitializePDCTaskClient.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C011BF18 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011C43C (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     NdisMSetAttributesEx @ 0x1C012F0C0 (NdisMSetAttributesEx.c)
 *     ?ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ @ 0x1C0144608 (-ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeTimer(PNDIS_TIMER Timer, PNDIS_TIMER_FUNCTION TimerFunction, PVOID FunctionContext)
{
  KeInitializeTimer(&Timer->Timer);
  KeInitializeDpc(&Timer->Dpc, (PKDEFERRED_ROUTINE)TimerFunction, FunctionContext);
  KeSetImportanceDpc(&Timer->Dpc, LowImportance);
}
