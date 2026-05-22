/*
 * XREFs of ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_REPORT_TYPE@@GGGGPEAM@Z @ 0x1800A9040
 * Callers:
 *     SpatialInteractionDevices::ReadPosePosition @ 0x1800A4F80 (SpatialInteractionDevices--ReadPosePosition.c)
 *     SpatialInteractionDevices::ReadPoseOrientation @ 0x1800A5048 (SpatialInteractionDevices--ReadPoseOrientation.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800A83F4 (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 *     ?GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@W4_HIDP_REPORT_TYPE@@GGGGPEAPEAU_HIDP_VALUE_CAPS@@@Z @ 0x1800A8F64 (-GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@W4_HIDP_REPORT_TYPE@@GGGGP.c)
 *     ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x1800A924C (-ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::HIDGetFloat(
        PHIDP_PREPARSED_DATA *this,
        CHAR **a2,
        struct SpatialInteractionDevices::HID_REPORT *a3,
        enum _HIDP_REPORT_TYPE a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        float *a8)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 result; // rax
  float *v13; // rbx
  unsigned __int16 v14; // r14
  unsigned __int16 v15; // r15
  enum _HIDP_REPORT_TYPE v16; // r8d
  __int16 v17; // r9
  CHAR *Report; // rdx
  __int64 v19; // rsi
  unsigned int v20; // eax
  int v21; // eax
  const struct _HIDP_VALUE_CAPS *v22; // r8
  double v23; // xmm0_8
  float v24; // xmm5_4
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  ULONG UsageValue; // [rsp+80h] [rbp+18h] BYREF

  UsageValue = (unsigned int)a3;
  if ( !this )
  {
    v10 = 599LL;
LABEL_3:
    v11 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)v11);
    return v11;
  }
  if ( !a2 )
  {
    v10 = 600LL;
    goto LABEL_3;
  }
  v13 = a8;
  if ( !a8 )
  {
    v11 = -2147467261;
    v10 = 601LL;
    goto LABEL_4;
  }
  v14 = a7;
  v15 = a6;
  v16 = (unsigned __int16)a4;
  v17 = a5;
  *a8 = 0.0;
  v26 = 0LL;
  result = SpatialInteractionDevices::Internal::GetValueCaps(
             (SpatialInteractionDevices::Internal *)this,
             (struct SpatialInteractionDevices::HID_HANDLE *)a2,
             v16,
             v17,
             v15,
             v14,
             &v26);
  if ( (int)result >= 0 )
  {
    Report = a2[1];
    v19 = v26;
    if ( *Report == *(unsigned __int8 *)(v26 + 2) )
    {
      v20 = HidP_GetUsageValue(HidP_Input, v15, *(_WORD *)(v26 + 6), v14, &UsageValue, this[7], Report, *(_DWORD *)a2);
      v21 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v20);
      if ( v21 >= 0 )
      {
        v23 = SpatialInteractionDevices::Internal::ConvertHIDValueToDouble(
                (SpatialInteractionDevices::Internal *)(int)UsageValue,
                v19,
                v22);
        result = 0LL;
        v24 = v23;
        *v13 = v24;
      }
      else
      {
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)0x26F,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v21);
      }
    }
    else
    {
      return 2147943568LL;
    }
  }
  return result;
}
