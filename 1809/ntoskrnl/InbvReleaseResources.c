/*
 * XREFs of InbvReleaseResources @ 0x1401818F4
 * Callers:
 *     DisplayBootBitmap @ 0x14018189C (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x14027D7D0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseResources())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043D7B8;
  if ( qword_14043D7B8 )
  {
    result = *(__int64 (**)(void))(qword_14043D7B8 + 168);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
