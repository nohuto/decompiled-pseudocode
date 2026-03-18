/*
 * XREFs of VmSetVpHostProcess @ 0x1408ECFC0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x1408C82F8 (PsSetVmProcessorHostProcess.c)
 */

NTSTATUS __fastcall VmSetVpHostProcess(__int64 a1)
{
  return PsSetVmProcessorHostProcess(a1);
}
