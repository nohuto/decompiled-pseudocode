/*
 * XREFs of ?Get@StringReference@Internal@Windows@@QEBAPEAUHSTRING__@@XZ @ 0x180004C28
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18003EBD8 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings_::_1_::catch$10 @ 0x1800D4093 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ProcessLayoutBindings_--_1_--c.c)
 * Callees:
 *     <none>
 */

HSTRING __fastcall Windows::Internal::StringReference::Get(Windows::Internal::StringReference *this)
{
  return *(HSTRING *)this;
}
