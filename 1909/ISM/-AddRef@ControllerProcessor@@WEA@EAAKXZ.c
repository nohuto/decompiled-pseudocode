/*
 * XREFs of ?AddRef@ControllerProcessor@@WEA@EAAKXZ @ 0x180038040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 64));
}
