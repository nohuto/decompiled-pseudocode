/*
 * XREFs of ?ForceReleaseResources@ResourceSetClientProxy@@UAGJXZ @ 0x10014670
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z @ 0x10014B4D (-ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z.c)
 */

int __stdcall ResourceSetClientProxy::ForceReleaseResources(ResourceSetClientProxy *this)
{
  return ResourceSetClientProxy::ReleaseResourcesImpl(this, 3u);
}
