/*
 * XREFs of ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180114E24
 * Callers:
 *     ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x180113CB0 (-GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJ.c)
 *     ?GetDynamicNodeButtonLatencyMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAH@Z @ 0x180113D80 (-GetDynamicNodeButtonLatencyMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@.c)
 *     ?GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAI@Z @ 0x180113E50 (-GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Win.c)
 *     ?GetDynamicNodeHapticsIntensityLevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAE@Z @ 0x180113F20 (-GetDynamicNodeHapticsIntensityLevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z @ 0x18010DA8C (-NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x180110804 (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ?GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_K@Z @ 0x1801109B0 (-GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@P.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18011B760 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodePropertyOfKnownSize(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        const struct _GUID *a3,
        void *a4,
        rsize_t DestinationSize,
        __int64 (__fastcall *a6)(void *, rsize_t),
        char a7)
{
  bool v11; // bl
  bool v12; // al
  _DWORD *v13; // rcx
  HolographicDriverClientTrace *v14; // rcx
  int PropertyOfKnown; // ebx
  __int64 v16; // rdx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v18; // rcx
  struct _GUID v19; // xmm1
  _OWORD InBuffer[2]; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v11 = 1;
  v12 = (a7 & 1) != 0 || *(_BYTE *)(a1 + 120) && (a7 & 2) == 0;
  if ( (a7 & 2) == 0 )
    v11 = *(_BYTE *)(a1 + 120) == 0;
  if ( v12 )
  {
    if ( (int)Windows::Internal::Holographic::NodePropertyCache::GetValue(
                (RTL_SRWLOCK *)(a1 + 264),
                a2,
                a3,
                a4,
                DestinationSize) >= 0 )
      return 0LL;
    v13 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v13 )
    {
      if ( *v13 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::NodePropertyCacheMiss_(v14, (const struct _GUID *)(a1 + 80), a2, a3, v11);
      }
    }
  }
  if ( !v11 )
  {
    PropertyOfKnown = -2147023728;
    v16 = 1269LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)PropertyOfKnown);
    return (unsigned int)PropertyOfKnown;
  }
  memset_0(InBuffer, 0, sizeof(InBuffer));
  v18 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 104);
  v19 = *a3;
  InBuffer[1] = *(_OWORD *)a2;
  InBuffer[0] = v19;
  PropertyOfKnown = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfKnownSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                      v18,
                      0x5B8418u,
                      InBuffer,
                      0x20u,
                      a4,
                      DestinationSize);
  if ( PropertyOfKnown < 0 )
  {
    v16 = 1284LL;
    goto LABEL_15;
  }
  PropertyOfKnown = a6(a4, DestinationSize);
  if ( PropertyOfKnown < 0 )
  {
    v16 = 1286LL;
    goto LABEL_15;
  }
  Windows::Internal::Holographic::NodePropertyCache::SetValue((struct _GUID *)(a1 + 264), a2, a3, a4, DestinationSize);
  return 0LL;
}
