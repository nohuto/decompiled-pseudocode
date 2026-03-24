/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x14089567C
 * Callers:
 *     RtlAssert @ 0x1402EF860 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1406C98D4 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
