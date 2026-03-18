/*
 * XREFs of SizeWithSnapAllowed @ 0x1C01D6774
 * Callers:
 *     xxxHandleNCMouseGuys @ 0x1C01359C0 (xxxHandleNCMouseGuys.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0135B88 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SizeWithSnapAllowed(struct tagWND *a1)
{
  __int64 result; // rax

  if ( !WindowArrangementApplicable(a1) )
    return 0LL;
  result = 1LL;
  if ( (dword_1C031D794 & 1) == 0 || (dword_1C031D794 & 4) == 0 )
    return 0LL;
  return result;
}
