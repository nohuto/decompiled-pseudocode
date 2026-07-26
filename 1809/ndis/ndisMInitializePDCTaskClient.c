/*
 * XREFs of ndisMInitializePDCTaskClient @ 0x1C00F539C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001DCF0 (NdisInitializeTimer.c)
 */

void (__fastcall *__fastcall ndisMInitializePDCTaskClient(
        char *FunctionContext))(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  void (__fastcall *result)(__int64, struct _NDIS_MINIPORT_BLOCK *); // rax

  NdisInitializeTimer(
    (PNDIS_TIMER)(FunctionContext + 5552),
    (PNDIS_TIMER_FUNCTION)ndisPdcTaskClientDisableTimeoutDpc,
    FunctionContext);
  result = ndisPdcTaskClientDisableTimeoutWorkItem;
  *((_QWORD *)FunctionContext + 710) = FunctionContext;
  *((_QWORD *)FunctionContext + 711) = ndisPdcTaskClientDisableTimeoutWorkItem;
  return result;
}
