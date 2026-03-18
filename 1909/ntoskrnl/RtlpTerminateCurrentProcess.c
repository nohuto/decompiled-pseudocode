/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1408D2EA4
 * Callers:
 *     RtlAssert @ 0x14030DE60 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1406E90D0 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
