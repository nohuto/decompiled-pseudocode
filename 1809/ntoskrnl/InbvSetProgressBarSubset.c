/*
 * XREFs of InbvSetProgressBarSubset @ 0x140187330
 * Callers:
 *     Phase1Initialization @ 0x14074B5B0 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043C6F8;
  if ( qword_14043C6F8 )
  {
    result = *(__int64 (**)(void))(qword_14043C6F8 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
