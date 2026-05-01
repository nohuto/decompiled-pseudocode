/*
 * XREFs of _RmAccessCheckOnSelf@4 @ 0x10011F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z @ 0x10007FB8 (-GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z.c)
 *     ?RmAccessCheck@ResourceManagerProxy@@QAEJW4RmResourceType@@@Z @ 0x10011E40 (-RmAccessCheck@ResourceManagerProxy@@QAEJW4RmResourceType@@@Z.c)
 */

int __thiscall RmAccessCheckOnSelf(struct ResourceManagerProxy **this, int a2)
{
  int result; // eax
  _DWORD *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  result = GetResourceManagerProxy((int *)&v3);
  if ( result >= 0 )
    return ResourceManagerProxy::RmAccessCheck(v3, a2).Simple;
  return result;
}
