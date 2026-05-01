/*
 * XREFs of ?DeleteResourceManagerClientProxy@@YGJPAUIResourceManager@ExecutionModel@@@Z @ 0x10011E20
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall DeleteResourceManagerClientProxy(struct IResourceManager *a1)
{
  ((void (__thiscall *)(ULONG (__stdcall *)(IResourceManager *), struct IResourceManager *))a1->lpVtbl->Release)(
    a1->lpVtbl->Release,
    a1);
  return 0;
}
