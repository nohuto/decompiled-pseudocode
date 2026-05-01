/*
 * XREFs of ?_FinalizeAndRunContinuations@?$_Task_impl@E@details@Concurrency@@QEAAXE@Z @ 0x1802963C8
 * Callers:
 *     _lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator() @ 0x180294194 (_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator().c)
 *     ?_Continue@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAXU?$integral_constant@_N$00@std@@U_TypeSelectorNoAsync@details@3@@Z @ 0x1802956AC (-_Continue@-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$int.c)
 * Callees:
 *     ?_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x180296BB0 (-_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_Task_impl<unsigned char>::_FinalizeAndRunContinuations(
        Concurrency::details::_Task_impl_base *this,
        char a2)
{
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  *((_BYTE *)this + 368) = a2;
  v3 = (Concurrency::details::_Task_impl_base *)((char *)this + 32);
  v4 = _Mtx_lock((Concurrency::details::_Task_impl_base *)((char *)this + 32));
  if ( v4 )
    std::_Throw_C_error(v4);
  if ( *((_DWORD *)this + 2) == 4 )
  {
    v5 = _Mtx_unlock(v3);
    if ( v5 )
      std::_Throw_C_error(v5);
  }
  else
  {
    *((_DWORD *)this + 2) = 3;
    v6 = _Mtx_unlock(v3);
    if ( v6 )
      std::_Throw_C_error(v6);
    v7 = _Mtx_lock((Concurrency::details::_Task_impl_base *)((char *)this + 208));
    if ( v7 )
      std::_Throw_C_error(v7);
    if ( *((int *)this + 78) < 2 )
      *((_DWORD *)this + 78) = 2;
    v8 = _Cnd_broadcast((Concurrency::details::_Task_impl_base *)((char *)this + 136));
    if ( v8 )
      std::_Throw_C_error(v8);
    v9 = _Mtx_unlock((Concurrency::details::_Task_impl_base *)((char *)this + 208));
    if ( v9 )
      std::_Throw_C_error(v9);
    Concurrency::details::_Task_impl_base::_RunTaskContinuations(this);
  }
}
