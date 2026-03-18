/*
 * XREFs of ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x1801ACE54
 * Callers:
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x180263AB4 (-CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x1802642B0 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x18021D06C (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 */

char __fastcall CBitmapRealization::CalcRotationTransform(
        CBitmapRealization *this,
        float a2,
        float a3,
        struct CMILMatrix *a4)
{
  char v4; // bl
  enum DXGI_MODE_ROTATION v6; // eax

  v4 = 0;
  *(_OWORD *)a4 = _xmm;
  *((_WORD *)a4 + 32) = 32085;
  *((_OWORD *)a4 + 1) = _xmm;
  *((_OWORD *)a4 + 2) = _xmm;
  *((_OWORD *)a4 + 3) = _xmm;
  if ( *((int *)this + 68) >= 2 )
  {
    v6 = (*(unsigned int (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 72LL))(this);
    if ( v6 != DXGI_MODE_ROTATION_IDENTITY )
    {
      CMILMatrix::SetToRotation(a4, a2, a3, v6);
      return 1;
    }
  }
  return v4;
}
