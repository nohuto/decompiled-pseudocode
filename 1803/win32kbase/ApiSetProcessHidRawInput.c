/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1C0141254
 * Callers:
 *     rimProcessHidInput @ 0x1C00FF234 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00FFE40 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetProcessHidRawInput(__int64 a1)
{
  __int64 result; // rax

  result = IsProcessHidRawInputSupported();
  if ( (int)result >= 0 )
    return ProcessHidRawInput(a1);
  return result;
}
