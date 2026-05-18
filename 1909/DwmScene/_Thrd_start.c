/*
 * XREFs of _Thrd_start @ 0x18012760C
 * Callers:
 *     sub_180072908 @ 0x180072908 (sub_180072908.c)
 *     sub_1800B3608 @ 0x1800B3608 (sub_1800B3608.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl Thrd_start(_Thrd_imp_t *a1, _Thrd_callback_t a2, void *a3)
{
  return _Thrd_start(a1, a2, a3);
}
