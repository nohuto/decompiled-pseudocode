/*
 * XREFs of free @ 0x180035090
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x180037F20 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 *     ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x180037F70 (ATL--_dynamic_atexit_destructor_for___AtlWinModule__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
