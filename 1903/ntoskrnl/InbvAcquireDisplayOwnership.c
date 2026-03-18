/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x140291D30
 * Callers:
 *     KiDisplayBlueScreen @ 0x1402A9008 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1405ADED0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140468228;
  if ( qword_140468228 )
  {
    result = *(__int64 (**)(void))(qword_140468228 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
