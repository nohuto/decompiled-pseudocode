/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged @ 0x1802EFA20
 * Callers:
 *     <none>
 * Callees:
 *     ??_9ITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@$BDI@AA @ 0x1800DADA0 (--_9ITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@$BDI@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::`vcall'{56,{flat}}(v1);
  return 0LL;
}
