/*
 * XREFs of PopDiagTraceIdleWakeSourceDiagnostic @ 0x140874074
 * Callers:
 *     PopDiagIdleWakeAccountingStop @ 0x140870F28 (PopDiagIdleWakeAccountingStop.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
  int v12; // edx
  __int64 v13; // rcx
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
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+188h] [rbp+80h] BYREF
  __int64 v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  __int64 v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  __int64 v68; // [rsp+1B8h] [rbp+B0h]
  __int64 v69; // [rsp+1C0h] [rbp+B8h]
  __int64 v70; // [rsp+1C8h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v72; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  __int64 v74; // [rsp+1E8h] [rbp+E0h]
  unsigned int v75; // [rsp+1F0h] [rbp+E8h]
  int v76; // [rsp+1F4h] [rbp+ECh]
  __int64 v77; // [rsp+1F8h] [rbp+F0h]
  __int64 v78; // [rsp+200h] [rbp+F8h]

  RtlInitUnicodeString(&DestinationString, &word_140767740);
  if ( *(_DWORD *)a1 == 5 )
  {
    v2 = *(_DWORD *)(a1 + 56);
    if ( v2 > 3 )
      v2 = 3;
    if ( v2 )
    {
      v3 = &v30;
      v4 = v2;
      v5 = 0LL;
      do
      {
        v6 = (unsigned __int16 *)(v5 + a1 + 64);
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
    v30 = (unsigned __int16 *)(a1 + 32);
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
    v41[0] = v8;
    v39 = 2LL;
    v40 = v9;
    v41[1] = 0;
    v10 = *v31;
    v11 = *((_QWORD *)v31 + 1);
    v42 = v45;
    v45[0] = v10;
    v43 = 2LL;
    v44 = v11;
    v45[1] = 0;
    v12 = *v32;
    v13 = *((_QWORD *)v32 + 1);
    v46 = v49;
    v50 = &v24;
    v52 = &v26;
    v54 = &v27;
    v49[0] = v12;
    v56 = &v28;
    v58 = a1 + 112;
    v60 = a1 + 114;
    v14 = *(unsigned __int16 *)(a1 + 112);
    v47 = 2LL;
    v48 = v13;
    v49[1] = 0;
    v51 = 4LL;
    v53 = 8LL;
    v61 = 10 * v14;
    v55 = 8LL;
    v57 = 8LL;
    v59 = 2LL;
    v62 = 0;
    TlgWrite(&pCallbackContext, &unk_1403705EC, 0LL, 0LL, 0x10u, &pData);
  }
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DRIPS_WAKE_ACCOUNTING_SUMMARY) )
  {
    v15 = *(unsigned __int16 *)(a1 + 32);
    UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
    v16 = 8;
    v75 = v15;
    v64 = a1 + 4;
    v66 = a1 + 8;
    v68 = a1 + 16;
    v70 = a1 + 24;
    v25 = v15 >> 1;
    v72 = &v25;
    v74 = *(_QWORD *)(a1 + 40);
    v17 = *(_WORD *)(a1 + 112);
    *(_QWORD *)&UserData.Size = 1LL;
    v65 = 4LL;
    v67 = 8LL;
    v69 = 8LL;
    v71 = 8LL;
    v73 = 4LL;
    v76 = 0;
    v77 = a1 + 112;
    v78 = 2LL;
    if ( v17 )
    {
      v18 = a1 + 116;
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
