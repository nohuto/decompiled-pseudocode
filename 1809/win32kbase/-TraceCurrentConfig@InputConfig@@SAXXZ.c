/*
 * XREFs of ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C003C778
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C003DCF0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00E5960 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0094EB0 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01537C0 (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputConfig::TraceCurrentConfig(__int64 a1, struct CEResource *a2)
{
  CInputConfig *v2; // r14
  struct CEResource *v3; // rdx
  CInputConfig *v4; // rax
  CInputConfig *v5; // rsi
  _DWORD *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rdx
  int v9; // r9d
  unsigned int v10; // ecx
  const CHAR *v11; // rax
  __int64 v13; // rdx
  int v14; // r9d
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v22[3]; // [rsp+60h] [rbp-A8h] BYREF
  CInputConfig *v23; // [rsp+78h] [rbp-90h]
  char v24[8]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD *v25; // [rsp+88h] [rbp-80h]
  __int64 *v26; // [rsp+90h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  int *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  int *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  int *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  int *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  int *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  __int64 v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  __int64 v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v42; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  __int64 v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  __int64 *v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  __int64 v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  int *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  __int64 v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  __int64 v55; // [rsp+1A8h] [rbp+A0h]
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  int *v57; // [rsp+1B8h] [rbp+B0h]
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  int *v59; // [rsp+1C8h] [rbp+C0h]
  __int64 v60; // [rsp+1D0h] [rbp+C8h]
  int *v61; // [rsp+1D8h] [rbp+D0h]
  __int64 v62; // [rsp+1E0h] [rbp+D8h]
  int *v63; // [rsp+1E8h] [rbp+E0h]
  __int64 v64; // [rsp+1F0h] [rbp+E8h]
  int *v65; // [rsp+1F8h] [rbp+F0h]
  __int64 v66; // [rsp+200h] [rbp+F8h]
  int *v67; // [rsp+208h] [rbp+100h]
  __int64 v68; // [rsp+210h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+218h] [rbp+110h] BYREF
  __int64 v70; // [rsp+228h] [rbp+120h]
  __int64 v71; // [rsp+230h] [rbp+128h]
  __int64 *v72; // [rsp+238h] [rbp+130h]
  __int64 v73; // [rsp+240h] [rbp+138h]
  __int64 v74; // [rsp+248h] [rbp+140h]
  __int64 v75; // [rsp+250h] [rbp+148h]
  __int64 *v76; // [rsp+258h] [rbp+150h]
  __int64 v77; // [rsp+260h] [rbp+158h]
  __int64 v78; // [rsp+268h] [rbp+160h]
  __int64 v79; // [rsp+270h] [rbp+168h]
  __int64 *v80; // [rsp+278h] [rbp+170h]
  __int64 v81; // [rsp+280h] [rbp+178h]
  __int64 v82; // [rsp+288h] [rbp+180h]
  __int64 v83; // [rsp+290h] [rbp+188h]
  __int64 *v84; // [rsp+298h] [rbp+190h]
  __int64 v85; // [rsp+2A0h] [rbp+198h]

  v2 = gpInputConfig;
  if ( gpInputConfig )
  {
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v22, a2);
    v4 = *(CInputConfig **)v2;
    v22[1] = v2;
    v5 = *(CInputConfig **)v4;
    v23 = *(CInputConfig **)v4;
    while ( 1 )
    {
      v22[2] = v4;
      if ( v4 == v2 )
        break;
      v6 = (_DWORD *)((char *)v4 + 16);
      if ( v4 == (CInputConfig *)-16LL )
        break;
      v18 = *((_DWORD *)v4 + 303);
      if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 2uLL) )
      {
        v15 = v6[1];
        v28 = &v15;
        v16 = *v6;
        v30 = &v16;
        v17 = v6[2];
        v32 = &v17;
        v34 = &v18;
        v19 = *((unsigned __int8 *)v6 + 1192);
        v36 = &v19;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A1375, 0LL, 0LL, 7u, &pData);
      }
      CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v24, v3);
      v7 = (__int64 *)*((_QWORD *)v6 + 150);
      v26 = v7;
      v25 = v6 + 300;
      while ( v7 != (__int64 *)(v6 + 300) && v7 != (__int64 *)-16LL )
      {
        if ( (v7[4] & 2) != 0 )
        {
          if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 2uLL) )
          {
            v10 = *((_DWORD *)v7 + 16);
            v45 = (__int64)v7 + 20;
            v47 = v7 + 3;
            v49 = (__int64)v7 + 28;
            v51 = &v19;
            v53 = (__int64)v7 + 36;
            v55 = (__int64)v7 + 38;
            v18 = *((_DWORD *)v7 + 11);
            v57 = &v18;
            v17 = *((_DWORD *)v7 + 10);
            v59 = &v17;
            v16 = *((_DWORD *)v7 + 12);
            v61 = &v16;
            v15 = *((_DWORD *)v7 + 14);
            v63 = &v15;
            v21 = *((_DWORD *)v7 + 13);
            v65 = &v21;
            v20 = *((_DWORD *)v7 + 15);
            v67 = &v20;
            v43 = v7 + 2;
            v44 = 4LL;
            v46 = 4LL;
            v48 = 4LL;
            v50 = 4LL;
            v19 = v9;
            v52 = 4LL;
            v54 = v8;
            v56 = v8;
            v58 = 4LL;
            v60 = 4LL;
            v62 = 4LL;
            v64 = 4LL;
            v66 = 4LL;
            v68 = 4LL;
            v11 = InputTraceLogging::OrientationToString(v10);
            TlgCreateSz(&pDesc, v11);
            v71 = 4LL;
            v72 = v7 + 9;
            v70 = (__int64)v7 + 68;
            v74 = (__int64)v7 + 76;
            v76 = v7 + 10;
            v78 = (__int64)v7 + 84;
            v80 = v7 + 11;
            v82 = (__int64)v7 + 92;
            v84 = v7 + 12;
            v73 = 4LL;
            v75 = 4LL;
            v77 = 4LL;
            v79 = 4LL;
            v81 = 4LL;
            v83 = 4LL;
            v85 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A11AA, 0LL, 0LL, 0x18u, &v42);
          }
        }
        else if ( dword_1C01C7F10 > 4u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 2uLL) )
          {
            v28 = (int *)(v7 + 2);
            v30 = (int *)v7 + 5;
            v32 = (int *)(v7 + 3);
            v34 = (int *)v7 + 7;
            v36 = &v20;
            v38 = (__int64)v7 + 36;
            v40 = (__int64)v7 + 38;
            v29 = 4LL;
            v31 = 4LL;
            v33 = 4LL;
            v35 = 4LL;
            v20 = v14;
            v37 = 4LL;
            v39 = v13;
            v41 = v13;
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A12F6, 0LL, 0LL, 9u, &pData);
          }
        }
        if ( *((_BYTE *)v7 + 392) )
          InputTraceLogging::InputConfig::DisplayPath((const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(v7 + 50));
        v7 = (__int64 *)*v7;
      }
      v26 = v7;
      CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v24);
      v4 = v5;
      v5 = *(CInputConfig **)v5;
    }
    v23 = v5;
    CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v22);
  }
}
