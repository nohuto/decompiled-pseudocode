/*
 * XREFs of InbvIndicateProgress @ 0x140A11D78
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A109A8 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140A11960 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (*InbvIndicateProgress())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140467F68;
  if ( qword_140467F68 )
  {
    result = *(__int64 (**)(void))(qword_140467F68 + 120);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
