/*
 * XREFs of InbvGetDisplayState @ 0x14027D55C
 * Callers:
 *     FinalizeBootLogo @ 0x14027D77C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14027D7D0 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x14027D928 (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043D7B8 && (v0 = *(__int64 (**)(void))(qword_14043D7B8 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
