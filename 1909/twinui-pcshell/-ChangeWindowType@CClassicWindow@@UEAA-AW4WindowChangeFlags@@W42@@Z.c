/*
 * XREFs of ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x180076870
 * Callers:
 *     <none>
 * Callees:
 *     ?s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x180076970 (-s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800769B0 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x180149A20 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 */

__int64 __fastcall CClassicWindow::ChangeWindowType(CClassicWindow *a1, __int16 a2)
{
  unsigned int v2; // esi
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  char v7; // cl
  char HaveAppView; // al
  unsigned int v9; // r8d
  unsigned __int8 v10; // r9
  char ShouldShowInSwitchers; // al
  unsigned __int8 v12; // dl

  v2 = *((_DWORD *)a1 + 18);
  if ( (a2 & 1) != 0 )
  {
    *((_DWORD *)a1 + 18) = v2 | 4;
  }
  else if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)a1 + 18) = v2 & 0xFFFFFFFB;
    CClassicWindow::SetOwner(a1, 0LL);
  }
  if ( (a2 & 4) != 0 )
  {
    v5 = *((_DWORD *)a1 + 18) & 0xFFFFFFFC | 1;
    *((_DWORD *)a1 + 18) = v5;
  }
  else
  {
    if ( (a2 & 8) != 0 )
      *((_DWORD *)a1 + 18) &= ~1u;
    v5 = *((_DWORD *)a1 + 18);
  }
  if ( (a2 & 0x20) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 2u;
  }
  else
  {
    if ( (a2 & 0x40) == 0 )
      goto LABEL_8;
    *((_DWORD *)a1 + 18) &= ~2u;
  }
  v5 = *((_DWORD *)a1 + 18);
LABEL_8:
  if ( (a2 & 0x200) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 8u;
  }
  else
  {
    if ( (a2 & 0x400) == 0 )
      goto LABEL_12;
    *((_DWORD *)a1 + 18) &= ~8u;
  }
  v5 = *((_DWORD *)a1 + 18);
LABEL_12:
  v6 = a2 & 0x10;
  v7 = v2 ^ v5;
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)v5) & 4) != 0 )
    v6 |= 2 - ((v5 & 4) != 0);
  if ( (v7 & 1) != 0 )
    v6 |= 4 * ((v5 & 1) == 0) + 4;
  if ( (v7 & 2) != 0 )
    v6 |= (v5 & 2) != 0 ? 32 : 64;
  CClassicWindow::s_ShouldHaveAppView(v5);
  HaveAppView = CClassicWindow::s_ShouldHaveAppView(v2);
  if ( HaveAppView != v10 )
    v6 |= ((v10 ^ 1) << 7) + 128;
  CClassicWindow::s_ShouldShowInSwitchers(v9);
  ShouldShowInSwitchers = CClassicWindow::s_ShouldShowInSwitchers(v2);
  if ( ShouldShowInSwitchers != v12 )
    v6 |= ((v12 ^ 1) << 11) + 2048;
  return v6;
}
