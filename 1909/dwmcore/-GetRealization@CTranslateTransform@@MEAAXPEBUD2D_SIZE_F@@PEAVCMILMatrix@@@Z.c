/*
 * XREFs of ?GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180005940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTranslateTransform::GetRealization(
        CTranslateTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix::SetTranslation(a3, *((float *)this + 38), *((float *)this + 39), 0.0);
}
