/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x14089569C
 * Callers:
 *     RtlAssert @ 0x1402EF760 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1406C98F4 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
