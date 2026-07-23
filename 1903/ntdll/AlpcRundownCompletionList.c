/*
 * XREFs of AlpcRundownCompletionList @ 0x180085060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl AlpcRundownCompletionList(HANDLE PortHandle)
{
  return ZwAlpcSetInformation(PortHandle, AlpcCompletionListRundownInformation, 0LL, 0);
}
