/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18003A670
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x180037784 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlBaseModule__()
{
  DeleteCriticalSection(&stru_18004FDA8);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  qword_18004FDD8 = 0LL;
}
