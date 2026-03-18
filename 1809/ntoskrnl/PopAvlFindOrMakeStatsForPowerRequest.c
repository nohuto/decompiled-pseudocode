/*
 * XREFs of PopAvlFindOrMakeStatsForPowerRequest @ 0x1405890BC
 * Callers:
 *     PopStatsCreatePowerRequest @ 0x140589234 (PopStatsCreatePowerRequest.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140006F00 (RtlInsertElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PopFreeUnicodeString @ 0x1405882E0 (PopFreeUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x140588974 (PopUnicodeStringDeepCopy.c)
 *     PopAvlGetPowerRequestKey @ 0x1405891B4 (PopAvlGetPowerRequestKey.c)
 */

char *__fastcall PopAvlFindOrMakeStatsForPowerRequest(__int64 a1)
{
  char *v2; // rbx
  char *inserted; // rax
  __int64 v5; // r8
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
          if ( PopUnicodeStringDeepCopy((PUNICODE_STRING)(v2 + 8), (PCUNICODE_STRING)&Buffer[1], v5, 0x54515750u) < 0 )
            RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
        }
      }
    }
  }
  PopFreeUnicodeString((__int64)&Buffer[1]);
  return v2;
}
