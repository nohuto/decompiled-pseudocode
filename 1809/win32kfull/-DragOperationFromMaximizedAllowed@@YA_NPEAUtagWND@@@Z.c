/*
 * XREFs of ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0156E9C
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C0156CFC (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0156ECC (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall DragOperationFromMaximizedAllowed(struct tagWND *a1)
{
  bool result; // al

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0;
  result = 1;
  if ( (dword_1C030D4B4 & 1) == 0 || (dword_1C030D4B4 & 2) == 0 )
    return 0;
  return result;
}
