/*
 * XREFs of ?Apply@ResourceSetClientProxy@@UAGJXZ @ 0x100142C0
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall ResourceSetClientProxy::Apply(ResourceSetClientProxy *this)
{
  return (*(int (__thiscall **)(_DWORD, ResourceSetClientProxy *, _DWORD))(*(_DWORD *)this + 16))(
           *(_DWORD *)(*(_DWORD *)this + 16),
           this,
           0);
}
