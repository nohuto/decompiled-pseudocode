/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x14027D4A0
 * Callers:
 *     KiDisplayBlueScreen @ 0x140292764 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x14057EFE0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043D7B8;
  if ( qword_14043D7B8 )
  {
    result = *(__int64 (**)(void))(qword_14043D7B8 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
