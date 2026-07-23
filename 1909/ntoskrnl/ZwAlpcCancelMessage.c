/*
 * XREFs of ZwAlpcCancelMessage @ 0x1401C1B10
 * Callers:
 *     PopUmpoProcessMessage @ 0x14069DA6C (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
