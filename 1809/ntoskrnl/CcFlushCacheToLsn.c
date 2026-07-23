/*
 * XREFs of CcFlushCacheToLsn @ 0x140160530
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 */

void __fastcall CcFlushCacheToLsn(__int64 a1, __int64 a2, char *a3)
{
  CcFlushCachePriv(a1, 0LL, 0, a2, 0, a3);
}
