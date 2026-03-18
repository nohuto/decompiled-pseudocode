/*
 * XREFs of ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x18020A344
 * Callers:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x18020A344 (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 *     ?Close@CPathEmitterArea@EmitterShapes@@EEAAJXZ @ 0x18020AB00 (-Close@CPathEmitterArea@EmitterShapes@@EEAAJXZ.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@PEAU123@QEAU123@P6A_NAEBU123@2@Z@Z @ 0x180209A74 (--$_Insertion_sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@s.c)
 *     ??$_Make_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x180209BB0 (--$_Make_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@Y.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YA?AU?$pair@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@PEAU123@@0@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU234@1@Z@Z @ 0x180209D54 (--$_Partition_by_median_guess_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAE.c)
 *     ??$_Sort_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x18020A2C0 (--$_Sort_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@Y.c)
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x18020A344 (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 */

char *__fastcall std::_Sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        char *a1,
        char *a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(unsigned __int64, unsigned __int64))
{
  char *v4; // rbx
  char *v7; // rdi
  unsigned __int64 v8; // rdx
  char *result; // rax
  __int64 v10; // rdx
  char *v11; // [rsp+20h] [rbp-18h] BYREF
  char *v12; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v7 = a1;
  v8 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0x4924924924924925LL) >> 64) >> 3;
  result = (char *)(v8 >> 63);
  v10 = (v8 >> 63) + v8;
  if ( v10 <= 32 )
    goto LABEL_9;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
      (unsigned __int64 *)&v11,
      (unsigned __int64)v7,
      (unsigned __int64)v4,
      a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (v11 - v7) / 28 >= (v4 - v12) / 28 )
    {
      std::_Sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        v12,
        v4,
        a3,
        a4);
      v4 = v11;
    }
    else
    {
      std::_Sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        v7,
        v11,
        a3,
        a4);
      v7 = v12;
    }
    result = (char *)((unsigned __int64)((unsigned __int128)((v4 - v7) * (__int128)0x4924924924924925LL) >> 64) >> 63);
    v10 = (v4 - v7) / 28;
  }
  while ( v10 > 32 );
  if ( v10 <= 32 )
  {
LABEL_9:
    if ( v10 >= 2 )
      return std::_Insertion_sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
               v7,
               v4,
               (unsigned __int8 (__fastcall *)(__int128 *, char *))a4);
  }
  else
  {
    std::_Make_heap_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
      (__int64)v7,
      (__int64)v4,
      (__int64)a4);
    return (char *)std::_Sort_heap_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
                     (__int64)v7,
                     (__int64)v4,
                     (unsigned __int8 (__fastcall *)(__int64, __int64))a4);
  }
  return result;
}
