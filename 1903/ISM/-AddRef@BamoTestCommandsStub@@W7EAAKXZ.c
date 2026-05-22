/*
 * XREFs of ?AddRef@BamoTestCommandsStub@@W7EAAKXZ @ 0x180037DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoTestCommandsStub::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 8));
}
