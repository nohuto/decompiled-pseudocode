/*
 * XREFs of ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180165870
 * Callers:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180016534 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003082C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180039420 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x180068040 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180075DB0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180199D8C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801B32A8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801B99C4 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800307F0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 */

char __fastcall CShapePtr::IsAxisAlignedRectangle(CShape **this)
{
  char v1; // bl

  v1 = 0;
  if ( *this )
    return CShape::IsAxisAlignedRectangle(*this) != 0;
  return v1;
}
