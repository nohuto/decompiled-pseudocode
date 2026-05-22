/*
 * XREFs of ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800703F8
 * Callers:
 *     ??_GLampArrayRawInputProvider@@EEAAPEAXI@Z @ 0x1800702D8 (--_GLampArrayRawInputProvider@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1PnpDeviceWatcher@@QEAA@XZ @ 0x180070324 (--1PnpDeviceWatcher@@QEAA@XZ.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x180070904 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x180072920 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LampArrayRawInputProvider::~LampArrayRawInputProvider(LampArrayRawInputProvider *this)
{
  ULONG_PTR v2; // rcx
  unsigned int v3; // edx
  __int64 **v4; // rsi
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v8; // rdi
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v9; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)this = &LampArrayRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &LampArrayRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &LampArrayRawInputProvider::`vftable'{for `RefCountedObject'};
  CloseHandle(*((HANDLE *)this + 30));
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
  {
    *((_QWORD *)this + 31) = 0LL;
    ConsumerControlManager::Release(v2);
  }
  PnpDeviceWatcher::~PnpDeviceWatcher((LampArrayRawInputProvider *)((char *)this + 120));
  v4 = (__int64 **)((char *)this + 72);
  while ( 1 )
  {
    v6 = *v4;
    v7 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v7 + 8) != v6 )
LABEL_10:
      __fastfail(3u);
    *v4 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v4;
    if ( v6 == (__int64 *)v4 )
      break;
    v5 = v6[2];
    if ( v5 )
    {
      v6[2] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    operator delete(v6, (const struct std::nothrow_t *)0x20);
    --*((_QWORD *)this + 11);
  }
  v8 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)((char *)this + 48);
  while ( 1 )
  {
    v9 = *v8;
    v10 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v8;
    if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v8 + 1) != v8 || v10[1] != v9 )
      goto LABEL_10;
    *v8 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v10;
    v10[1] = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v8;
    if ( v9 == (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v8 )
      break;
    ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v9, v3);
    --*((_QWORD *)this + 8);
  }
  v11 = *((_QWORD *)this + 4);
  if ( v11 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
