/*
 * XREFs of ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001AECC
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001AEB0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x180212520 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 *     ?GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180212570 (-GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180061D20 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CTransform3DGroup::GetRealizationWorker(
        CTransform3DGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  unsigned int v6; // ecx
  __int64 v7; // rdi
  CTransform3D **v8; // rsi
  unsigned __int64 v9; // rbx
  const struct CMILMatrix *Matrix; // rax

  *(_OWORD *)a3 = _xmm;
  *((_WORD *)a3 + 32) = 32085;
  *((_OWORD *)a3 + 1) = _xmm;
  *((_OWORD *)a3 + 2) = _xmm;
  *((_OWORD *)a3 + 3) = _xmm;
  v6 = *((_DWORD *)this + 8) ^ ((unsigned __int8)*((_DWORD *)this + 8) ^ (unsigned __int8)(*((_DWORD *)this + 8) + 2)) & 6;
  *((_DWORD *)this + 8) = v6;
  if ( (v6 & 6) == 2 )
  {
    v7 = 0LL;
    v8 = (CTransform3D **)*((_QWORD *)this + 19);
    v9 = (unsigned __int64)(*((_QWORD *)this + 20) - (_QWORD)v8 + 7LL) >> 3;
    if ( (unsigned __int64)v8 > *((_QWORD *)this + 20) )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        Matrix = CTransform3D::GetMatrix(*v8, a2);
        CMILMatrix::Multiply(a3, Matrix);
        ++v7;
        ++v8;
      }
      while ( v7 != v9 );
      v6 = *((_DWORD *)this + 8);
    }
  }
  *((_DWORD *)this + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(2 * (v6 >> 1) - 2)) & 6;
}
