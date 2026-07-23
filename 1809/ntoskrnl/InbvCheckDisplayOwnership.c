/*
 * XREFs of InbvCheckDisplayOwnership @ 0x14027D500
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x14027D7D0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043D7B8 && (v0 = *(__int64 (**)(void))(qword_14043D7B8 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
