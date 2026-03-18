/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1408D35A4
 * Callers:
 *     RtlAssert @ 0x14030E410 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1406E7FD0 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
