/*
 * XREFs of InbvResetDisplay @ 0x140291EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rax

  if ( qword_140468228 && (v0 = *(__int64 (**)(void))(qword_140468228 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
