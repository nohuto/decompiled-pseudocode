/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x18005041C
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800014C0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180029A5C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset_0(&stru_1801B8618, 0, sizeof(stru_1801B8618));
  qword_1801B8648 = 0LL;
  dword_1801B8650 = 0;
  dword_1801B8654 = 0;
  qword_1801B8640 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&stru_1801B8618) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
