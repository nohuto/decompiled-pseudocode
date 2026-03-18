/*
 * XREFs of ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212358
 * Callers:
 *     xxxInitializeMoveSizeData @ 0x1C0201288 (xxxInitializeMoveSizeData.c)
 *     xxxHandleNCMouseGuys @ 0x1C02124D4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C02123A8 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall SizeWithSnapAllowed(struct tagWND *a1)
{
  bool result; // al

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0;
  result = 1;
  if ( (dword_1C03223BC & 1) == 0 || (dword_1C03223BC & 4) == 0 )
    return 0;
  return result;
}
