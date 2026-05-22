/*
 * XREFs of ?GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@W4_HIDP_REPORT_TYPE@@GGGGPEAPEAU_HIDP_VALUE_CAPS@@@Z @ 0x1800A8F64
 * Callers:
 *     ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x1800A5C20 (-SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z.c)
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_REPORT_TYPE@@GGGGPEAM@Z @ 0x1800A9040 (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_RE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  __int16 v8; // r11
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v12; // r9d
  int v13; // r8d
  __int64 v14; // rax
  __int64 i; // rax
  _WORD *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

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
  v12 = *((_DWORD *)this + 34);
  v13 = 0;
  v14 = *((_QWORD *)this + 16);
  *a7 = 0LL;
  if ( !v12 )
    return 2147943568LL;
  for ( i = v14 + 8; ; i += 72LL )
  {
    v16 = (_WORD *)(i - 8);
    if ( (!v8 || *(_WORD *)(i + 2) == v8)
      && (!a4 || *(_WORD *)i == a4)
      && *v16 == a5
      && !*(_BYTE *)(i + 4)
      && *(_WORD *)(i + 48) == a6 )
    {
      break;
    }
    if ( ++v13 >= v12 )
      return 2147943568LL;
  }
  *a7 = v16;
  return 0LL;
}
