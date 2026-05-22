/*
 * XREFs of _free_base @ 0x18002C4A2
 * Callers:
 *     __dyn_tls_dtor @ 0x18002DB50 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x18002DBFC (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
