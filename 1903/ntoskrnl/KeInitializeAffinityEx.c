/*
 * XREFs of KeInitializeAffinityEx @ 0x1400BE1B0
 * Callers:
 *     PpmParkComputeDiff @ 0x1402F89BC (PpmParkComputeDiff.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
