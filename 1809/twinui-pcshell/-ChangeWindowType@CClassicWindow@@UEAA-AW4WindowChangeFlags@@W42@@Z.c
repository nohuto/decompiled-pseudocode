/*
 * XREFs of ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x1801035B0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x180076400 (-s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x180076440 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x1801045E0 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 */

__int64 __fastcall CClassicWindow::ChangeWindowType(CClassicWindow *a1, unsigned int a2)
{
  int v2; // esi
  __int16 v3; // bx
  bool v4; // zf
  unsigned int v6; // ebx
  char v7; // cl
  char HaveAppView; // al
  char v9; // r8
  unsigned __int8 v10; // r9
  char ShouldShowInSwitchers; // al
  unsigned __int8 v12; // dl

  v2 = *((_DWORD *)a1 + 18);
  v3 = a2;
  v4 = (a2 & 1) == 0;
  LOBYTE(a2) = v2;
  if ( v4 )
  {
    if ( (v3 & 2) != 0 )
    {
      *((_DWORD *)a1 + 18) = v2 & 0xFFFFFFFB;
      CClassicWindow::SetOwner(a1, 0LL);
      a2 = *((_DWORD *)a1 + 18);
    }
  }
  else
  {
    LOBYTE(a2) = v2 | 4;
    *((_DWORD *)a1 + 18) = v2 | 4;
  }
  if ( (v3 & 4) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 1u;
    a2 = *((_DWORD *)a1 + 18) & 0xFFFFFFFD;
    *((_DWORD *)a1 + 18) = a2;
  }
  else if ( (v3 & 8) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~1u;
    a2 = *((_DWORD *)a1 + 18);
  }
  if ( (v3 & 0x20) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 2u;
  }
  else
  {
    if ( (v3 & 0x40) == 0 )
      goto LABEL_14;
    *((_DWORD *)a1 + 18) &= ~2u;
  }
  a2 = *((_DWORD *)a1 + 18);
LABEL_14:
  if ( (v3 & 0x200) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 8u;
  }
  else
  {
    if ( (v3 & 0x400) == 0 )
      goto LABEL_19;
    *((_DWORD *)a1 + 18) &= ~8u;
  }
  a2 = *((_DWORD *)a1 + 18);
LABEL_19:
  v6 = v3 & 0x10;
  v7 = v2 ^ a2;
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)a2) & 4) != 0 )
    v6 |= 2 - ((a2 & 4) != 0);
  if ( (v7 & 1) != 0 )
    v6 |= 4 * ((a2 & 1) == 0) + 4;
  if ( (v7 & 2) != 0 )
    v6 |= (a2 & 2) != 0 ? 32 : 64;
  CClassicWindow::s_ShouldHaveAppView();
  HaveAppView = CClassicWindow::s_ShouldHaveAppView();
  if ( HaveAppView != v10 )
    v6 |= ((v10 ^ 1) << 7) + 128;
  CClassicWindow::s_ShouldShowInSwitchers(v9);
  ShouldShowInSwitchers = CClassicWindow::s_ShouldShowInSwitchers(v2);
  if ( ShouldShowInSwitchers != v12 )
    v6 |= ((v12 ^ 1) << 11) + 2048;
  return v6;
}
