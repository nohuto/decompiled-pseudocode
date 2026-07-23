/*
 * XREFs of PopUmpoSendPowerMessage @ 0x1400ECBB8
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400EC3F4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140169E54 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x14069FCC4 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopEvaluateGlobalUserStatus @ 0x140724200 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x14072531C (PopUmpoSendLegacyEvent.c)
 *     PopMonitorProcessLoop @ 0x1407873C8 (PopMonitorProcessLoop.c)
 *     PopUserPresencePredictionModeCallback @ 0x140789320 (PopUserPresencePredictionModeCallback.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1400ED520 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401C1210 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopReleaseUmpoPushLock @ 0x14069FD0C (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x14069FD30 (PopAcquireUmpoPushLock.c)
 *     PopUmpoProcessMessage @ 0x1406A0F2C (PopUmpoProcessMessage.c)
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
