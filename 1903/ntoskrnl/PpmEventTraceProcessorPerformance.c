/*
 * XREFs of PpmEventTraceProcessorPerformance @ 0x1408B596C
 * Callers:
 *     PpmEventTraceControlCallback @ 0x14078A980 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PpmEventHiddenProcessorPerformance @ 0x1408B4D74 (PpmEventHiddenProcessorPerformance.c)
 */

void __fastcall PpmEventTraceProcessorPerformance(__int64 a1)
{
  REGHANDLE v2; // rsi
  __int64 v3; // rdi
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // rcx
  ULONG v7; // r9d
  const EVENT_DESCRIPTOR *v8; // rdx
  unsigned int i; // esi
  __int64 v10; // rcx
  __int16 v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  BOOL v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+5Ch] [rbp-A4h] BYREF
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+64h] [rbp-9Ch] BYREF
  int v25; // [rsp+68h] [rbp-98h] BYREF
  int v26; // [rsp+6Ch] [rbp-94h] BYREF
  int v27; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  int *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  int *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  __int64 v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  __int64 v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  BOOL *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  int *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  int *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  int *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  int *v61; // [rsp+190h] [rbp+90h]
  __int64 v62; // [rsp+198h] [rbp+98h]
  __int64 v63; // [rsp+1A0h] [rbp+A0h]
  __int64 v64; // [rsp+1A8h] [rbp+A8h]
  int *v65; // [rsp+1B0h] [rbp+B0h]
  __int64 v66; // [rsp+1B8h] [rbp+B8h]
  int *v67; // [rsp+1C0h] [rbp+C0h]
  __int64 v68; // [rsp+1C8h] [rbp+C8h]

  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN) )
    {
      v3 = *(_QWORD *)(a1 + 24176);
      v23 = *(unsigned __int8 *)(a1 + 24228);
      v24 = *(_DWORD *)(a1 + 24232);
      v25 = *(_DWORD *)(a1 + 24308);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 308);
        v15 = v4;
        v19 = *(_BYTE *)(v3 + 351) != 0;
        v5 = *(unsigned __int8 *)(v3 + 344);
      }
      else
      {
        v4 = *(_DWORD *)(a1 + 68);
        v5 = 100;
        v15 = v4;
        v19 = 0;
      }
      v6 = *(_DWORD **)(a1 + 24184);
      v26 = v5;
      if ( v6 )
      {
        v12 = v6[6];
        v13 = v6[7];
        v14 = v6[18];
        v16 = v6[20];
        v17 = v6[21];
        v18 = v6[22];
        v20 = v6[23];
        v21 = v6[24];
        v22 = v6[19];
      }
      else
      {
        v12 = 100;
        v13 = 100;
        v14 = 100;
        v16 = 100;
        v17 = 100;
        v18 = 100;
        v20 = 0;
        v21 = 0;
        v22 = v4;
      }
      v11 = *(unsigned __int8 *)(a1 + 208);
      UserData.Ptr = (ULONGLONG)&v11;
      v29 = a1 + 209;
      v31 = &v23;
      v33 = &v12;
      v35 = &v13;
      v37 = &v14;
      v39 = &v15;
      v41 = &v16;
      v43 = &v17;
      v45 = &v18;
      v47 = &v24;
      v49 = a1 + 24224;
      v51 = a1 + 24225;
      v53 = &v19;
      v55 = &v20;
      v57 = &v21;
      v59 = &v25;
      v61 = &v26;
      v63 = a1 + 24226;
      *(_QWORD *)&UserData.Size = 2LL;
      v30 = 1LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 1LL;
      v52 = 1LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 1LL;
      if ( PoSoftParkingAllowed )
      {
        v8 = &PPM_ETW_CURRENT_PERF_RUNDOWN;
        v27 = *(unsigned __int8 *)(a1 + 23859);
        v7 = 21;
        v66 = 4LL;
        v65 = &v22;
        v67 = &v27;
        v68 = 4LL;
      }
      else
      {
        v7 = 19;
        v8 = (const EVENT_DESCRIPTOR *)&PPM_ETW_CURRENT_PERF_RUNDOWN_V5;
      }
      EtwWrite(v2, v8, 0LL, v7, &UserData);
      if ( v3 )
      {
        if ( *(_QWORD *)(v3 + 16) == a1 )
        {
          for ( i = 0; i < *(_DWORD *)(v3 + 200); ++i )
          {
            v10 = *(_QWORD *)(v3 + 208) + 136LL * i;
            if ( *(_BYTE *)(v10 + 16) )
              PpmEventHiddenProcessorPerformance(
                a1,
                *(_DWORD *)(v10 + 20),
                *(_DWORD *)(v10 + 24),
                *(_DWORD *)(v10 + 28));
          }
        }
      }
    }
  }
}
