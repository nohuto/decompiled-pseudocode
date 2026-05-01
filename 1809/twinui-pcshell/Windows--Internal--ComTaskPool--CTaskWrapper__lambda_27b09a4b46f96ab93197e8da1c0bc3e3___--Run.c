/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___::Run @ 0x1801043E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___::Run(
        __int64 a1)
{
  __int64 v1; // rdi
  _QWORD *result; // rax
  _QWORD *v4; // rax

  v1 = *(_QWORD *)(a1 + 16);
  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(*(_QWORD *)(a1 + 24));
  if ( *result )
  {
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(*(_QWORD *)(a1 + 24));
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1 + 136LL))(
                         v1,
                         *v4,
                         *(unsigned int *)(a1 + 32));
    if ( !*(_DWORD *)(a1 + 32) )
      return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 200LL))(
                         *(_QWORD *)(a1 + 24),
                         0LL);
  }
  return result;
}
