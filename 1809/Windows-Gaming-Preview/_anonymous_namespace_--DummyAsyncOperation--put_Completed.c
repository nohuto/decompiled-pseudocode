/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::put_Completed @ 0x180011D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::DummyAsyncOperation::put_Completed(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax

  v4 = _Mtx_lock((_Mtx_t)(a1 + 88));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(_QWORD *)(a1 + 168);
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = *(_QWORD *)(a1 + 168);
    }
    *(_QWORD *)(a1 + 168) = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = _Mtx_unlock((_Mtx_t)(a1 + 88));
  if ( v6 )
    std::_Throw_C_error(v6);
  return 0LL;
}
