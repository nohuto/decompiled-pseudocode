/*
 * XREFs of ?GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18021A1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTranslateTransform3D::GetRealization(
        CTranslateTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix::SetTranslation(a3, *((float *)this + 38), *((float *)this + 39), *((float *)this + 40));
}
