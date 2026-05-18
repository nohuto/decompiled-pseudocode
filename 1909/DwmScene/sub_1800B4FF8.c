/*
 * XREFs of sub_1800B4FF8 @ 0x1800B4FF8
 * Callers:
 *     sub_1800B4FF0 @ 0x1800B4FF0 (sub_1800B4FF0.c)
 * Callees:
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_signal @ 0x180127654 (_Cnd_signal.c)
 *     _Cnd_do_broadcast_at_thread_exit @ 0x18012765A (_Cnd_do_broadcast_at_thread_exit.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B4FF8(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = Mtx_lock(*(_Mtx_t *)(a1 + 16));
  if ( v3 )
    std::_Throw_C_error(v3);
  *(_BYTE *)(a1 + 24) = 1;
  v4 = Cnd_signal(*(_Cnd_t *)(a1 + 8));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = Mtx_unlock(*(_Mtx_t *)(a1 + 16));
  if ( v5 )
    std::_Throw_C_error(v5);
  (*(void (__fastcall **)(_QWORD))(v2 + 8))(*(_QWORD *)v2);
  Cnd_do_broadcast_at_thread_exit();
  return j__o_free(v2);
}
