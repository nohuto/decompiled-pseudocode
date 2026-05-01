/*
 * XREFs of _RmAvailabilityCheck@16 @ 0x10011FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z @ 0x10007FB8 (-GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z.c)
 *     ?RmAvailabilityCheck@ResourceManagerProxy@@QAEJKPAURmResourceInfo@@KK@Z @ 0x10011EAB (-RmAvailabilityCheck@ResourceManagerProxy@@QAEJKPAURmResourceInfo@@KK@Z.c)
 */

int __thiscall RmAvailabilityCheck(
        struct ResourceManagerProxy **this,
        unsigned int a2,
        struct RmResourceInfo *a3,
        unsigned int a4,
        unsigned int a5)
{
  int result; // eax
  ResourceManagerProxy *v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (ResourceManagerProxy *)this;
  result = GetResourceManagerProxy((int *)&v6);
  if ( result >= 0 )
  {
    result = ResourceManagerProxy::RmAvailabilityCheck(v6, a2, a3, a4, a5).Simple;
    if ( result >= 0 )
      return 0;
  }
  return result;
}
