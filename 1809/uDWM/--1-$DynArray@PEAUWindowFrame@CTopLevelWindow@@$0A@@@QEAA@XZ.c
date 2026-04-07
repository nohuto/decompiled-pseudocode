/*
 * XREFs of ??1?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ @ 0x18004BDA8
 * Callers:
 *     _dynamic_atexit_destructor_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x18004EBE0 (_dynamic_atexit_destructor_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 * Callees:
 *     <none>
 */

__int64 DynArray<CTopLevelWindow::WindowFrame *,0>::~DynArray<CTopLevelWindow::WindowFrame *,0>()
{
  return DynArrayImpl<0>::~DynArrayImpl<0>(&CTopLevelWindow::s_rgpwfWindowFrames);
}
