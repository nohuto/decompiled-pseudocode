/*
 * XREFs of ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@_N@Z @ 0x180037218
 * Callers:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x1800075F8 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CTopLevelWindow::GetRootVisualNoAddRef(CTopLevelWindow *this, char a2)
{
  if ( a2 )
    return (struct CVisual *)*((_QWORD *)this + 66);
  else
    return (struct CVisual *)*((_QWORD *)this + 32);
}
