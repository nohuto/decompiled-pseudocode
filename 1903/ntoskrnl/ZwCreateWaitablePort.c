/*
 * XREFs of ZwCreateWaitablePort @ 0x1401C1990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateWaitablePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectInfoLength,
        ULONG MaxDataLength,
        ULONG NPMessageQueueSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
