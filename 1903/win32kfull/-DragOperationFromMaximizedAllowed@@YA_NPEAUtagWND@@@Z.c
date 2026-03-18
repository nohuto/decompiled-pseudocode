/*
 * XREFs of ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212264
 * Callers:
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C02124D4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C02123A8 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall DragOperationFromMaximizedAllowed(struct tagWND *a1)
{
  bool result; // al

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0;
  result = 1;
  if ( (dword_1C03223BC & 1) == 0 || (dword_1C03223BC & 2) == 0 )
    return 0;
  return result;
}
