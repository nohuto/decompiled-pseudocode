/*
 * XREFs of EtwpAcquireLoggerContext @ 0x1406A9634
 * Callers:
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406A9564 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406CAD04 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x140781CD0 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408F27C8 (EtwpIncrementTraceFile.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     EtwpCaptureString @ 0x140694558 (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406A9A50 (EtwpAcquireLoggerContextByLoggerName.c)
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
  v8 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v8 )
    v7 = v3;
  if ( v7 != v3 && *(_WORD *)(a2 + 144) )
  {
    *(_QWORD *)&UnicodeString.Length = 0LL;
    UnicodeString.Buffer = 0LL;
    result = EtwpCaptureString((unsigned __int16 *)(a2 + 144), &UnicodeString);
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
