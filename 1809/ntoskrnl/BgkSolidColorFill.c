/*
 * XREFs of BgkSolidColorFill @ 0x14027DEA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14027DF18 (BgkpAcquireConsole.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      (*(void (__fastcall **)(_QWORD, char *))(qword_14043D7D0 + 16))(0LL, &Palette[4 * a5]);
      (*(void (**)(void))(qword_14043D7D0 + 8))();
      ExReleaseRundownProtection_0(&stru_140405088);
    }
  }
}
