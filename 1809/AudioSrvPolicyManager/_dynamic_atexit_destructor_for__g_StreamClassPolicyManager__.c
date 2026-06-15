/*
 * XREFs of _dynamic_atexit_destructor_for__g_StreamClassPolicyManager__ @ 0x18003A560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__g_StreamClassPolicyManager__()
{
  __int64 result; // rax

  if ( g_StreamClassPolicyManager )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_StreamClassPolicyManager + 16LL))(g_StreamClassPolicyManager);
  return result;
}
