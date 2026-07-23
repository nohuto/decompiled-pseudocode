/*
 * XREFs of PpmEventTraceProcessorPerformance @ 0x1408799AC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140765460 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PpmEventHiddenProcessorPerformance @ 0x14058363C (PpmEventHiddenProcessorPerformance.c)
 */

void __fastcall PpmEventTraceProcessorPerformance(__int64 a1)
{
  REGHANDLE v2; // rsi
  int v3; // ecx
  _DWORD *v4; // rdx
  __int64 v5; // rbx
  int v6; // eax
  unsigned int i; // esi
  __int64 v8; // rcx
  __int16 v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  BOOL v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+5Ch] [rbp-A4h] BYREF
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+64h] [rbp-9Ch] BYREF
  int v23; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  int *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  int *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  int *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  int *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  int *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  int *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  __int64 v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  __int64 v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  BOOL *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  int *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  int *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  int *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  int *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  __int64 v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]

  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN) )
    {
      v3 = 100;
      v4 = *(_DWORD **)(a1 + 24184);
      v5 = *(_QWORD *)(a1 + 24176);
      v19 = *(unsigned __int8 *)(a1 + 24228);
      v20 = *(_DWORD *)(a1 + 24232);
      v22 = *(_DWORD *)(a1 + 24308);
      if ( v4 )
      {
        v10 = v4[6];
        v11 = v4[7];
        v12 = v4[18];
        v14 = v4[20];
        v15 = v4[21];
        v16 = v4[22];
        v18 = v4[23];
        v6 = v4[24];
      }
      else
      {
        v10 = 100;
        v6 = 0;
        v11 = 100;
        v12 = 100;
        v14 = 100;
        v15 = 100;
        v16 = 100;
        v18 = 0;
      }
      v21 = v6;
      if ( v5 )
      {
        v13 = *(_DWORD *)(v5 + 308);
        v17 = *(_BYTE *)(v5 + 351) != 0;
        v3 = *(unsigned __int8 *)(v5 + 344);
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 68);
        v17 = 0;
      }
      v9 = *(unsigned __int8 *)(a1 + 208);
      v23 = v3;
      UserData.Ptr = (ULONGLONG)&v9;
      *(_QWORD *)&UserData.Size = 2LL;
      v25 = a1 + 209;
      v26 = 1LL;
      v27 = &v19;
      v29 = &v10;
      v31 = &v11;
      v33 = &v12;
      v35 = &v13;
      v37 = &v14;
      v39 = &v15;
      v41 = &v16;
      v43 = &v20;
      v45 = a1 + 24224;
      v47 = a1 + 24225;
      v49 = &v17;
      v51 = &v18;
      v53 = &v21;
      v55 = &v22;
      v57 = &v23;
      v59 = a1 + 24226;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 1LL;
      v48 = 1LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 1LL;
      EtwWrite(v2, &PPM_ETW_CURRENT_PERF_RUNDOWN, 0LL, 0x13u, &UserData);
      if ( v5 )
      {
        if ( *(_QWORD *)(v5 + 16) == a1 )
        {
          for ( i = 0; i < *(_DWORD *)(v5 + 200); ++i )
          {
            v8 = *(_QWORD *)(v5 + 208) + 136LL * i;
            if ( *(_BYTE *)(v8 + 16) )
              PpmEventHiddenProcessorPerformance(a1, *(_DWORD *)(v8 + 20), *(_DWORD *)(v8 + 24), *(_DWORD *)(v8 + 28));
          }
        }
      }
    }
  }
}
