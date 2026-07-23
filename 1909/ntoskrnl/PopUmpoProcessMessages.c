/*
 * XREFs of PopUmpoProcessMessages @ 0x1400F0418
 * Callers:
 *     PopUmpoMessageCallback @ 0x1400F03C0 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x140A1EA00 (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1400F03E0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1400F0500 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401C1D90 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopUmpoProcessMessage @ 0x14069DA6C (PopUmpoProcessMessage.c)
 */

NTSTATUS PopUmpoProcessMessages()
{
  NTSTATUS result; // eax
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR RequiredBufferSize; // [rsp+40h] [rbp-2C8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp-2C0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+50h] [rbp-2B8h] BYREF
  _PORT_MESSAGE ConnectionRequest; // [rsp+F0h] [rbp-218h] BYREF

  Timeout.QuadPart = 0LL;
  memset(Buffer, 0, sizeof(Buffer));
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
    RequiredBufferSize = 512LL;
    result = ZwAlpcSendWaitReceivePort(
               PopAlpcServerPort,
               0,
               0LL,
               0LL,
               &ConnectionRequest,
               &RequiredBufferSize,
               Buffer,
               &Timeout);
    if ( result )
      break;
    MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(Buffer, 0x20000000u);
    PopUmpoProcessMessage(&ConnectionRequest, MessageAttribute);
  }
  return result;
}
