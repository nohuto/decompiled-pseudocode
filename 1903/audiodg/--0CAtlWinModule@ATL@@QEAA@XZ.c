/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x140015140
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001220 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010CA8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset_0(&CriticalSection, 0, sizeof(CriticalSection));
  qword_1400871D8 = 0LL;
  dword_1400871E0 = 0;
  dword_1400871E4 = 0;
  qword_1400871D0 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&CriticalSection) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
