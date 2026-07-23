/*
 * XREFs of RtlpCompareAces @ 0x1800E5254
 * Callers:
 *     RtlpConvertAclToAutoInherit @ 0x1800E53E0 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     RtlpCompareKnownObjectAces @ 0x180087F14 (RtlpCompareKnownObjectAces.c)
 *     RtlpCompareKnownAces @ 0x1800E52A0 (RtlpCompareKnownAces.c)
 */

char __fastcall RtlpCompareAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  char v4; // r11

  v4 = 0;
  if ( (unsigned __int8)(*a1 - 5) <= 3u && (unsigned __int8)(*a2 - 5) <= 3u )
    return RtlpCompareKnownObjectAces(a1, a2, a3, a4);
  if ( (unsigned __int8)(*a1 - 5) > 3u && (unsigned __int8)(*a2 - 5) > 3u )
    return RtlpCompareKnownAces();
  return v4;
}
