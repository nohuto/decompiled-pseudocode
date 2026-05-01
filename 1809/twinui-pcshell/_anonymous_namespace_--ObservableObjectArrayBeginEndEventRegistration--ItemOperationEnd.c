/*
 * XREFs of _anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration::ItemOperationEnd @ 0x1802F5130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration::ItemOperationEnd(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  return result;
}
