/*
 * XREFs of EtwpIncrementTraceFile @ 0x1408F2E5C
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x1406B5E7C (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406B5F70 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B5F9C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpGenerateFileName @ 0x1406BA198 (EtwpGenerateFileName.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CC554 (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpIncrementTraceFile(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v8; // rbx
  unsigned int *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v5, v4, &v9);
    if ( LoggerInfoFromContext >= 0 )
    {
      v8 = v9;
      if ( (v9[3] & 8) != 0 )
      {
        v8 = v9;
        if ( (v9[209] & 1) == 0 )
        {
          EtwpSynchronizeWithLogger((__int64)v9, 4u);
          EtwpGenerateFileName(
            (unsigned __int16 *)v8 + 92,
            (volatile signed __int32 *)v8 + 78,
            (UNICODE_STRING *)(v8 + 50));
          LoggerInfoFromContext = EtwpSynchronizeWithLogger((__int64)v8, 1u);
        }
        if ( LoggerInfoFromContext >= 0 )
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, (__int64)v8);
      }
      else
      {
        LoggerInfoFromContext = -1073741811;
      }
      EtwpReleaseLoggerContext(v8, 1);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
