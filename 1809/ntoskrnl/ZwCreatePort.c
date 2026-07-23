/*
 * XREFs of ZwCreatePort @ 0x1401B9930
 * Callers:
 *     SeRmInitPhase1 @ 0x1409C71C4 (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
