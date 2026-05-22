/*
 * XREFs of ?CreateSpatialInteractionObjectDevices@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@SAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WV?$function@$$A6AJPEAVSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800EBDE0
 * Callers:
 *     ?AddSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800EBB10 (-AddSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$_Func_class@XPEAUInputContext@@@std@@QEBAXPEAUInputContext@@@Z @ 0x1800BB554 (--R-$_Func_class@XPEAUInputContext@@@std@@QEBAXPEAUInputContext@@@Z.c)
 *     ??$MakeAndInitialize@VSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@V1234@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@234@AEAPEAUISpatialObjectDDIClientFactory@Holographic@34@AEAPEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@456@AEAPEAUISpatialObjectDDIClientFactory@Holographic@56@AEAPEB_W$$QEAPEAUISpatialObjectDevice@956@$$QEAPEAUISpatialObject@956@@Z @ 0x1800E9C8C (--$MakeAndInitialize@VSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows.c)
 *     ??$MakeAndInitialize@VSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@V1234@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@234@AEAPEAUISpatialObjectDDIClientFactory@Holographic@34@AEAPEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@456@AEAPEAUISpatialObjectDDIClientFactory@Holographic@56@AEAPEB_W$$QEAPEAUISpatialObjectDevice@956@$$QEAPEAUISpatialObject@956@@Z @ 0x1800E9DA8 (--$MakeAndInitialize@VSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@V.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::CreateSpatialInteractionObjectDevices(
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *a1,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a2,
        const wchar_t *a3,
        __int64 a4)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32[2]; // [rsp+30h] [rbp-49h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *v33; // [rsp+38h] [rbp-41h] BYREF
  __int64 v34; // [rsp+40h] [rbp-39h] BYREF
  int v35[2]; // [rsp+48h] [rbp-31h] BYREF
  int v36[2]; // [rsp+50h] [rbp-29h] BYREF
  const wchar_t *v37; // [rsp+58h] [rbp-21h] BYREF
  struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *v38; // [rsp+60h] [rbp-19h] BYREF
  struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *v39[3]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v40[16]; // [rsp+80h] [rbp+7h] BYREF
  _BYTE v41[16]; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v39[1] = (struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *)-2LL;
  v39[0] = a1;
  v38 = a2;
  v37 = a3;
  v39[2] = (struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *)a4;
  *(_QWORD *)v32 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *, __int64, const wchar_t *, GUID *, int *))(*(_QWORD *)a2 + 24LL))(
         a2,
         9LL,
         a3,
         &GUID_NULL,
         v32);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v5);
    v8 = *(_QWORD *)v32;
    if ( *(_QWORD *)v32 )
    {
      *(_QWORD *)v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *(_QWORD *)(a4 + 56);
    if ( v9 )
    {
      LOBYTE(v7) = v9 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return v6;
  }
  if ( (*(int (__fastcall **)(_QWORD, void *, _BYTE *, __int64, _QWORD))(**(_QWORD **)v32 + 72LL))(
         *(_QWORD *)v32,
         &SPATIALPROP_HandTrackerObjectId,
         v40,
         16LL,
         0LL) >= 0 )
  {
    v34 = 0LL;
    v33 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64 *))(**(_QWORD **)v32 + 136LL))(*(_QWORD *)v32, v40, &v34);
    v6 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v33);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v34);
      v13 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 )
      {
        *(_QWORD *)v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = *(_QWORD *)(a4 + 56);
      if ( v14 )
      {
        LOBYTE(v12) = v14 != a4;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v12);
        *(_QWORD *)(a4 + 56) = 0LL;
      }
      return v6;
    }
    *(_QWORD *)v35 = v34;
    *(_QWORD *)v36 = *(_QWORD *)v32;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v33);
    v15 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice,Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal * &,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory * &,wchar_t const * &,Windows::Internal::Holographic::ISpatialObjectDevice *,Windows::Internal::Holographic::ISpatialObject *>(
            &v33,
            v39,
            &v38,
            &v37,
            (struct Windows::Internal::Holographic::ISpatialObjectDevice **)v36,
            (struct Windows::Internal::Holographic::ISpatialObject **)v35);
    v6 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD5,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v33);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v34);
      v17 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 )
      {
        *(_QWORD *)v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = *(_QWORD *)(a4 + 56);
      if ( v18 )
      {
        LOBYTE(v16) = v18 != a4;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v16);
        *(_QWORD *)(a4 + 56) = 0LL;
      }
      return v6;
    }
    v19 = std::_Func_class<void,InputContext *>::operator()(a4, (__int64)v33);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        214LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v19);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v34);
  }
  if ( (*(int (__fastcall **)(_QWORD, void *, _BYTE *, __int64, _QWORD))(**(_QWORD **)v32 + 72LL))(
         *(_QWORD *)v32,
         &SPATIALPROP_EyeTrackerObjectId,
         v41,
         16LL,
         0LL) >= 0 )
  {
    v34 = 0LL;
    v33 = 0LL;
    v21 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64 *))(**(_QWORD **)v32 + 136LL))(*(_QWORD *)v32, v41, &v34);
    v6 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v21);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v33);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v34);
      v23 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 )
      {
        *(_QWORD *)v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v24 = *(_QWORD *)(a4 + 56);
      if ( v24 )
      {
        LOBYTE(v22) = v24 != a4;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v22);
        *(_QWORD *)(a4 + 56) = 0LL;
      }
      return v6;
    }
    *(_QWORD *)v36 = v34;
    *(_QWORD *)v35 = *(_QWORD *)v32;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v33);
    v25 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice,Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal * &,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory * &,wchar_t const * &,Windows::Internal::Holographic::ISpatialObjectDevice *,Windows::Internal::Holographic::ISpatialObject *>(
            &v33,
            v39,
            &v38,
            &v37,
            (struct Windows::Internal::Holographic::ISpatialObjectDevice **)v35,
            (struct Windows::Internal::Holographic::ISpatialObject **)v36);
    v6 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v25);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v33);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v34);
      v27 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 )
      {
        *(_QWORD *)v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      v28 = *(_QWORD *)(a4 + 56);
      if ( v28 )
      {
        LOBYTE(v26) = v28 != a4;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 32LL))(v28, v26);
        *(_QWORD *)(a4 + 56) = 0LL;
      }
      return v6;
    }
    v29 = std::_Func_class<void,InputContext *>::operator()(a4, (__int64)v33);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        232LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v29);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v34);
  }
  v30 = *(_QWORD *)v32;
  if ( *(_QWORD *)v32 )
  {
    *(_QWORD *)v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = *(_QWORD *)(a4 + 56);
  if ( v31 )
  {
    LOBYTE(v20) = v31 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 32LL))(v31, v20);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 0LL;
}
