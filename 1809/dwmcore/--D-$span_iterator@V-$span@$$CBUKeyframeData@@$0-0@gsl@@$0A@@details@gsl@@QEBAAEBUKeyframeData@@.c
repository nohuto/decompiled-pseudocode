/*
 * XREFs of ??D?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEBUKeyframeData@@XZ @ 0x1801DD424
 * Callers:
 *     ?Convert@?$LinearKeyframeAnimation@M@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD660 (-Convert@-$LinearKeyframeAnimation@M@Particles@@SAJW4KeyframeInput@2@AEBV-$span@$$CBUKeyframeDat.c)
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD830 (-Convert@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DDA08 (-Convert@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::details::span_iterator<gsl::span<KeyframeData const,-1>,0>::operator*(gsl::details *a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 == **(_QWORD **)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1801DD44ALL);
  }
  return *(_QWORD *)(*(_QWORD *)a1 + 8LL) + 48 * v1;
}
