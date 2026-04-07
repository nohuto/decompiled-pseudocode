/*
 * XREFs of ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x180035718
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180034E30 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::EdgeBorderMustBeOpaque(CTopLevelWindow *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 560)
    || (unsigned int)IsWindowArranged(*(_QWORD *)(*((_QWORD *)this + 90) + 40LL))
    || (*((_BYTE *)this + 584) & 0x20) != 0 )
  {
    return 1;
  }
  return v1;
}
