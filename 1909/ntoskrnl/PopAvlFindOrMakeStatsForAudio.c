/*
 * XREFs of PopAvlFindOrMakeStatsForAudio @ 0x1407201E8
 * Callers:
 *     PopStatsNotifyAudioState @ 0x14072017C (PopStatsNotifyAudioState.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140001F10 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopUnicodeStringDeepCopy @ 0x1406B42EC (PopUnicodeStringDeepCopy.c)
 *     PopFreeUnicodeString @ 0x1406E1654 (PopFreeUnicodeString.c)
 */

char *PopAvlFindOrMakeStatsForAudio()
{
  char *v0; // rbx
  char *inserted; // rax
  BOOLEAN NewElement[8]; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD Buffer[28]; // [rsp+40h] [rbp-C0h] BYREF

  memset(Buffer, 0, 0xD8uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, AUDIO_STATS_ID);
  PopUnicodeStringDeepCopy((PUNICODE_STRING)&Buffer[1], &DestinationString);
  v0 = (char *)RtlLookupElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
  if ( !v0 )
  {
    inserted = (char *)RtlInsertElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer, 0xD8u, NewElement);
    v0 = inserted;
    if ( inserted )
    {
      if ( NewElement[0] )
      {
        memset(inserted, 0, 0xD8uLL);
        if ( PopUnicodeStringDeepCopy((PUNICODE_STRING)(v0 + 8), (PCUNICODE_STRING)&Buffer[1]) < 0 )
          RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
      }
    }
  }
  PopFreeUnicodeString((__int64)&Buffer[1]);
  return v0;
}
