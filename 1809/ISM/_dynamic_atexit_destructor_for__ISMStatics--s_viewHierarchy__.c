/*
 * XREFs of _dynamic_atexit_destructor_for__ISMStatics::s_viewHierarchy__ @ 0x180136C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__ISMStatics::s_viewHierarchy__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = ISMStatics::s_viewHierarchy;
  if ( ISMStatics::s_viewHierarchy )
  {
    ISMStatics::s_viewHierarchy = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}
