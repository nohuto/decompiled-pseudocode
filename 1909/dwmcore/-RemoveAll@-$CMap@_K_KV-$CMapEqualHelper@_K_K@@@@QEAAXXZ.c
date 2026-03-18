/*
 * XREFs of ?RemoveAll@?$CMap@_K_KV?$CMapEqualHelper@_K_K@@@@QEAAXXZ @ 0x1800D990C
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x1800F1A60 (_dynamic_atexit_destructor_for__CManipulationContext--s_ParticipatingInteractionMap__.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 */

void CMap<unsigned __int64,unsigned __int64,CMapEqualHelper<unsigned __int64,unsigned __int64>>::RemoveAll()
{
  if ( CManipulationContext::s_ParticipatingInteractionMap )
  {
    operator delete(CManipulationContext::s_ParticipatingInteractionMap);
    CManipulationContext::s_ParticipatingInteractionMap = 0LL;
  }
  if ( qword_18033D168 )
  {
    operator delete(qword_18033D168);
    qword_18033D168 = 0LL;
  }
  dword_18033D170 = 0;
}
