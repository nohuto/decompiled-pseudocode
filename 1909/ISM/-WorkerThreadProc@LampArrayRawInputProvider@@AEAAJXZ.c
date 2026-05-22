/*
 * XREFs of ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180016850
 * Callers:
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x18002AB30 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18001642C (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18001653C (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016B10 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180051734 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800AC858 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800AF814 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::WorkerThreadProc(LampArrayDevice ***this)
{
  PnpDeviceWatcher *v2; // r14
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int LastError; // ebx
  _QWORD *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebp
  LampArrayDevice **i; // rbx
  DWORD v12; // r9d
  const char *v13; // r9
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 bAlertable; // [rsp+20h] [rbp-58h]
  HANDLE Handles[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF

  v2 = (PnpDeviceWatcher *)(this + 15);
  v3 = PnpDeviceWatcher::Initialize((PnpDeviceWatcher *)(this + 15), (struct LampArrayRawInputProvider *)this);
  LastError = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v3);
    v14 = (__int64 *)(this + 4);
  }
  else
  {
    v8 = this + 4;
    v9 = SipcServer::Create(v5, v4, v6, (__int64)this, bAlertable, this + 4);
    LastError = v9;
    if ( v9 < 0 )
    {
      v15 = 435LL;
    }
    else
    {
      Handles[0] = (HANDLE)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 40LL))(*v8);
      Handles[1] = this[30];
      while ( 1 )
      {
        if ( *((_BYTE *)this + 112) )
        {
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 4);
          LastError = 0;
          goto LABEL_26;
        }
        v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 32LL))(*v8);
        LastError = v9;
        if ( v9 < 0 )
        {
          v15 = 448LL;
          goto LABEL_16;
        }
        v21 = -1;
        v9 = PnpDeviceWatcher::ProcessDeviceNotifications(v2, &v21);
        LastError = v9;
        if ( v9 < 0 )
          break;
        v10 = -1;
        for ( i = this[6]; i != (LampArrayDevice **)(this + 6); i = (LampArrayDevice **)*i )
        {
          v20 = 0;
          if ( (unsigned int)LampArrayDevice::UpdateFromActiveViewClient(i[2], &v20) == -2147024882 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1C8,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
              (const char *)0x8007000ELL);
            Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 4);
            LastError = -2147024882;
            goto LABEL_26;
          }
          if ( v20 < v10 )
            v10 = v20;
        }
        v12 = v21;
        if ( v10 < v21 )
          v12 = v10;
        if ( WaitForMultipleObjectsEx(2u, Handles, 0, v12, 1) == -1 )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x1CE,
                        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lampa"
                                      "rrayrawinputprovider.cpp",
                        v13);
          goto LABEL_18;
        }
      }
      v15 = 452LL;
    }
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v9);
LABEL_18:
    v14 = (__int64 *)(this + 4);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v14);
LABEL_26:
  PnpDeviceWatcher::Shutdown(v2);
  return LastError;
}
