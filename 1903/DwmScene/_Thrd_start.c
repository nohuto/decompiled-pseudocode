/*
 * XREFs of _Thrd_start @ 0x1801274FC
 * Callers:
 *     sub_1800727F8 @ 0x1800727F8 (sub_1800727F8.c)
 *     sub_1800B34F8 @ 0x1800B34F8 (sub_1800B34F8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl Thrd_start(_Thrd_imp_t *a1, _Thrd_callback_t a2, void *a3)
{
  return _Thrd_start(a1, a2, a3);
}
