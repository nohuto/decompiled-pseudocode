/*
 * XREFs of StEtaInitialize @ 0x140306844
 * Callers:
 *     SmcCacheInitialize @ 0x1408AEAA0 (SmcCacheInitialize.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

void *__fastcall StEtaInitialize(void *a1)
{
  return memset(a1, 0, 0x38uLL);
}
