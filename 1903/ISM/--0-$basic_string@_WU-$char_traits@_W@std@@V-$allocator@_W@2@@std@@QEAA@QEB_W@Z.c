/*
 * XREFs of ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800D79B8
 * Callers:
 *     ?OpenHardwareKey@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHKEY__@@@Z @ 0x1800D88B0 (-OpenHardwareKey@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHKEY__@@@Z.c)
 *     _lambda_f7bf13e3725ed8e2d2abfc7e94bc16a5_::operator() @ 0x1800EB550 (_lambda_f7bf13e3725ed8e2d2abfc7e94bc16a5_--operator().c)
 *     ?RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800ED304 (-RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x180153AE8 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x180155B90 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x180163680 (_lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator().c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1800D97E0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8

  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a2 + 2 * v3) );
  std::wstring::assign(a1);
  return a1;
}
