/*
 * XREFs of InbvCheckDisplayOwnership @ 0x140291D90
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x140292060 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140468228 && (v0 = *(__int64 (**)(void))(qword_140468228 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
