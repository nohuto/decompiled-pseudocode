/*
 * XREFs of InbvIndicateProgress @ 0x1409CBEB0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1409CACC4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1409CBA80 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvIndicateProgress())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043C6F8;
  if ( qword_14043C6F8 )
  {
    result = *(__int64 (**)(void))(qword_14043C6F8 + 120);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
