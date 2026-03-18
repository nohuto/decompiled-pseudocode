/*
 * XREFs of KeInitializeAffinityEx @ 0x14009E030
 * Callers:
 *     PpmParkComputeDiff @ 0x1402F846C (PpmParkComputeDiff.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
