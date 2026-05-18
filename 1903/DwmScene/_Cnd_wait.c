/*
 * XREFs of _Cnd_wait @ 0x180127538
 * Callers:
 *     sub_1800727F8 @ 0x1800727F8 (sub_1800727F8.c)
 *     sub_1800B34F8 @ 0x1800B34F8 (sub_1800B34F8.c)
 *     sub_1800B3FDC @ 0x1800B3FDC (sub_1800B3FDC.c)
 *     sub_1800B4AF0 @ 0x1800B4AF0 (sub_1800B4AF0.c)
 *     sub_1800B4DA8 @ 0x1800B4DA8 (sub_1800B4DA8.c)
 *     sub_18011E0D4 @ 0x18011E0D4 (sub_18011E0D4.c)
 *     sub_18011E180 @ 0x18011E180 (sub_18011E180.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl Cnd_wait(_Cnd_t a1, _Mtx_t a2)
{
  return _Cnd_wait(a1, a2);
}
