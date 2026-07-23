/*
 * XREFs of BgLibraryInitialize @ 0x14094F81C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x14056A770 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x1409FC8E0 (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400BC780 (KeGetCurrentIrql.c)
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
