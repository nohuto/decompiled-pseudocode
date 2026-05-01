/*
 * XREFs of ??_G?$VirtualDesktopNotificationForwarderHelper@VVirtualDesktopNotificationRegistration@?A0x815bf8ac@@@@UEAAPEAXI@Z @ 0x1802EBB00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1?$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@EventRegistrationHelpers@@UEAA@XZ @ 0x18026AEBC (--1-$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@Event.c)
 */

void *__fastcall VirtualDesktopNotificationForwarderHelper<`anonymous namespace'::VirtualDesktopNotificationRegistration>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  EventRegistrationHelpers::EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>::~EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
