/*
 * XREFs of InbvGetDisplayState @ 0x14027D36C
 * Callers:
 *     FinalizeBootLogo @ 0x14027D58C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14027D5E0 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x14027D738 (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043C6F8 && (v0 = *(__int64 (**)(void))(qword_14043C6F8 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
