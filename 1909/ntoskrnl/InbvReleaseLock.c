/*
 * XREFs of InbvReleaseLock @ 0x140291BD8
 * Callers:
 *     DisplayBootBitmap @ 0x14018AF08 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x140291D6C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x140291DC0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140467F68;
  if ( qword_140467F68 )
  {
    result = *(__int64 (**)(void))(qword_140467F68 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
