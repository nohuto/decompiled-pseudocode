/*
 * XREFs of InbvGetDisplayState @ 0x14027D26C
 * Callers:
 *     FinalizeBootLogo @ 0x14027D48C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14027D4E0 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x14027D638 (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043C6F8 && (v0 = *(__int64 (**)(void))(qword_14043C6F8 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
