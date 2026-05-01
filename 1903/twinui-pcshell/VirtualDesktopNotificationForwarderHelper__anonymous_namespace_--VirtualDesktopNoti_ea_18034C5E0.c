/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::_scalar_deleting_destructor_ @ 0x18034C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1?$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@EventRegistrationHelpers@@UEAA@XZ @ 0x1802C3F64 (--1-$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@Event.c)
 */

void *__fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  EventRegistrationHelpers::EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>::~EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
