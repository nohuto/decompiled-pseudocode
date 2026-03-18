/*
 * XREFs of ZwCreatePort @ 0x1401C22B0
 * Callers:
 *     SeRmInitPhase1 @ 0x140A18010 (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, ObjectAttributes, *(_QWORD *)&MaxConnectionInfoLength);
}
