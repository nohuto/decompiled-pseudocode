/*
 * XREFs of SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x1800A7194
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800A2D4C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x1800A4EE4 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800A83F4 (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 *     ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x1800A924C (-ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char *a5)
{
  char *v5; // r14
  _WORD *v6; // rdi
  char v7; // r8
  __int64 v10; // rsi
  unsigned int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rbx
  float v14; // xmm5_4
  __int64 result; // rax
  unsigned int ScaledUsageValue; // eax
  int v17; // edx
  int v18; // eax
  const struct _HIDP_VALUE_CAPS *v19; // r8
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  LONG UsageValue; // [rsp+90h] [rbp+18h] BYREF

  LOBYTE(UsageValue) = a3;
  v5 = a5;
  v6 = (_WORD *)(a2 + 2);
  v7 = 0;
  *a5 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1 + 184);
    v12 = 0LL;
    if ( v11 )
      break;
LABEL_10:
    v14 = 0.0;
LABEL_11:
    *(float *)(a4 + 4 * v10) = v14;
    v6 += 8;
    if ( (unsigned __int64)++v10 >= 3 )
    {
      *v5 = v7;
      return 0LL;
    }
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 176) + 72 * v12;
    if ( *(v6 - 1) == *(_WORD *)(v13 + 10)
      && v6[1] == *(_WORD *)v13
      && *v6 == *(_WORD *)(v13 + 8)
      && !*(_BYTE *)(v13 + 12)
      && v6[2] == *(_WORD *)(v13 + 56)
      && ((*(_DWORD *)(v13 + 36) - 17) & 0xFFFFFFFD) == 0 )
    {
      break;
    }
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v11 )
      goto LABEL_10;
  }
  LOBYTE(v12) = *(_BYTE *)(v13 + 2);
  result = SpatialInteractionDevices::UpdateFeatureReportIfNeeded((__int64 *)a1, v12);
  if ( (int)result < 0 )
    return result;
  ScaledUsageValue = HidP_GetScaledUsageValue(
                       HidP_Feature,
                       *(_WORD *)v13,
                       *(_WORD *)(v13 + 6),
                       *(_WORD *)(v13 + 56),
                       &UsageValue,
                       *(PHIDP_PREPARSED_DATA *)(a1 + 56),
                       *(PCHAR *)(a1 + 288),
                       *(_DWORD *)(a1 + 280));
  v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ScaledUsageValue, v17);
  if ( v18 >= 0 )
  {
    v14 = SpatialInteractionDevices::Internal::ConvertHIDValueToDouble(
            (SpatialInteractionDevices::Internal *)UsageValue,
            v13,
            v19);
    if ( *(_DWORD *)(v13 + 36) == 19 )
      v14 = v14 * 2.54;
    v7 = 1;
    goto LABEL_11;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x4DA,
           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
           (const char *)(unsigned int)v18);
}
