/*
 * XREFs of ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18021CBA4
 * Callers:
 *     ?AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z @ 0x18021C8D0 (-AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z.c)
 *     ?AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z @ 0x18021C950 (-AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z.c)
 *     ?AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x18021C9A0 (-AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z @ 0x18021CA20 (-AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z.c)
 *     ?AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18021CA70 (-AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z @ 0x18021CAE0 (-AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z.c)
 *     ?AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z @ 0x18021CB40 (-AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z.c)
 *     ?BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18021CC50 (-BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18021CCC0 (-EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18021C27C (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x18021C554 (--$insert@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@X@-$vector@EV-$allocator@E@s.c)
 */

void __fastcall CPathData::AppendSegment(CPathData *this, struct Path::Segment *a2)
{
  char v4; // al
  unsigned int Size; // eax
  _BYTE *v6; // r8
  __int128 v7; // xmm0
  _QWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  __int128 v10; // [rsp+50h] [rbp-10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+10h] BYREF

  if ( *(_BYTE *)a2 )
    v4 = *((_BYTE *)this + 57);
  else
    v4 = 0;
  *((_BYTE *)a2 + 1) = v4;
  *((_BYTE *)this + 57) = 0;
  Size = Path::Segment::GetSize(*(_BYTE *)a2);
  v6 = (_BYTE *)*((_QWORD *)this + 4);
  *(_QWORD *)&v9 = v8;
  *((_QWORD *)&v9 + 1) = Size;
  v7 = v9;
  v8[0] = Size;
  v9 = (unsigned __int64)v8;
  v10 = v7;
  v8[1] = a2;
  std::vector<unsigned char>::insert<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>,void>(
    (_QWORD *)this + 3,
    &v11,
    v6,
    &v9,
    &v10);
}
