/*
 * XREFs of InbvCheckDisplayOwnership @ 0x14027D310
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x14027D5E0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043C6F8 && (v0 = *(__int64 (**)(void))(qword_14043C6F8 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
