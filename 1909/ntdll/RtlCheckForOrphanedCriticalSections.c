/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x18007DBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckHeldCriticalSections @ 0x18007DC10 (RtlCheckHeldCriticalSections.c)
 */

void __cdecl RtlCheckForOrphanedCriticalSections(HANDLE ThreadHandle)
{
  RtlCheckHeldCriticalSections(ThreadHandle);
}
