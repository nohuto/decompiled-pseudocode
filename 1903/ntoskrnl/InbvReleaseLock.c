/*
 * XREFs of InbvReleaseLock @ 0x140291E78
 * Callers:
 *     DisplayBootBitmap @ 0x14018A578 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x14029200C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x140292060 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140468228;
  if ( qword_140468228 )
  {
    result = *(__int64 (**)(void))(qword_140468228 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
