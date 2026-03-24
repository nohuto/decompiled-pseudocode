/*
 * XREFs of PopAvlFindOrMakeStatsForAudio @ 0x1406DB738
 * Callers:
 *     PopStatsNotifyAudioState @ 0x1406DB6CC (PopStatsNotifyAudioState.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140006F00 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PopFreeUnicodeString @ 0x1405882E0 (PopFreeUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x140588974 (PopUnicodeStringDeepCopy.c)
 */

char *PopAvlFindOrMakeStatsForAudio()
{
  __int64 v0; // r8
  char *v1; // rbx
  char *inserted; // rax
  __int64 v4; // r8
  BOOLEAN NewElement[8]; // [rsp+20h] [rbp-118h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-110h] BYREF
  _QWORD Buffer[28]; // [rsp+40h] [rbp-F8h] BYREF

  memset(Buffer, 0, 0xD8uLL);
  RtlInitUnicodeString(&DestinationString, AUDIO_STATS_ID);
  PopUnicodeStringDeepCopy((PUNICODE_STRING)&Buffer[1], &DestinationString, v0, 0x54515750u);
  v1 = (char *)RtlLookupElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
  if ( !v1 )
  {
    inserted = (char *)RtlInsertElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer, 0xD8u, NewElement);
    v1 = inserted;
    if ( inserted )
    {
      if ( NewElement[0] )
      {
        memset(inserted, 0, 0xD8uLL);
        if ( PopUnicodeStringDeepCopy((PUNICODE_STRING)(v1 + 8), (PCUNICODE_STRING)&Buffer[1], v4, 0x54515750u) < 0 )
          RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
      }
    }
  }
  PopFreeUnicodeString((__int64)&Buffer[1]);
  return v1;
}
