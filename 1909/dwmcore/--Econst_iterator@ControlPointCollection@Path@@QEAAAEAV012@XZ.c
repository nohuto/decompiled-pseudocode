/*
 * XREFs of ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x18022A250
 * Callers:
 *     ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x18022A754 (-GetControlPointCount@CPathData@@QEBAIXZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18024B1F0 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1802295A4 (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18022A2B0 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

_BYTE **__fastcall Path::ControlPointCollection::const_iterator::operator++(_BYTE **a1)
{
  int v1; // ebx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = ++*((_DWORD *)a1 + 4);
  if ( v1 == *(_DWORD *)Path::Segment::GetControlPoints(*a1, v4) )
  {
    *((_DWORD *)a1 + 4) = 0;
    do
      Path::SegmentCollection::const_iterator::operator++(a1);
    while ( *a1 != a1[1] && !*Path::Segment::GetControlPoints(*a1, v4) );
  }
  return a1;
}
