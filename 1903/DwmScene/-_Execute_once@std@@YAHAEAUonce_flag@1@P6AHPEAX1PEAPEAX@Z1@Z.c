/*
 * XREFs of ?_Execute_once@std@@YAHAEAUonce_flag@1@P6AHPEAX1PEAPEAX@Z1@Z @ 0x18012742E
 * Callers:
 *     ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@1@@Z @ 0x18002BECC (-make_error_code@std@@YA-AVerror_code@1@W4io_errc@1@@Z.c)
 *     sub_18011D3EC @ 0x18011D3EC (sub_18011D3EC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall std::_Execute_once(struct std::once_flag *a1, int (*a2)(void *, void *, void **), void *a3)
{
  return __imp_?_Execute_once@std@@YAHAEAUonce_flag@1@P6AHPEAX1PEAPEAX@Z1@Z(a1, a2, a3);
}
