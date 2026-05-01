/*
 * XREFs of ?_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ @ 0x1801CD378
 * Callers:
 *     ?_RegisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x1801CD4C0 (-_RegisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegis.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_CancellationTokenRegistration::_Invoke(
        Concurrency::details::_CancellationTokenRegistration *this)
{
  signed __int32 CurrentThreadId; // ebx
  signed __int32 v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  CurrentThreadId = Concurrency::details::platform::GetCurrentThreadId(this);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 4, CurrentThreadId, 0) )
  {
    (*(void (__fastcall **)(Concurrency::details::_CancellationTokenRegistration *))(*(_QWORD *)this + 16LL))(this);
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 3, CurrentThreadId);
    if ( CurrentThreadId != v3 )
      CurrentThreadId = v3;
    if ( CurrentThreadId == 2 )
    {
      v4 = _Mtx_lock((Concurrency::details::_CancellationTokenRegistration *)((char *)this + 96));
      if ( v4 )
        std::_Throw_C_error(v4);
      *((_BYTE *)this + 176) = 1;
      v5 = _Mtx_unlock((Concurrency::details::_CancellationTokenRegistration *)((char *)this + 96));
      if ( v5 )
        std::_Throw_C_error(v5);
      v6 = _Cnd_broadcast((Concurrency::details::_CancellationTokenRegistration *)((char *)this + 24));
      if ( v6 )
        std::_Throw_C_error(v6);
    }
  }
  Concurrency::details::_RefCounter::_Release(this);
}
