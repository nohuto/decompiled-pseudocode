/*
 * XREFs of PopUmpoSendPowerMessage @ 0x1400035C0
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140002AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14015976C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x140589A88 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DCAB8 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x1406DDDDC (PopUmpoSendLegacyEvent.c)
 *     PopUserPresencePredictionModeCallback @ 0x140762580 (PopUserPresencePredictionModeCallback.c)
 *     PopMonitorProcessBrightnessAction @ 0x140877884 (PopMonitorProcessBrightnessAction.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140004B10 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401B92B0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PopReleaseUmpoPushLock @ 0x140589AD0 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x140589AF4 (PopAcquireUmpoPushLock.c)
 *     PopUmpoProcessMessage @ 0x14058AF88 (PopUmpoProcessMessage.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(void *Src, size_t Size, char a3)
{
  HANDLE v6; // rdi
  int v7; // eax
  int v8; // ebx
  __int64 MessageAttribute; // rax
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[160]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v13[256]; // [rsp+F0h] [rbp-10h] BYREF

  PopAcquireUmpoPushLock(0LL);
  v6 = PopAlpcClientPort;
  if ( PopAlpcClientPort )
  {
    if ( Size > 0x1D8 )
    {
      v8 = -2147483643;
      goto LABEL_6;
    }
    memset(v13, 0, sizeof(v13));
    v13[0] = Size;
    v13[1] = Size + 40;
    memmove(&v13[20], Src, Size);
    if ( a3 )
    {
      memset(v12, 0, sizeof(v12));
      v11 = 512LL;
      v8 = ((__int64 (__fastcall *)(HANDLE, __int64, _WORD *, _QWORD, _WORD *, __int64 *, _BYTE *, _QWORD))ZwAlpcSendWaitReceivePort)(
             v6,
             0x20000LL,
             v13,
             0LL,
             v13,
             &v11,
             v12,
             0LL);
      if ( v8 < 0 )
        goto LABEL_6;
      MessageAttribute = AlpcGetMessageAttribute(v12, 0x20000000LL);
      v7 = PopUmpoProcessMessage(v13, MessageAttribute);
    }
    else
    {
      v7 = ZwAlpcSendWaitReceivePort(v6, 0x10000LL, v13, 0LL, 0LL, 0LL, 0LL, 0LL, v11);
    }
    v8 = v7;
  }
  else
  {
    v8 = -1073741758;
  }
LABEL_6:
  PopReleaseUmpoPushLock();
  return (unsigned int)v8;
}
