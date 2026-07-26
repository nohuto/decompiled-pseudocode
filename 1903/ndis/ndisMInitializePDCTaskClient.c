/*
 * XREFs of ndisMInitializePDCTaskClient @ 0x1C01194EC
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C002FB60 (NdisInitializeTimer.c)
 */

void (__fastcall *__fastcall ndisMInitializePDCTaskClient(
        char *FunctionContext))(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  void (__fastcall *result)(__int64, struct _NDIS_MINIPORT_BLOCK *); // rax

  NdisInitializeTimer(
    (PNDIS_TIMER)(FunctionContext + 5488),
    (PNDIS_TIMER_FUNCTION)ndisPdcTaskClientDisableTimeoutDpc,
    FunctionContext);
  result = ndisPdcTaskClientDisableTimeoutWorkItem;
  *((_QWORD *)FunctionContext + 702) = FunctionContext;
  *((_QWORD *)FunctionContext + 703) = ndisPdcTaskClientDisableTimeoutWorkItem;
  return result;
}
