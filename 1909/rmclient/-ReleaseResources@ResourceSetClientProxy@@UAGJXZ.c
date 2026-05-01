/*
 * XREFs of ?ReleaseResources@ResourceSetClientProxy@@UAGJXZ @ 0x10014B30
 * Callers:
 *     ??1ResourceSetClientProxy@@MAE@XZ @ 0x10013BB8 (--1ResourceSetClientProxy@@MAE@XZ.c)
 * Callees:
 *     ?ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z @ 0x10014B4D (-ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z.c)
 */

int __stdcall ResourceSetClientProxy::ReleaseResources(ResourceSetClientProxy *this)
{
  return ResourceSetClientProxy::ReleaseResourcesImpl(this, *((_DWORD *)this + 103) == 0);
}
