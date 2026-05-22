/*
 * XREFs of ??1ConsumerControlManager@@EEAA@XZ @ 0x18007254C
 * Callers:
 *     ??_GConsumerControlManager@@EEAAPEAXI@Z @ 0x180072500 (--_GConsumerControlManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x180070904 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800730B0 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConsumerControlManager::~ConsumerControlManager(ConsumerControlManager *this, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry **v6; // rdi
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry *v7; // rax
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry **v8; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v9; // rdi
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v10; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v11; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v12; // rdi
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v13; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v14; // rcx

  *(_QWORD *)this = &ConsumerControlManager::`vftable';
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (ConsumerControlManager::ConsumerControlDeviceCommandListEntry **)((char *)this + 64);
  while ( 1 )
  {
    v7 = *v6;
    v8 = *(ConsumerControlManager::ConsumerControlDeviceCommandListEntry ***)*v6;
    if ( *((ConsumerControlManager::ConsumerControlDeviceCommandListEntry ***)*v6 + 1) != v6 || v8[1] != v7 )
LABEL_12:
      __fastfail(3u);
    *v6 = (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v8;
    v8[1] = (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v6;
    if ( v7 == (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v6 )
      break;
    ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(v7, a2);
    --*((_QWORD *)this + 10);
  }
  v9 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)((char *)this + 40);
  while ( 1 )
  {
    v10 = *v9;
    v11 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v9;
    if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v9 + 1) != v9 || v11[1] != v10 )
      goto LABEL_12;
    *v9 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v11;
    v11[1] = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v9;
    if ( v10 == (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v9 )
      break;
    ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v10);
    --*((_QWORD *)this + 7);
  }
  v12 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)((char *)this + 16);
  while ( 1 )
  {
    v13 = *v12;
    v14 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v12;
    if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v12 + 1) != v12 || v14[1] != v13 )
      goto LABEL_12;
    *v12 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v14;
    v14[1] = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v12;
    if ( v13 == (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v12 )
      break;
    ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v13);
    --*((_QWORD *)this + 4);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
