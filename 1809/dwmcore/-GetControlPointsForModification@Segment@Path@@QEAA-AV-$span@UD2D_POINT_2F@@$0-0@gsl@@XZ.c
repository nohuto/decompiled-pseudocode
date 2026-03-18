/*
 * XREFs of ?GetControlPointsForModification@Segment@Path@@QEAA?AV?$span@UD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x18021C1E0
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18021EA48 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x18021C160 (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 */

gsl::details **__fastcall Path::Segment::GetControlPointsForModification(_BYTE *a1, gsl::details **a2)
{
  gsl::details *v3; // rcx
  gsl::details *v4; // rax
  gsl::details *v6; // [rsp+20h] [rbp-18h] BYREF
  gsl::details *v7; // [rsp+28h] [rbp-10h]

  Path::Segment::GetControlPoints(a1, &v6);
  v3 = v6;
  *a2 = v6;
  if ( (__int64)v3 < 0 || (v4 = v7, a2[1] = v7, !v4) && v3 )
  {
    gsl::details::terminate(v3);
    JUMPOUT(0x18021C221LL);
  }
  return a2;
}
