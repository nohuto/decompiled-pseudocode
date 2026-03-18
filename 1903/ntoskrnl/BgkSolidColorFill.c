/*
 * XREFs of BgkSolidColorFill @ 0x140292740
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1402927B8 (BgkpAcquireConsole.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      (*(void (__fastcall **)(_QWORD, char *))(qword_140468240 + 16))(0LL, &Palette[4 * a5]);
      (*(void (**)(void))(qword_140468240 + 8))();
      ExReleaseRundownProtection_0(&stru_14042A678);
    }
  }
}
