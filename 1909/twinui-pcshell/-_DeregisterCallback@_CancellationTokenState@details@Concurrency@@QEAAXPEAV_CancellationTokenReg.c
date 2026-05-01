/*
 * XREFs of ?_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x1801EBEA4
 * Callers:
 *     ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x1801EC038 (-_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x1801E36F4 (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ?_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z @ 0x1801EB75C (-_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z.c)
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x1801EC72C (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Concurrency::details::_CancellationTokenState::_DeregisterCallback(
        Concurrency::details::_CancellationTokenState *this,
        struct Concurrency::details::_CancellationTokenRegistration *a2)
{
  char v4; // r14
  struct _Mtx_internal_imp_t *v5; // rbx
  int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  Concurrency::details::platform *v11; // rcx
  signed __int32 v12; // ebx
  int v13; // eax
  int v14; // eax
  _Mtx_t v15; // [rsp+38h] [rbp-30h] BYREF
  char v16; // [rsp+40h] [rbp-28h]
  signed __int32 v17; // [rsp+70h] [rbp+8h] BYREF
  _Mtx_t v18; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v5 = (Concurrency::details::_CancellationTokenState *)((char *)this + 24);
  v18 = (Concurrency::details::_CancellationTokenState *)((char *)this + 24);
  v6 = _Mtx_lock((Concurrency::details::_CancellationTokenState *)((char *)this + 24));
  if ( v6 )
    std::_Throw_C_error(v6);
  v7 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v7 )
  {
    v8 = 0LL;
    while ( (struct Concurrency::details::_CancellationTokenRegistration *)*v7 != a2 )
    {
      v8 = v7;
      v7 = (_QWORD *)v7[1];
      if ( !v7 )
        goto LABEL_14;
    }
    v9 = v7[1];
    if ( v8 )
      v8[1] = v9;
    else
      *((_QWORD *)this + 13) = v9;
    if ( !v7[1] )
      *((_QWORD *)this + 14) = v8;
    operator delete(v7, (const struct std::nothrow_t *)0x10);
LABEL_14:
    _InterlockedExchange((volatile __int32 *)a2 + 4, 2);
    Concurrency::details::_RefCounter::_Release(a2);
    v5 = v18;
  }
  else
  {
    v4 = 1;
  }
  v10 = _Mtx_unlock(v5);
  if ( v10 )
    std::_Throw_C_error(v10);
  if ( v4 )
  {
    v17 = 0;
    std::_Atomic_compare_exchange_strong_4((volatile signed __int32 *)a2 + 4, &v17, 1, 5, 5);
    v12 = v17;
    if ( v17 )
    {
      if ( (v17 <= 0 || v17 >= 4)
        && v12 != Concurrency::details::platform::GetCurrentThreadId(v11)
        && _InterlockedExchange((volatile __int32 *)a2 + 4, 2) != 3 )
      {
        std::unique_lock<std::mutex>::unique_lock<std::mutex>(
          (__int64)&v15,
          (struct Concurrency::details::_CancellationTokenRegistration *)((char *)a2 + 96));
        while ( !*((_BYTE *)a2 + 176) )
        {
          v13 = _Cnd_wait((struct Concurrency::details::_CancellationTokenRegistration *)((char *)a2 + 24), v15);
          if ( v13 )
            std::_Throw_C_error(v13);
        }
        if ( v16 )
        {
          v14 = _Mtx_unlock(v15);
          if ( v14 )
            std::_Throw_C_error(v14);
        }
      }
    }
  }
}
