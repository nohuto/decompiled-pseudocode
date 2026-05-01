/*
 * XREFs of ??0ResourceManagerClientProxy@@IAE@XZ @ 0x1000C398
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YGJPAPAUIResourceManager@ExecutionModel@@@Z @ 0x1000C2B1 (-CreateResourceManagerClientProxyInternal@@YGJPAPAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

ResourceManagerClientProxy *__thiscall ResourceManagerClientProxy::ResourceManagerClientProxy(
        ResourceManagerClientProxy *this)
{
  *(_DWORD *)this = &ResourceManagerClientProxy::`vftable';
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_BYTE *)this + 548) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 23, 0, 0);
  *((_DWORD *)this + 144) = (char *)this + 576;
  *((_DWORD *)this + 145) = (char *)this + 576;
  *((_DWORD *)this + 146) = 0;
  *((_DWORD *)this + 147) = 0;
  *((_WORD *)this + 296) = 2048;
  *((_WORD *)this + 14) = 0;
  return this;
}
