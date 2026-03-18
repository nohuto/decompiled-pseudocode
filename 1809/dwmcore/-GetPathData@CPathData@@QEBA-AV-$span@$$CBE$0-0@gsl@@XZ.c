/*
 * XREFs of ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x18018C3D4
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180051474 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18021EA48 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 *__fastcall CPathData::GetPathData(gsl::details *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *((_QWORD *)a1 + 3);
  v3 = *((_QWORD *)a1 + 4) - v2;
  *a2 = v3;
  if ( v3 < 0 || (a2[1] = v2) == 0 && v3 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x18018C403LL);
  }
  return a2;
}
