/*
 * XREFs of EtwpWriteAppStateChangeSummary @ 0x1405B3694
 * Callers:
 *     EtwTraceAppStateChange @ 0x1405B3C80 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x14066D6E8 (EtwTraceProcess.c)
 * Callees:
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x140012A30 (_TlgWriteAgg.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall EtwpWriteAppStateChangeSummary(
        __int64 a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int16 *a6)
{
  BOOLEAN v10; // al
  __int64 v11; // r10
  unsigned int v12; // esi
  __int64 ProcessServerSilo; // r14
  bool v14; // zf
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned __int16 *v17; // r9
  char v18; // dl
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r11
  __int64 v29; // r10
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  _BOOL8 v34; // [rsp+40h] [rbp-C8h] BYREF
  _BOOL8 v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-A0h] BYREF
  _BOOL8 v40; // [rsp+70h] [rbp-98h] BYREF
  _BOOL8 v41; // [rsp+78h] [rbp-90h] BYREF
  _BOOL8 v42; // [rsp+80h] [rbp-88h] BYREF
  _BOOL8 v43; // [rsp+88h] [rbp-80h] BYREF
  _BOOL8 v44; // [rsp+90h] [rbp-78h] BYREF
  _BOOL8 v45; // [rsp+98h] [rbp-70h] BYREF
  _BOOL8 v46; // [rsp+A0h] [rbp-68h] BYREF
  _BOOL8 v47; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v55; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v56; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v57; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v58[5]; // [rsp+100h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+128h] [rbp+20h] BYREF
  _BOOL8 *v60; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  _BOOL8 *v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  _BOOL8 *v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  _BOOL8 *v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  _BOOL8 *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  _BOOL8 *v70; // [rsp+198h] [rbp+90h]
  __int64 v71; // [rsp+1A0h] [rbp+98h]
  _BOOL8 *v72; // [rsp+1A8h] [rbp+A0h]
  __int64 v73; // [rsp+1B0h] [rbp+A8h]
  __int64 *v74; // [rsp+1B8h] [rbp+B0h]
  __int64 v75; // [rsp+1C0h] [rbp+B8h]
  __int64 *v76; // [rsp+1C8h] [rbp+C0h]
  __int64 v77; // [rsp+1D0h] [rbp+C8h]
  _BOOL8 *v78; // [rsp+1D8h] [rbp+D0h]
  __int64 v79; // [rsp+1E0h] [rbp+D8h]
  _BOOL8 *v80; // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  __int64 *v82; // [rsp+1F8h] [rbp+F0h]
  __int64 v83; // [rsp+200h] [rbp+F8h]
  __int64 *v84; // [rsp+208h] [rbp+100h]
  __int64 v85; // [rsp+210h] [rbp+108h]
  __int64 *v86; // [rsp+218h] [rbp+110h]
  __int64 v87; // [rsp+220h] [rbp+118h]
  __int64 *v88; // [rsp+228h] [rbp+120h]
  __int64 v89; // [rsp+230h] [rbp+128h]
  __int64 *v90; // [rsp+238h] [rbp+130h]
  __int64 v91; // [rsp+240h] [rbp+138h]
  __int64 *v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  __int64 *v94; // [rsp+258h] [rbp+150h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  __int64 *v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]
  __int64 *v98; // [rsp+278h] [rbp+170h]
  __int64 v99; // [rsp+280h] [rbp+178h]
  unsigned __int64 *v100; // [rsp+288h] [rbp+180h]
  __int64 v101; // [rsp+290h] [rbp+188h]
  _BOOL8 *v102; // [rsp+298h] [rbp+190h]
  __int64 v103; // [rsp+2A0h] [rbp+198h]
  unsigned __int64 *v104; // [rsp+2A8h] [rbp+1A0h]
  __int64 v105; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v106; // [rsp+2B8h] [rbp+1B0h]
  __int64 v107; // [rsp+2C0h] [rbp+1B8h]
  _DWORD *v108; // [rsp+2C8h] [rbp+1C0h]
  __int64 v109; // [rsp+2D0h] [rbp+1C8h]
  __int64 v110; // [rsp+2D8h] [rbp+1D0h]
  _DWORD v111[2]; // [rsp+2E0h] [rbp+1D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2E8h] [rbp+1E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v113; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 *v114; // [rsp+308h] [rbp+200h]
  __int64 v115; // [rsp+310h] [rbp+208h]
  char *v116; // [rsp+318h] [rbp+210h]
  __int64 v117; // [rsp+320h] [rbp+218h]
  _DWORD *v118; // [rsp+328h] [rbp+220h]
  __int64 v119; // [rsp+330h] [rbp+228h]
  __int64 v120; // [rsp+338h] [rbp+230h]
  _DWORD v121[2]; // [rsp+340h] [rbp+238h] BYREF
  _QWORD *v122; // [rsp+348h] [rbp+240h]
  __int64 v123; // [rsp+350h] [rbp+248h]

  memset(&v58[1], 0, 21);
  v10 = TraceLoggingProviderEnabled(&stru_1404012D0, 0, 0x200000000000uLL);
  v12 = *(_DWORD *)(a1 + 1572);
  if ( v10 )
    v11 = (unsigned int)(v11 + 1);
  v58[0] = v11;
  if ( ((v12 + 1073741515) & 0xFFFFFFFB) == 0 )
    v58[0] = (v10 != 0) + 256LL;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  v14 = !PsIsHostSilo(ProcessServerSilo);
  v15 = (__int64 *)(ProcessServerSilo + 1240);
  if ( !v14 )
    v15 = PspNullGuid;
  if ( v15 )
    *(_OWORD *)((char *)&v58[1] + 5) = *(_OWORD *)v15;
  v16 = *(_QWORD *)(a1 + 1128);
  if ( stru_1404012D0.LevelPlus1 > 5 )
  {
    LOBYTE(v16) = TlgKeywordOn(&stru_1404012D0, 0x400000000000uLL);
    if ( (_BYTE)v16 )
    {
      v18 = *a2;
      v14 = *a2 == 1;
      v41 = *a2 == 0;
      v42 = v14;
      v43 = v18 == 2;
      v44 = v18 == 3;
      v45 = v18 == 4;
      v46 = v18 == 5;
      v47 = v18 == 6;
      v48 = *(_QWORD *)(a2 + 41);
      v49 = *(_QWORD *)(a2 + 49);
      if ( a3 )
      {
        v19 = *(_BYTE *)(a1 + 1739);
        v34 = (v19 & 7) != 0;
        v35 = (v19 & 0x38) != 0;
        v20 = *a3;
      }
      else
      {
        v34 = 0LL;
        v35 = 0LL;
        v20 = 0LL;
      }
      v50 = v20;
      if ( a3 )
      {
        v36 = *(_QWORD *)(a3 + 1);
        v37 = *(_QWORD *)(a3 + 3);
        v21 = a3[7];
      }
      else
      {
        v36 = 0LL;
        v37 = 0LL;
        v21 = 0LL;
      }
      v51 = v21;
      v22 = 0LL;
      if ( a3 )
        v22 = a3[9];
      v52 = v22;
      v23 = 0LL;
      if ( a3 )
        v23 = a3[8];
      v53 = v23;
      v24 = 0LL;
      if ( a3 )
        v24 = a3[10];
      v54 = v24;
      if ( a3 )
      {
        v38 = *(_QWORD *)(a3 + 5);
        v25 = v12 >> 31;
      }
      else
      {
        v38 = 0LL;
        v25 = 0LL;
      }
      v55 = v25;
      v26 = 0LL;
      if ( a3 )
      {
        LOBYTE(v26) = v12 == 0;
        v39 = v26;
        v40 = v12 == 1;
        v26 = ((unsigned __int64)*(unsigned __int8 *)(a1 + 1739) >> 6) & 1;
      }
      else
      {
        v39 = 0LL;
        v40 = 0LL;
      }
      v56 = v26;
      if ( v18 == 3 )
        v27 = *(unsigned int *)(a1 + 1448);
      else
        v27 = 0LL;
      v57 = v27;
      v61 = 8LL;
      v63 = 8LL;
      v33 = *a5;
      v60 = &v41;
      v62 = &v42;
      v64 = &v43;
      v66 = &v44;
      v68 = &v45;
      v70 = &v46;
      v72 = &v47;
      v74 = &v48;
      v76 = &v49;
      v78 = &v34;
      v80 = &v35;
      v82 = &v50;
      v84 = &v36;
      v86 = &v37;
      v88 = &v51;
      v90 = &v52;
      v92 = &v53;
      v94 = &v54;
      v96 = &v38;
      v98 = &v55;
      v100 = &v39;
      v102 = &v40;
      v104 = &v56;
      v106 = &v57;
      v108 = v111;
      v65 = 8LL;
      v67 = 8LL;
      v69 = 8LL;
      v71 = 8LL;
      v73 = 8LL;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 8LL;
      v87 = 8LL;
      v89 = 8LL;
      v91 = 8LL;
      v93 = 8LL;
      v95 = 8LL;
      v97 = 8LL;
      v99 = 8LL;
      v101 = 8LL;
      v103 = 8LL;
      v105 = 8LL;
      v107 = 8LL;
      v109 = 2LL;
      v110 = *((_QWORD *)v17 + 1);
      v111[0] = *v17;
      v111[1] = 0;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a4 + 16));
      TlgCreateWsz(&v113, (LPCWSTR)(a4 + 272));
      v116 = (char *)&v33 + 4;
      v114 = &v33;
      v118 = v121;
      v120 = *((_QWORD *)a6 + 1);
      v121[0] = *a6;
      v122 = v58;
      v115 = v28;
      v117 = v28;
      v119 = v29;
      v121[1] = 0;
      v123 = 29LL;
      LOBYTE(v16) = TlgWriteAgg((__int64)&stru_1404012D0, (unsigned __int8 *)dword_140374294, v30, v31, 0x23u, &v59);
    }
  }
  return v16;
}
