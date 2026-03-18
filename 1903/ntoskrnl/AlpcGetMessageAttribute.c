/*
 * XREFs of AlpcGetMessageAttribute @ 0x1400ED520
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400ECBB8 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1400ED558 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x1400ED6A0 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}
