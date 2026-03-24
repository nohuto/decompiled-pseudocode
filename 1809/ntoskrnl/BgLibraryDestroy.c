/*
 * XREFs of BgLibraryDestroy @ 0x14095349C
 * Callers:
 *     BgkDestroy @ 0x140951A04 (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400BC840 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14016F208 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F258 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x140950E4C (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_140405AD0;
  v2 = 0;
  if ( (dword_140405AD0 & 1) == 0
    || (qword_140405C30 = 0LL, xmmword_140405C40 = 0LL, v2 = BgpFwLibraryDestroy(), (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
