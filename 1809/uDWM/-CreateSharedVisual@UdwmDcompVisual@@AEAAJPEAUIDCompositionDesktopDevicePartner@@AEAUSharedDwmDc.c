/*
 * XREFs of ?CreateSharedVisual@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@AEAUSharedDwmDcompVisual@@_N@Z @ 0x18002219C
 * Callers:
 *     ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x1800220B4 (-InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z.c)
 * Callees:
 *     ?WrapExistingResource@UdwmBottomVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180021F00 (-WrapExistingResource@UdwmBottomVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?WrapExistingResource@UdwmTopVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180021FF4 (-WrapExistingResource@UdwmTopVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmDcompVisual::CreateSharedVisual(
        UdwmDcompVisual *this,
        struct IDCompositionDesktopDevicePartner *a2,
        struct SharedDwmDcompVisual *a3,
        char a4)
{
  _QWORD *v8; // r14
  int v9; // esi
  _QWORD *v10; // r12
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  struct IDwmChannel *v14; // rcx
  unsigned int v15; // edx
  _QWORD *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct UdwmTopVisual *v23; // [rsp+78h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  if ( !a4 )
  {
    v17 = (_QWORD *)((char *)a3 + 8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)a3 + 8);
    v9 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, GUID *, _QWORD *))(*(_QWORD *)a2 + 216LL))(
           a2,
           &GUID_e8de1639_4331_4b26_bc5f_6a321d347a85,
           v17);
    if ( v9 < 0 )
    {
      v18 = 406LL;
    }
    else
    {
      v10 = (_QWORD *)((char *)a3 + 32);
      v9 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, _QWORD, char *))(*(_QWORD *)a2 + 224LL))(
             a2,
             *v17,
             (char *)a3 + 32);
      if ( v9 >= 0 )
        goto LABEL_8;
      v18 = 407LL;
    }
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v9,
      v20);
    return (unsigned int)v9;
  }
  v8 = (_QWORD *)((char *)a3 + 16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)a3 + 16);
  v9 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, GUID *, _QWORD *))(*(_QWORD *)a2 + 216LL))(
         a2,
         &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
         v8);
  if ( v9 < 0 )
  {
    v18 = 392LL;
    goto LABEL_21;
  }
  v10 = (_QWORD *)((char *)a3 + 32);
  v9 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, _QWORD, char *))(*(_QWORD *)a2 + 224LL))(
         a2,
         *v8,
         (char *)a3 + 32);
  if ( v9 < 0 )
  {
    v18 = 395LL;
    goto LABEL_21;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)a3 + 8);
  v9 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, char *))(*(_QWORD *)a2 + 48LL))(
         a2,
         (char *)a3 + 8);
  if ( v9 < 0 )
  {
    v18 = 398LL;
    goto LABEL_21;
  }
  v9 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v9 < 0 )
  {
    v18 = 399LL;
    goto LABEL_21;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 24LL))(*v8, *((_QWORD *)a3 + 1));
  if ( v9 < 0 )
  {
    v18 = 402LL;
    goto LABEL_21;
  }
LABEL_8:
  v11 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a2 + 24LL))(a2);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19A,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v11,
      v20);
  }
  else
  {
    v21 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**((_QWORD **)this + 13) + 120LL))(
            *((_QWORD *)this + 13),
            *v10,
            38LL,
            (char *)a3 + 24);
    v12 = v13;
    if ( v13 < 0 )
    {
      v19 = 416LL;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 24LL))(*((_QWORD *)this + 13));
      v12 = v13;
      if ( v13 < 0 )
      {
        v19 = 417LL;
      }
      else
      {
        v14 = (struct IDwmChannel *)*((_QWORD *)this + 13);
        v15 = *((_DWORD *)a3 + 6);
        if ( a4 )
        {
          v13 = UdwmTopVisual::WrapExistingResource(v14, v15, &v23);
          v12 = v13;
          if ( v13 >= 0 )
            goto LABEL_13;
          v19 = 421LL;
        }
        else
        {
          v13 = UdwmBottomVisual::WrapExistingResource(v14, v15, &v23);
          v12 = v13;
          if ( v13 >= 0 )
          {
LABEL_13:
            *(_QWORD *)a3 = v23;
            LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
            return 0LL;
          }
          v19 = 427LL;
        }
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v13,
      v20);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  }
  return v12;
}
