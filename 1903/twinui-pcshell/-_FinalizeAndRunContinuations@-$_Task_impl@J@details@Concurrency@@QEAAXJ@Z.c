/*
 * XREFs of ?_FinalizeAndRunContinuations@?$_Task_impl@J@details@Concurrency@@QEAAXJ@Z @ 0x1801CD0E0
 * Callers:
 *     Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_Init @ 0x1801CD1D8 (Concurrency--task_long_--_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56_ea_1801CD1D8.c)
 * Callees:
 *     ?_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x1801CD8F0 (-_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_Task_impl<long>::_FinalizeAndRunContinuations(
        Concurrency::details::_Task_impl_base *this,
        int a2)
{
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  *((_DWORD *)this + 92) = a2;
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
