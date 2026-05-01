/*
 * XREFs of ?ReduceExternalResourcePriorities@ResourceSetClientProxy@@UAGJKQAU_ResourceInfo@ExecutionModel@@@Z @ 0x100149A0
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall ResourceSetClientProxy::ReduceExternalResourcePriorities(
        ResourceSetClientProxy *this,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  return (*(int (__thiscall **)(_DWORD, ResourceSetClientProxy *, unsigned int, struct ExecutionModel::_ResourceInfo *const))(*(_DWORD *)this + 56))(
           *(_DWORD *)(*(_DWORD *)this + 56),
           this,
           a2,
           a3);
}
