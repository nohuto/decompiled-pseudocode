/*
 * XREFs of AlpcGetMessageAttribute @ 0x140004B10
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400035C0 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x140004B48 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x140004C90 (AlpcGetHeaderSize.c)
 */

PVOID __cdecl AlpcGetMessageAttribute(PALPC_MESSAGE_ATTRIBUTES Buffer, ULONG AttributeFlag)
{
  if ( (Buffer->AllocatedAttributes & AttributeFlag) == 0 || ((AttributeFlag - 1) & AttributeFlag) != 0 )
    return 0LL;
  else
    return (char *)Buffer + AlpcGetHeaderSize(Buffer->AllocatedAttributes & (-2 * AttributeFlag));
}
