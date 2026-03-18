/*
 * XREFs of ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211D50
 * Callers:
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 *     xxxHandleNCMouseGuys @ 0x1C0211F94 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0211E68 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall MoveWithArrangementAllowed(struct tagWND *a1)
{
  bool result; // al

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0;
  result = 1;
  if ( (dword_1C03203BC & 1) == 0 || (dword_1C03203BC & 8) == 0 )
    return 0;
  return result;
}
