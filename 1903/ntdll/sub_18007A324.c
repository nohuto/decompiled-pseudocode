/*
 * XREFs of sub_18007A324 @ 0x18007A324
 * Callers:
 *     sub_18002088C @ 0x18002088C (sub_18002088C.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 */

char __fastcall sub_18007A324(__int64 a1)
{
  char v1; // bl
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  String1 = *(_UNICODE_STRING *)(a1 + 72);
  String1.Length = stru_180165330.Length;
  if ( *(unsigned __int16 *)(a1 + 72) - (unsigned int)*(unsigned __int16 *)(a1 + 88) <= (unsigned int)stru_180165330.Length
                                                                                      + 2 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * ((unsigned __int64)stru_180165330.Length >> 1)) != 92 )
    return 0;
  v1 = 1;
  if ( RtlCompareUnicodeString(&String1, &stru_180165330, 1u) )
    return 0;
  return v1;
}
