/*
 * XREFs of ?GetPoseOffset@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4PoseType@1@PEAUPoseData@1@@Z @ 0x1800DC6FC
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800D82C8 (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x1800DA920 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT3_3_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x1800DAAB4 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT4_4_.c)
 *     SpatialInteractionDevices::AdjustOrientationAndScale @ 0x1800DC2E8 (SpatialInteractionDevices--AdjustOrientationAndScale.c)
 */

__int64 __fastcall SpatialInteractionDevices::GetPoseOffset(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  char v6; // r8
  void *v7; // rdx
  union __m128 *v8; // rdx
  union __m128 *v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    result = SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_(
               a1,
               (__int64)&unk_18017BAA0,
               a3,
               a3,
               (_BYTE *)(a3 + 28));
    if ( (int)result < 0 )
      return result;
    v7 = &unk_18017BAD0;
    goto LABEL_6;
  }
  if ( a2 != 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x506,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  result = SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_(
             a1,
             (__int64)&unk_18017B9C0,
             a3,
             a3,
             (_BYTE *)(a3 + 28));
  if ( (int)result >= 0 )
  {
    v7 = &unk_18017B9F0;
LABEL_6:
    result = SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_(
               a1,
               (__int64)v7,
               v6,
               a3 + 12,
               (_BYTE *)(a3 + 29));
    if ( (int)result >= 0 )
    {
      SpatialInteractionDevices::AdjustOrientationAndScale((unsigned __int64 *)a3, v8, v9);
      return 0LL;
    }
  }
  return result;
}
