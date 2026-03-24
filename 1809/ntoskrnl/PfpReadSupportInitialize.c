/*
 * XREFs of PfpReadSupportInitialize @ 0x1400DF308
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140661F84 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x140864008 (PfpPrefetchFiles.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     PfpOpenHandleInitialize @ 0x140863FD8 (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(char *a1)
{
  memset(a1, 0, 0x38uLL);
  return PfpOpenHandleInitialize(a1 + 8);
}
