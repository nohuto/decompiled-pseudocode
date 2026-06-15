/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x140015508
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x14001B510 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x140016A04 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_140087168);
  if ( qword_140087190 )
  {
    free(qword_140087190);
    qword_140087190 = 0LL;
  }
  dword_140087198 = 0;
  dword_14008719C = 0;
}
