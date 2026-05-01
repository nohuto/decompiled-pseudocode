/*
 * XREFs of CrmLogStateMonitorRundown @ 0x180003F58
 * Callers:
 *     CrmGlobalsRundown @ 0x180003E5C (CrmGlobalsRundown.c)
 * Callees:
 *     CrmLogStateMonitorIsTelemetryState @ 0x1800045D4 (CrmLogStateMonitorIsTelemetryState.c)
 *     CrmStateMonitorLogDataGet @ 0x1800045F0 (CrmStateMonitorLogDataGet.c)
 *     CrmStateMonitorStateSizeGet @ 0x1800046A4 (CrmStateMonitorStateSizeGet.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorRundown(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // r9d
  int IsTelemetryState; // eax
  int v6; // r9d
  unsigned __int16 v7; // r10
  __int64 v8; // rdx
  int v9; // r9d
  unsigned __int16 v10; // r10
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v16[16]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v17[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  UUID *v21; // [rsp+B8h] [rbp-50h]
  __int64 v22; // [rsp+C0h] [rbp-48h]
  __int64 *v23; // [rsp+C8h] [rbp-40h]
  __int64 v24; // [rsp+D0h] [rbp-38h]
  int *v25; // [rsp+D8h] [rbp-30h]
  __int64 v26; // [rsp+E0h] [rbp-28h]
  _BYTE *v27; // [rsp+E8h] [rbp-20h]
  int v28; // [rsp+F0h] [rbp-18h] BYREF
  int v29; // [rsp+F4h] [rbp-14h]
  __int64 *v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp-8h]
  int *v32; // [rsp+108h] [rbp+0h]
  __int64 v33; // [rsp+110h] [rbp+8h]
  _BYTE *v34; // [rsp+118h] [rbp+10h]
  int v35; // [rsp+120h] [rbp+18h] BYREF
  int v36; // [rsp+124h] [rbp+1Ch]
  __int64 *v37; // [rsp+128h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+28h]
  __int64 *v39; // [rsp+138h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+38h]

  RtlAcquireSRWLockExclusive(a1 + 2);
  a1[4] = GetCurrentThreadId();
  CrmStateMonitorLogDataGet(a1, v16, 0LL);
  a1[4] = 0;
  RtlReleaseSRWLockExclusive(a1 + 2);
  CrmStateMonitorStateSizeGet(*a1, v2, v3, *a1);
  IsTelemetryState = CrmLogStateMonitorIsTelemetryState(v4);
  if ( IsTelemetryState )
  {
    if ( dword_1800AB2F8 > 5u )
    {
      LOBYTE(IsTelemetryState) = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 0x400000000008uLL);
      if ( (_BYTE)IsTelemetryState )
      {
        v15 = v19;
        v13 = v18;
        v21 = &Uuid;
        v23 = &v12;
        v25 = &v28;
        v27 = v17;
        v28 = v7;
        v35 = v7;
        v37 = &v13;
        v39 = &v14;
        LODWORD(v12) = v6;
        v14 = 0x2000000LL;
        v22 = 16LL;
        v24 = 4LL;
        v26 = 2LL;
        v29 = 0;
        v30 = &v15;
        v31 = 8LL;
        v32 = &v35;
        v33 = 2LL;
        v34 = v16;
        v36 = 0;
        v38 = 8LL;
        v40 = 8LL;
        LOBYTE(IsTelemetryState) = TlgWrite(
                                     (TraceLoggingHProvider)&dword_1800AB2F8,
                                     &unk_18009AFF2,
                                     0LL,
                                     0LL,
                                     0xBu,
                                     &pData);
      }
    }
  }
  else if ( dword_1800AB2F8 > 5u )
  {
    LOBYTE(IsTelemetryState) = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 8uLL);
    if ( (_BYTE)IsTelemetryState )
    {
      v14 = v19;
      v13 = v18;
      v21 = &Uuid;
      v23 = &v12;
      v25 = &v28;
      v27 = v17;
      v28 = v10;
      v35 = v10;
      v30 = &v14;
      v37 = &v13;
      LODWORD(v12) = v9;
      v22 = 16LL;
      v24 = 4LL;
      v26 = 2LL;
      v29 = 0;
      v31 = v8;
      v32 = &v35;
      v33 = 2LL;
      v34 = v16;
      v36 = 0;
      v38 = v8;
      LOBYTE(IsTelemetryState) = TlgWrite(
                                   (TraceLoggingHProvider)&dword_1800AB2F8,
                                   &unk_18009B072,
                                   0LL,
                                   0LL,
                                   0xAu,
                                   &pData);
    }
  }
  return IsTelemetryState;
}
