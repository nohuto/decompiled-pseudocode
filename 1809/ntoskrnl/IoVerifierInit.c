/*
 * XREFs of IoVerifierInit @ 0x1409237D8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409265A0 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x1409B7610 (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x14027F484 (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140923740 (IoVerifierCheckForSettingsChange.c)
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
