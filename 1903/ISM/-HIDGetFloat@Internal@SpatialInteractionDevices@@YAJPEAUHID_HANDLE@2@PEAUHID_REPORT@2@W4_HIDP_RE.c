/*
 * XREFs of ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_REPORT_TYPE@@GGGGPEAM@Z @ 0x1800DED90
 * Callers:
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT3_ @ 0x1800DAC20 (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT3_.c)
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_ @ 0x1800DACDC (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT4_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059C10 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x1800DEAD8 (-ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z.c)
 *     ?GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@W4_HIDP_REPORT_TYPE@@GGGGPEAPEAU_HIDP_VALUE_CAPS@@@Z @ 0x1800DECBC (-GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@W4_HIDP_REPORT_TYPE@@GGGGP.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800DEF9C (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
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
  int v21; // edx
  int v22; // eax
  const struct _HIDP_VALUE_CAPS *v23; // r8
  double v24; // xmm0_8
  float v25; // xmm5_4
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF
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
  v27 = 0LL;
  result = SpatialInteractionDevices::Internal::GetValueCaps(
             (SpatialInteractionDevices::Internal *)this,
             (struct SpatialInteractionDevices::HID_HANDLE *)a2,
             v16,
             v17,
             v15,
             v14,
             &v27);
  if ( (int)result >= 0 )
  {
    Report = a2[1];
    v19 = v27;
    if ( *Report == *(unsigned __int8 *)(v27 + 2) )
    {
      v20 = HidP_GetUsageValue(HidP_Input, v15, *(_WORD *)(v27 + 6), v14, &UsageValue, this[7], Report, *(_DWORD *)a2);
      v22 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v20, v21);
      if ( v22 >= 0 )
      {
        v24 = SpatialInteractionDevices::Internal::ConvertHIDValueToDouble(
                (SpatialInteractionDevices::Internal *)(int)UsageValue,
                v19,
                v23);
        result = 0LL;
        v25 = v24;
        *v13 = v25;
      }
      else
      {
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)0x26F,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v22);
      }
    }
    else
    {
      return 2147943568LL;
    }
  }
  return result;
}
