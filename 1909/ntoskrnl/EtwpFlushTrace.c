/*
 * XREFs of EtwpFlushTrace @ 0x1406CAD04
 * Callers:
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C43B0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     EtwpCaptureString @ 0x140694558 (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContext @ 0x1406A9634 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406A975C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406A9788 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CB384 (EtwpSynchronizeWithLogger.c)
 *     EtwpCCSwapStop @ 0x14070A404 (EtwpCCSwapStop.c)
 *     EtwpEventWriteTemplateSession @ 0x1408F756C (EtwpEventWriteTemplateSession.c)
 *     EtwpBufferingModeFlush @ 0x1408FA5F4 (EtwpBufferingModeFlush.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v8; // rbx
  ACCESS_MASK v9; // r8d
  unsigned int v10; // ebp
  unsigned __int16 *v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  UNICODE_STRING v14; // xmm0
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v19; // [rsp+70h] [rbp+18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v19 = 0LL;
  UnicodeString.Buffer = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v5, &v19);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_15:
      RtlFreeAnsiString(&UnicodeString);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v8 = v19;
    if ( (v19[3] & 0x40000) != 0 )
    {
      LoggerInfoFromContext = -1073741637;
    }
    else
    {
      v9 = ((v19[3] & 0x100 | 0x400) >> 3) | 0x40;
      if ( !*((_QWORD *)v19 + 102) )
        v9 = (v19[3] & 0x100 | 0x400) >> 3;
      v10 = v19[3] & 0x400;
      if ( v10 )
      {
        if ( !*(_QWORD *)(a2 + 136) || (v11 = (unsigned __int16 *)(a2 + 128), !*(_WORD *)(a2 + 128)) )
        {
          LoggerInfoFromContext = -1073741809;
          goto LABEL_14;
        }
        v9 |= 0x40u;
      }
      else
      {
        v11 = (unsigned __int16 *)(a2 + 128);
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v9, (__int64)v19);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( !v10 )
        {
          v12 = EtwpSynchronizeWithLogger(v8, 4LL);
LABEL_11:
          LoggerInfoFromContext = v12;
          if ( v12 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, (__int64)v8);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v13, &ETW_EVENT_FLUSH_TRACE, v8);
          }
          goto LABEL_14;
        }
        LoggerInfoFromContext = EtwpCaptureString(v11, &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v14 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v8 + 50) = v14;
          _InterlockedOr((volatile signed __int32 *)v8 + 209, 1u);
          v15 = v8[3];
          v8 = v19;
          if ( (v15 & 0x2000000) != 0 )
          {
            v16 = 32LL * *((unsigned __int8 *)v19 + 834) + a1 + 4260;
            if ( v16 )
            {
              v17 = *(_DWORD *)(v16 + 4);
              if ( (v17 & 4) != 0 && (v17 & 0x100) != 0 )
                EtwpCCSwapStop(v19[54], 0LL);
            }
          }
          v12 = EtwpBufferingModeFlush(v8);
          goto LABEL_11;
        }
      }
    }
LABEL_14:
    EtwpReleaseLoggerContext(v8, 1);
    goto LABEL_15;
  }
  return result;
}
