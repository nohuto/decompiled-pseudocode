/*
 * XREFs of StEtaInitialize @ 0x140324338
 * Callers:
 *     SmcCacheInitialize @ 0x1408EBAA4 (SmcCacheInitialize.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *__fastcall StEtaInitialize(void *a1)
{
  return memset(a1, 0, 0x38uLL);
}
