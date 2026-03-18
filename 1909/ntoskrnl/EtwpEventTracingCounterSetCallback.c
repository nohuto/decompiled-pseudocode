/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x140946700
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetNextGuidEntry @ 0x140693100 (EtwpGetNextGuidEntry.c)
 *     PcwAddInstance @ 0x1406B09B0 (PcwAddInstance.c)
 *     WmiQueryTraceInformation @ 0x140718910 (WmiQueryTraceInformation.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _PCW_BUFFER *v5; // r15
  _DWORD *v6; // rdi
  __int64 *i; // rdx
  signed __int64 *NextGuidEntry; // rax
  NTSTATUS v9; // r14d
  unsigned int v10; // ebx
  unsigned int *v11; // rsi
  ULONG Buffer; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+40h] [rbp-21h] BYREF
  struct _PCW_DATA Data; // [rsp+50h] [rbp-11h] BYREF
  struct _PCW_DATA v15; // [rsp+60h] [rbp-1h] BYREF
  __int64 v16; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  __int64 v19; // [rsp+88h] [rbp+27h] BYREF
  __int64 TraceInformation; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+98h] [rbp+37h]

  *(_QWORD *)&Name.Length = 3014700LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Name.Buffer = L"EventTracingCounterSet";
  result = 0LL;
  v19 = 0LL;
  TraceInformation = 0LL;
  v21 = 0LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    v5 = *(struct _PCW_BUFFER **)(a2 + 24);
    v6 = (_DWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    if ( a3 == 1 )
    {
      for ( i = 0LL; ; i = NextGuidEntry )
      {
        NextGuidEntry = EtwpGetNextGuidEntry((__int64)v6, i, 0);
        if ( !NextGuidEntry )
          break;
        if ( *((_DWORD *)NextGuidEntry + 24) )
        {
          if ( (signed __int64 *)NextGuidEntry[7] == NextGuidEntry + 7 )
            ++HIDWORD(v18);
          else
            ++HIDWORD(v17);
        }
        else
        {
          LODWORD(v18) = v18 + 1;
        }
      }
      LODWORD(v16) = v6[1031];
      LODWORD(v17) = v6[1030];
      HIDWORD(v16) = v6[1029];
      Data.Data = &v16;
      Data.Size = 24;
      return (unsigned int)PcwAddInstance(v5, &Name, 0, 1u, &Data);
    }
    else
    {
      v10 = 0;
      v9 = 0;
      for ( Buffer = 0; v10 < v6[4]; Buffer = ++v10 )
      {
        v11 = EtwpAcquireLoggerContextByLoggerId((__int64)v6, v10, 0);
        if ( v11 )
        {
          v19 = 0LL;
          TraceInformation = 0LL;
          v21 = 0LL;
          if ( v11[79] == 1 )
            LODWORD(v19) = v11[1] * v11[62];
          else
            HIDWORD(v19) = v11[1] * v11[62];
          LODWORD(v21) = v11[64];
          HIDWORD(v21) = v11[90];
          WmiQueryTraceInformation(LoggerEventsLoggedClass, &TraceInformation, 8u, 0LL, &Buffer);
          v10 = Buffer;
          v15.Data = &v19;
          v15.Size = 24;
          v9 = PcwAddInstance(v5, (PCUNICODE_STRING)(v11 + 38), Buffer, 1u, &v15);
          EtwpReleaseLoggerContext(v11, 0);
          if ( v9 < 0 )
            break;
        }
      }
    }
    return (unsigned int)v9;
  }
  return result;
}
