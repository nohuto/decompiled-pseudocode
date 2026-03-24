/*
 * XREFs of KeInitializeAffinityEx @ 0x140063A10
 * Callers:
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PpmUpdateProcessorPolicy @ 0x14071CB38 (PpmUpdateProcessorPolicy.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
