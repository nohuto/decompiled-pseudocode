/*
 * XREFs of ?GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@W4_HIDP_REPORT_TYPE@@GGGGPEAPEAU_HIDP_VALUE_CAPS@@@Z @ 0x1800DECBC
 * Callers:
 *     ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x1800DD614 (-SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z.c)
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_REPORT_TYPE@@GGGGPEAM@Z @ 0x1800DED90 (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_RE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MatchValueCaps@Internal@SpatialInteractionDevices@@YA_NGGGGPEAU_HIDP_VALUE_CAPS@@@Z @ 0x1800DC8E4 (-MatchValueCaps@Internal@SpatialInteractionDevices@@YA_NGGGGPEAU_HIDP_VALUE_CAPS@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::GetValueCaps(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        enum _HIDP_REPORT_TYPE a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        _QWORD *a7)
{
  unsigned __int16 v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // r14
  _QWORD *v15; // r11
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = a3;
  if ( !this )
  {
    v9 = -2147024809;
    v10 = 529LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)v9);
    return v9;
  }
  if ( !a7 )
  {
    v9 = -2147467261;
    v10 = 530LL;
    goto LABEL_3;
  }
  *a7 = 0LL;
  v12 = 0LL;
  v13 = *((_DWORD *)this + 34);
  v14 = *((_QWORD *)this + 16);
  if ( !v13 )
    return 2147943568LL;
  while ( !SpatialInteractionDevices::Internal::MatchValueCaps(
             (SpatialInteractionDevices::Internal *)v8,
             a4,
             a5,
             a6,
             v14 + 72 * v12) )
  {
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v13 )
      return 2147943568LL;
  }
  *v15 = v14 + 72 * v12;
  return 0LL;
}
