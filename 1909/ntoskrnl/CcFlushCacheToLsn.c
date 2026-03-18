/*
 * XREFs of CcFlushCacheToLsn @ 0x14015B4D0
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 */

void __fastcall CcFlushCacheToLsn(__int64 a1, __int64 a2, _QWORD *a3)
{
  CcFlushCachePriv(a1, 0LL, 0, a2, 0, a3);
}
