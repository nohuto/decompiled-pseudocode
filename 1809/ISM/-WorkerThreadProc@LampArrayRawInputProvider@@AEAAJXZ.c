/*
 * XREFs of ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800710A4
 * Callers:
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x180071040 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x180071480 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18007165C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800719F4 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x180074688 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAPEAU4@@Z @ 0x1800A1B14 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LampArrayRawInputProvider::WorkerThreadProc(LampArrayDevice ***this)
{
  PnpDeviceWatcher *v2; // r15
  int v3; // eax
  __int64 v4; // rcx
  unsigned int LastError; // ebx
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  void (*v9)(void); // rax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  LampArrayDevice **i; // rbx
  DWORD v13; // r9d
  const char *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  HANDLE Handles[8]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v20; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+10h] BYREF

  v2 = (PnpDeviceWatcher *)(this + 15);
  v3 = PnpDeviceWatcher::Initialize((PnpDeviceWatcher *)(this + 15), (struct LampArrayRawInputProvider *)this);
  LastError = v3;
  v6 = this + 4;
  if ( v3 >= 0 )
  {
    v3 = SipcServer::Create(v4);
    LastError = v3;
    if ( v3 >= 0 )
    {
      Handles[0] = (HANDLE)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 40LL))(*v6);
      Handles[1] = this[30];
      while ( 2 )
      {
        v10 = *v6;
        if ( *((_BYTE *)this + 112) )
        {
          if ( v10 )
          {
            *v6 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          LastError = 0;
          goto LABEL_32;
        }
        v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
        LastError = v3;
        if ( v3 < 0 )
        {
          v7 = 463LL;
        }
        else
        {
          v21 = -1;
          v3 = PnpDeviceWatcher::ProcessDeviceNotifications(v2, &v21);
          LastError = v3;
          if ( v3 >= 0 )
          {
            v11 = -1;
            for ( i = this[6]; i != (LampArrayDevice **)(this + 6); i = (LampArrayDevice **)*i )
            {
              v20 = 0;
              if ( (unsigned int)LampArrayDevice::UpdateFromActiveViewClient(i[2], &v20) == -2147024882 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1D7,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
                  (const char *)0x8007000ELL);
                v16 = *v6;
                if ( *v6 )
                {
                  *v6 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                }
                LastError = -2147024882;
                goto LABEL_32;
              }
              if ( v20 && v20 < v11 )
                v11 = v20;
            }
            v13 = v21;
            if ( v11 < v21 )
              v13 = v11;
            if ( WaitForMultipleObjectsEx(2u, Handles, 0, v13, 1) != -1 )
              continue;
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x1DD,
                          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparra"
                                   "yrawinputprovider.cpp",
                          v14);
            v15 = *v6;
            if ( !*v6 )
              goto LABEL_32;
            *v6 = 0LL;
            v9 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
            goto LABEL_7;
          }
          v7 = 467LL;
        }
        break;
      }
    }
    else
    {
      v7 = 450LL;
    }
  }
  else
  {
    v7 = 440LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
    (const char *)(unsigned int)v3);
  v8 = *v6;
  if ( *v6 )
  {
    *v6 = 0LL;
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
LABEL_7:
    v9();
  }
LABEL_32:
  PnpDeviceWatcher::Shutdown(v2);
  return LastError;
}
