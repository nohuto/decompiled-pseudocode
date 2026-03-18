/*
 * XREFs of std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18003D8E8
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18003B430 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x18003D208 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     _anonymous_namespace_::Compressor::Compress @ 0x1800D18F4 (_anonymous_namespace_--Compressor--Compress.c)
 *     ?LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1801BAF84 (-LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV-$vector@EV-$allocator@E@std@@@std@@.c)
 *     ?ConsumeTipPoints@CRemoteSuperWetInkScribble@@MEAAJXZ @ 0x1801BB480 (-ConsumeTipPoints@CRemoteSuperWetInkScribble@@MEAAJXZ.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJXZ @ 0x1801BB5B0 (-ConsumeTipPoints@CSuperWetInkScribble@@MEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x18003E388 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ?_Calculate_growth@?$vector@EV?$allocator@E@std@@@std@@AEBA_K_K@Z @ 0x18003E3EC (-_Calculate_growth@-$vector@EV-$allocator@E@std@@@std@@AEBA_K_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

const char *__fastcall std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        __int64 a1,
        unsigned __int64 a2)
{
  const char *v4; // rcx
  unsigned __int64 v5; // rbp
  const char *result; // rax
  const char *v7; // rbx
  SIZE_T v8; // rdi
  char *v9; // rbx

  v4 = *(const char **)a1;
  v5 = *(_QWORD *)(a1 + 8) - (_QWORD)v4;
  result = (const char *)(*(_QWORD *)(a1 + 16) - (_QWORD)v4);
  if ( a2 > (unsigned __int64)result )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error(v4);
    v8 = std::vector<unsigned char>::_Calculate_growth(a1);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
    memset_0(&v9[v5], 0, a2 - v5);
    memmove_0(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return (const char *)std::vector<unsigned char>::_Change_array(a1, v9, a2, v8);
  }
  else if ( a2 <= v5 )
  {
    if ( a2 != v5 )
    {
      result = &v4[a2];
      *(_QWORD *)(a1 + 8) = &v4[a2];
    }
  }
  else
  {
    v7 = &v4[a2];
    result = (const char *)memset_0(*(void **)(a1 + 8), 0, (size_t)&v4[a2 - *(_QWORD *)(a1 + 8)]);
    *(_QWORD *)(a1 + 8) = v7;
  }
  return result;
}
