/*
 * XREFs of PopUmpoSendPowerMessage @ 0x1400035C0
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140002AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14015988C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x14058AA88 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DDD38 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x1406DF05C (PopUmpoSendLegacyEvent.c)
 *     PopUserPresencePredictionModeCallback @ 0x140763750 (PopUserPresencePredictionModeCallback.c)
 *     PopMonitorProcessBrightnessAction @ 0x140878AC4 (PopMonitorProcessBrightnessAction.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140004B10 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401B9430 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopReleaseUmpoPushLock @ 0x14058AAD0 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x14058AAF4 (PopAcquireUmpoPushLock.c)
 *     PopUmpoProcessMessage @ 0x14058BF88 (PopUmpoProcessMessage.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(void *Src, size_t Size, char a3)
{
  HANDLE v6; // rdi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR BufferLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE SendMessageA[512]; // [rsp+F0h] [rbp-10h] BYREF

  PopAcquireUmpoPushLock(0LL);
  v6 = PopAlpcClientPort;
  if ( PopAlpcClientPort )
  {
    if ( Size > 0x1D8 )
    {
      v8 = -2147483643;
      goto LABEL_6;
    }
    memset(SendMessageA, 0, sizeof(SendMessageA));
    *(_WORD *)SendMessageA = Size;
    *(_WORD *)&SendMessageA[2] = Size + 40;
    memmove(&SendMessageA[40], Src, Size);
    if ( a3 )
    {
      memset(Buffer, 0, sizeof(Buffer));
      BufferLength[0] = 512LL;
      v8 = ZwAlpcSendWaitReceivePort(
             v6,
             0x20000u,
             (PPORT_MESSAGE)SendMessageA,
             0LL,
             (PPORT_MESSAGE)SendMessageA,
             BufferLength,
             Buffer,
             0LL);
      if ( v8 < 0 )
        goto LABEL_6;
      MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(Buffer, 0x20000000u);
      v7 = PopUmpoProcessMessage((PPORT_MESSAGE)SendMessageA, MessageAttribute);
    }
    else
    {
      v7 = ZwAlpcSendWaitReceivePort(v6, 0x10000u, (PPORT_MESSAGE)SendMessageA, 0LL, 0LL, 0LL, 0LL, 0LL);
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
