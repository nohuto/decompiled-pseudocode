/*
 * XREFs of ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18004B818
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18002CC58 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18007E66C (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800253F0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x18004B918 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     IsOpenThemeDataPresent @ 0x18004E738 (IsOpenThemeDataPresent.c)
 *     ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x18008EDD4 (--_GCWindowArrangementTransition@@QEAAPEAXI@Z.c)
 */

void __fastcall CDesktopManager::UnloadTheme(CDesktopManager *this, __int64 a2)
{
  unsigned int v3; // edx
  __int64 v4; // rdi
  CWindowArrangementTransition *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  HMODULE v11; // rcx

  if ( (unsigned __int8)IsOpenThemeDataPresent(this, a2) )
  {
    v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
    if ( v4 )
    {
      v5 = *(CWindowArrangementTransition **)(v4 + 512);
      if ( v5 )
      {
        CWindowArrangementTransition::`scalar deleting destructor'(v5, v3);
        *(_QWORD *)(v4 + 512) = 0LL;
      }
    }
    CTopLevelWindow::CleanupThemeStatics();
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)&CWindowIconic::s_rgpBitmapPendingImages, 1);
    v6 = (void *)*((_QWORD *)this + 76);
    if ( v6 )
    {
      CloseThemeData(v6);
      *((_QWORD *)this + 76) = 0LL;
    }
    v7 = (void *)*((_QWORD *)this + 78);
    if ( v7 )
    {
      CloseThemeData(v7);
      *((_QWORD *)this + 78) = 0LL;
    }
    v8 = (void *)*((_QWORD *)this + 79);
    if ( v8 )
    {
      CloseThemeData(v8);
      *((_QWORD *)this + 79) = 0LL;
    }
    v9 = (void *)*((_QWORD *)this + 80);
    if ( v9 )
    {
      CloseThemeData(v9);
      *((_QWORD *)this + 80) = 0LL;
    }
    v10 = (void *)*((_QWORD *)this + 81);
    if ( v10 )
    {
      CloseThemeData(v10);
      *((_QWORD *)this + 81) = 0LL;
    }
    v11 = (HMODULE)*((_QWORD *)this + 77);
    if ( v11 )
    {
      FreeLibrary(v11);
      *((_QWORD *)this + 77) = 0LL;
    }
  }
}
