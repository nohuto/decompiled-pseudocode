/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1C01648E0
 * Callers:
 *     rimProcessHidInput @ 0x1C012704C (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0128240 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMVirtProcessHidRawInput @ 0x1C0128AE0 (RIMVirtProcessHidRawInput.c)
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
