/*
 * XREFs of ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800B63B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderData::AddOcclusionInformation(
        CRenderData *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CRenderData::Draw(this, a2, 2LL);
}
