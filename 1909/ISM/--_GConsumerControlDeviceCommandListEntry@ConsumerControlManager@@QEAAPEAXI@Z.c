/*
 * XREFs of ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800ACEE8
 * Callers:
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x1800ACD80 (--1ConsumerControlManager@@EEAA@XZ.c)
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800AD210 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800AD4AC (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180029430 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800AD5C0 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

ConsumerControlManager::ConsumerControlDeviceCommandListEntry *__fastcall ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(
        ConsumerControlManager::ConsumerControlDeviceCommandListEntry *this)
{
  RefCountedObject *v2; // rcx
  ULONG_PTR v3; // rcx

  v2 = (RefCountedObject *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    RefCountedObject::Release(v2);
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    ConsumerControlManager::Release(v3);
  }
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
