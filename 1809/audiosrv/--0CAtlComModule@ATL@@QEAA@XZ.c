/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x180048F00
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x1800013B0 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002D888 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset_0(&stru_1801B44A0, 0, sizeof(stru_1801B44A0));
  ATL::_AtlComModule = 0;
  qword_1801B4488 = (__int64)&_ImageBase;
  qword_1801B4490 = (__int64)&_pobjMap_CAPOWrapperSrv;
  qword_1801B4498 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_1801B44A0) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
