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
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR BufferLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD SendMessageA[256]; // [rsp+F0h] [rbp-10h] BYREF

  PopAcquireUmpoPushLock(0LL);
  v6 = PopAlpcClientPort;
  if ( PopAlpcClientPort )
  {
    if ( Size > 0x1D8 )
    {
      v8 = -2147483643;
      goto LABEL_6;
    }
    memset(&SendMessageA[2], 0, 0x1FCuLL);
    SendMessageA[0] = Size;
    SendMessageA[1] = Size + 40;
    memmove(&SendMessageA[20], Src, Size);
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
