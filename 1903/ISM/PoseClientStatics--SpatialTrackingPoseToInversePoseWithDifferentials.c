/*
 * XREFs of PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x18015D8DC
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x18015B5D0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x18015BBF0 (-PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPA.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??0PoseWithDifferentials@PosePredictionTools@@QEAA@XZ @ 0x180150DFC (--0PoseWithDifferentials@PosePredictionTools@@QEAA@XZ.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x180169DD4 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 */

PosePredictionTools::PoseWithDifferentials *__fastcall PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(
        PosePredictionTools::PoseWithDifferentials *a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-19h]
  __int128 v6; // [rsp+30h] [rbp-9h]
  __int128 v7; // [rsp+40h] [rbp+7h]
  _OWORD v8[3]; // [rsp+50h] [rbp+17h] BYREF

  PosePredictionTools::PoseWithDifferentials::PoseWithDifferentials(a1);
  DWORD2(v5) = *(_DWORD *)(v2 + 24);
  v7 = *(_OWORD *)(v2 + 32);
  HIDWORD(v5) = *(_DWORD *)(v2 + 4);
  DWORD1(v6) = *(_DWORD *)(v2 + 28);
  LODWORD(v6) = *(_DWORD *)(v2 + 16);
  DWORD2(v6) = *(_DWORD *)(v2 + 8);
  HIDWORD(v6) = *(_DWORD *)(v2 + 20);
  LODWORD(v5) = *(_DWORD *)v2;
  DWORD1(v5) = *(_DWORD *)(v2 + 12);
  v8[1] = v6;
  v8[0] = v5;
  v8[2] = v7;
  ST::SE3_invert<float>(v3, v8);
  return a1;
}
