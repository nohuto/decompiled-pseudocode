/*
 * XREFs of _RmRegisterResource@12 @ 0x10007F40
 * Callers:
 *     <none>
 * Callees:
 *     ?RmRegisterResource@ResourceManagerProxy@@QAEJW4RmResourceType@@KH@Z @ 0x10007F6D (-RmRegisterResource@ResourceManagerProxy@@QAEJW4RmResourceType@@KH@Z.c)
 *     ?GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z @ 0x10007FB8 (-GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z.c)
 */

int __thiscall RmRegisterResource(struct ResourceManagerProxy **this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // [esp+0h] [ebp-4h]

  result = GetResourceManagerProxy(this);
  if ( result >= 0 )
  {
    result = ResourceManagerProxy::RmRegisterResource(v5, a2, a3, a4);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
