/*
 * XREFs of SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x1800DA874
 * Callers:
 *     ?GetPoseOffset@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4PoseType@1@PEAUPoseData@1@@Z @ 0x1800DC4BC (-GetPoseOffset@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4PoseType@1@PEAUPoseData@1@@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059990 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x1800DD640 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x1800DE898 (-ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800DED5C (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        _BYTE *a5)
{
  _BYTE *v5; // r14
  _WORD *v6; // rdi
  char v7; // r10
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rbx
  float v14; // xmm5_4
  __int64 result; // rax
  unsigned int ScaledUsageValue; // eax
  int v17; // edx
  int v18; // eax
  const struct _HIDP_VALUE_CAPS *v19; // r8
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LONG UsageValue; // [rsp+80h] [rbp+18h] BYREF

  LOBYTE(UsageValue) = a3;
  v5 = a5;
  v6 = (_WORD *)(a2 + 2);
  v7 = 0;
  v10 = 0LL;
  *a5 = 0;
  while ( 1 )
  {
    v11 = *(unsigned int *)(a1 + 184);
    v12 = 0LL;
    if ( (_DWORD)v11 )
      break;
LABEL_9:
    v14 = 0.0;
LABEL_10:
    *(float *)(a4 + 4 * v10) = v14;
    v6 += 8;
    if ( (unsigned __int64)++v10 >= 4 )
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
      && v6[2] == *(_WORD *)(v13 + 56) )
    {
      break;
    }
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= (unsigned int)v11 )
      goto LABEL_9;
  }
  LOBYTE(v12) = *(_BYTE *)(v13 + 2);
  result = SpatialInteractionDevices::UpdateFeatureReportIfNeeded(a1, v12, v11);
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
    goto LABEL_10;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x4DA,
           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
           (const char *)(unsigned int)v18);
}
