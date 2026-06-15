/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x14001AEA0
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001180 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000456C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset_0(&stru_1400890C0, 0, sizeof(stru_1400890C0));
  ATL::_AtlComModule = 0;
  qword_1400890A8 = (__int64)&_ImageBase;
  qword_1400890B0 = (__int64)_pobjMap_CAudioDeviceGraph;
  qword_1400890B8 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_1400890C0) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
