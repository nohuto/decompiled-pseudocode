/*
 * XREFs of PopUmpoSendPowerMessage @ 0x1400D636C
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400D8980 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1401698F4 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x140672080 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407260A0 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x1407271BC (PopUmpoSendLegacyEvent.c)
 *     PopMonitorProcessLoop @ 0x140789728 (PopMonitorProcessLoop.c)
 *     PopUserPresencePredictionModeCallback @ 0x14078B780 (PopUserPresencePredictionModeCallback.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1400F03E0 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401C1D90 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopReleaseUmpoPushLock @ 0x1406720C8 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x1406720EC (PopAcquireUmpoPushLock.c)
 *     PopUmpoProcessMessage @ 0x14069DA6C (PopUmpoProcessMessage.c)
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
    memset(&v13[2], 0, 0x1FCuLL);
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
