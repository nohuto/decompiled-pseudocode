/*
 * XREFs of PfpReadSupportInitialize @ 0x1400DF388
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140663144 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x140865268 (PfpPrefetchFiles.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PfpOpenHandleInitialize @ 0x140865238 (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(char *a1)
{
  memset(a1, 0, 0x38uLL);
  return PfpOpenHandleInitialize(a1 + 8);
}
