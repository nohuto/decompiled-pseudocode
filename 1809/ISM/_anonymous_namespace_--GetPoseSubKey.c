/*
 * XREFs of _anonymous_namespace_::GetPoseSubKey @ 0x1800A2CFC
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800A2D4C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180020FA8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

const wchar_t *__fastcall anonymous_namespace_::GetPoseSubKey(char *a1)
{
  char *v2; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(_DWORD)a1 )
    return L"HoldingPose";
  if ( (_DWORD)a1 != 1 )
  {
    LODWORD(v2) = (_DWORD)a1;
    wil::details::in1diag3::FailFast_UnexpectedMsg(
      retaddr,
      (void *)0x72,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      "Unknown pose type %d",
      v2);
    JUMPOUT(0x1800A2D43LL);
  }
  return L"PointingPose";
}
