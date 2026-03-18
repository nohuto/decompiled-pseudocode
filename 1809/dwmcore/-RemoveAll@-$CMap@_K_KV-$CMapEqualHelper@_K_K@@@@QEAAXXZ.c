/*
 * XREFs of ?RemoveAll@?$CMap@_K_KV?$CMapEqualHelper@_K_K@@@@QEAAXXZ @ 0x1800EB444
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x1800F17D0 (_dynamic_atexit_destructor_for__CManipulationContext--s_ParticipatingInteractionMap__.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void CMap<unsigned __int64,unsigned __int64,CMapEqualHelper<unsigned __int64,unsigned __int64>>::RemoveAll()
{
  if ( CManipulationContext::s_ParticipatingInteractionMap )
  {
    WPF::ProcessHeapImpl::Free(CManipulationContext::s_ParticipatingInteractionMap);
    CManipulationContext::s_ParticipatingInteractionMap = 0LL;
  }
  if ( qword_180308A28 )
  {
    WPF::ProcessHeapImpl::Free(qword_180308A28);
    qword_180308A28 = 0LL;
  }
  dword_180308A30 = 0;
}
