/*
 * XREFs of ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x180071B30
 * Callers:
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x180076734 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PnpDeviceWatcher::OnPnpNotification(int a1, HSTRING a2, __int64 a3)
{
  void *v6; // rax
  ULONG_PTR v7; // rbx
  HSTRING *v8; // rdi

  if ( a3 )
  {
    v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = (ULONG_PTR)v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x28uLL);
      *(_QWORD *)(v7 + 32) = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      *(_QWORD *)(v7 + 16) = a3;
      *(_DWORD *)(v7 + 24) = a1;
      v8 = (HSTRING *)(v7 + 32);
      if ( a2 && a2 == *v8
        || (WindowsDeleteString(*v8), *v8 = 0LL, WindowsDuplicateString(a2, (HSTRING *)(v7 + 32)) >= 0) )
      {
        if ( QueueUserAPC(PnpDeviceWatcher::PnpNotificationApc, *(HANDLE *)(a3 + 24), v7) == 1 )
          v7 = 0LL;
      }
      if ( v7 )
      {
        WindowsDeleteString(*(HSTRING *)(v7 + 32));
        *(_QWORD *)(v7 + 32) = 0LL;
        operator delete((void *)v7, (const struct std::nothrow_t *)0x28);
      }
    }
  }
}
