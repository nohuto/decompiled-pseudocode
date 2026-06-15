/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x140014FD4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001180 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010CA8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset_0(&stru_1400870D0, 0, sizeof(stru_1400870D0));
  ATL::_AtlComModule = 0;
  qword_1400870B8 = (__int64)&_ImageBase;
  qword_1400870C0 = (__int64)_pobjMap_CAudioDeviceGraph;
  qword_1400870C8 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_1400870D0) >= 0 )
    ATL::_AtlComModule = 72;
  else
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &ATL::_AtlComModule;
}
