/*
 * XREFs of CiProcessNotification @ 0x1C0001BA0
 * Callers:
 *     <none>
 * Callees:
 *     CiProcessSuspend @ 0x1C0002DF0 (CiProcessSuspend.c)
 *     _guard_dispatch_icall_nop @ 0x1C00036F0 (_guard_dispatch_icall_nop.c)
 *     CiProcessDereference @ 0x1C000A7C0 (CiProcessDereference.c)
 *     CiProcessLocate @ 0x1C000B210 (CiProcessLocate.c)
 */

__int64 __fastcall CiProcessNotification(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rbx
  unsigned __int8 v4; // al

  result = CiProcessLocate();
  v3 = (void *)result;
  if ( result )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))CiKernelInterface)(a1);
    CiProcessSuspend(v3, v4);
    return CiProcessDereference(v3);
  }
  return result;
}
