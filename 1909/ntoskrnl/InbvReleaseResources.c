/*
 * XREFs of InbvReleaseResources @ 0x14018AF60
 * Callers:
 *     DisplayBootBitmap @ 0x14018AF08 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x140291DC0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseResources())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140467F68;
  if ( qword_140467F68 )
  {
    result = *(__int64 (**)(void))(qword_140467F68 + 168);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
