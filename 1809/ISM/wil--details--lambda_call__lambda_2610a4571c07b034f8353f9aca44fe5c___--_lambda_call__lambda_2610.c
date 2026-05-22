/*
 * XREFs of wil::details::lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___::_lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___ @ 0x1800BBFC0
 * Callers:
 *     ?StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800BB390 (-StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISp.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::StartTracking_::_1_::dtor$1 @ 0x18013399A (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceObject--StartTracking_--_1_--dt.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SpatialObjectStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@JW4SPATIAL_TRACKING_STATE@@AEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800BACBC (-SpatialObjectStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@.c)
 *     ?SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800BAE80 (-SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV-$C.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___::_lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rax
  __int64 v3; // rdi
  int *v4; // rsi
  int *v5; // rbx
  __int64 v6; // rbp
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetSourceNode(
      *(RTL_SRWLOCK **)a1,
      *(char **)(a1 + 8));
    v2 = *(RTL_SRWLOCK **)a1;
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(int **)(a1 + 24);
    v5 = *(int **)(a1 + 16);
    v6 = (*(__int64 (__fastcall **)(PVOID, _BYTE *))(*(_QWORD *)v2[15].Ptr + 48LL))(v2[15].Ptr, v9);
    v7 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v7 )
    {
      if ( *v7 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectStartTracking_(v8, v6, *v5, *v4, v3);
      }
    }
  }
}
