/*
 * XREFs of CrmLogStateMonitorStop @ 0x180003758
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180003718 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmLogStateMonitorIsTelemetryState @ 0x1800045D4 (CrmLogStateMonitorIsTelemetryState.c)
 *     CrmStateMonitorStateSizeGet @ 0x1800046A4 (CrmStateMonitorStateSizeGet.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorStop(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rbx
  int IsTelemetryState; // eax
  __int64 v6; // rdx
  int v7; // r9d
  __int64 v8; // r10
  unsigned __int16 v9; // r11
  int v10; // r9d
  __int64 v11; // r10
  unsigned __int16 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp-A0h] BYREF
  UUID *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  int *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  _DWORD *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  __int64 v30; // [rsp+B0h] [rbp-50h]
  _DWORD v31[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  _DWORD *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  __int64 v36; // [rsp+E0h] [rbp-20h]
  _DWORD v37[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  __int64 *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  UUID *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  _DWORD *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  __int64 v49; // [rsp+160h] [rbp+60h]
  _DWORD v50[2]; // [rsp+168h] [rbp+68h] BYREF
  __int64 *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  _DWORD *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  __int64 v55; // [rsp+190h] [rbp+90h]
  _DWORD v56[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 *v57; // [rsp+1A0h] [rbp+A0h]
  __int64 v58; // [rsp+1A8h] [rbp+A8h]

  CrmStateMonitorStateSizeGet(*a1, a2, a3, *a1);
  v4 = MEMORY[0x7FFE0008];
  IsTelemetryState = CrmLogStateMonitorIsTelemetryState(v3);
  if ( IsTelemetryState )
  {
    if ( dword_1800AB2F8 > 5u )
    {
      LOBYTE(IsTelemetryState) = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 0x400000000008uLL);
      if ( (_BYTE)IsTelemetryState )
      {
        v13 = *(_QWORD *)(v11 + 40);
        v18 = *(_QWORD *)(v11 + 48);
        v24 = &Uuid;
        v26 = &v16;
        v28 = v31;
        v31[0] = v12;
        v37[0] = v12;
        v38 = &v19;
        v16 = v10;
        v40 = &v20;
        v19 = v4;
        v20 = 0x2000000LL;
        v25 = 16LL;
        v27 = 4LL;
        v29 = 2LL;
        v30 = v13;
        v31[1] = 0;
        v32 = &v18;
        v33 = 8LL;
        v34 = v37;
        v35 = 2LL;
        v36 = v13;
        v37[1] = 0;
        v39 = 8LL;
        v41 = 8LL;
        LOBYTE(IsTelemetryState) = TlgWrite(
                                     (TraceLoggingHProvider)&dword_1800AB2F8,
                                     &unk_18009B15E,
                                     0LL,
                                     0LL,
                                     0xBu,
                                     &v23);
      }
    }
  }
  else if ( dword_1800AB2F8 > 5u )
  {
    LOBYTE(IsTelemetryState) = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 8uLL);
    if ( (_BYTE)IsTelemetryState )
    {
      v14 = *(_QWORD *)(v8 + 40);
      v21 = *(_QWORD *)(v8 + 48);
      v43 = &Uuid;
      v45 = &v17;
      v47 = v50;
      v17 = v7;
      v50[0] = v9;
      v56[0] = v9;
      v51 = &v21;
      v57 = &v22;
      v22 = v4;
      v44 = 16LL;
      v46 = 4LL;
      v48 = 2LL;
      v49 = v14;
      v50[1] = 0;
      v52 = v6;
      v53 = v56;
      v54 = 2LL;
      v55 = v14;
      v56[1] = 0;
      v58 = v6;
      LOBYTE(IsTelemetryState) = TlgWrite(
                                   (TraceLoggingHProvider)&dword_1800AB2F8,
                                   &unk_18009B296,
                                   0LL,
                                   0LL,
                                   0xAu,
                                   &pData);
    }
  }
  return IsTelemetryState;
}
