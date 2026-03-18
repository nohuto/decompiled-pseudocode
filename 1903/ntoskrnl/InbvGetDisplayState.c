/*
 * XREFs of InbvGetDisplayState @ 0x140291DEC
 * Callers:
 *     FinalizeBootLogo @ 0x14029200C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x140292060 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1402921B8 (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140468228 && (v0 = *(__int64 (**)(void))(qword_140468228 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
