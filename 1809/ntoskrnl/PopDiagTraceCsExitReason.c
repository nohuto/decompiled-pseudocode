/*
 * XREFs of PopDiagTraceCsExitReason @ 0x140872628
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceCsExitReason(int *a1, char a2)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned __int8 v6; // cl
  unsigned int v7; // ecx
  int v8; // edi
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rax
  struct _EVENT_DATA_DESCRIPTOR *v10; // rbx
  char v11; // [rsp+38h] [rbp-D0h] BYREF
  char v12; // [rsp+39h] [rbp-CFh] BYREF
  char v13; // [rsp+3Ah] [rbp-CEh] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  BOOL v16; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+5Ch] [rbp-ACh] BYREF
  int v23; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+64h] [rbp-A4h] BYREF
  int v25; // [rsp+68h] [rbp-A0h] BYREF
  int v26; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v27; // [rsp+70h] [rbp-98h] BYREF
  int v28; // [rsp+74h] [rbp-94h] BYREF
  int v29; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+7Ch] [rbp-8Ch] BYREF
  BOOL v31; // [rsp+80h] [rbp-88h] BYREF
  int v32; // [rsp+84h] [rbp-84h] BYREF
  int v33; // [rsp+88h] [rbp-80h] BYREF
  int v34; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v35; // [rsp+90h] [rbp-78h] BYREF
  int v36; // [rsp+94h] [rbp-74h] BYREF
  int v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v39; // [rsp+A0h] [rbp-68h] BYREF
  int v40; // [rsp+A4h] [rbp-64h] BYREF
  int v41; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v52; // [rsp+100h] [rbp-8h] BYREF
  __int64 v53; // [rsp+108h] [rbp+0h] BYREF
  __int64 v54; // [rsp+110h] [rbp+8h] BYREF
  __int64 v55; // [rsp+118h] [rbp+10h] BYREF
  __int64 v56; // [rsp+120h] [rbp+18h] BYREF
  __int64 v57; // [rsp+128h] [rbp+20h] BYREF
  __int64 v58; // [rsp+130h] [rbp+28h] BYREF
  __int64 v59; // [rsp+138h] [rbp+30h] BYREF
  __int64 v60; // [rsp+140h] [rbp+38h] BYREF
  __int64 v61; // [rsp+148h] [rbp+40h] BYREF
  __int64 v62; // [rsp+150h] [rbp+48h] BYREF
  __int64 v63; // [rsp+158h] [rbp+50h] BYREF
  __int64 v64; // [rsp+160h] [rbp+58h] BYREF
  __int64 v65; // [rsp+168h] [rbp+60h] BYREF
  __int64 v66; // [rsp+170h] [rbp+68h] BYREF
  __int64 v67; // [rsp+178h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+188h] [rbp+80h] BYREF
  char *v69; // [rsp+1A8h] [rbp+A0h]
  __int64 v70; // [rsp+1B0h] [rbp+A8h]
  int *v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]
  __int64 *v73; // [rsp+1C8h] [rbp+C0h]
  __int64 v74; // [rsp+1D0h] [rbp+C8h]
  __int64 *v75; // [rsp+1D8h] [rbp+D0h]
  __int64 v76; // [rsp+1E0h] [rbp+D8h]
  __int64 *v77; // [rsp+1E8h] [rbp+E0h]
  __int64 v78; // [rsp+1F0h] [rbp+E8h]
  __int64 *v79; // [rsp+1F8h] [rbp+F0h]
  __int64 v80; // [rsp+200h] [rbp+F8h]
  __int64 *v81; // [rsp+208h] [rbp+100h]
  __int64 v82; // [rsp+210h] [rbp+108h]
  int *v83; // [rsp+218h] [rbp+110h]
  __int64 v84; // [rsp+220h] [rbp+118h]
  char *v85; // [rsp+228h] [rbp+120h]
  __int64 v86; // [rsp+230h] [rbp+128h]
  BOOL *v87; // [rsp+238h] [rbp+130h]
  __int64 v88; // [rsp+240h] [rbp+138h]
  int *v89; // [rsp+248h] [rbp+140h]
  __int64 v90; // [rsp+250h] [rbp+148h]
  __int64 *v91; // [rsp+258h] [rbp+150h]
  __int64 v92; // [rsp+260h] [rbp+158h]
  __int64 *v93; // [rsp+268h] [rbp+160h]
  __int64 v94; // [rsp+270h] [rbp+168h]
  int *v95; // [rsp+278h] [rbp+170h]
  __int64 v96; // [rsp+280h] [rbp+178h]
  __int64 *v97; // [rsp+288h] [rbp+180h]
  __int64 v98; // [rsp+290h] [rbp+188h]
  __int64 *v99; // [rsp+298h] [rbp+190h]
  __int64 v100; // [rsp+2A0h] [rbp+198h]
  int *v101; // [rsp+2A8h] [rbp+1A0h]
  __int64 v102; // [rsp+2B0h] [rbp+1A8h]
  int *v103; // [rsp+2B8h] [rbp+1B0h]
  __int64 v104; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v105; // [rsp+2C8h] [rbp+1C0h]
  __int64 v106; // [rsp+2D0h] [rbp+1C8h]
  int *v107; // [rsp+2D8h] [rbp+1D0h]
  __int64 v108; // [rsp+2E0h] [rbp+1D8h]
  int *v109; // [rsp+2E8h] [rbp+1E0h]
  __int64 v110; // [rsp+2F0h] [rbp+1E8h]
  int *v111; // [rsp+2F8h] [rbp+1F0h]
  __int64 v112; // [rsp+300h] [rbp+1F8h]
  int *v113; // [rsp+308h] [rbp+200h]
  __int64 v114; // [rsp+310h] [rbp+208h]
  int *v115; // [rsp+318h] [rbp+210h]
  __int64 v116; // [rsp+320h] [rbp+218h]
  int *v117; // [rsp+328h] [rbp+220h]
  __int64 v118; // [rsp+330h] [rbp+228h]
  __int64 *v119; // [rsp+338h] [rbp+230h]
  __int64 v120; // [rsp+340h] [rbp+238h]
  __int64 *v121; // [rsp+348h] [rbp+240h]
  __int64 v122; // [rsp+350h] [rbp+248h]
  __int64 *v123; // [rsp+358h] [rbp+250h]
  __int64 v124; // [rsp+360h] [rbp+258h]
  char v125; // [rsp+3B0h] [rbp+2A8h] BYREF

  v125 = a2;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 11);
  v14 = *a1;
  v45 = *((_QWORD *)a1 + 5);
  v42 = *((_QWORD *)a1 + 6);
  v15 = a1[14];
  v44 = *((_QWORD *)a1 + 8);
  v43 = *((_QWORD *)a1 + 9);
  v48 = *((_QWORD *)a1 + 12);
  v51 = *((_QWORD *)a1 + 13);
  v52 = *((_QWORD *)a1 + 10);
  v5 = *((_QWORD *)a1 + 16);
  v6 = *((_BYTE *)a1 + 124);
  v49 = v5;
  v11 = v6 >> 1;
  v17 = a1[29];
  v50 = *((_QWORD *)a1 + 19);
  v18 = v6 & 1;
  v7 = *((unsigned __int8 *)a1 + 125);
  LOBYTE(v5) = *((_BYTE *)a1 + 125);
  v47 = v3;
  v20 = v5 & 1;
  v54 = *((_QWORD *)a1 + 28);
  v53 = *((_QWORD *)a1 + 29);
  v26 = a1[45];
  v27 = a1[46];
  v22 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v21 = (unsigned __int8)PopLidOpened;
  v28 = *((unsigned __int8 *)a1 + 188);
  v23 = a1[48];
  v24 = a1[49];
  v25 = a1[54];
  v46 = v4;
  v19 = (v7 >> 1) & 1;
  if ( !v3 )
  {
    v42 = 0LL;
    v4 = 0LL;
    v45 = 0LL;
    v44 = 0LL;
    v43 = 0LL;
    v46 = 0LL;
  }
  v8 = 0;
  v16 = v4 != 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON) )
  {
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x50455654u);
    v10 = UserData;
    if ( UserData )
    {
      *(_QWORD *)&UserData->Size = 4LL;
      UserData->Ptr = (ULONGLONG)&v14;
      UserData[1].Ptr = (ULONGLONG)&v42;
      *(_QWORD *)&UserData[1].Size = 8LL;
      UserData[2].Ptr = (ULONGLONG)&v43;
      *(_QWORD *)&UserData[2].Size = 8LL;
      UserData[3].Ptr = (ULONGLONG)&v44;
      *(_QWORD *)&UserData[3].Size = 8LL;
      UserData[4].Ptr = (ULONGLONG)&v45;
      *(_QWORD *)&UserData[4].Size = 8LL;
      UserData[5].Ptr = (ULONGLONG)&v47;
      *(_QWORD *)&UserData[5].Size = 8LL;
      UserData[6].Ptr = (ULONGLONG)&v15;
      *(_QWORD *)&UserData[6].Size = 4LL;
      UserData[7].Ptr = (ULONGLONG)&v11;
      *(_QWORD *)&UserData[7].Size = 1LL;
      UserData[8].Ptr = (ULONGLONG)&v16;
      *(_QWORD *)&UserData[8].Size = 4LL;
      UserData[9].Ptr = (ULONGLONG)&v17;
      *(_QWORD *)&UserData[9].Size = 4LL;
      UserData[10].Ptr = (ULONGLONG)&v46;
      *(_QWORD *)&UserData[10].Size = 8LL;
      UserData[11].Ptr = (ULONGLONG)&v48;
      *(_QWORD *)&UserData[11].Size = 8LL;
      UserData[12].Ptr = (ULONGLONG)&v18;
      *(_QWORD *)&UserData[12].Size = 4LL;
      UserData[13].Ptr = (ULONGLONG)&v49;
      *(_QWORD *)&UserData[13].Size = 8LL;
      UserData[14].Ptr = (ULONGLONG)&v50;
      *(_QWORD *)&UserData[14].Size = 8LL;
      UserData[15].Ptr = (ULONGLONG)&v19;
      *(_QWORD *)&UserData[15].Size = 4LL;
      UserData[16].Ptr = (ULONGLONG)&v20;
      *(_QWORD *)&UserData[16].Size = 4LL;
      UserData[17].Ptr = (ULONGLONG)&v51;
      *(_QWORD *)&UserData[17].Size = 8LL;
      UserData[18].Ptr = (ULONGLONG)&v26;
      *(_QWORD *)&UserData[18].Size = 4LL;
      UserData[19].Ptr = (ULONGLONG)&v27;
      *(_QWORD *)&UserData[19].Size = 4LL;
      UserData[20].Ptr = (ULONGLONG)&v21;
      *(_QWORD *)&UserData[20].Size = 4LL;
      UserData[21].Ptr = (ULONGLONG)&v22;
      *(_QWORD *)&UserData[21].Size = 4LL;
      UserData[22].Ptr = (ULONGLONG)&v125;
      *(_QWORD *)&UserData[22].Size = 1LL;
      UserData[23].Ptr = (ULONGLONG)&v28;
      *(_QWORD *)&UserData[23].Size = 4LL;
      UserData[24].Ptr = (ULONGLONG)&v23;
      *(_QWORD *)&UserData[24].Size = 4LL;
      UserData[25].Ptr = (ULONGLONG)&v24;
      *(_QWORD *)&UserData[25].Size = 4LL;
      UserData[26].Ptr = (ULONGLONG)&PopWdiCurrentScenarioInstanceIdV2;
      *(_QWORD *)&UserData[26].Size = 8LL;
      *(_QWORD *)&UserData[27].Size = 4LL;
      UserData[27].Ptr = 0xFFFFF780000002C4uLL;
      *(_QWORD *)&UserData[28].Size = 4LL;
      UserData[28].Ptr = (ULONGLONG)&v25;
      *(_QWORD *)&UserData[29].Size = 8LL;
      UserData[29].Ptr = (ULONGLONG)&v52;
      UserData[30].Ptr = (ULONGLONG)&v53;
      *(_QWORD *)&UserData[30].Size = 8LL;
      UserData[31].Ptr = (ULONGLONG)&v54;
      *(_QWORD *)&UserData[31].Size = 8LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON, 0LL, 0x20u, UserData);
      ExFreePoolWithTag(v10, 0x50455654u);
    }
    else
    {
      v8 = -1073741670;
    }
  }
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v12 = PopWnfCsEnterScenarioId;
      v29 = v14;
      v55 = v42;
      v56 = v43;
      v57 = v44;
      v58 = v45;
      v59 = v47;
      v30 = v15;
      v13 = v11;
      v31 = v16;
      v32 = v17;
      v60 = v46;
      v61 = v48;
      v33 = v18;
      v62 = v49;
      v63 = v50;
      v34 = v19;
      v35 = v20;
      v64 = v51;
      v36 = v21;
      v37 = v22;
      v38 = v23;
      v39 = v24;
      v41 = v25;
      v65 = v52;
      v66 = v53;
      v67 = v54;
      v69 = &v12;
      v71 = &v29;
      v73 = &v55;
      v75 = &v56;
      v77 = &v57;
      v79 = &v58;
      v81 = &v59;
      v83 = &v30;
      v85 = &v13;
      v40 = v8;
      v70 = 1LL;
      v72 = 4LL;
      v74 = 8LL;
      v76 = 8LL;
      v78 = 8LL;
      v80 = 8LL;
      v82 = 8LL;
      v84 = 4LL;
      v86 = 1LL;
      v87 = &v31;
      v89 = &v32;
      v91 = &v60;
      v93 = &v61;
      v95 = &v33;
      v97 = &v62;
      v99 = &v63;
      v101 = &v34;
      v103 = &v35;
      v105 = &v64;
      v107 = &v36;
      v109 = &v37;
      v111 = &v38;
      v113 = &v39;
      v115 = &v40;
      v117 = &v41;
      v119 = &v65;
      v121 = &v66;
      v123 = &v67;
      v88 = 4LL;
      v90 = 4LL;
      v92 = 8LL;
      v94 = 8LL;
      v96 = 4LL;
      v98 = 8LL;
      v100 = 8LL;
      v102 = 4LL;
      v104 = 4LL;
      v106 = 8LL;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      v116 = 4LL;
      v118 = 4LL;
      v120 = 8LL;
      v122 = 8LL;
      v124 = 8LL;
      TlgWrite(&pCallbackContext, &unk_140371B4A, 0LL, 0LL, 0x1Eu, &pData);
    }
  }
}
