/*
 * XREFs of _RmGetNotification@8 @ 0x10012000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z @ 0x10007FB8 (-GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z.c)
 *     ?RmGetNotification@ResourceManagerProxy@@QAEJKPAURmExternalResourceNotification@@@Z @ 0x10011F1F (-RmGetNotification@ResourceManagerProxy@@QAEJKPAURmExternalResourceNotification@@@Z.c)
 */

int __thiscall RmGetNotification(
        struct ResourceManagerProxy **this,
        unsigned int a2,
        struct RmExternalResourceNotification *a3)
{
  int result; // eax
  ResourceManagerProxy *v4; // ecx
  struct ResourceManagerProxy **v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this;
  result = GetResourceManagerProxy((int *)&v5);
  if ( result >= 0 )
  {
    result = ResourceManagerProxy::RmGetNotification(v4, a2, a3).Simple;
    if ( result >= 0 )
      return 0;
  }
  return result;
}
