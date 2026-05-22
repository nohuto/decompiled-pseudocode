/*
 * XREFs of ?MPCSixDofProcessor_HomeEventTuneablesChanged_@ISMTracing@@QEAAXMMMMMMMMMMMMMMMMMMMK@Z @ 0x180130840
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x18012E3E0 (--$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged_(
        ISMTracing *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        char a21)
{
  const struct _TlgProvider_t *v21; // rcx
  const struct _TlgProvider_t *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  float *v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  float *v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  float *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  float *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  float *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  float *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  float *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  float *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  float *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  float *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  float *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  float *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  float *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  float *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  float *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  float *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  float *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  float *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  float *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  char *v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  float v68; // [rsp+1E0h] [rbp+D8h] BYREF
  float v69; // [rsp+1E8h] [rbp+E0h] BYREF
  float v70; // [rsp+1F0h] [rbp+E8h] BYREF

  v70 = a4;
  v69 = a3;
  v68 = a2;
  v21 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                         (__int64)this,
                                         lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v21 > 4u )
  {
    if ( TlgKeywordOn(v21, 0x400000000001uLL) )
    {
      v24 = 50331648LL;
      v26 = &v24;
      v28 = &v68;
      v30 = &v69;
      v32 = &v70;
      v34 = &a5;
      v36 = &a6;
      v38 = &a7;
      v40 = &a8;
      v42 = &a9;
      v44 = &a10;
      v46 = &a11;
      v48 = &a12;
      v50 = &a13;
      v52 = &a14;
      v54 = &a15;
      v56 = &a16;
      v58 = &a17;
      v60 = &a18;
      v62 = &a19;
      v64 = &a20;
      v66 = &a21;
      v27 = 8LL;
      v29 = v23;
      v31 = v23;
      v33 = v23;
      v35 = v23;
      v37 = v23;
      v39 = v23;
      v41 = v23;
      v43 = v23;
      v45 = v23;
      v47 = v23;
      v49 = v23;
      v51 = v23;
      v53 = v23;
      v55 = v23;
      v57 = v23;
      v59 = v23;
      v61 = v23;
      v63 = v23;
      v65 = v23;
      v67 = v23;
      TlgWrite(v22, &unk_1801A0D7A, 0LL, 0LL, 0x17u, &pData);
    }
  }
}
