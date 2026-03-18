/*
 * XREFs of ?CheckTransformAllowsOcclusion@COcclusionContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x1800C9BC0
 * Callers:
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x1800C9A40 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

__int64 __fastcall COcclusionContext::CheckTransformAllowsOcclusion(
        COcclusionContext *this,
        const struct CMILMatrix *a2,
        bool *a3)
{
  char v3; // al
  bool *v4; // r10

  v3 = CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)a2);
  *v4 = v3 != 0;
  return 0LL;
}
