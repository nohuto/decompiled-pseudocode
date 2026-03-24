/*
 * XREFs of InbvIsBootDriverInstalled @ 0x140181850
 * Callers:
 *     DisplayBootBitmap @ 0x14018175C (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1401817E0 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x1409C5CC0 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043C6F8 && (v0 = *(__int64 (**)(void))(qword_14043C6F8 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
