/*
 * XREFs of wil::details::lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___::_lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___ @ 0x1800BC078
 * Callers:
 *     ?StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800BB390 (-StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISp.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::StartTracking_::_1_::dtor$2 @ 0x1801339AC (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceObject--StartTrack_ea_1801339AC.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SpatialObjectEnsureDynamicNodeInfo_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@0@Z @ 0x1800BAB68 (-SpatialObjectEnsureDynamicNodeInfo_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEB.c)
 *     ?SpatialObjectEnsureDynamicNodeInfoFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J@Z @ 0x1800BAC14 (-SpatialObjectEnsureDynamicNodeInfoFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___::_lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___(
        __int64 a1)
{
  int *v1; // rbx
  __int64 (__fastcall *v2)(_QWORD, _BYTE *); // rax
  const struct _GUID *v3; // rbx
  const struct _GUID *v4; // rdi
  _DWORD *v5; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v6; // rcx
  const struct _GUID *v7; // rdi
  _DWORD *v8; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v9; // rcx
  _BYTE v10[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    v1 = *(int **)(a1 + 8);
    v2 = *(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(*(_QWORD *)a1 + 120LL) + 48LL);
    if ( *v1 < 0 )
    {
      v7 = (const struct _GUID *)v2(*(_QWORD *)(*(_QWORD *)a1 + 120LL), v10);
      v8 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v8 && *v8 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectEnsureDynamicNodeInfoFailed_(v9, v7, *v1);
      }
    }
    else
    {
      v3 = *(const struct _GUID **)(a1 + 16);
      v4 = (const struct _GUID *)v2(*(_QWORD *)(*(_QWORD *)a1 + 120LL), v10);
      v5 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v5 )
      {
        if ( *v5 )
        {
          SpatialInteractionDevices::SpatialInteractionTrace::Instance();
          SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectEnsureDynamicNodeInfo_(v6, v4, v3);
        }
      }
    }
  }
}
