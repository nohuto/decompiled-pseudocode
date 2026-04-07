/*
 * XREFs of ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x18003DA64
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800196D4 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x18003D9D0 (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJIHH@Z @ 0x18008A35C (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJIHH@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x18008E844 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMatrixTransformProxy::Update(CMatrixTransformProxy *this, const struct _MilMatrix3x2D *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _MilMatrix3x2D *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                  + 1072LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
