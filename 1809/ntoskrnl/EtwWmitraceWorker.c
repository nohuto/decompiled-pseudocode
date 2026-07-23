/*
 * XREFs of EtwWmitraceWorker @ 0x1408BEA40
 * Callers:
 *     ExpDebuggerWorker @ 0x140916030 (ExpDebuggerWorker.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PsGetSiloBySessionId @ 0x140597B48 (PsGetSiloBySessionId.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14065AF40 (EtwpQueryTrace.c)
 *     EtwpStartTrace @ 0x1406CEF4C (EtwpStartTrace.c)
 *     EtwEnableTrace @ 0x140719030 (EtwEnableTrace.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x1408BED48 (EtwpPrepareWmitraceLoggerInfo.c)
 */

void EtwWmitraceWorker()
{
  __int64 v0; // rsi
  int SiloBySessionId; // ebx
  int v2; // r14d
  int Trace; // eax
  int v4; // eax
  int updated; // eax
  int v6; // eax
  int started; // eax
  __int64 v8; // [rsp+48h] [rbp-C0h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  _WORD v10[24]; // [rsp+68h] [rbp-A0h] BYREF
  int v11; // [rsp+98h] [rbp-70h]
  int v12; // [rsp+9Ch] [rbp-6Ch]
  int v13; // [rsp+A0h] [rbp-68h]
  int v14; // [rsp+A4h] [rbp-64h]
  int v15; // [rsp+A8h] [rbp-60h]
  int v16; // [rsp+ACh] [rbp-5Ch]
  UNICODE_STRING v17; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+F8h] [rbp-10h] BYREF

  if ( dword_14040B4C4 )
  {
    SiloBySessionId = PsGetSiloBySessionId(dword_14040B4C4, &v8);
    if ( SiloBySessionId < 0 || !v8 )
      goto LABEL_33;
    v0 = *(_QWORD *)(*(_QWORD *)(v8 + 1256) + 864LL);
  }
  else
  {
    v0 = EtwpHostSiloState;
  }
  if ( EtwWmitraceWork == 1 )
  {
    EtwpPrepareWmitraceLoggerInfo(v10);
    RtlInitAnsiString(&DestinationString, qword_14040B4C8);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    v12 = dword_14040B590;
    v13 = dword_14040B594;
    v11 = dword_14040B598;
    v15 = dword_14040B59C;
    v16 = dword_14040B5A0;
    v14 = dword_14040B58C;
    if ( byte_14040B509 )
    {
      RtlInitAnsiString(&DestinationString, &byte_14040B509);
      RtlAnsiStringToUnicodeString(&v17, &DestinationString, 1u);
    }
    started = EtwpStartTrace(v0, (__int64)v10);
    SiloBySessionId = started;
    if ( started >= 0 )
      EtwpWmitraceParams = v10[4];
    else
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeAnsiString(&UnicodeString);
    if ( byte_14040B509 )
      RtlFreeAnsiString(&v17);
  }
  else
  {
    v2 = 2;
    if ( EtwWmitraceWork == 2 )
    {
      EtwpPrepareWmitraceLoggerInfo(v10);
      Trace = EtwpQueryTrace(v0, (__int64)v10);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_22;
      v6 = EtwpStopTrace(v0, (__int64)v10, 0);
      SiloBySessionId = v6;
      if ( v6 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v6);
    }
    else
    {
      if ( EtwWmitraceWork != 3 )
      {
        if ( (unsigned __int8)(EtwWmitraceWork - 4) > 2u )
        {
          SiloBySessionId = -1073741637;
          DbgPrintEx(0x17u, 3u, "Unknown command passed to EtwWmitraceWorker.\n");
          goto LABEL_33;
        }
        EtwpPrepareWmitraceLoggerInfo(v10);
        Trace = EtwpQueryTrace(v0, (__int64)v10);
        SiloBySessionId = Trace;
        if ( Trace >= 0 )
        {
          if ( EtwWmitraceWork == 4 )
          {
            v2 = 1;
          }
          else if ( EtwWmitraceWork == 5 )
          {
            v2 = 0;
          }
          v4 = EtwEnableTrace(
                 (int)&unk_14040B4DC,
                 0,
                 EtwpWmitraceParams,
                 v2,
                 byte_14040B4EC,
                 *(__int64 *)qword_14040B4C8,
                 qword_14040B4D0,
                 dword_14040B4D8);
          SiloBySessionId = v4;
          if ( v4 < 0 )
            DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v4);
          goto LABEL_33;
        }
LABEL_22:
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
        goto LABEL_33;
      }
      EtwpPrepareWmitraceLoggerInfo(v10);
      Trace = EtwpQueryTrace(v0, (__int64)v10);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_22;
      v15 |= 0x80000u;
      updated = EtwpUpdateTrace(v0, (__int64)v10);
      SiloBySessionId = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
    }
  }
LABEL_33:
  dword_14040B5A8 = SiloBySessionId;
  EtwWmitraceWork = 0;
}
