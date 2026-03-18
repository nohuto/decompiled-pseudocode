/*
 * XREFs of PopDiagTraceIdleWakeSourceDiagnostic @ 0x1408AFB38
 * Callers:
 *     PopDiagIdleWakeAccountingStop @ 0x1408AC8B8 (PopDiagIdleWakeAccountingStop.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIdleWakeSourceDiagnostic(__int64 a1)
{
  unsigned int v2; // edx
  unsigned __int16 **v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int16 *v6; // rax
  int v7; // r10d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  unsigned int v15; // ecx
  ULONG v16; // r9d
  unsigned __int16 v17; // cx
  ULONGLONG v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 *v30; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 *v31; // [rsp+78h] [rbp-90h]
  unsigned __int16 *v32; // [rsp+80h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  int *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  int *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  _DWORD *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  __int64 v40; // [rsp+D8h] [rbp-30h]
  _DWORD v41[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  __int64 v44; // [rsp+F8h] [rbp-10h]
  _DWORD v45[2]; // [rsp+100h] [rbp-8h] BYREF
  _DWORD *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  __int64 v48; // [rsp+118h] [rbp+10h]
  _DWORD v49[2]; // [rsp+120h] [rbp+18h] BYREF
  int *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  __int64 *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  __int64 *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  __int64 *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  __int64 v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  __int64 v60; // [rsp+178h] [rbp+70h]
  int v61; // [rsp+180h] [rbp+78h]
  int v62; // [rsp+184h] [rbp+7Ch]
  void *v63; // [rsp+188h] [rbp+80h]
  __int64 v64; // [rsp+190h] [rbp+88h]
  __int64 v65; // [rsp+198h] [rbp+90h]
  __int64 v66; // [rsp+1A0h] [rbp+98h]
  void *v67; // [rsp+1A8h] [rbp+A0h]
  __int64 v68; // [rsp+1B0h] [rbp+A8h]
  __int64 v69; // [rsp+1B8h] [rbp+B0h]
  __int64 v70; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v72; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  __int64 v74; // [rsp+1E8h] [rbp+E0h]
  __int64 v75; // [rsp+1F0h] [rbp+E8h]
  __int64 v76; // [rsp+1F8h] [rbp+F0h]
  __int64 v77; // [rsp+200h] [rbp+F8h]
  __int64 v78; // [rsp+208h] [rbp+100h]
  __int64 v79; // [rsp+210h] [rbp+108h]
  unsigned int *v80; // [rsp+218h] [rbp+110h]
  __int64 v81; // [rsp+220h] [rbp+118h]
  __int64 v82; // [rsp+228h] [rbp+120h]
  unsigned int v83; // [rsp+230h] [rbp+128h]
  int v84; // [rsp+234h] [rbp+12Ch]
  __int64 v85; // [rsp+238h] [rbp+130h]
  __int64 v86; // [rsp+240h] [rbp+138h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, &word_14078CDD0);
  if ( *(_DWORD *)a1 == 5 )
  {
    v2 = *(_DWORD *)(a1 + 216);
    if ( v2 > 3 )
      v2 = 3;
    if ( v2 )
    {
      v3 = &v30;
      v4 = v2;
      v5 = 0LL;
      do
      {
        v6 = (unsigned __int16 *)(v5 + a1 + 224);
        v5 += 16LL;
        *v3++ = v6;
        --v4;
      }
      while ( v4 );
    }
  }
  else
  {
    v2 = 1;
    v30 = (unsigned __int16 *)(a1 + 192);
  }
  if ( v2 < 3 )
    memset64(&(&v30)[v2], (unsigned __int64)&DestinationString, 3 - v2);
  if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
  {
    LOBYTE(v22) = PopWnfCsEnterScenarioId;
    v24 = *(_DWORD *)(a1 + 4);
    v26 = *(_QWORD *)(a1 + 8);
    v27 = *(_QWORD *)(a1 + 16);
    v28 = *(_QWORD *)(a1 + 24);
    v34 = &v22;
    v36 = &v23;
    v23 = v7;
    v35 = 1LL;
    v37 = 4LL;
    v8 = *v30;
    v9 = *((_QWORD *)v30 + 1);
    v38 = v41;
    v40 = v9;
    v39 = 2LL;
    v41[0] = v8;
    v41[1] = 0;
    v10 = *v31;
    v11 = *((_QWORD *)v31 + 1);
    v42 = v45;
    v44 = v11;
    v43 = 2LL;
    v45[0] = v10;
    v45[1] = 0;
    v12 = *((_QWORD *)v32 + 1);
    v13 = *v32;
    v46 = v49;
    v50 = &v24;
    v52 = &v26;
    v54 = &v27;
    v56 = &v28;
    v60 = a1 + 274;
    v48 = v12;
    v14 = *(unsigned __int16 *)(a1 + 272);
    v58 = a1 + 272;
    v47 = 2LL;
    v49[0] = v13;
    v49[1] = 0;
    v51 = 4LL;
    v63 = &PopDripsWakeIdleAccountingBucketLimitsMs;
    v53 = 8LL;
    v65 = a1 + 32;
    v67 = &PopDripsWakePeriodAccountingBucketLimitsMs;
    v69 = a1 + 104;
    v55 = 8LL;
    v57 = 8LL;
    v59 = 2LL;
    v61 = 10 * v14;
    v62 = 0;
    v64 = 80LL;
    v66 = 72LL;
    v68 = 96LL;
    v70 = 88LL;
    TlgWrite(&pCallbackContext, &unk_14038F403, 0LL, 0LL, 0x14u, &pData);
  }
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DRIPS_WAKE_ACCOUNTING_SUMMARY) )
  {
    v15 = *(unsigned __int16 *)(a1 + 192);
    UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
    v16 = 8;
    v83 = v15;
    v72 = a1 + 4;
    v74 = a1 + 8;
    v76 = a1 + 16;
    v78 = a1 + 24;
    v25 = v15 >> 1;
    v80 = &v25;
    v82 = *(_QWORD *)(a1 + 200);
    v17 = *(_WORD *)(a1 + 272);
    *(_QWORD *)&UserData.Size = 1LL;
    v73 = 4LL;
    v75 = 8LL;
    v77 = 8LL;
    v79 = 8LL;
    v81 = 4LL;
    v84 = 0;
    v85 = a1 + 272;
    v86 = 2LL;
    if ( v17 )
    {
      v18 = a1 + 276;
      v19 = v17;
      do
      {
        v20 = 2LL * v16;
        *(&UserData.Ptr + v20) = v18 - 2;
        *((_QWORD *)&UserData.Size + v20) = 2LL;
        v21 = 2LL * (v16 + 1);
        v16 += 2;
        *(&UserData.Ptr + v21) = v18;
        v18 += 10LL;
        *((_QWORD *)&UserData.Size + v21) = 8LL;
        --v19;
      }
      while ( v19 );
    }
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DRIPS_WAKE_ACCOUNTING_SUMMARY, 0LL, v16, &UserData);
  }
}
