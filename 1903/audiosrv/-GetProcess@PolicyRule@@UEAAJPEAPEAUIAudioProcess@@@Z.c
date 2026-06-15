/*
 * XREFs of ?GetProcess@PolicyRule@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18012ADE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAAEAPEAUSampleDataBlock@CMonitor@@XZ @ 0x18010E2F0 (-GetHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 */

__int64 __fastcall PolicyRule::GetProcess(PolicyRule *this, struct IAudioProcess **a2)
{
  struct IAudioProcess **Head; // rax
  struct IAudioProcess *v4; // rcx

  if ( !*((_QWORD *)this + 4) )
    return 2147943568LL;
  Head = (struct IAudioProcess **)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)this + 2);
  v4 = *Head;
  *a2 = *Head;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v4 + 8LL))(v4);
  return 0LL;
}
