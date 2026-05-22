/*
 * XREFs of ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1801159BC
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x180111BB4 (-RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18010F27C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x18011047C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18011471C (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetSupportedDDILevelsInternal(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper **this,
        struct HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS *a2)
{
  char v3; // di
  int v4; // eax
  int DevicePropertyOfKnownSize; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD v9; // [rsp+70h] [rbp+8h] BYREF
  void *v10; // [rsp+78h] [rbp+10h]

  v10 = a2;
  v3 = 1;
  v9 = 0;
  v4 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         this[13],
         0x5B8450u,
         0LL,
         0,
         a2,
         8u,
         &v9);
  if ( v4 >= 0 )
  {
    Windows::Internal::Holographic::PropertyCache::SetValue(
      (Windows::Internal::Holographic::PropertyCache *)(this + 26),
      &SPATIAL_GRAPH_DEVICE_PROPERTY_SUPPORTED_DDI_LEVELS,
      v10,
      8uLL);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x619,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v4);
    DevicePropertyOfKnownSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize(
                                  (__int64)this,
                                  &SPATIAL_GRAPH_DEVICE_PROPERTY_SUPPORTED_DDI_LEVELS,
                                  v10,
                                  8uLL,
                                  (__int64 (__fastcall *)(void *, rsize_t))Windows::Internal::Holographic::ValidateProperty::SupportedDDILevels,
                                  0);
    v6 = DevicePropertyOfKnownSize;
    if ( DevicePropertyOfKnownSize < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x621,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)DevicePropertyOfKnownSize);
      goto LABEL_6;
    }
  }
  v6 = 0;
  v3 = 0;
LABEL_6:
  if ( v3 )
    *(_QWORD *)v10 = 0x100000001LL;
  return v6;
}
