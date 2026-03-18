/*
 * XREFs of ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x140006ADC
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x140006CA0 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     memset_0 @ 0x1400040EC (memset_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400068C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1400090C4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::vector<unsigned char>(__int64 a1, size_t a2)
{
  _QWORD *v4; // rax
  char *v5; // rbx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(a2);
    *(_QWORD *)a1 = v4;
    v5 = (char *)v4 + a2;
    *(_QWORD *)(a1 + 16) = (char *)v4 + a2;
    memset_0(v4, 0, a2);
    *(_QWORD *)(a1 + 8) = v5;
  }
  return a1;
}
