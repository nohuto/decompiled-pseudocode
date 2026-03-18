/*
 * XREFs of ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800D14F0
 * Callers:
 *     _anonymous_namespace_::Compressor::Compress @ 0x1800D13DC (_anonymous_namespace_--Compressor--Compress.c)
 *     ?LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1801BC724 (-LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV-$vector@EV-$allocator@E@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::vector<unsigned char>(__int64 a1, SIZE_T a2)
{
  char *v4; // rax
  char *v5; // rbx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(a2);
    *(_QWORD *)a1 = v4;
    v5 = &v4[a2];
    *(_QWORD *)(a1 + 16) = &v4[a2];
    memset_0(v4, 0, a2);
    *(_QWORD *)(a1 + 8) = v5;
  }
  return a1;
}
