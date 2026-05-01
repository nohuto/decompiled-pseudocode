/*
 * XREFs of _RmReleaseResources@4 @ 0x10007740
 * Callers:
 *     <none>
 * Callees:
 *     ?RmReleaseResources@ResourceManagerProxy@@QAEJK@Z @ 0x10007764 (-RmReleaseResources@ResourceManagerProxy@@QAEJK@Z.c)
 *     ?GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z @ 0x10007FB8 (-GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z.c)
 */

int __thiscall RmReleaseResources(struct ResourceManagerProxy **this, unsigned int a2)
{
  int result; // eax
  ResourceManagerProxy *v3; // ecx

  result = GetResourceManagerProxy(this);
  if ( result >= 0 )
  {
    result = ResourceManagerProxy::RmReleaseResources(v3, a2);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
