/*
 * XREFs of InbvSetTextColor @ 0x14027D390
 * Callers:
 *     DisplayBootBitmap @ 0x14018173C (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043C6F8 && (v0 = *(__int64 (**)(void))(qword_14043C6F8 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
