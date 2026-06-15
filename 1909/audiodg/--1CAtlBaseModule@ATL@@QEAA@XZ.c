/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x140015918
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x14001B900 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x140016E14 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_140086168);
  if ( qword_140086190 )
  {
    free(qword_140086190);
    qword_140086190 = 0LL;
  }
  dword_140086198 = 0;
  dword_14008619C = 0;
}
