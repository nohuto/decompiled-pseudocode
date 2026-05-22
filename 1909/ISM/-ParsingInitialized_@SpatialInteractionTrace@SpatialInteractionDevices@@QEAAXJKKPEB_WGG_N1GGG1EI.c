/*
 * XREFs of ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EIKAEBUPoseData@2@2@Z @ 0x1801673F4
 * Callers:
 *     ??$ParsingInitialized@AEAJAEAKAEAKAEAPEB_WAEAGAEAGAEA_NAEA_NAEAGAEAGAEAG_NAEAEAEAIAEAKAEAUPoseData@SpatialInteractionDevices@@AEAU12@@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAJAEAK1AEAPEB_WAEAG3AEA_N4333$$QEA_NAEAEAEAI1AEAUPoseData@1@8@Z @ 0x180162214 (--$ParsingInitialized@AEAJAEAKAEAKAEAPEB_WAEAGAEAGAEA_NAEA_NAEAGAEAGAEAG_NAEAEAEAIAEAKAEAUPoseDa.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800D7748 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        int a4,
        LPCWSTR pwsz,
        char a6,
        char a7,
        bool a8,
        bool a9,
        char a10,
        char a11,
        char a12,
        bool a13,
        char a14,
        char a15,
        char a16,
        const struct SpatialInteractionDevices::PoseData *a17,
        const struct SpatialInteractionDevices::PoseData *a18)
{
  const WCHAR *v18; // rsi
  const struct SpatialInteractionDevices::PoseData *v19; // rdi
  const struct SpatialInteractionDevices::PoseData *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r11
  __int64 v24; // r11
  TraceLoggingHProvider v25; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-D0h] BYREF
  int *v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  int *v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-98h]
  int *v31; // [rsp+78h] [rbp-90h]
  __int64 v32; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  char *v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  char *v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  char *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  char *v40; // [rsp+C8h] [rbp-40h]
  __int64 v41; // [rsp+D0h] [rbp-38h]
  char *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  bool *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  bool *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  bool *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  char *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  char *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  char *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+178h] [rbp+70h] BYREF
  WCHAR v60[64]; // [rsp+188h] [rbp+80h] BYREF
  WCHAR v61[64]; // [rsp+208h] [rbp+100h] BYREF
  WCHAR v62[64]; // [rsp+288h] [rbp+180h] BYREF
  WCHAR v63[64]; // [rsp+308h] [rbp+200h] BYREF
  int v64; // [rsp+3D0h] [rbp+2C8h] BYREF
  int v65; // [rsp+3D8h] [rbp+2D0h] BYREF
  int v66; // [rsp+3E0h] [rbp+2D8h] BYREF

  v66 = a4;
  v65 = a3;
  v64 = a2;
  v18 = pwsz;
  v19 = a17;
  v20 = a18;
  memset_0(v60, 0, sizeof(v60));
  memset_0(v61, 0, sizeof(v61));
  memset_0(v62, 0, sizeof(v62));
  memset_0(v63, 0, sizeof(v63));
  if ( *((_BYTE *)v19 + 28) )
    swprintf_s<64>(v60, L"%.3f %.3f %.3f", *(float *)v19, *((float *)v19 + 1), *((float *)v19 + 2));
  else
    _o_wcscpy_s(v60, 64LL, L"No HoldingPose.Position");
  if ( *((_BYTE *)v19 + 29) )
    swprintf_s<64>(
      v61,
      L"%.3f %.3f %.3f %.3f",
      *((float *)v19 + 3),
      *((float *)v19 + 4),
      *((float *)v19 + 5),
      *((float *)v19 + 6));
  else
    _o_wcscpy_s(v61, 64LL, L"No HoldingPose.Orientation");
  if ( *((_BYTE *)v20 + 28) )
    swprintf_s<64>(v62, L"%.3f %.3f %.3f", *(float *)v20, *((float *)v20 + 1), *((float *)v20 + 2));
  else
    _o_wcscpy_s(v62, 64LL, L"No pointerPose.Position");
  if ( *((_BYTE *)v20 + 29) )
    swprintf_s<64>(
      v63,
      L"%.3f %.3f %.3f %.3f",
      *((float *)v20 + 3),
      *((float *)v20 + 4),
      *((float *)v20 + 5),
      *((float *)v20 + 6));
  else
    _o_wcscpy_s(v63, 64LL, L"No pointerPose.Orientation");
  v22 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          v21,
          (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v22[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v22[1], 0x400000000000uLL) )
    {
      v28 = v23;
      v27 = &v64;
      v30 = v23;
      v29 = &v65;
      v32 = v23;
      v31 = &v66;
      TlgCreateWsz(&pDesc, v18);
      v35 = 2LL;
      v36 = &a11;
      v34 = &a10;
      v38 = &a12;
      v37 = 2LL;
      v40 = &a6;
      v39 = 2LL;
      v42 = &a7;
      v44 = &a13;
      v46 = &a8;
      v48 = &a9;
      v50 = &a15;
      v52 = &a14;
      v54 = &a16;
      v41 = 2LL;
      v43 = 2LL;
      v45 = 1LL;
      v47 = 1LL;
      v49 = 1LL;
      v51 = v24;
      v53 = 1LL;
      v55 = v24;
      TlgCreateWsz(&v56, v60);
      TlgCreateWsz(&v57, v61);
      TlgCreateWsz(&v58, v62);
      TlgCreateWsz(&v59, v63);
      TlgWrite(v25, &unk_1801A447F, 0LL, 0LL, 0x15u, &pData);
    }
  }
}
