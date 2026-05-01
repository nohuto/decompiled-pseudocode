/*
 * XREFs of ?Release@ResourceManagerClientProxy@@UAGKXZ @ 0x1000C3F0
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

signed __int32 __stdcall ResourceManagerClientProxy::Release(ResourceManagerClientProxy *this)
{
  signed __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 1);
  if ( !v1 && this )
    (*(void (__thiscall **)(ResourceManagerClientProxy *, int))(*(_DWORD *)this + 60))(this, 1);
  return v1;
}
