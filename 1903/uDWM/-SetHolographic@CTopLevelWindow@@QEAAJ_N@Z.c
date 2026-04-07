/*
 * XREFs of ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008E134
 * Callers:
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800103E0 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017100 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F830 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SetHolographic(CTopLevelWindow *this, char a2)
{
  unsigned int v3; // ebx
  char v4; // cl
  int updated; // eax

  v3 = 0;
  v4 = *((_BYTE *)this + 241);
  if ( a2 != ((v4 & 2) != 0) )
  {
    *((_BYTE *)this + 241) = (2 * a2) | v4 & 0xFD;
    updated = CTopLevelWindow::UpdateWindowVisuals(this);
    v3 = updated;
    if ( updated >= 0 )
      CTopLevelWindow::ShowWindow(this, (*((_BYTE *)this + 241) & 2) == 0);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x155u);
  }
  return v3;
}
