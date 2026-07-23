/*
 * XREFs of InbvSetProgressBarSubset @ 0x140187470
 * Callers:
 *     Phase1Initialization @ 0x14074C7A0 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043D7B8;
  if ( qword_14043D7B8 )
  {
    result = *(__int64 (**)(void))(qword_14043D7B8 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
