/*
 * XREFs of InbvIsBootDriverInstalled @ 0x14018A670
 * Callers:
 *     DisplayBootBitmap @ 0x14018A578 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x14018A600 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x1409FCD18 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140468228 && (v0 = *(__int64 (**)(void))(qword_140468228 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
