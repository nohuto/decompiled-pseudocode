/*
 * XREFs of ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1801688D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800AC930 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?KeepAlive@KeepAliveTimer@ThreadpoolTimerHelpers@@QEAAXXZ @ 0x1800E2B14 (-KeepAlive@KeepAliveTimer@ThreadpoolTimerHelpers@@QEAAXXZ.c)
 *     _lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator() @ 0x180163480 (_lambda_0ef360edd2b0e079ee5004fb777ac3fe_--operator().c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x1801653B0 (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StartTracking(
        __int64 a1,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a3,
        HSTRING a4,
        unsigned int a5)
{
  int v9; // edi
  int v10; // eax
  unsigned int v12; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-7Dh] BYREF
  int v14[2]; // [rsp+38h] [rbp-79h] BYREF
  HSTRING v15; // [rsp+40h] [rbp-71h] BYREF
  __int128 v16; // [rsp+48h] [rbp-69h]
  __int128 v17; // [rsp+58h] [rbp-59h]
  __int128 v18; // [rsp+68h] [rbp-49h]
  _OWORD v19[3]; // [rsp+78h] [rbp-39h] BYREF
  char v20; // [rsp+A8h] [rbp-9h]
  __int64 v21; // [rsp+B0h] [rbp-1h]
  _QWORD v22[2]; // [rsp+B8h] [rbp+7h] BYREF
  int v23; // [rsp+C8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v21 = -2LL;
  v15 = a4;
  v12 = 0;
  ThreadpoolTimerHelpers::KeepAliveTimer::KeepAlive((ThreadpoolTimerHelpers::KeepAliveTimer *)(a1 + 576));
  if ( !*(_BYTE *)(a1 + 456) )
  {
    v13 = 0;
    *(_QWORD *)v14 = 0LL;
    v22[0] = 0LL;
    v22[1] = 0LL;
    v23 = 0;
    *(_QWORD *)&v16 = a1;
    *((_QWORD *)&v16 + 1) = v14;
    *(_QWORD *)&v17 = &v12;
    *((_QWORD *)&v17 + 1) = &a5;
    *(_QWORD *)&v18 = &v13;
    *((_QWORD *)&v18 + 1) = v22;
    v19[0] = v16;
    v19[1] = v17;
    v19[2] = v18;
    v20 = 1;
    v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice(
           (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)a1,
           a3,
           (struct Windows::Internal::Holographic::DynamicNodeInfo *)v22,
           &v13);
    v12 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)v14);
      v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *, _QWORD, int *))(*(_QWORD *)a2 + 32LL))(
              a2,
              a4,
              v22,
              a5,
              v14);
      v9 = v10;
      v12 = v10;
      if ( v10 >= 0 )
      {
        Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 96), &v15);
        v20 = 0;
        lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator()((__int64)v19);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)v14);
        return v12;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D4,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v10);
    }
    v20 = 0;
    lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator()((__int64)v19);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)v14);
    return (unsigned int)v9;
  }
  *(_BYTE *)(a1 + 457) = 1;
  return v12;
}
