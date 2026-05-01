/*
 * XREFs of CrmLogStateMonitorStateSet @ 0x180004428
 * Callers:
 *     CrmStateMonitorStateSet @ 0x1800040C8 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x180004190 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x1800042E0 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 * Callees:
 *     CrmLogStateMonitorIsTelemetryState @ 0x1800045D4 (CrmLogStateMonitorIsTelemetryState.c)
 *     CrmStateMonitorStateSizeGet @ 0x1800046A4 (CrmStateMonitorStateSizeGet.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorStateSet(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v8; // r15
  unsigned __int16 v9; // r14
  __int64 v10; // rax
  int v11; // edx
  const GUID *v12; // r9
  const GUID *v13; // r9
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  int *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h] BYREF
  int v28; // [rsp+ACh] [rbp-54h]
  __int64 *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  int *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h] BYREF
  int v35; // [rsp+DCh] [rbp-24h]
  __int64 *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  __int64 *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]

  v4 = *a1;
  v6 = CrmStateMonitorStateSizeGet(*a1, a2, a3, a4);
  v8 = v7 + 16;
  v9 = v6;
  RtlCompareMemory((const void *)(v7 + 16), (const void *)v7, v6);
  LODWORD(v10) = CrmLogStateMonitorIsTelemetryState(v4);
  if ( (_DWORD)v10 && *(_DWORD *)(a2 + 48) == (_DWORD)v12 && v11 )
  {
    if ( dword_1800AB2F8 > 5u )
    {
      LOBYTE(v10) = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 0x400000000008uLL);
      if ( (_BYTE)v10 )
      {
        v18 = *(_QWORD *)(a2 + 40);
        v16 = *(_QWORD *)(a2 + 32);
        v20 = &Uuid;
        v22 = (int *)&v15;
        v24 = &v27;
        v27 = v9;
        v34 = v9;
        v36 = &v16;
        v29 = &v18;
        v38 = &v17;
        v15 = v4;
        v17 = 0x2000000LL;
        v21 = 16LL;
        v23 = 4LL;
        v25 = 2LL;
        v26 = v8;
        v28 = (int)v13;
        v30 = 8LL;
        v31 = &v34;
        v32 = 2LL;
        v33 = a2;
        v35 = (int)v13;
        v37 = 8LL;
        v39 = 8LL;
        LOBYTE(v10) = TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009B0E2, 0LL, v13, 0xBu, &pData);
      }
    }
  }
  else if ( dword_1800AB2F8 > 5u && (qword_1800AB308 & 8) != 0 )
  {
    v10 = qword_1800AB310 & 8;
    if ( v10 == qword_1800AB310 )
    {
      v17 = *(_QWORD *)(a2 + 40);
      v16 = *(_QWORD *)(a2 + 32);
      v20 = &Uuid;
      v22 = (int *)&v15;
      v24 = &v27;
      v27 = v9;
      v34 = v9;
      v29 = &v17;
      v36 = &v16;
      v15 = v4;
      v21 = 16LL;
      v23 = 4LL;
      v25 = 2LL;
      v26 = v8;
      v28 = (int)v12;
      v30 = 8LL;
      v31 = &v34;
      v32 = 2LL;
      v33 = a2;
      v35 = (int)v12;
      v37 = 8LL;
      LOBYTE(v10) = TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009B1D6, 0LL, v12, 0xAu, &pData);
    }
  }
  return v10;
}
