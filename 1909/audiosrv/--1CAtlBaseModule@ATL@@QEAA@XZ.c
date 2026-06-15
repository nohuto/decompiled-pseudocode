/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x180064540
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x180074CD0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x180065CF4 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_1801B85D8);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_1801B8608 = 0;
  dword_1801B860C = 0;
}
