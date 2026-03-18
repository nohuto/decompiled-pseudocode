/*
 * XREFs of PopAvlFindOrMakeStatsForPowerRequest @ 0x1406B409C
 * Callers:
 *     PopStatsCreatePowerRequest @ 0x1406B4044 (PopStatsCreatePowerRequest.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140001F10 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopAvlGetPowerRequestKey @ 0x1406B418C (PopAvlGetPowerRequestKey.c)
 *     PopUnicodeStringDeepCopy @ 0x1406B42EC (PopUnicodeStringDeepCopy.c)
 *     PopFreeUnicodeString @ 0x1406E1654 (PopFreeUnicodeString.c)
 */

char *__fastcall PopAvlFindOrMakeStatsForPowerRequest(__int64 a1)
{
  char *v2; // rbx
  char *inserted; // rax
  BOOLEAN NewElement[16]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD Buffer[28]; // [rsp+30h] [rbp-F8h] BYREF

  memset(Buffer, 0, 0xD8uLL);
  v2 = *(char **)(a1 + 136);
  if ( !v2 && (int)PopAvlGetPowerRequestKey(a1, &Buffer[1]) >= 0 )
  {
    v2 = (char *)RtlLookupElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
    if ( !v2 )
    {
      inserted = (char *)RtlInsertElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer, 0xD8u, NewElement);
      v2 = inserted;
      if ( inserted )
      {
        if ( NewElement[0] )
        {
          memset(inserted, 0, 0xD8uLL);
          if ( (int)PopUnicodeStringDeepCopy((PUNICODE_STRING)(v2 + 8), (PCUNICODE_STRING)&Buffer[1]) < 0 )
          {
            RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
            v2 = 0LL;
          }
        }
      }
    }
  }
  PopFreeUnicodeString(&Buffer[1]);
  return v2;
}
