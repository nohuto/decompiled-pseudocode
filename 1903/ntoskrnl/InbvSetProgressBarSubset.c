/*
 * XREFs of InbvSetProgressBarSubset @ 0x14018A404
 * Callers:
 *     Phase1Initialization @ 0x1407573D0 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140468228;
  if ( qword_140468228 )
  {
    result = *(__int64 (**)(void))(qword_140468228 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
