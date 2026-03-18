/*
 * XREFs of ?AddRef@CMesh2DEffect@@WBA@EAAKXZ @ 0x1800ED660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::AddRef(__int64 a1)
{
  return BamoDataProviderProxy::AddRef((BamoDataProviderProxy *)(a1 - 16));
}
