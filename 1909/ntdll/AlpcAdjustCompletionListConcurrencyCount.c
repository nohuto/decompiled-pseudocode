/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800DFAF0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x18009DFE0 (NtAlpcSetInformation.c)
 */

NTSTATUS __cdecl AlpcAdjustCompletionListConcurrencyCount(HANDLE PortHandle, ULONG ConcurrencyCount)
{
  ULONG PortInformation; // [rsp+38h] [rbp+10h] BYREF

  PortInformation = ConcurrencyCount;
  return NtAlpcSetInformation(PortHandle, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
}
