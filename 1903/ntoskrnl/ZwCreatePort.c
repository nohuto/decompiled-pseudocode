/*
 * XREFs of ZwCreatePort @ 0x1401C1730
 * Callers:
 *     SeRmInitPhase1 @ 0x140A17B50 (SeRmInitPhase1.c)
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
