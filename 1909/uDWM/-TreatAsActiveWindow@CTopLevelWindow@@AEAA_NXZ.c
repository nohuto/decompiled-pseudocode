/*
 * XREFs of ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180013168
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180014FA8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017770 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::TreatAsActiveWindow(CTopLevelWindow *this)
{
  return (*((_BYTE *)this + 584) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 90) + 607LL) & 0x10) != 0;
}
