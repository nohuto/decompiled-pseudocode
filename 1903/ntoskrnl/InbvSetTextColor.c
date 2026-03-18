/*
 * XREFs of InbvSetTextColor @ 0x140291F10
 * Callers:
 *     DisplayBootBitmap @ 0x14018A578 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rax

  if ( qword_140468228 && (v0 = *(__int64 (**)(void))(qword_140468228 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
