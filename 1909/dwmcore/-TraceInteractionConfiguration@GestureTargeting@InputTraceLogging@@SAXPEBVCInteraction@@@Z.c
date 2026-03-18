/*
 * XREFs of ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x1800154E4
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x1800A98E0 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x18022C024 (-EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x18023D2C8 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x1800A9A74 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800C4824 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(const struct CInteraction *a1)
{
  int *v2; // rsi
  int *v3; // r15
  int *v4; // r14
  int *v5; // rdi
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // r9
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+64h] [rbp-9Ch] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+6Ch] [rbp-94h] BYREF
  int v38; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+74h] [rbp-8Ch] BYREF
  int v40; // [rsp+78h] [rbp-88h] BYREF
  const struct CInteraction *v41; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  const struct CInteraction **v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  int *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  int *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  int *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  int *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  int *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  int *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  int *v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  int *v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  int *v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]
  int *v63; // [rsp+150h] [rbp+50h]
  __int64 v64; // [rsp+158h] [rbp+58h]
  int *v65; // [rsp+160h] [rbp+60h]
  __int64 v66; // [rsp+168h] [rbp+68h]
  int *v67; // [rsp+170h] [rbp+70h]
  __int64 v68; // [rsp+178h] [rbp+78h]
  int *v69; // [rsp+180h] [rbp+80h]
  __int64 v70; // [rsp+188h] [rbp+88h]
  int *v71; // [rsp+190h] [rbp+90h]
  __int64 v72; // [rsp+198h] [rbp+98h]
  int *v73; // [rsp+1A0h] [rbp+A0h]
  __int64 v74; // [rsp+1A8h] [rbp+A8h]
  int *v75; // [rsp+1B0h] [rbp+B0h]
  __int64 v76; // [rsp+1B8h] [rbp+B8h]
  int *v77; // [rsp+1C0h] [rbp+C0h]
  __int64 v78; // [rsp+1C8h] [rbp+C8h]
  int *v79; // [rsp+1D0h] [rbp+D0h]
  __int64 v80; // [rsp+1D8h] [rbp+D8h]
  int *v81; // [rsp+1E0h] [rbp+E0h]
  __int64 v82; // [rsp+1E8h] [rbp+E8h]

  if ( *((_DWORD *)a1 + 114) )
    v2 = (int *)*((_QWORD *)a1 + 54);
  else
    v2 = 0LL;
  if ( *((_DWORD *)a1 + 154) )
    v3 = (int *)*((_QWORD *)a1 + 74);
  else
    v3 = 0LL;
  if ( *((_DWORD *)a1 + 194) )
    v4 = (int *)*((_QWORD *)a1 + 94);
  else
    v4 = 0LL;
  if ( *((_DWORD *)a1 + 234) )
    v5 = (int *)*((_QWORD *)a1 + 114);
  else
    v5 = 0LL;
  anonymous_namespace_::GetTemporaryConfigWithMask((char *)a1 + 1616, &v22, &v23);
  v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputTraceLogging>::get(
                                           v6,
                                           lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v7 > 4u && TlgKeywordOn(v7, 0x800uLL) )
  {
    v41 = a1;
    v43 = &v41;
    v24 = *((_DWORD *)a1 + 114);
    v45 = &v24;
    v44 = 8LL;
    v46 = v9;
    if ( v2 )
      v10 = v2[2];
    else
      v10 = 0;
    v25 = v10;
    v47 = &v25;
    v48 = v9;
    if ( v2 )
      v11 = *v2;
    else
      v11 = 0;
    v26 = v11;
    v49 = &v26;
    v50 = v9;
    if ( v2 )
      v12 = v2[1];
    else
      v12 = 0;
    v27 = v12;
    v51 = &v27;
    v28 = *((_DWORD *)a1 + 154);
    v53 = &v28;
    v52 = v9;
    v54 = v9;
    if ( v3 )
      v13 = v3[2];
    else
      v13 = 0;
    v29 = v13;
    v55 = &v29;
    v56 = v9;
    if ( v3 )
      v14 = *v3;
    else
      v14 = 0;
    v30 = v14;
    v57 = &v30;
    v58 = v9;
    if ( v3 )
      v15 = v3[1];
    else
      v15 = 0;
    v31 = v15;
    v59 = &v31;
    v32 = *((_DWORD *)a1 + 194);
    v61 = &v32;
    v60 = v9;
    v62 = v9;
    if ( v4 )
      v16 = v4[2];
    else
      v16 = 0;
    v33 = v16;
    v63 = &v33;
    v64 = v9;
    if ( v4 )
      v17 = *v4;
    else
      v17 = 0;
    v34 = v17;
    v65 = &v34;
    v66 = v9;
    if ( v4 )
      v18 = v4[1];
    else
      v18 = 0;
    v35 = v18;
    v67 = &v35;
    v36 = *((_DWORD *)a1 + 234);
    v69 = &v36;
    v68 = v9;
    v70 = v9;
    if ( v5 )
      v19 = v5[2];
    else
      v19 = 0;
    v37 = v19;
    v71 = &v37;
    v72 = v9;
    if ( v5 )
      v20 = *v5;
    else
      v20 = 0;
    v38 = v20;
    v73 = &v38;
    v74 = v9;
    if ( v5 )
      v21 = v5[1];
    else
      v21 = 0;
    v39 = v21;
    v75 = &v39;
    v40 = *((_DWORD *)a1 + 246);
    v77 = &v40;
    v79 = &v22;
    v81 = &v23;
    v76 = v9;
    v78 = v9;
    v80 = v9;
    v82 = v9;
    TlgWrite(v8, &unk_1802DBAAB, 0LL, 0LL, 0x16u, &pData);
  }
}
