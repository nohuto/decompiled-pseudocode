/*
 * XREFs of _RmAcquireResources@40 @ 0x10007690
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAcquireResources@ResourceManagerProxy@@QAEJKPAURmResourceInfo@@KK_KPAXHW4RmPend@@PAHPAK@Z @ 0x100076D5 (-RmAcquireResources@ResourceManagerProxy@@QAEJKPAURmResourceInfo@@KK_KPAXHW4RmPend@@PAHPAK@Z.c)
 *     ?GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z @ 0x10007FB8 (-GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z.c)
 */

int __thiscall RmAcquireResources(
        struct ResourceManagerProxy **this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int result; // eax
  int v12; // [esp+0h] [ebp-4h]

  result = GetResourceManagerProxy(this);
  if ( result >= 0 )
  {
    result = ResourceManagerProxy::RmAcquireResources(v12, a2, a3, a4, a5, a6, a6 >> 31, a7, a8, a9, a10, a11);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
