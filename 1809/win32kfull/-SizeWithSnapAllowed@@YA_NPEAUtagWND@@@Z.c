/*
 * XREFs of ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB3E4
 * Callers:
 *     xxxHandleNCMouseGuys @ 0x1C0156CFC (xxxHandleNCMouseGuys.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0156ECC (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall SizeWithSnapAllowed(struct tagWND *a1)
{
  bool result; // al

  if ( !WindowArrangementApplicable(a1) )
    return 0;
  result = 1;
  if ( (dword_1C030D4B4 & 1) == 0 || (dword_1C030D4B4 & 4) == 0 )
    return 0;
  return result;
}
