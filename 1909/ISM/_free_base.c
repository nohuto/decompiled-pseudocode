/*
 * XREFs of _free_base @ 0x18002C122
 * Callers:
 *     __dyn_tls_dtor @ 0x18002D7D0 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x18002D87C (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
