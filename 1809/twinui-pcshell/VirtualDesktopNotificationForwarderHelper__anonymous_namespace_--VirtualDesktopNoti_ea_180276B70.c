/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged @ 0x180276B70
 * Callers:
 *     <none>
 * Callees:
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BDI@AA @ 0x1800A13F0 (--_9IPropertyValueStatics@Foundation@Windows@@$BDI@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     Windows::Foundation::IPropertyValueStatics::`vcall'{56,{flat}}(v1);
  return 0LL;
}
