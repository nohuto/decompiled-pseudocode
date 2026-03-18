/*
 * XREFs of KeSetSystemAffinityThread @ 0x14019E280
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemAffinityThreadEx @ 0x14019E2A0 (KeSetSystemAffinityThreadEx.c)
 */

void __stdcall KeSetSystemAffinityThread(KAFFINITY Affinity)
{
  KeSetSystemAffinityThreadEx(Affinity);
}
