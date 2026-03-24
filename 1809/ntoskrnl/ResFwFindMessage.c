/*
 * XREFs of ResFwFindMessage @ 0x1409516DC
 * Callers:
 *     BcpFindMessage @ 0x1409FB808 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x14067BDD0 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+48h] [rbp+10h] BYREF

  if ( qword_140405B88
    && *(_QWORD *)qword_140405B88
    && RtlFindMessage(*(PVOID *)qword_140405B88, 0xBu, 0, MessageId, &MessageResourceEntry) >= 0
    && (MessageResourceEntry->Flags & 1) != 0 )
  {
    return MessageResourceEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
