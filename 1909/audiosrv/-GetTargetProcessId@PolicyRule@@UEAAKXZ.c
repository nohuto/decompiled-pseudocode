/*
 * XREFs of ?GetTargetProcessId@PolicyRule@@UEAAKXZ @ 0x18012AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAAEAPEAUSampleDataBlock@CMonitor@@XZ @ 0x18010DDF0 (-GetHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 */

__int64 __fastcall PolicyRule::GetTargetProcessId(PolicyRule *this)
{
  _QWORD *Head; // rax

  if ( (*((_BYTE *)this + 80) & 2) == 0 )
    return 0LL;
  Head = (_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)this + 2);
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Head + 40LL))(*Head);
}
