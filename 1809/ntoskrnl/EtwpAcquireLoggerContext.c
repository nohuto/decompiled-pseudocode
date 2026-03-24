/*
 * XREFs of EtwpAcquireLoggerContext @ 0x140659E50
 * Callers:
 *     EtwpStopTrace @ 0x140658F90 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x140659D80 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406C2940 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x140725ADC (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408B6510 (EtwpIncrementTraceFile.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C51A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140659F64 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpCaptureString @ 0x14065A024 (EtwpCaptureString.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, unsigned int **a3)
{
  unsigned __int8 v3; // r9
  unsigned int v7; // edx
  __int64 v8; // rax
  unsigned int *v9; // rax
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // r8
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_BYTE *)(a1 + 4208);
  *a3 = 0LL;
  v7 = -1;
  v8 = *(_QWORD *)(a2 + 24) - SystemTraceControlGuid;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
  if ( !v8 )
    v7 = v3;
  if ( v7 != v3 && *(_WORD *)(a2 + 144) )
  {
    result = EtwpCaptureString(a2 + 144, &UnicodeString);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v12) = 1;
    *a3 = (unsigned int *)EtwpAcquireLoggerContextByLoggerName(a1, &UnicodeString, v12);
    RtlFreeAnsiString(&UnicodeString);
    v10 = *a3 == 0LL;
  }
  else
  {
    if ( v7 == -1 )
    {
      v7 = v3;
      if ( *(_WORD *)(a2 + 8) != 0xFFFF )
        v7 = *(unsigned __int16 *)(a2 + 8);
      if ( v7 >= *(_DWORD *)(a1 + 16) )
        return 3221225480LL;
    }
    v9 = EtwpAcquireLoggerContextByLoggerId(a1, v7, 1);
    *a3 = v9;
    v10 = v9 == 0LL;
  }
  if ( v10 )
    return 3221226134LL;
  else
    return 0LL;
}
