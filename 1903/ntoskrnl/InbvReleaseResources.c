/*
 * XREFs of InbvReleaseResources @ 0x14018A5D0
 * Callers:
 *     DisplayBootBitmap @ 0x14018A578 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x140292060 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseResources())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140468228;
  if ( qword_140468228 )
  {
    result = *(__int64 (**)(void))(qword_140468228 + 168);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
