/*
 * XREFs of ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x180025FA0
 * Callers:
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x180012560 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800ABFE8 (--_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 */

void __fastcall PnpDeviceWatcher::OnPnpNotification(int a1, HSTRING a2, HSTRING a3)
{
  HSTRING *v6; // rax
  HSTRING *v7; // rbx
  unsigned int v8; // edx

  if ( a3 )
  {
    v6 = (HSTRING *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      *((_DWORD *)v6 + 7) = 0;
      v6[4] = 0LL;
      v6[2] = a3;
      *((_DWORD *)v6 + 6) = a1;
      WindowsDeleteString(0LL);
      v7[4] = 0LL;
      if ( WindowsDuplicateString(a2, v7 + 4) < 0
        || QueueUserAPC(PnpDeviceWatcher::PnpNotificationApc, *((HANDLE *)a3 + 3), (ULONG_PTR)v7) != 1 )
      {
        PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(
          (PnpDeviceWatcher::NotificationListEntry *)v7,
          v8);
      }
    }
  }
}
