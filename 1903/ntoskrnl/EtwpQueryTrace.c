/*
 * XREFs of EtwpQueryTrace @ 0x1406B5DAC
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1408FA35C (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C3EE0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x1406B5E7C (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406B5F70 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B5F9C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCheckSecurityLoggerAccess @ 0x1406EFD6C (EtwpCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v8; // rbx
  unsigned int *v9; // rcx
  unsigned int *v10; // [rsp+40h] [rbp+18h] BYREF

  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v5, v4, &v10);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_3:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v8 = (__int64)v10;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u, (__int64)v10);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v8 + 832) & 0x4000) != 0 )
      {
        LoggerInfoFromContext = EtwpCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process);
        if ( LoggerInfoFromContext < 0 )
        {
          v9 = v10;
          goto LABEL_9;
        }
        v8 = (__int64)v10;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v8);
    }
    v9 = (unsigned int *)v8;
LABEL_9:
    EtwpReleaseLoggerContext(v9, 1);
    goto LABEL_3;
  }
  return result;
}
