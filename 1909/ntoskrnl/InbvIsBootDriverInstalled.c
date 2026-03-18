/*
 * XREFs of InbvIsBootDriverInstalled @ 0x14018B000
 * Callers:
 *     DisplayBootBitmap @ 0x14018AF08 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x14018AF90 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x1409FD234 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140467F68 && (v0 = *(__int64 (**)(void))(qword_140467F68 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
