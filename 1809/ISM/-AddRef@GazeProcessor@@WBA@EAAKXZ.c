/*
 * XREFs of ?AddRef@GazeProcessor@@WBA@EAAKXZ @ 0x18008EA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::AddRef(__int64 a1)
{
  return DWMFocusedInputTarget::AddRef((DWMFocusedInputTarget *)(a1 - 16));
}
