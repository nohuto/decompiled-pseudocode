/*
 * XREFs of InbvIndicateProgress @ 0x140A115E0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A10210 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvIndicateProgress())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140468228;
  if ( qword_140468228 )
  {
    result = *(__int64 (**)(void))(qword_140468228 + 120);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
