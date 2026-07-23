/*
 * XREFs of InbvIndicateProgress @ 0x1409CCEB0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1409CBCC4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1409CCA80 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (*InbvIndicateProgress())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043D7B8;
  if ( qword_14043D7B8 )
  {
    result = *(__int64 (**)(void))(qword_14043D7B8 + 120);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
