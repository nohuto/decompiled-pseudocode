/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x180048CB8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001450 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002D888 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset_0(&stru_1801B4568, 0, sizeof(stru_1801B4568));
  qword_1801B4598 = 0LL;
  dword_1801B45A0 = 0;
  dword_1801B45A4 = 0;
  qword_1801B4590 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&stru_1801B4568) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
