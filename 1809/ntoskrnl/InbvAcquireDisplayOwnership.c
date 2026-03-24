/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x14027D2B0
 * Callers:
 *     KiDisplayBlueScreen @ 0x140292574 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x14057DFE0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043C6F8;
  if ( qword_14043C6F8 )
  {
    result = *(__int64 (**)(void))(qword_14043C6F8 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
