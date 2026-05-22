/*
 * XREFs of ?AddSpatialNodeMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBUDynamicNodeInfo@234@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180153310
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x180155B90 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 * Callees:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ed6a7cdcc708de0d2bf982d91253a679___ @ 0x18014AD84 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_ed6a7cdcc708de0.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v3; // r9
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4[0] = a1;
  v4[1] = a2;
  v4[2] = a3;
  try
  {
    Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ed6a7cdcc708de0d2bf982d91253a679___(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x10D,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
      v3);
  }
}
