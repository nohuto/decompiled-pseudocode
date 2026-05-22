/*
 * XREFs of ?AddRef@GazeProcessor@@W7EAAKXZ @ 0x180038900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::AddRef(__int64 a1)
{
  return DWMFocusedInputTarget::AddRef((DWMFocusedInputTarget *)(a1 - 8));
}
