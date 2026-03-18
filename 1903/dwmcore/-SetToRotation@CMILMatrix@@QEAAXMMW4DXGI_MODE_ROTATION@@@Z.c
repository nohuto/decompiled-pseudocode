/*
 * XREFs of ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x18021D06C
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800718A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x18015BD64 (-CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x1801ACE54 (-CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18006FC34 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180072034 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18021CBC4 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18021CBFC (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::SetToRotation(CMILMatrix *this, float a2, float a3, enum DXGI_MODE_ROTATION a4)
{
  float v4; // xmm7_4
  int v5; // r9d
  int v6; // r9d
  CMILMatrix *v7; // rcx

  v4 = a3;
  *((_WORD *)this + 32) = 32085;
  *(_OWORD *)this = _xmm;
  *((_OWORD *)this + 1) = _xmm;
  *((_OWORD *)this + 2) = _xmm;
  *((_OWORD *)this + 3) = _xmm;
  v5 = a4 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return;
      CMILMatrix::Rotate90(this);
      a3 = 0.0;
      a2 = v4;
    }
    else
    {
      CMILMatrix::Scale(this, -1.0, -1.0, 1.0);
    }
  }
  else
  {
    CMILMatrix::Rotate270(this);
    a3 = a2;
    a2 = 0.0;
  }
  CMILMatrix::Translate(v7, a2, a3);
}
