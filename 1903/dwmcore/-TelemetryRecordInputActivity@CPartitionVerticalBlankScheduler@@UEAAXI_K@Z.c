/*
 * XREFs of ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z @ 0x18001C2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEAAXI_K0@Z @ 0x18001C39C (-Update@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEAAXI_K0@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryRecordInputActivity(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // r11d
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned int v10; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-21h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 *v14; // [rsp+78h] [rbp+17h]
  int v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+84h] [rbp+23h]
  unsigned __int64 *v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+90h] [rbp+2Fh]
  int v19; // [rsp+94h] [rbp+33h]
  unsigned __int64 *v20; // [rsp+98h] [rbp+37h]
  int v21; // [rsp+A0h] [rbp+3Fh]
  int v22; // [rsp+A4h] [rbp+43h]
  unsigned int v23; // [rsp+D0h] [rbp+6Fh] BYREF
  unsigned __int64 v24; // [rsp+D8h] [rbp+77h] BYREF

  v24 = a3;
  v23 = a2;
  v3 = a3;
  v4 = a2;
  if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
  {
    v9 = **((_QWORD **)this + 3237);
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v14 = &v11;
    v17 = (unsigned __int64 *)&v23;
    v20 = &v24;
    v11 = v9;
    v15 = 8;
    v18 = 4;
    v21 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802D93F7, 0LL, 0LL, 5u, &pData);
    v3 = v24;
    v4 = v23;
  }
  v6 = (unsigned __int64 *)*((_QWORD *)this + 3237);
  v11 = v3;
  v10 = v4;
  v7 = *v6;
  v12 = *v6;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v14 = (unsigned __int64 *)&v10;
    v17 = &v11;
    v20 = &v12;
    v15 = 4;
    v18 = 8;
    v21 = 8;
    TlgWrite(v8, &unk_1802DA923, 0LL, 0LL, 5u, &pData);
    v7 = v12;
    v3 = v11;
    v4 = v10;
  }
  CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::Update(
    (CPartitionVerticalBlankScheduler *)((char *)this + 30800),
    v4,
    v3,
    v7);
}
