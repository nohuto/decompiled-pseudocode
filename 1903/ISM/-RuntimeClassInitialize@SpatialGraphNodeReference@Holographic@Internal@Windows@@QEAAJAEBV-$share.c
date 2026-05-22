/*
 * XREFs of ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x18015D100
 * Callers:
 *     ??$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNodeReference@234@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@456@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@456@@Z @ 0x18014B084 (--$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNode.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180150A80 (--0-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ @ 0x180151B9C (--1CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ.c)
 *     ?StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18015DB24 (-StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18015E1D0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015E604 (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::RuntimeClassInitialize(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  _QWORD *v15; // rax
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  int started; // eax
  _QWORD v19[40]; // [rsp+30h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v9 = *a2;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v19,
    (__int64)"CreateSpatialGraphNodeReference");
  v19[0] = &HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::`vftable';
  HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::StartActivity(v19, v9 + 12, a3, a4, -2LL);
  if ( !a4 )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 1676LL;
    goto LABEL_21;
  }
  v13 = a2[1];
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a2[1];
  }
  *(_QWORD *)(a1 + 72) = *a2;
  v14 = *(std::_Ref_count_base **)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v13;
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(a1 + 120) = a4;
  v15 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( a5 )
  {
    if ( v15 )
      *v15 = &Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel::`vftable';
    v16 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 112);
    *(_QWORD *)(a1 + 112) = v15;
    if ( !v16 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( v15 )
    *v15 = &Windows::Internal::Holographic::ConstantVelocityPosePredictionModel::`vftable';
  v16 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 112);
  *(_QWORD *)(a1 + 112) = v15;
  if ( v16 )
  {
LABEL_15:
    (**v16)(v16, 1LL);
LABEL_16:
    v15 = *(_QWORD **)(a1 + 112);
  }
  if ( v15 )
  {
    started = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking(
                *a2,
                a1 + 88,
                *(unsigned int *)(a1 + 120));
    v10 = started;
    if ( started >= 0 )
    {
      *(_BYTE *)(a1 + 124) = 1;
      wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
      v10 = 0;
      goto LABEL_23;
    }
    v11 = (unsigned int)started;
    v12 = 1692LL;
  }
  else
  {
    v10 = -2147024882;
    v11 = 2147942414LL;
    v12 = 1690LL;
  }
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v11);
LABEL_23:
  HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::~CreateSpatialGraphNodeReference((HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference *)v19);
  return v10;
}
