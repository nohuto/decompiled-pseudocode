/*
 * XREFs of ??A?$span@M$0?0@gsl@@QEBAAEAM_J@Z @ 0x1801DD404
 * Callers:
 *     ?AnimateSingle@?$LinearKeyframeAnimation@M@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD460 (-AnimateSingle@-$LinearKeyframeAnimation@M@Particles@@UEAAXAEAV-$span@M$0-0@gsl@@0@Z.c)
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD4B0 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEAAXA.c)
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD500 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEAAXA.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<float,-1>::operator[](gsl::details *a1)
{
  if ( *(__int64 *)a1 <= 0 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1801DD41CLL);
  }
  return *((_QWORD *)a1 + 1);
}
