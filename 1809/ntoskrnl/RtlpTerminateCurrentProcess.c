/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1408968DC
 * Callers:
 *     RtlAssert @ 0x1402EFA50 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1406CAB74 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
