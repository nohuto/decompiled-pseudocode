/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x180037F70
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x180035090 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlWinModule__()
{
  if ( ATL::_AtlWinModule == 72 )
  {
    if ( qword_18004DD48 )
    {
      free(qword_18004DD48);
      qword_18004DD48 = 0LL;
    }
    qword_18004DD50 = 0LL;
    DeleteCriticalSection(&stru_18004DD18);
    ATL::_AtlWinModule = 0;
  }
  if ( qword_18004DD48 )
  {
    free(qword_18004DD48);
    qword_18004DD48 = 0LL;
  }
  qword_18004DD50 = 0LL;
}
