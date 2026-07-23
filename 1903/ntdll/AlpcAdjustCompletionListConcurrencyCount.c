/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800DFA30
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSetInformation @ 0x18009D830 (ZwAlpcSetInformation.c)
 */

NTSTATUS __cdecl AlpcAdjustCompletionListConcurrencyCount(HANDLE PortHandle, ULONG ConcurrencyCount)
{
  ULONG PortInformation; // [rsp+38h] [rbp+10h] BYREF

  PortInformation = ConcurrencyCount;
  return ZwAlpcSetInformation(PortHandle, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
}
