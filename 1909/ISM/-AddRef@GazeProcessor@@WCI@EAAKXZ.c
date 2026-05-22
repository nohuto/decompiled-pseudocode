/*
 * XREFs of ?AddRef@GazeProcessor@@WCI@EAAKXZ @ 0x180038940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::AddRef(__int64 a1)
{
  return DWMFocusedInputTarget::AddRef((DWMFocusedInputTarget *)(a1 - 40));
}
