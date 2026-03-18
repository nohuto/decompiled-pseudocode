/*
 * XREFs of ??$_Sort_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x18020B9B0
 * Callers:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x18020BA34 (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 * Callees:
 *     ??$_Pop_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x18020B838 (--$_Pop_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YA.c)
 */

unsigned __int64 __fastcall std::_Sort_heap_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 v3; // rbx
  __int128 i; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 result; // rax

  v3 = a2;
  for ( i = (a2 - a1) * (__int128)0x4924924924924925LL; ; i = (v3 - a1) * (__int128)0x4924924924924925LL )
  {
    v7 = *((__int64 *)&i + 1) >> 3;
    result = v7 >> 63;
    if ( (__int64)((v7 >> 63) + v7) < 2 )
      break;
    std::_Pop_heap_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
      a1,
      v3,
      a3);
    v3 -= 28LL;
  }
  return result;
}
