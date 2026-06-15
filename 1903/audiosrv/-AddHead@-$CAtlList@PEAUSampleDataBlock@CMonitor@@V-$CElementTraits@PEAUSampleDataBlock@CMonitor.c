/*
 * XREFs of ?AddHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x18010E068
 * Callers:
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801112A0 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAUSampleDataBlock@CMonitor@@PEAV312@1@Z @ 0x18010FB3C (-NewNode@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 */

__int64 __fastcall ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddHead(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax

  result = ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::NewNode(
             a1,
             a2,
             0LL,
             *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
