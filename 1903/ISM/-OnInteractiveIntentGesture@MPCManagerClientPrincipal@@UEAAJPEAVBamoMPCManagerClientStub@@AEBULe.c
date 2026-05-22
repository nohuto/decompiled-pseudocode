/*
 * XREFs of ?OnInteractiveIntentGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@IIII_KI@Z @ 0x180115D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClientPrincipal::OnInteractiveIntentGesture(
        RTL_SRWLOCK **this,
        struct BamoMPCManagerClientStub *a2,
        const struct LegacyDeviceInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  return MPCManagerClient::OnInteractiveIntentGesture(this[7], a2, a3, a4, a5, a6, a7, a8, a9);
}
