/*
 * XREFs of InbvSetTextColor @ 0x14027D680
 * Callers:
 *     DisplayBootBitmap @ 0x14018189C (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043D7B8 && (v0 = *(__int64 (**)(void))(qword_14043D7B8 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
