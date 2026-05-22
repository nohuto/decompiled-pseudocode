/*
 * XREFs of ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800AC858
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18001653C (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180016850 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x180012774 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800AC01C (-Clear@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 *     ?Clear@?$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800AC064 (-Clear@-$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800ACCA4 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 */

void __fastcall PnpDeviceWatcher::Shutdown(PnpDeviceWatcher *this)
{
  void *v2; // rcx
  _QWORD *v3; // rbx
  unsigned int v4; // eax
  int v5; // eax
  _QWORD *v6; // rbx
  unsigned int v7; // eax
  int v8; // eax
  struct PnpDeviceWatcher::DeviceListEntry *i; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  v2 = (void *)_InterlockedExchange64((volatile __int64 *)this + 3, 0LL);
  if ( v2 )
    CloseHandle(v2);
  v3 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = CM_Unregister_Notification(*v3);
    v5 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v4);
    if ( v5 != -2147023728 )
    {
      if ( v5 >= 0 )
      {
        *((_QWORD *)this + 2) = 0LL;
        operator delete(v3, (const struct std::nothrow_t *)0x18);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x284,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
          (const char *)(unsigned int)v5);
      }
    }
  }
  v6 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    v7 = CM_Unregister_Notification(*v6);
    v8 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v7);
    if ( v8 != -2147023728 )
    {
      if ( v8 >= 0 )
      {
        *((_QWORD *)this + 1) = 0LL;
        operator delete(v6, (const struct std::nothrow_t *)0x18);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x284,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
          (const char *)(unsigned int)v8);
      }
    }
  }
  for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7);
        i != (PnpDeviceWatcher *)((char *)this + 56);
        i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
  {
    PnpDeviceWatcher::StopDeviceObject(this, i);
  }
  SleepEx(0, 1);
  NtList<PnpDeviceWatcher::NotificationListEntry>::Clear((HSTRING **)this + 4);
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((PnpDeviceWatcher::RetryDeviceListEntry **)this + 7);
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((PnpDeviceWatcher::RetryDeviceListEntry **)this + 10);
}
