/*
 * XREFs of ?CreateResourceManagerClientProxy@@YGJPAPAUIResourceManager@ExecutionModel@@@Z @ 0x1000C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateResourceManagerClientProxyInternal@@YGJPAPAUIResourceManager@ExecutionModel@@@Z @ 0x1000C2B1 (-CreateResourceManagerClientProxyInternal@@YGJPAPAUIResourceManager@ExecutionModel@@@Z.c)
 */

int __stdcall CreateResourceManagerClientProxy(struct IResourceManager **a1)
{
  struct IResourceManager **savedregs; // [esp+0h] [ebp+0h]

  return CreateResourceManagerClientProxyInternal(savedregs);
}
