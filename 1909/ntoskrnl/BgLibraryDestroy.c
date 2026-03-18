/*
 * XREFs of BgLibraryDestroy @ 0x14099355C
 * Callers:
 *     BgkDestroy @ 0x140991A80 (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E3A00 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x140990EAC (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_14042C010;
  v2 = 0;
  if ( (dword_14042C010 & 1) == 0
    || (qword_14042C170 = 0LL, xmmword_14042C180 = 0LL, v2 = BgpFwLibraryDestroy(), (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
