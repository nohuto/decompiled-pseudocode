/*
 * XREFs of ??$ReadValue@W4SPATIAL_GAZE_CALIBRATION_STATE@@@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAA?AW4SPATIAL_GAZE_CALIBRATION_STATE@@AEBV?$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_STATE@@@Holographic@23@_KPEBD@Z @ 0x1800F0124
 * Callers:
 *     ?UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J@Z @ 0x1800F1E58 (-UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPATIAL_GAZE_CALIBRATION_STATE@@PEAXIPEBDPEBW43@1ZZ @ 0x1800F0060 (--$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPA.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::ReadValue<enum SPATIAL_GAZE_CALIBRATION_STATE>(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  const char *v3; // r9
  const char *v4; // rbx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(const char **)(a1 + 1160);
  v4 = 0LL;
  v5 = *a2;
  if ( *a2 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 16) + *(_DWORD *)(v5 + 20)) > a3 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        785LL,
        (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
        v3);
      __debugbreak();
    }
    v4 = &v3[*(unsigned int *)(v5 + 16)];
  }
  wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
    retaddr,
    99LL,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractionhead.h",
    (__int64)v4);
  return *(unsigned int *)v4;
}
