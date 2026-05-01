/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___::Run @ 0x180149810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___::Run(
        __int64 a1)
{
  __int64 v1; // rsi
  _QWORD *result; // rax
  __int64 (__fastcall *v4)(__int64, _QWORD, _QWORD); // rbx
  _QWORD *v5; // rax

  v1 = *(_QWORD *)(a1 + 16);
  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(*(_QWORD *)(a1 + 24));
  if ( *result )
  {
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1 + 136LL);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(*(_QWORD *)(a1 + 24));
    result = (_QWORD *)v4(v1, *v5, *(unsigned int *)(a1 + 32));
    if ( !*(_DWORD *)(a1 + 32) )
      return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 200LL))(
                         *(_QWORD *)(a1 + 24),
                         0LL);
  }
  return result;
}
