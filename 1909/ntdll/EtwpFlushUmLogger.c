/*
 * XREFs of EtwpFlushUmLogger @ 0x18010D4B0
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpAddInstanceIdToLogFileName @ 0x180004B28 (EtwpAddInstanceIdToLogFileName.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     EtwpGetPrivateLoggerContext @ 0x18008744C (EtwpGetPrivateLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x1800874E0 (EtwpSynchronizeWithLogger.c)
 *     EtwpBufferingModeFlush @ 0x18010D164 (EtwpBufferingModeFlush.c)
 *     EtwpQueryUmLogger @ 0x18010D810 (EtwpQueryUmLogger.c)
 */

__int64 __fastcall EtwpFlushUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 234LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  result = EtwpGetPrivateLoggerContext(a4, &v11);
  if ( !(_DWORD)result )
  {
    v9 = v11;
    if ( (*(_DWORD *)(v11 + 324) & 0x400) != 0 )
    {
      if ( !*(_WORD *)(a4 + 128) )
      {
        v10 = 2;
LABEL_11:
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v9 + 20) + 8));
        return v10;
      }
      v10 = EtwpAddInstanceIdToLogFileName(a4, *(_DWORD *)(a4 + 96), (_UNICODE_STRING *)(v11 + 168));
      if ( v10 )
        goto LABEL_11;
      v10 = EtwpBufferingModeFlush(v9);
      RtlFreeAnsiString((PUNICODE_STRING)(v9 + 168));
    }
    else
    {
      v10 = EtwpSynchronizeWithLogger(v11, 2);
    }
    EtwpQueryUmLogger(a1, a2, a3, a4);
    goto LABEL_11;
  }
  return result;
}
