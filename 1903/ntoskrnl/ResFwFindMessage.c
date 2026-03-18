/*
 * XREFs of ResFwFindMessage @ 0x140991744
 * Callers:
 *     BcpFindMessage @ 0x140A414B4 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x1406C58E0 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+48h] [rbp+10h] BYREF

  if ( qword_14042C0E8
    && *(_QWORD *)qword_14042C0E8
    && RtlFindMessage(*(PVOID *)qword_14042C0E8, 0xBu, 0, MessageId, &MessageResourceEntry) >= 0
    && (MessageResourceEntry->Flags & 1) != 0 )
  {
    return MessageResourceEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
