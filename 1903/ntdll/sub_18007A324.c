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
  unsigned __int16 v3[12]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = *(_OWORD *)(a1 + 72);
  v3[0] = xmmword_180165330;
  if ( *(unsigned __int16 *)(a1 + 72) - (unsigned int)*(unsigned __int16 *)(a1 + 88) <= (unsigned int)(unsigned __int16)xmmword_180165330
                                                                                      + 2 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * ((unsigned __int64)(unsigned __int16)xmmword_180165330 >> 1)) != 92 )
    return 0;
  v1 = 1;
  if ( (unsigned int)RtlCompareUnicodeString(v3, (unsigned __int16 *)&xmmword_180165330, 1) )
    return 0;
  return v1;
}
