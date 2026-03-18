/*
 * XREFs of ??$?0UKeyframeData@@$0?0X@?$span@$$CBUKeyframeData@@$0?0@gsl@@QEAA@AEBV?$span@UKeyframeData@@$0?0@1@@Z @ 0x1801C392C
 * Callers:
 *     ?Setup@CParticleEmitter@@IEAAXXZ @ 0x1801C6B1C (-Setup@CParticleEmitter@@IEAAXXZ.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 *__fastcall gsl::span<KeyframeData const,-1>::span<KeyframeData const,-1>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *a2;
  if ( *a2 < 0 || (v3 = a2[1], *a1 = v2, (a1[1] = v3) == 0) && v2 )
  {
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x1801C395ALL);
  }
  return a1;
}
