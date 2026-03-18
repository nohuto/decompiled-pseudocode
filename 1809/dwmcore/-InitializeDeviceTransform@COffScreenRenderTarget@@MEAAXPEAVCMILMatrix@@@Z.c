/*
 * XREFs of ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x180176310
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180032B60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801B695C (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1801E25E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 */

void __fastcall COffScreenRenderTarget::InitializeDeviceTransform(COffScreenRenderTarget *this, struct CMILMatrix *a2)
{
  CTransform3D *v4; // rcx
  const struct CMILMatrix *Matrix; // rax
  float v6; // [rsp+30h] [rbp+8h] BYREF
  float v7; // [rsp+40h] [rbp+18h] BYREF
  float v8; // [rsp+48h] [rbp+20h] BYREF

  v4 = (CTransform3D *)*((_QWORD *)this + 23);
  if ( v4 )
  {
    Matrix = CTransform3D::GetMatrix(
               v4,
               (const struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 15) + 24LL) + 132LL));
    *(_OWORD *)a2 = *(_OWORD *)Matrix;
    *((_OWORD *)a2 + 1) = *((_OWORD *)Matrix + 1);
    *((_OWORD *)a2 + 2) = *((_OWORD *)Matrix + 2);
    *((_OWORD *)a2 + 3) = *((_OWORD *)Matrix + 3);
    *((_DWORD *)a2 + 16) = *((_DWORD *)Matrix + 16);
  }
  else
  {
    *(_OWORD *)a2 = _xmm;
    *((_WORD *)a2 + 32) = 32085;
    *((_OWORD *)a2 + 1) = _xmm;
    *((_OWORD *)a2 + 2) = _xmm;
    *((_OWORD *)a2 + 3) = _xmm;
  }
  CMILMatrix::Translate(a2, *((float *)this + 49), *((float *)this + 50));
  if ( CVisual::GetEffectiveOffset(*(CVisual **)(*((_QWORD *)this + 15) + 24LL), &v7, &v6, &v8) )
    CMILMatrix::PrependTranslate(a2, COERCE_FLOAT(LODWORD(v7) ^ _xmm), COERCE_FLOAT(LODWORD(v6) ^ _xmm));
}
