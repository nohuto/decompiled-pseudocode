/*
 * XREFs of ?s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x180076400
 * Callers:
 *     ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x1800763F0 (-ShouldHaveAppView@CClassicWindow@@UEBA_NXZ.c)
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x1801035B0 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 * Callees:
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x180076440 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 */

char CClassicWindow::s_ShouldHaveAppView()
{
  char ShouldShowInSwitchers; // al
  char v1; // cl
  char v2; // dl

  ShouldShowInSwitchers = CClassicWindow::s_ShouldShowInSwitchers();
  v2 = 0;
  if ( ShouldShowInSwitchers || (v1 & 5) != 0 )
    return 1;
  return v2;
}
