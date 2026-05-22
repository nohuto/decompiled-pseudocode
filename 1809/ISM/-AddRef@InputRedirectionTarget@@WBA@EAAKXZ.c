/*
 * XREFs of ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x180005760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputRedirectionTarget::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 16));
}
