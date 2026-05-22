/*
 * XREFs of ?ReadPoseDataFromRegistry@SpatialInteractionDevices@@YAJPEAUHKEY__@@PEAUPoseData@1@@Z @ 0x1800D8D88
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800D82C8 (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 * Callees:
 *     _anonymous_namespace_::ReadRegistryFloat @ 0x1800D8E68 (_anonymous_namespace_--ReadRegistryFloat.c)
 */

__int64 __fastcall SpatialInteractionDevices::ReadPoseDataFromRegistry(
        SpatialInteractionDevices *this,
        _BYTE *a2,
        struct SpatialInteractionDevices::PoseData *a3)
{
  char v5; // si
  bool v6; // al

  v5 = 1;
  v6 = (int)anonymous_namespace_::ReadRegistryFloat(this, L"Translation_X", a2) >= 0
    && (int)anonymous_namespace_::ReadRegistryFloat(this, L"Translation_Y", a2 + 4) >= 0
    && (int)anonymous_namespace_::ReadRegistryFloat(this, L"Translation_Z", a2 + 8) >= 0;
  a2[28] = v6;
  if ( (int)anonymous_namespace_::ReadRegistryFloat(this, L"Orientation_X", a2 + 12) < 0
    || (int)anonymous_namespace_::ReadRegistryFloat(this, L"Orientation_Y", a2 + 16) < 0
    || (int)anonymous_namespace_::ReadRegistryFloat(this, L"Orientation_Z", a2 + 20) < 0
    || (int)anonymous_namespace_::ReadRegistryFloat(this, L"Orientation_W", a2 + 24) < 0 )
  {
    v5 = 0;
  }
  a2[29] = v5;
  return 0LL;
}
