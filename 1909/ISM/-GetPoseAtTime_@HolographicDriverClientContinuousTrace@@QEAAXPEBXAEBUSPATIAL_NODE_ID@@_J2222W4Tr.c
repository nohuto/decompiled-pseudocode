/*
 * XREFs of ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_NI@Z @ 0x180157220
 * Callers:
 *     ??$GetPoseAtTime@AEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE_ID@@AEA_JAEB_JAEB_JAEA_JAEA_JAEAW4TracePredictionType@@AEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@AEB_NAEBI@HolographicDriverClientContinuousTrace@@SAXAEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE_ID@@AEA_JAEB_J322AEAW4TracePredictionType@@AEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@AEB_NAEBI@Z @ 0x18014A304 (--$GetPoseAtTime@AEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016179C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

char __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        char a11,
        int a12)
{
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  const struct _TlgProvider_t *v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  GUID *p_ActivityId; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  __int64 *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  __int64 *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  __int64 *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  __int64 *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  __int64 *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  __int64 *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  __int64 *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  __int64 *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  __int64 *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  int *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  __int64 v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]
  __int64 v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  __int64 v60; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  __int64 v62; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h]
  __int64 v64; // [rsp+1B8h] [rbp+B0h]
  __int64 v65; // [rsp+1C0h] [rbp+B8h]
  __int64 v66; // [rsp+1C8h] [rbp+C0h]
  __int64 v67; // [rsp+1D0h] [rbp+C8h]
  __int64 v68; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h]
  int *v70; // [rsp+1E8h] [rbp+E0h]
  __int64 v71; // [rsp+1F0h] [rbp+E8h]
  char *v72; // [rsp+1F8h] [rbp+F0h]
  __int64 v73; // [rsp+200h] [rbp+F8h]
  __int64 *v74; // [rsp+208h] [rbp+100h]
  __int64 v75; // [rsp+210h] [rbp+108h]
  __int64 v76; // [rsp+240h] [rbp+138h] BYREF

  v76 = a2;
  v13 = a10;
  v22 = 1000000 * (a5 - a4) / qword_1801E0C18;
  v23 = 1000000 * (a5 - a6) / qword_1801E0C18;
  v24 = 1000000 * (a7 - a5) / qword_1801E0C18;
  v25 = 1000000 * (a7 - a6) / qword_1801E0C18;
  v27 = 1000000 * (a8 - a6) / qword_1801E0C18;
  LODWORD(v21) = a12 ^ *(_DWORD *)(a10 + 16);
  v26 = 1000000 * (a4 - a8) / qword_1801E0C18;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EventActivityIdControl(1u, &ActivityId);
  v15 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
          v14,
          lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
  v16 = *(const struct _TlgProvider_t **)(v15 + 8);
  if ( *(_DWORD *)v16 > 5u )
  {
    LOBYTE(v15) = TlgKeywordOn(v16, 0x400000uLL);
    if ( (_BYTE)v15 )
    {
      v31 = 16LL;
      p_ActivityId = &ActivityId;
      v32 = &v76;
      v36 = &a7;
      v38 = &a6;
      v40 = &a8;
      v42 = &v22;
      v44 = &v23;
      v46 = &v24;
      v48 = &v25;
      v50 = &v26;
      v52 = &v27;
      v19 = a9;
      v54 = &v19;
      v58 = v13 + 8;
      v60 = v13 + 36;
      v62 = v13 + 84;
      v64 = v13 + 96;
      v66 = v13 + 108;
      v68 = v13 + 120;
      v20 = *(_DWORD *)(v13 + 16);
      v70 = &v20;
      v72 = &a11;
      v74 = &v21;
      v33 = 8LL;
      v34 = a3;
      v35 = 16LL;
      v37 = 8LL;
      v39 = 8LL;
      v41 = 8LL;
      v43 = 8LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 8LL;
      v51 = 8LL;
      v53 = 8LL;
      v55 = 4LL;
      v56 = v13;
      v57 = 8LL;
      v59 = 8LL;
      v61 = 48LL;
      v63 = 12LL;
      v65 = 12LL;
      v67 = 12LL;
      v69 = 12LL;
      v71 = 4LL;
      v73 = 1LL;
      v75 = 4LL;
      LOBYTE(v15) = TlgWrite(v17, &unk_1801A3E7D, 0LL, 0LL, 0x19u, &pData);
    }
  }
  return v15;
}
