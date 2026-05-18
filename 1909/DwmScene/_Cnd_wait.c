/*
 * XREFs of _Cnd_wait @ 0x180127648
 * Callers:
 *     sub_180072908 @ 0x180072908 (sub_180072908.c)
 *     sub_1800B3608 @ 0x1800B3608 (sub_1800B3608.c)
 *     sub_1800B40EC @ 0x1800B40EC (sub_1800B40EC.c)
 *     sub_1800B4C00 @ 0x1800B4C00 (sub_1800B4C00.c)
 *     sub_1800B4EB8 @ 0x1800B4EB8 (sub_1800B4EB8.c)
 *     sub_18011E1E4 @ 0x18011E1E4 (sub_18011E1E4.c)
 *     sub_18011E290 @ 0x18011E290 (sub_18011E290.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl Cnd_wait(_Cnd_t a1, _Mtx_t a2)
{
  return _Cnd_wait(a1, a2);
}
