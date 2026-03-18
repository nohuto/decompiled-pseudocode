/*
 * XREFs of ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x18022AE3C
 * Callers:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18022A0A4 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18024B1F0 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18022ADD0 (-_Reallocate_exactly@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<unsigned char>::reserve(__int64 a1, SIZE_T a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  if ( a2 > result )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    return std::vector<unsigned char>::_Reallocate_exactly(a1, a2);
  }
  return result;
}
