/*
 * XREFs of InbvCheckDisplayOwnership @ 0x140291AF0
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x140291DC0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140467F68 && (v0 = *(__int64 (**)(void))(qword_140467F68 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
