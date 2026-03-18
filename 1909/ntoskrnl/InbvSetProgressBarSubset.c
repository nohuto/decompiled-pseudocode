/*
 * XREFs of InbvSetProgressBarSubset @ 0x14018AD94
 * Callers:
 *     Phase1Initialization @ 0x140768980 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140467F68;
  if ( qword_140467F68 )
  {
    result = *(__int64 (**)(void))(qword_140467F68 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
