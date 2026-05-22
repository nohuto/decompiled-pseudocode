/*
 * XREFs of SpatialInteractionDevices::ReadPosePosition @ 0x1800A4F80
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800A5208 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A83BC (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_REPORT_TYPE@@GGGGPEAM@Z @ 0x1800A9040 (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_RE.c)
 */

bool __fastcall SpatialInteractionDevices::ReadPosePosition(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        __int64 a3)
{
  struct SpatialInteractionDevices::HID_REPORT *v6; // r8
  bool result; // al
  unsigned __int16 *v8; // rdi
  unsigned int i; // ebx
  const char *v10; // [rsp+28h] [rbp-20h]
  float *v11; // [rsp+40h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x19A,
    (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    0LL,
    "Invalid Usages array size.",
    v10);
  result = 1;
  v8 = (unsigned __int16 *)&unk_1801451A4;
  for ( i = 0; i < 3; ++i )
  {
    result = result
          && (int)SpatialInteractionDevices::Internal::HIDGetFloat(
                    this,
                    a2,
                    v6,
                    (enum _HIDP_REPORT_TYPE)*(v8 - 2),
                    *(v8 - 1),
                    *v8,
                    v8[1],
                    (unsigned __int16)a3 + 4 * (unsigned __int16)i,
                    v11) >= 0;
    v8 += 8;
  }
  if ( result )
    *(_BYTE *)(a3 + 28) = 1;
  return result;
}
