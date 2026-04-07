/*
 * XREFs of ?CreateSharedVisual@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@AEAUSharedDwmDcompVisual@@_N@Z @ 0x18000F418
 * Callers:
 *     ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x18000F330 (-InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z.c)
 * Callees:
 *     ?WrapExistingResource@UdwmTopVisual@@SAJIPEAPEAV1@@Z @ 0x18000F65C (-WrapExistingResource@UdwmTopVisual@@SAJIPEAPEAV1@@Z.c)
 *     ?WrapExistingResource@UdwmBottomVisual@@SAJIPEAPEAV1@@Z @ 0x18000F714 (-WrapExistingResource@UdwmBottomVisual@@SAJIPEAPEAV1@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800390F0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmDcompVisual::CreateSharedVisual(
        UdwmDcompVisual *this,
        struct IDCompositionDesktopDevicePartner *a2,
        struct SharedDwmDcompVisual *a3,
        char a4)
{
  _QWORD *v7; // r14
  int v8; // esi
  _QWORD *v9; // r15
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  _QWORD *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct UdwmTopVisual *v20; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+68h] [rbp+10h] BYREF

  v20 = this;
  if ( !a2 )
    return 0LL;
  if ( !a4 )
  {
    v15 = (_QWORD *)((char *)a3 + 8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)a3 + 8);
    v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, GUID *, _QWORD *))(*(_QWORD *)a2 + 216LL))(
           a2,
           &GUID_e8de1639_4331_4b26_bc5f_6a321d347a85,
           v15);
    if ( v8 < 0 )
    {
      v16 = 392LL;
    }
    else
    {
      v9 = (_QWORD *)((char *)a3 + 32);
      v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, _QWORD, char *))(*(_QWORD *)a2 + 224LL))(
             a2,
             *v15,
             (char *)a3 + 32);
      if ( v8 >= 0 )
        goto LABEL_8;
      v16 = 393LL;
    }
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v8,
      v18);
    return (unsigned int)v8;
  }
  v7 = (_QWORD *)((char *)a3 + 16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)a3 + 16);
  v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, GUID *, _QWORD *))(*(_QWORD *)a2 + 216LL))(
         a2,
         &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
         v7);
  if ( v8 < 0 )
  {
    v16 = 378LL;
    goto LABEL_21;
  }
  v9 = (_QWORD *)((char *)a3 + 32);
  v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, _QWORD, char *))(*(_QWORD *)a2 + 224LL))(
         a2,
         *v7,
         (char *)a3 + 32);
  if ( v8 < 0 )
  {
    v16 = 381LL;
    goto LABEL_21;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)a3 + 8);
  v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, char *))(*(_QWORD *)a2 + 48LL))(
         a2,
         (char *)a3 + 8);
  if ( v8 < 0 )
  {
    v16 = 384LL;
    goto LABEL_21;
  }
  v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v8 < 0 )
  {
    v16 = 385LL;
    goto LABEL_21;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v7 + 24LL))(*v7, *((_QWORD *)a3 + 1));
  if ( v8 < 0 )
  {
    v16 = 388LL;
    goto LABEL_21;
  }
LABEL_8:
  v10 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a2 + 24LL))(a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v10,
      v18);
  }
  else
  {
    v21 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                     + 5)
                                                                                   + 16LL)
                                                                     + 128LL))(
            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
            *v9,
            39LL,
            (char *)a3 + 24);
    v11 = v12;
    if ( v12 < 0 )
    {
      v17 = 402LL;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 16LL)
                                              + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 5)
                                                                 + 16LL));
      v11 = v12;
      if ( v12 < 0 )
      {
        v17 = 403LL;
      }
      else
      {
        v13 = *((_DWORD *)a3 + 6);
        if ( a4 )
        {
          v12 = UdwmTopVisual::WrapExistingResource(v13, &v20);
          v11 = v12;
          if ( v12 >= 0 )
            goto LABEL_13;
          v17 = 407LL;
        }
        else
        {
          v12 = UdwmBottomVisual::WrapExistingResource(v13, &v20);
          v11 = v12;
          if ( v12 >= 0 )
          {
LABEL_13:
            *(_QWORD *)a3 = v20;
            LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
            return 0LL;
          }
          v17 = 413LL;
        }
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v12,
      v18);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  }
  return v11;
}
