/*
 * XREFs of VmSetVpHostProcess @ 0x1408ED6B0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x1408C8A18 (PsSetVmProcessorHostProcess.c)
 */

NTSTATUS __fastcall VmSetVpHostProcess(__int64 a1)
{
  return PsSetVmProcessorHostProcess(a1);
}
