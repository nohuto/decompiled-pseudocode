/*
 * XREFs of _Cnd_timedwait @ 0x18012753E
 * Callers:
 *     sub_18007FD60 @ 0x18007FD60 (sub_18007FD60.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl Cnd_timedwait(_Cnd_t a1, _Mtx_t a2, const xtime *a3)
{
  return _Cnd_timedwait(a1, a2, a3);
}
