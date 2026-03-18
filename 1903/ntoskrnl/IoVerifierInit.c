/*
 * XREFs of IoVerifierInit @ 0x14096293C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140964AD4 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x1409EF070 (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1402945C8 (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x1409628A4 (IoVerifierCheckForSettingsChange.c)
 */

__int64 __fastcall IoVerifierInit(char a1)
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    return IoVerifierCheckForSettingsChange(a1);
  }
  return result;
}
