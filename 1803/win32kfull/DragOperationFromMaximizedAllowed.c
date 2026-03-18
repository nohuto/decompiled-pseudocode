/*
 * XREFs of DragOperationFromMaximizedAllowed @ 0x1C0135B58
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C01359C0 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0135B88 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall DragOperationFromMaximizedAllowed(struct tagWND *a1)
{
  __int64 result; // rax

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0LL;
  result = 1LL;
  if ( (dword_1C031D794 & 1) == 0 || (dword_1C031D794 & 2) == 0 )
    return 0LL;
  return result;
}
