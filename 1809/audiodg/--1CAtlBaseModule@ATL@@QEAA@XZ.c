/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001B6C0
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x1400213E0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x14001CBC4 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_140089158);
  if ( qword_140089180 )
  {
    free(qword_140089180);
    qword_140089180 = 0LL;
  }
  dword_140089188 = 0;
  dword_14008918C = 0;
}
