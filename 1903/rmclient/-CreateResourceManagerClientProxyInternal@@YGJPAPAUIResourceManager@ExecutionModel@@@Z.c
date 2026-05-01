/*
 * XREFs of ?CreateResourceManagerClientProxyInternal@@YGJPAPAUIResourceManager@ExecutionModel@@@Z @ 0x1000C2B1
 * Callers:
 *     ?CreateResourceManagerClientProxy@@YGJPAPAUIResourceManager@ExecutionModel@@@Z @ 0x1000C2A0 (-CreateResourceManagerClientProxy@@YGJPAPAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     ?Init@ResourceManagerClientProxy@@IAEJXZ @ 0x1000C309 (-Init@ResourceManagerClientProxy@@IAEJXZ.c)
 *     ??0ResourceManagerClientProxy@@IAE@XZ @ 0x1000C398 (--0ResourceManagerClientProxy@@IAE@XZ.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ??2@YAPAXI@Z @ 0x1000CFE2 (--2@YAPAXI@Z.c)
 */

int __thiscall CreateResourceManagerClientProxyInternal(ResourceManagerClientProxy **this)
{
  ResourceManagerClientProxy *v2; // eax
  ResourceManagerClientProxy *v3; // edi
  int v4; // ebx

  if ( !this )
    return -2147024809;
  v2 = (ResourceManagerClientProxy *)operator new(0x254u);
  if ( v2 )
    v3 = ResourceManagerClientProxy::ResourceManagerClientProxy(v2);
  else
    v3 = 0;
  if ( !v3 )
    return -2147024882;
  v4 = ResourceManagerClientProxy::Init(v3);
  if ( v4 >= 0 )
  {
    *this = v3;
    v3 = 0;
  }
  if ( v3 )
    (*(void (__thiscall **)(ResourceManagerClientProxy *, int))(*(_DWORD *)v3 + 60))(v3, 1);
  return v4;
}
