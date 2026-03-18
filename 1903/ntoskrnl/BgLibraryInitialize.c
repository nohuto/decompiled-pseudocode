/*
 * XREFs of BgLibraryInitialize @ 0x14098E830
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140599380 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x140A4158C (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400ED070 (KeGetCurrentIrql.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
