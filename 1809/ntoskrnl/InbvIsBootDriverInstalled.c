/*
 * XREFs of InbvIsBootDriverInstalled @ 0x140181990
 * Callers:
 *     DisplayBootBitmap @ 0x14018189C (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x140181920 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x1409C6CC0 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043D7B8 && (v0 = *(__int64 (**)(void))(qword_14043D7B8 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
