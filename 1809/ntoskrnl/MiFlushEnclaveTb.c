/*
 * XREFs of MiFlushEnclaveTb @ 0x1402BDC0C
 * Callers:
 *     MiProtectEnclavePages @ 0x1402BE020 (MiProtectEnclavePages.c)
 * Callees:
 *     MiFlushTbList @ 0x1400740C0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3AD0 (MiInsertTbFlushEntry.c)
 */

void __fastcall MiFlushEnclaveTb(int *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  if ( a2 != -1LL )
  {
    if ( (a3 & 0x20000000) == 0 && !a1[3] )
      MiInsertTbFlushEntry((__int64)a1, a2, 1LL, 0);
    MiFlushTbList(a1, a2, a3, a4);
  }
}
