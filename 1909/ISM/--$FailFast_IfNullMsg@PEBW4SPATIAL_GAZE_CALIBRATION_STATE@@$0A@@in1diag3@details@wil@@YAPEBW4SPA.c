/*
 * XREFs of ??$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPATIAL_GAZE_CALIBRATION_STATE@@PEAXIPEBDPEBW43@1ZZ @ 0x1800F0060
 * Callers:
 *     ??$ReadValue@UXMFLOAT3@DirectX@@@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAA?AUXMFLOAT3@DirectX@@AEBV?$PayloadFieldHelper@UXMFLOAT3@DirectX@@@Holographic@23@_KPEBD@Z @ 0x1800F0098 (--$ReadValue@UXMFLOAT3@DirectX@@@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Inter.c)
 *     ??$ReadValue@W4SPATIAL_GAZE_CALIBRATION_STATE@@@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAA?AW4SPATIAL_GAZE_CALIBRATION_STATE@@AEBV?$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_STATE@@@Holographic@23@_KPEBD@Z @ 0x1800F0124 (--$ReadValue@W4SPATIAL_GAZE_CALIBRATION_STATE@@@SpatialInteractionEyeGazeSourceObject@SpatialInt.c)
 *     ?UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J@Z @ 0x1800F1E58 (-UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J.c)
 *     _lambda_831c036b4ad6511f8a8292a9f8f911ac_::operator() @ 0x1800F36E8 (_lambda_831c036b4ad6511f8a8292a9f8f911ac_--operator().c)
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800F6150 (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 * Callees:
 *     ?_FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD01PEAD@Z @ 0x1800DD84C (-_FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD01PEAD@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
        wil::details::in1diag3 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const char *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_UnexpectedMsg(a1, a2, a3, retaddr);
    __debugbreak();
  }
  return a4;
}
