/*
 * XREFs of CrmLogStateMonitorRundown @ 0x18003235C
 * Callers:
 *     CrmGlobalsRundown @ 0x18003226C (CrmGlobalsRundown.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     CrmStateMonitorLogDataGet @ 0x180032A34 (CrmStateMonitorLogDataGet.c)
 *     CrmStateMonitorStateSizeGet @ 0x180032AB8 (CrmStateMonitorStateSizeGet.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorRundown(unsigned int *a1)
{
  unsigned __int16 v2; // ax
  int v3; // r9d
  int v4; // r9d
  unsigned __int16 v5; // r10
  __int64 v6; // r11
  __int64 v8; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v11[16]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v12[16]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+70h] [rbp-98h]
  __int64 v14; // [rsp+78h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  UUID *v16; // [rsp+A8h] [rbp-60h]
  __int64 v17; // [rsp+B0h] [rbp-58h]
  __int64 *v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  int *v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  _BYTE *v22; // [rsp+D8h] [rbp-30h]
  int v23; // [rsp+E0h] [rbp-28h] BYREF
  int v24; // [rsp+E4h] [rbp-24h]
  __int64 *v25; // [rsp+E8h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-18h]
  int *v27; // [rsp+F8h] [rbp-10h]
  __int64 v28; // [rsp+100h] [rbp-8h]
  _BYTE *v29; // [rsp+108h] [rbp+0h]
  int v30; // [rsp+110h] [rbp+8h] BYREF
  int v31; // [rsp+114h] [rbp+Ch]
  __int64 *v32; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+18h]

  RtlAcquireSRWLockExclusive(a1 + 2);
  a1[4] = GetCurrentThreadId();
  CrmStateMonitorLogDataGet(a1, v11, 0LL);
  a1[4] = 0;
  RtlReleaseSRWLockExclusive(a1 + 2);
  v2 = CrmStateMonitorStateSizeGet(*a1);
  if ( v3 <= 2 )
  {
    if ( dword_18009B128 > 5u )
    {
      v10 = v14;
      v9 = v13;
      v16 = &Uuid;
      v18 = &v8;
      v20 = &v23;
      v22 = v12;
      v23 = v2;
      v30 = v2;
      v27 = &v30;
      v32 = &v9;
      LODWORD(v8) = v3;
      v17 = 16LL;
      v19 = 4LL;
      v21 = 2LL;
      v24 = 0;
      v25 = &v10;
      v26 = 8LL;
      v28 = 2LL;
      v29 = v11;
      v31 = 0;
      v33 = 8LL;
      LOBYTE(v2) = TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D3C2, 0LL, 0LL, 0xAu, &pData);
    }
  }
  else if ( dword_18009B128 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)&dword_18009B128, 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      v9 = v14;
      v10 = v13;
      v16 = &Uuid;
      v18 = &v8;
      v20 = &v23;
      v22 = v12;
      v23 = v5;
      v30 = v5;
      v27 = &v30;
      v32 = &v10;
      LODWORD(v8) = v4;
      v17 = 16LL;
      v19 = 4LL;
      v21 = v6;
      v24 = 0;
      v25 = &v9;
      v26 = 8LL;
      v28 = v6;
      v29 = v11;
      v31 = 0;
      v33 = 8LL;
      LOBYTE(v2) = TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D352, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return v2;
}
