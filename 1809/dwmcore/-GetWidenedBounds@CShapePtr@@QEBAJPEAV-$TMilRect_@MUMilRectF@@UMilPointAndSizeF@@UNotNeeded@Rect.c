/*
 * XREFs of ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801B39A0
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801B31D0 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18021DE08 (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 */

__int64 __fastcall CShapePtr::GetWidenedBounds(_QWORD *a1)
{
  unsigned int v1; // ebx
  int WidenedBounds; // eax
  __int64 v3; // rcx

  v1 = -2003292412;
  if ( *a1 )
  {
    WidenedBounds = CShape::GetWidenedBounds();
    v1 = WidenedBounds;
    if ( WidenedBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, WidenedBounds, 0x11Du);
  }
  return v1;
}
