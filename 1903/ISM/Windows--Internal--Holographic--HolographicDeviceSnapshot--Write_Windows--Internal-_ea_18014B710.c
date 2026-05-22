/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4___ @ 0x18014B710
 * Callers:
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x180157BE0 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 * Callees:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_81a1f3a0b0089925dbb8abbd9e8c6b20___ @ 0x18014AC34 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_81a1f3a0b008992.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4___(
        __int64 a1,
        __int64 a2)
{
  const char *v2; // r9
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3[0] = a1;
  v3[1] = a2;
  try
  {
    Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_81a1f3a0b0089925dbb8abbd9e8c6b20___(v3);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x136,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
      v2);
  }
}
