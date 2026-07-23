/*
 * XREFs of ZwAlpcCancelMessage @ 0x1401B91B0
 * Callers:
 *     PopUmpoProcessMessage @ 0x14058BF88 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
