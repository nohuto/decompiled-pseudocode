/*
 * XREFs of ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18022A2B0
 * Callers:
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x18022A250 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18022A98C (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x18022AA64 (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18024AF68 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18024B1F0 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18024BAD0 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1802296D0 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 */

char **__fastcall Path::SegmentCollection::const_iterator::operator++(char **a1)
{
  *a1 += (unsigned int)Path::Segment::GetSize(**a1);
  return a1;
}
