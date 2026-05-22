/*
 * XREFs of ?StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800EE5A0
 * Callers:
 *     ?StartTracking@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800F1DA0 (-StartTracking@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800AC930 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     _lambda_2610a4571c07b034f8353f9aca44fe5c_::operator() @ 0x1800EAF44 (_lambda_2610a4571c07b034f8353f9aca44fe5c_--operator().c)
 *     ?EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@@Z @ 0x1800EC39C (-EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::StartTracking(
        HSTRING *a1,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a3,
        HSTRING a4,
        unsigned int a5)
{
  int v8; // ebx
  int v10; // [rsp+30h] [rbp-71h] BYREF
  __int64 v11; // [rsp+38h] [rbp-69h] BYREF
  HSTRING v12; // [rsp+40h] [rbp-61h] BYREF
  __int128 v13; // [rsp+48h] [rbp-59h]
  __int128 v14; // [rsp+58h] [rbp-49h]
  _QWORD *v15; // [rsp+68h] [rbp-39h]
  __int64 v16; // [rsp+70h] [rbp-31h]
  _OWORD v17[2]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD *v18; // [rsp+98h] [rbp-9h]
  char v19; // [rsp+A0h] [rbp-1h]
  _QWORD v20[2]; // [rsp+A8h] [rbp+7h] BYREF
  int v21; // [rsp+B8h] [rbp+17h]

  v16 = -2LL;
  v12 = a4;
  v10 = 0;
  v11 = 0LL;
  v20[0] = 0LL;
  v20[1] = 0LL;
  v21 = 0;
  *(_QWORD *)&v13 = a1;
  *((_QWORD *)&v13 + 1) = &v11;
  *(_QWORD *)&v14 = &v10;
  *((_QWORD *)&v14 + 1) = &a5;
  v15 = v20;
  v17[0] = v13;
  v17[1] = v14;
  v18 = v20;
  v19 = 1;
  v8 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::EnsureDynamicNodeInfo(
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *)a1,
         a3,
         (struct Windows::Internal::Holographic::DynamicNodeInfo *)v20);
  v10 = v8;
  if ( v8 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v11);
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL))(
           a2,
           a4,
           v20,
           a5,
           &v11);
    v10 = v8;
    if ( v8 >= 0 )
    {
      Microsoft::WRL::Wrappers::HString::Set(a1 + 12, &v12);
      v8 = 0;
    }
  }
  v19 = 0;
  lambda_2610a4571c07b034f8353f9aca44fe5c_::operator()(v17);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v11);
  return (unsigned int)v8;
}
