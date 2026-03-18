/*
 * XREFs of ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800CB5FC
 * Callers:
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800CB5A0 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CComponentTransform2D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801CDF50 (-GetRealization@CComponentTransform2D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z @ 0x18021B7F0 (-SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z.c)
 */

void __fastcall CMILMatrix::Set2DAffineMatrix(
        CMILMatrix *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  CMILMatrix::SetMatrix(this, a2, a3, 0.0, 0.0, a4, a5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, a6, a7, 0.0, 1.0);
  *((_BYTE *)this + 65) &= 0x3Fu;
  *((_BYTE *)this + 65) |= 0x40u;
}
