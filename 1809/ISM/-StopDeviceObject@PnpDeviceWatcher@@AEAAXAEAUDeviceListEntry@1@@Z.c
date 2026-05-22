/*
 * XREFs of ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x180072360
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18007165C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800719F4 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800720B0 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x180072360 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x180070904 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x180072360 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800729D0 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x180073290 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 */

void __fastcall PnpDeviceWatcher::StopDeviceObject(
        PnpDeviceWatcher *this,
        struct PnpDeviceWatcher::DeviceListEntry *a2)
{
  volatile __int32 *v4; // rcx
  struct PnpDeviceWatcher::DeviceListEntry *i; // rbx
  __int64 v6; // r9
  struct PnpDevice *v7; // rdx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v8; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v9; // r8
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v10; // rax

  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 116LL) != 3 )
  {
    v4 = (volatile __int32 *)*((_QWORD *)a2 + 2);
    _InterlockedExchange(v4 + 29, 3);
    PnpDevice::CloseInterface((PnpDevice *)v4);
    for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7);
          i != (PnpDeviceWatcher *)((char *)this + 56);
          i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
    {
      if ( *(_QWORD *)(*((_QWORD *)i + 2) + 16LL) == *((_QWORD *)a2 + 2) )
        PnpDeviceWatcher::StopDeviceObject(this, i);
    }
    v6 = *(_QWORD *)this;
    if ( *(_QWORD *)this )
    {
      if ( *((_BYTE *)a2 + 24) )
      {
        v7 = (struct PnpDevice *)*((_QWORD *)a2 + 2);
        if ( *((_WORD *)v7 + 56) == 89 && *((_WORD *)v7 + 57) == 1 )
        {
          v8 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)(v6 + 48);
          if ( v8 != (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)(v6 + 48) )
          {
            while ( 1 )
            {
              v9 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v8;
              if ( v7 == *(struct PnpDevice **)(*((_QWORD *)v8 + 2) + 16LL) )
                break;
              v8 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v8;
              if ( v9 == (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)(v6 + 48) )
                return;
            }
            if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v9 + 1) != v8
              || (v10 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)*((_QWORD *)v8 + 1), *v10 != v8) )
            {
              __fastfail(3u);
            }
            *v10 = v9;
            *((_QWORD *)v9 + 1) = v10;
            --*(_QWORD *)(v6 + 64);
            ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v8);
          }
        }
        else if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 )
        {
          ConsumerControlManager::QueueAddRemoveDevice(*(ConsumerControlManager **)(v6 + 248), v7, 0);
        }
      }
    }
  }
}
