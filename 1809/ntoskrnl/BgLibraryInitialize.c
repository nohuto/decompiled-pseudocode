/*
 * XREFs of BgLibraryInitialize @ 0x14094E81C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140568DB8 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140569770 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x1409FB8E0 (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400BC840 (KeGetCurrentIrql.c)
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
