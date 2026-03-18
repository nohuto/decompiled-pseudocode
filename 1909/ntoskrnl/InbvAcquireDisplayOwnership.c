/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x140291A90
 * Callers:
 *     KiDisplayBlueScreen @ 0x1402A8D68 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1405ADEB0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140467F68;
  if ( qword_140467F68 )
  {
    result = *(__int64 (**)(void))(qword_140467F68 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
