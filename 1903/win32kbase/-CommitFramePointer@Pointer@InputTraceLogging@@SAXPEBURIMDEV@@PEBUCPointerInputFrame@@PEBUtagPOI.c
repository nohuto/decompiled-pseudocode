/*
 * XREFs of ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0163230
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0163C70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C017A334 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C016EA44 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::CommitFramePointer(
        const struct RIMDEV *a1,
        const struct CPointerInputFrame *a2,
        const struct tagPOINTEREVENTINT *a3)
{
  int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ecx
  const CHAR *v9; // rax
  _DWORD *v10; // r11
  int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned int v15; // ecx
  const CHAR *v16; // rax
  _DWORD *v17; // r11
  int v18; // ecx
  __int64 v19; // r10
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned int v22; // ecx
  const CHAR *v23; // rax
  _DWORD *v24; // r11
  int v25; // ecx
  __int64 v26; // r10
  __int64 v27; // r10
  __int64 v28; // r11
  unsigned int v29; // ecx
  const CHAR *v30; // rax
  _DWORD *v31; // r11
  int v32; // ecx
  __int64 v33; // r10
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+34h] [rbp-CCh] BYREF
  int v36; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+3Ch] [rbp-C4h] BYREF
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+54h] [rbp-ACh] BYREF
  const struct RIMDEV *v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  const struct RIMDEV *v46; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  const struct RIMDEV **v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 *v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  const struct RIMDEV **v52; // [rsp+B0h] [rbp-50h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  __int64 v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  int *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  int *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  int *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  int *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  int *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  int *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  int *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  int *v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  _DWORD *v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  _DWORD *v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v83; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  _DWORD *v87; // [rsp+1D0h] [rbp+D0h]
  __int64 v88; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v89; // [rsp+1E0h] [rbp+E0h]
  __int64 v90; // [rsp+1E8h] [rbp+E8h]
  _DWORD *v91; // [rsp+1F0h] [rbp+F0h]
  __int64 v92; // [rsp+1F8h] [rbp+F8h]
  _DWORD *v93; // [rsp+200h] [rbp+100h]
  __int64 v94; // [rsp+208h] [rbp+108h]
  _DWORD *v95; // [rsp+210h] [rbp+110h]
  __int64 v96; // [rsp+218h] [rbp+118h]
  _DWORD *v97; // [rsp+220h] [rbp+120h]
  __int64 v98; // [rsp+228h] [rbp+128h]
  _DWORD *v99; // [rsp+230h] [rbp+130h]
  __int64 v100; // [rsp+238h] [rbp+138h]
  _DWORD *v101; // [rsp+240h] [rbp+140h]
  __int64 v102; // [rsp+248h] [rbp+148h]
  _DWORD *v103; // [rsp+250h] [rbp+150h]
  __int64 v104; // [rsp+258h] [rbp+158h]

  v5 = *(_DWORD *)(*((_QWORD *)a1 + 60) + 24LL);
  if ( (unsigned int)(v5 - 1) > 3 )
  {
    if ( (unsigned int)(v5 - 5) > 1 )
    {
      if ( v5 == 7 )
      {
        if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
        {
          v22 = *(_DWORD *)(v21 + 8);
          v48 = &v46;
          v45 = *((_QWORD *)a2 + 13);
          v50 = &v45;
          v44 = (const struct RIMDEV *)*((_QWORD *)a2 + 9);
          v52 = &v44;
          v56 = v21 + 12;
          v43 = *((_DWORD *)a2 + 10) + *(_DWORD *)(v21 + 16);
          v58 = &v43;
          v46 = a1;
          v49 = 8LL;
          v51 = 8LL;
          v53 = 8LL;
          v54 = v21;
          v55 = 2LL;
          v57 = v20;
          v59 = v20;
          v23 = InputTraceLogging::PointerTypeToString(v22);
          TlgCreateSz(&pDesc, v23);
          v25 = v24[5];
          v61 = &v42;
          v41 = v24[10];
          v63 = &v41;
          v40 = v24[11];
          v65 = &v40;
          v39 = v24[14];
          v67 = &v39;
          v38 = v24[15];
          v69 = &v38;
          v37 = v24[12];
          v71 = &v37;
          v36 = v24[13];
          v73 = &v36;
          v35 = v24[16];
          v75 = &v35;
          v34 = v24[17];
          v77 = &v34;
          v79 = v24 + 20;
          v81 = v24 + 26;
          v42 = v25;
          v62 = v26;
          v64 = v26;
          v66 = v26;
          v68 = v26;
          v70 = v26;
          v72 = v26;
          v74 = v26;
          v76 = v26;
          v78 = v26;
          v80 = v26;
          v82 = v26;
          v84 = v26;
          v83 = v24 + 27;
          v85 = v24 + 28;
          v87 = v24 + 29;
          v89 = v24 + 30;
          v91 = v24 + 31;
          v93 = v24 + 32;
          v95 = v24 + 33;
          v97 = v24 + 34;
          v99 = v24 + 35;
          v101 = v24 + 36;
          v103 = v24 + 37;
          v86 = v26;
          v88 = v26;
          v90 = v26;
          v92 = v26;
          v94 = v26;
          v96 = v26;
          v98 = v26;
          v100 = v26;
          v102 = v26;
          v104 = v26;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E670D, 0LL, 0LL, 0x1Fu, &pData);
        }
      }
      else if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
      {
        v29 = *(_DWORD *)(v28 + 8);
        v48 = &v46;
        v45 = *((_QWORD *)a2 + 13);
        v50 = &v45;
        v44 = (const struct RIMDEV *)*((_QWORD *)a2 + 9);
        v52 = &v44;
        v56 = v28 + 12;
        v43 = *((_DWORD *)a2 + 10) + *(_DWORD *)(v28 + 16);
        v58 = &v43;
        v46 = a1;
        v49 = 8LL;
        v51 = 8LL;
        v53 = 8LL;
        v54 = v28;
        v55 = 2LL;
        v57 = v27;
        v59 = v27;
        v30 = InputTraceLogging::PointerTypeToString(v29);
        TlgCreateSz(&pDesc, v30);
        v32 = v31[5];
        v61 = &v42;
        v41 = v31[10];
        v63 = &v41;
        v40 = v31[11];
        v65 = &v40;
        v39 = v31[14];
        v67 = &v39;
        v38 = v31[15];
        v69 = &v38;
        v37 = v31[12];
        v71 = &v37;
        v36 = v31[13];
        v73 = &v36;
        v35 = v31[16];
        v75 = &v35;
        v34 = v31[17];
        v77 = &v34;
        v79 = v31 + 20;
        v42 = v32;
        v62 = v33;
        v64 = v33;
        v66 = v33;
        v68 = v33;
        v70 = v33;
        v72 = v33;
        v74 = v33;
        v76 = v33;
        v78 = v33;
        v80 = v33;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E687F, 0LL, 0LL, 0x13u, &pData);
      }
    }
    else if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
    {
      v15 = *(_DWORD *)(v14 + 8);
      v48 = &v46;
      v45 = *((_QWORD *)a2 + 13);
      v50 = &v45;
      v44 = (const struct RIMDEV *)*((_QWORD *)a2 + 9);
      v52 = &v44;
      v56 = v14 + 12;
      v43 = *((_DWORD *)a2 + 10) + *(_DWORD *)(v14 + 16);
      v58 = &v43;
      v46 = a1;
      v49 = 8LL;
      v51 = 8LL;
      v53 = 8LL;
      v54 = v14;
      v55 = 2LL;
      v57 = v13;
      v59 = v13;
      v16 = InputTraceLogging::PointerTypeToString(v15);
      TlgCreateSz(&pDesc, v16);
      v18 = v17[5];
      v61 = &v42;
      v41 = v17[10];
      v63 = &v41;
      v40 = v17[11];
      v65 = &v40;
      v39 = v17[14];
      v67 = &v39;
      v38 = v17[15];
      v69 = &v38;
      v37 = v17[12];
      v71 = &v37;
      v36 = v17[13];
      v73 = &v36;
      v35 = v17[16];
      v75 = &v35;
      v34 = v17[17];
      v77 = &v34;
      v79 = v17 + 20;
      v81 = v17 + 26;
      v42 = v18;
      v62 = v19;
      v64 = v19;
      v66 = v19;
      v68 = v19;
      v70 = v19;
      v72 = v19;
      v74 = v19;
      v76 = v19;
      v78 = v19;
      v80 = v19;
      v82 = v19;
      v84 = v19;
      v83 = v17 + 27;
      v85 = v17 + 28;
      v87 = v17 + 29;
      v89 = v17 + 30;
      v91 = v17 + 31;
      v86 = v19;
      v88 = v19;
      v90 = v19;
      v92 = v19;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E65E3, 0LL, 0LL, 0x19u, &pData);
    }
  }
  else if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
    {
      v8 = *(_DWORD *)(v7 + 8);
      v48 = &v44;
      v45 = *((_QWORD *)a2 + 13);
      v50 = &v45;
      v46 = (const struct RIMDEV *)*((_QWORD *)a2 + 9);
      v52 = &v46;
      v56 = v7 + 12;
      v34 = *((_DWORD *)a2 + 10) + *(_DWORD *)(v7 + 16);
      v58 = &v34;
      v44 = a1;
      v49 = 8LL;
      v51 = 8LL;
      v53 = 8LL;
      v54 = v7;
      v55 = 2LL;
      v57 = v6;
      v59 = v6;
      v9 = InputTraceLogging::PointerTypeToString(v8);
      TlgCreateSz(&pDesc, v9);
      v11 = v10[5];
      v61 = &v35;
      v36 = v10[10];
      v63 = &v36;
      v37 = v10[11];
      v65 = &v37;
      v38 = v10[14];
      v67 = &v38;
      v39 = v10[15];
      v69 = &v39;
      v40 = v10[12];
      v71 = &v40;
      v41 = v10[13];
      v73 = &v41;
      v42 = v10[16];
      v75 = &v42;
      v43 = v10[17];
      v77 = &v43;
      v79 = v10 + 20;
      v81 = v10 + 26;
      v35 = v11;
      v62 = v12;
      v64 = v12;
      v66 = v12;
      v68 = v12;
      v70 = v12;
      v72 = v12;
      v74 = v12;
      v76 = v12;
      v78 = v12;
      v80 = v12;
      v82 = v12;
      v84 = v12;
      v83 = v10 + 27;
      v85 = v10 + 28;
      v87 = v10 + 29;
      v89 = v10 + 30;
      v91 = v10 + 31;
      v93 = v10 + 32;
      v95 = v10 + 33;
      v97 = v10 + 34;
      v99 = v10 + 35;
      v101 = v10 + 36;
      v103 = v10 + 37;
      v86 = v12;
      v88 = v12;
      v90 = v12;
      v92 = v12;
      v94 = v12;
      v96 = v12;
      v98 = v12;
      v100 = v12;
      v102 = v12;
      v104 = v12;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E646F, 0LL, 0LL, 0x1Fu, &pData);
    }
  }
}
