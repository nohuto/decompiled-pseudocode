/*
 * XREFs of ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800719F4
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800710A4 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x180071480 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800713A4 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x180072360 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?UnregisterNotification@PnpApiWrapper@@YAJAEAPEAX@Z @ 0x18007706C (-UnregisterNotification@PnpApiWrapper@@YAJAEAPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PnpDeviceWatcher::Shutdown(PnpDeviceWatcher *this, void **a2)
{
  void *v3; // rcx
  void **v4; // rdx
  PnpDeviceWatcher::RetryDeviceListEntry **v5; // rdi
  struct PnpDeviceWatcher::DeviceListEntry *i; // rbx
  HSTRING **v7; // rbx
  HSTRING *v8; // r14
  HSTRING v9; // rax
  PnpDeviceWatcher::RetryDeviceListEntry *v10; // rax
  PnpDeviceWatcher::RetryDeviceListEntry **v11; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v12; // rbx
  PnpDeviceWatcher::RetryDeviceListEntry *v13; // rax
  PnpDeviceWatcher::RetryDeviceListEntry **v14; // rcx

  *(_QWORD *)this = 0LL;
  v3 = (void *)_InterlockedExchange64((volatile __int64 *)this + 3, 0LL);
  if ( v3 )
    CloseHandle(v3);
  PnpApiWrapper::UnregisterNotification((PnpDeviceWatcher *)((char *)this + 16), a2);
  PnpApiWrapper::UnregisterNotification((PnpDeviceWatcher *)((char *)this + 8), v4);
  v5 = (PnpDeviceWatcher::RetryDeviceListEntry **)((char *)this + 56);
  for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7);
        i != (struct PnpDeviceWatcher::DeviceListEntry *)v5;
        i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
  {
    PnpDeviceWatcher::StopDeviceObject(this, i);
  }
  SleepEx(0, 1);
  v7 = (HSTRING **)((char *)this + 32);
  while ( 1 )
  {
    v8 = *v7;
    v9 = **v7;
    if ( (*v7)[1] != (HSTRING)v7 || *((HSTRING **)v9 + 1) != v8 )
LABEL_22:
      __fastfail(3u);
    *v7 = (HSTRING *)v9;
    *((_QWORD *)v9 + 1) = v7;
    if ( v8 == (HSTRING *)v7 )
      break;
    WindowsDeleteString(v8[4]);
    v8[4] = 0LL;
    operator delete(v8, (const struct std::nothrow_t *)0x28);
    --*((_QWORD *)this + 6);
  }
  while ( 1 )
  {
    v10 = *v5;
    v11 = *(PnpDeviceWatcher::RetryDeviceListEntry ***)*v5;
    if ( *((PnpDeviceWatcher::RetryDeviceListEntry ***)*v5 + 1) != v5 || v11[1] != v10 )
      goto LABEL_22;
    *v5 = (PnpDeviceWatcher::RetryDeviceListEntry *)v11;
    v11[1] = (PnpDeviceWatcher::RetryDeviceListEntry *)v5;
    if ( v10 == (PnpDeviceWatcher::RetryDeviceListEntry *)v5 )
      break;
    PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v10);
    --*((_QWORD *)this + 9);
  }
  v12 = (PnpDeviceWatcher::RetryDeviceListEntry **)((char *)this + 80);
  while ( 1 )
  {
    v13 = *v12;
    v14 = *(PnpDeviceWatcher::RetryDeviceListEntry ***)*v12;
    if ( *((PnpDeviceWatcher::RetryDeviceListEntry ***)*v12 + 1) != v12 || v14[1] != v13 )
      goto LABEL_22;
    *v12 = (PnpDeviceWatcher::RetryDeviceListEntry *)v14;
    v14[1] = (PnpDeviceWatcher::RetryDeviceListEntry *)v12;
    if ( v13 == (PnpDeviceWatcher::RetryDeviceListEntry *)v12 )
      break;
    PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v13);
    --*((_QWORD *)this + 12);
  }
}
