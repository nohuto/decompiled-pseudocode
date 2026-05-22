/*
 * XREFs of ??0PoseWithDifferentials@PosePredictionTools@@QEAA@XZ @ 0x180150DEC
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x18015B5E0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x18015D90C (PoseClientStatics--SpatialTrackingPoseToInversePoseWithDifferentials.c)
 * Callees:
 *     <none>
 */

PosePredictionTools::PoseWithDifferentials *__fastcall PosePredictionTools::PoseWithDifferentials::PoseWithDifferentials(
        PosePredictionTools::PoseWithDifferentials *this)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx

  v1 = (_DWORD *)((char *)this + 72);
  v2 = 6LL;
  *(_OWORD *)this = `ST::SE3_identity<float>'::`2'::id;
  *((_OWORD *)this + 1) = xmmword_1801AEC60;
  *((_OWORD *)this + 2) = xmmword_1801AEC70;
  do
  {
    *(v1 - 6) = 0;
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
  return this;
}
