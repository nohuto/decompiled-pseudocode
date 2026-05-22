/*
 * XREFs of ?GetDynamicNodeHapticsIntensityLevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAE@Z @ 0x180155E60
 * Callers:
 *     ?GetDynamicNodeHapticsIntensityLevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAE@Z @ 0x18003A150 (-GetDynamicNodeHapticsIntensityLevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetDynamicNodeHapticsIntensityLevels@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAE@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAE@Z @ 0x18014A1CC (--$GetDynamicNodeHapticsIntensityLevels@PEAVSpatialGraphDriverClient@Holographic@Internal@Window.c)
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180156B5C (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeHapticsIntensityLevels(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        char *a3)
{
  char *v3; // rbp
  int NodePropertyOfKnownSize; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  const void *v10; // [rsp+60h] [rbp+8h] BYREF
  char *v11; // [rsp+70h] [rbp+18h]

  v11 = a3;
  v3 = (char *)this - 8;
  NodePropertyOfKnownSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodePropertyOfKnownSize(
                              (char *)this - 8,
                              a2,
                              &SPATIAL_DYNAMIC_NODE_PROPERTY_HAPTICS_INTENSITY_LEVELS,
                              a3,
                              1LL,
                              Windows::Internal::Holographic::ValidateProperty::DynamicNodeHapticsIntensityLevels,
                              0);
  v7 = NodePropertyOfKnownSize;
  if ( NodePropertyOfKnownSize >= 0 )
  {
    v10 = v3;
    HolographicDriverClientTrace::GetDynamicNodeHapticsIntensityLevels<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,unsigned char &>(
      &v10,
      (const struct _GUID *)((char *)this + 72),
      a2,
      v11);
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)NodePropertyOfKnownSize);
    *v11 = 0;
  }
  return v7;
}
