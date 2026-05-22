/*
 * XREFs of ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x1801564F0
 * Callers:
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUDynamicNodeInfo@234@@Z @ 0x18003A190 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUDynamicN.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1801556E8 (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x180155D38 (-GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNode.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015989C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetFloorDynamicNode(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a2)
{
  int DevicePropertyOfKnownSize; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // cl
  __int64 v8; // rcx
  HolographicDriverClientTrace *v9; // rcx
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  DevicePropertyOfKnownSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize(
                                (__int64)this - 8,
                                &SPATIAL_GRAPH_DEVICE_PROPERTY_FLOOR_FINDER,
                                &v12,
                                0x10uLL,
                                (__int64 (__fastcall *)(void *, unsigned __int64))Windows::Internal::Holographic::ValidateProperty::NodeId,
                                2);
  v4 = DevicePropertyOfKnownSize;
  if ( DevicePropertyOfKnownSize < 0 )
  {
    v5 = 1365LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)DevicePropertyOfKnownSize);
    *(_OWORD *)a2 = `Zero<Windows::Internal::Holographic::DynamicNodeInfo>'::`2'::zero;
    *((_DWORD *)a2 + 4) = 0;
    return v4;
  }
  *(_OWORD *)a2 = v12;
  DevicePropertyOfKnownSize = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, char *))(*(_QWORD *)this + 136LL))(
                                this,
                                a2,
                                (char *)a2 + 16);
  v4 = DevicePropertyOfKnownSize;
  if ( DevicePropertyOfKnownSize < 0 )
  {
    v5 = 1368LL;
    goto LABEL_5;
  }
  if ( HolographicDriverClientTrace::IsEnabled(v7, v6) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v8,
      lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::GetDynamicNodeForDevice_(
      v9,
      (char *)this - 8,
      (const struct _GUID *)((char *)this + 72),
      L"FloorFinderQuery",
      a2);
  }
  return 0;
}
