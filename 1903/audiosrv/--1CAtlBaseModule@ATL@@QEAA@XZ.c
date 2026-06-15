/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x180063550
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x180073C90 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x180064D04 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_1801B95D8);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_1801B9608 = 0;
  dword_1801B960C = 0;
}
