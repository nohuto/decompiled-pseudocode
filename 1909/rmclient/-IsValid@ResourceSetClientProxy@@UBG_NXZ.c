/*
 * XREFs of ?IsValid@ResourceSetClientProxy@@UBG_NXZ @ 0x10014800
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

bool __stdcall ResourceSetClientProxy::IsValid(ResourceSetClientProxy *this)
{
  return (*(unsigned __int8 (__thiscall **)(_DWORD, ResourceSetClientProxy *))(*(_DWORD *)this + 36))(
           *(_DWORD *)(*(_DWORD *)this + 36),
           this) == 0;
}
