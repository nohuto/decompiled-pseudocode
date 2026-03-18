/*
 * XREFs of InbvGetDisplayState @ 0x140291B4C
 * Callers:
 *     FinalizeBootLogo @ 0x140291D6C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x140291DC0 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x140291F18 (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140467F68 && (v0 = *(__int64 (**)(void))(qword_140467F68 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
