/*
 * XREFs of ndisMInitializeInitMode @ 0x1C0108510
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C002FB50 (NdisInitializeTimer.c)
 */

void __fastcall ndisMInitializeInitMode(char *FunctionContext)
{
  NdisInitializeTimer(
    (PNDIS_TIMER)(FunctionContext + 2776),
    (PNDIS_TIMER_FUNCTION)ndisInitModeTimeoutDpc,
    FunctionContext);
  *((_QWORD *)FunctionContext + 363) = FunctionContext;
  *((_QWORD *)FunctionContext + 364) = ndisInitModeTimeoutWorkItem;
  KeInitializeEvent((PRKEVENT)(FunctionContext + 2984), NotificationEvent, 1u);
}
