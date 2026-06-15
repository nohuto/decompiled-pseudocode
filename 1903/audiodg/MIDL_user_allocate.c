/*
 * XREFs of MIDL_user_allocate @ 0x14002BCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  if ( size <= 0xC800 )
    return operator new[](size);
  else
    return 0LL;
}
