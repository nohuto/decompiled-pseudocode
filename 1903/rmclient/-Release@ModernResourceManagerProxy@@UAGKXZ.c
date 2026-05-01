/*
 * XREFs of ?Release@ModernResourceManagerProxy@@UAGKXZ @ 0x10012090
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

signed __int32 __stdcall ModernResourceManagerProxy::Release(ModernResourceManagerProxy *this)
{
  signed __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 1);
  if ( !v1 && this )
    (*(void (__thiscall **)(ModernResourceManagerProxy *, int))(*(_DWORD *)this + 12))(this, 1);
  return v1;
}
