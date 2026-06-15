/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x18005FF24
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x1800707A0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x1800616A0 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_1801B4528);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_1801B4558 = 0;
  dword_1801B455C = 0;
}
