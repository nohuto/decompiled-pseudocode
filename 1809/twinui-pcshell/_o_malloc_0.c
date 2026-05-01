/*
 * XREFs of _o_malloc_0 @ 0x18008509C
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     CreateNewEventEntry @ 0x1800E37E8 (CreateNewEventEntry.c)
 *     CreateTlgAggregateSession @ 0x1800E39F8 (CreateTlgAggregateSession.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl o_malloc_0(size_t Size)
{
  return malloc(Size);
}
