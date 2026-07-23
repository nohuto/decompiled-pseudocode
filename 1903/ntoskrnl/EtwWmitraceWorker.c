/*
 * XREFs of EtwWmitraceWorker @ 0x1408FA35C
 * Callers:
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsGetSiloBySessionId @ 0x1405BBD6C (PsGetSiloBySessionId.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406B5DAC (EtwpQueryTrace.c)
 *     EtwpStartTrace @ 0x1406B70FC (EtwpStartTrace.c)
 *     EtwEnableTrace @ 0x140717540 (EtwEnableTrace.c)
 *     EtwpUpdateTrace @ 0x14077F2B0 (EtwpUpdateTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x1408FA680 (EtwpPrepareWmitraceLoggerInfo.c)
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
  _STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v10[11]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v10, 0, sizeof(v10));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( dword_140432B04 )
  {
    SiloBySessionId = PsGetSiloBySessionId(dword_140432B04, &v9);
    if ( SiloBySessionId < 0 || !v9 )
      goto LABEL_33;
    v0 = *(_QWORD *)(*(_QWORD *)(v9 + 1256) + 864LL);
  }
  else
  {
    v0 = EtwpHostSiloState;
  }
  if ( EtwWmitraceWork == 1 )
  {
    EtwpPrepareWmitraceLoggerInfo(v10);
    RtlInitAnsiString(&DestinationString, qword_140432B08);
    RtlAnsiStringToUnicodeString(&v10[9], &DestinationString, 1u);
    *(_DWORD *)(&v10[3].MaximumLength + 1) = dword_140432BD0;
    v10[3].Buffer = (wchar_t *)__PAIR64__(dword_140432BCC, dword_140432BD4);
    *(_DWORD *)&v10[3].Length = dword_140432BD8;
    *(_DWORD *)&v10[4].Length = dword_140432BDC;
    *(_DWORD *)(&v10[4].MaximumLength + 1) = dword_140432BE0;
    if ( byte_140432B49 )
    {
      RtlInitAnsiString(&DestinationString, &byte_140432B49);
      RtlAnsiStringToUnicodeString(&v10[8], &DestinationString, 1u);
    }
    started = EtwpStartTrace(v0, (__int64)v10);
    SiloBySessionId = started;
    if ( started >= 0 )
      EtwpWmitraceParams = LOWORD(v10[0].Buffer);
    else
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeAnsiString(&v10[9]);
    if ( byte_140432B49 )
      RtlFreeAnsiString(&v10[8]);
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
                 (int)&unk_140432B1C,
                 0,
                 EtwpWmitraceParams,
                 v2,
                 byte_140432B2C,
                 *(__int64 *)qword_140432B08,
                 qword_140432B10,
                 dword_140432B18);
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
      *(_DWORD *)&v10[4].Length |= 0x80000u;
      updated = EtwpUpdateTrace(v0, (__int64)v10);
      SiloBySessionId = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
    }
  }
LABEL_33:
  dword_140432BE8 = SiloBySessionId;
  EtwWmitraceWork = 0;
}
