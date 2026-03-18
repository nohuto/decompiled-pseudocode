/*
 * XREFs of StEtaInitialize @ 0x140323D88
 * Callers:
 *     SmcCacheInitialize @ 0x1408EB3AC (SmcCacheInitialize.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *__fastcall StEtaInitialize(void *a1)
{
  return memset(a1, 0, 0x38uLL);
}
