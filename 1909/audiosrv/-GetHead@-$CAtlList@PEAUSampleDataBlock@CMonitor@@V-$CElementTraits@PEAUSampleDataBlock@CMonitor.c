/*
 * XREFs of ?GetHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAAEAPEAUSampleDataBlock@CMonitor@@XZ @ 0x18010DDF0
 * Callers:
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1801104F4 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?GetProcess@PolicyRule@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18012A9A0 (-GetProcess@PolicyRule@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetTargetProcessId@PolicyRule@@UEAAKXZ @ 0x18012AC80 (-GetTargetProcessId@PolicyRule@@UEAAKXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead(
        _QWORD *a1)
{
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  return *a1 + 16LL;
}
