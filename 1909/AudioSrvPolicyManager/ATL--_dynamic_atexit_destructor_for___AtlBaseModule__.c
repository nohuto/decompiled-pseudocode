/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x180037F20
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x180035090 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlBaseModule__()
{
  DeleteCriticalSection(&stru_18004DCD8);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  qword_18004DD08 = 0LL;
}
