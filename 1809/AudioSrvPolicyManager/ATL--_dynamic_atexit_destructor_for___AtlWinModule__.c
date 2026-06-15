/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x18003A6C0
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x180037784 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlWinModule__()
{
  if ( ATL::_AtlWinModule == 72 )
  {
    if ( qword_18004FE18 )
    {
      free(qword_18004FE18);
      qword_18004FE18 = 0LL;
    }
    qword_18004FE20 = 0LL;
    DeleteCriticalSection(&stru_18004FDE8);
    ATL::_AtlWinModule = 0;
  }
  if ( qword_18004FE18 )
  {
    free(qword_18004FE18);
    qword_18004FE18 = 0LL;
  }
  qword_18004FE20 = 0LL;
}
