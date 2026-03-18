/*
 * XREFs of InbvAcquireLock @ 0x14027D1DC
 * Callers:
 *     DisplayBootBitmap @ 0x14018173C (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x14027D48C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14027D4E0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043C6F8;
  if ( qword_14043C6F8 )
  {
    result = *(__int64 (**)(void))(qword_14043C6F8 + 152);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
