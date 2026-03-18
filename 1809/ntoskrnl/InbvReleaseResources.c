/*
 * XREFs of InbvReleaseResources @ 0x140181794
 * Callers:
 *     DisplayBootBitmap @ 0x14018173C (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x14027D4E0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseResources())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043C6F8;
  if ( qword_14043C6F8 )
  {
    result = *(__int64 (**)(void))(qword_14043C6F8 + 168);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
