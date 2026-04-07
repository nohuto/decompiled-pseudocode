/*
 * XREFs of ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18003A638
 * Callers:
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18003A5A4 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180018E44 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180028A60 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180028EC8 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CDesktopManager::ShowDesktopWindowReplacement(CDesktopManager *this, char a2, __int64 a3)
{
  char v4; // bl
  _BYTE *Element; // rax

  v4 = a2 && !*((_BYTE *)this + 20);
  if ( *((_BYTE *)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                    (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 8LL),
                    a3)
       + 72) != v4 )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 8LL),
                a3);
    if ( Element )
      Element[72] = v4;
    if ( v4 )
      CDesktopManager::CreateDesktopWindowForLogonDesktop(a3);
    else
      CDesktopManager::DestroyDesktopWindowReplacement(a3);
  }
}
