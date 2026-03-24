/*
 * XREFs of StEtaInitialize @ 0x140306944
 * Callers:
 *     SmcCacheInitialize @ 0x1408AEA80 (SmcCacheInitialize.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

void *__fastcall StEtaInitialize(void *a1)
{
  return memset(a1, 0, 0x38uLL);
}
