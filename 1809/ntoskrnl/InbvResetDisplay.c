/*
 * XREFs of InbvResetDisplay @ 0x14027D620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043D7B8 && (v0 = *(__int64 (**)(void))(qword_14043D7B8 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
