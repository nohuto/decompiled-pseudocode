/*
 * XREFs of ?TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800449D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSerialWorkQueue::TimerCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_TIMER Timer)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax

  v4 = Context[3];
  v5 = _Mtx_lock((_Mtx_t)(v4 + 88));
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( !*(_BYTE *)(v4 + 80) )
  {
    v6 = *(_QWORD *)(Context[1] + 56LL);
    if ( !v6 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x180044A49LL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = _Mtx_unlock((_Mtx_t)(v4 + 88));
  if ( v7 )
    std::_Throw_C_error(v7);
}
