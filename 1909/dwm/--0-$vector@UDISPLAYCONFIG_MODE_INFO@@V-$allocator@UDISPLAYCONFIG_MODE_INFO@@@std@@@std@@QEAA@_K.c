/*
 * XREFs of ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x140006B58
 * Callers:
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x1400073A8 (BlackScreenDiagnostics--GetVidPnOwnership.c)
 * Callees:
 *     memset_0 @ 0x1400040EC (memset_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400068C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1400090C4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::vector<DISPLAYCONFIG_MODE_INFO>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    v4 = a2 << 6;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(a2 << 6);
    v6 = (_QWORD *)((char *)v5 + v4);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 16) = v6;
    if ( a2 )
    {
      memset_0(v5, 0, a2 << 6);
      v5 = v6;
    }
    *(_QWORD *)(a1 + 8) = v5;
  }
  return a1;
}
