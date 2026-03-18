/*
 * XREFs of ??0?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@@Z @ 0x140006BE4
 * Callers:
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x1400073A8 (BlackScreenDiagnostics--GetVidPnOwnership.c)
 * Callees:
 *     memset_0 @ 0x1400040EC (memset_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400068C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1400090C4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::vector<DISPLAYCONFIG_PATH_INFO>(
        __int64 a1,
        unsigned __int64 a2)
{
  size_t v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rbp

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x38E38E38E38E38ELL )
      std::_Xlength_error((const char *)a1);
    v4 = 9 * a2;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(72 * a2);
    *(_QWORD *)a1 = v5;
    v6 = &v5[v4];
    *(_QWORD *)(a1 + 16) = &v5[v4];
    if ( a2 )
    {
      memset_0(v5, 0, v4 * 8);
      v5 = v6;
    }
    *(_QWORD *)(a1 + 8) = v5;
  }
  return a1;
}
