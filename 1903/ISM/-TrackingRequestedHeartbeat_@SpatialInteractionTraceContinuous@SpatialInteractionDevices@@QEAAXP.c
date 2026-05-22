/*
 * XREFs of ?TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXPEB_WKKI_N10AEBU_GUID@@IAEAY02$$CBMAEAY03$$CBM34@Z @ 0x1800E5DF4
 * Callers:
 *     ??$TrackingRequestedHeartbeat@PEB_WAEAKKI_NAEA_NPEB_WAEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@AEAY02MAEAY03MAEAY02MAEAY03M@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAPEB_WAEAK$$QEAK$$QEAI$$QEA_NAEA_N0AEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@AEAY02MAEAY03M89@Z @ 0x1800DFC70 (--$TrackingRequestedHeartbeat@PEB_WAEAKKI_NAEA_NPEB_WAEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ??$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ @ 0x1800E0548 (--$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800E70A4 (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::TrackingRequestedHeartbeat_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        const wchar_t *a2,
        int a3,
        int a4,
        unsigned int a5,
        bool a6,
        bool a7,
        LPCWSTR pwsz,
        const struct _GUID *a9,
        unsigned int a10,
        const float (*a11)[3],
        const float (*a12)[4],
        const float (*a13)[3],
        const float (*a14)[4])
{
  const WCHAR *v14; // r13
  const float *v15; // rdi
  const float *v17; // rbx
  const float *v18; // r14
  const float *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  TraceLoggingHProvider v22; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-90h] BYREF
  int *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  int *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  unsigned int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  bool *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  bool *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+D8h] [rbp-30h] BYREF
  const struct _GUID *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  unsigned int *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+118h] [rbp+10h] BYREF
  WCHAR v42[128]; // [rsp+128h] [rbp+20h] BYREF
  WCHAR v43[128]; // [rsp+228h] [rbp+120h] BYREF
  int v44; // [rsp+398h] [rbp+290h] BYREF
  int v45; // [rsp+3A0h] [rbp+298h] BYREF

  v45 = a4;
  v44 = a3;
  v14 = pwsz;
  v15 = (const float *)a11;
  v17 = (const float *)a12;
  v18 = (const float *)a13;
  v19 = (const float *)a14;
  memset_0(v42, 0, sizeof(v42));
  memset_0(v43, 0, sizeof(v43));
  _o_setlocale(4LL);
  _o_setlocale(4LL);
  swprintf_s<128>(v42, L"(%.3e;%.3e;%.3e) (%.3e;%.3e;%.3e;%.3e)", *v15, v15[1], v15[2], *v17, v17[1], v17[2], v17[3]);
  swprintf_s<128>(v43, L"(%.3e;%.3e;%.3e) (%.3e;%.3e;%.3e;%.3e)", *v18, v18[1], v18[2], *v19, v19[1], v19[2], v19[3]);
  v21 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
          v20,
          lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v21 + 8) > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v21 + 8), 2uLL) )
  {
    TlgCreateWsz(&pDesc, a2);
    v26 = 4LL;
    v27 = &v45;
    v25 = &v44;
    v29 = &a5;
    v28 = 4LL;
    v31 = &a6;
    v30 = 4LL;
    v33 = &a7;
    v32 = 1LL;
    v34 = 1LL;
    TlgCreateWsz(&v35, v14);
    v36 = a9;
    v37 = 16LL;
    v38 = &a10;
    v39 = 4LL;
    TlgCreateWsz(&v40, v42);
    TlgCreateWsz(&v41, v43);
    TlgWrite(v22, &unk_18019E6F9, 0LL, 0LL, 0xDu, &pData);
  }
  _o_setlocale(4LL);
}
