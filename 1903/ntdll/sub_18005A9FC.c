/*
 * XREFs of sub_18005A9FC @ 0x18005A9FC
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x18005A920 (RtlpIsQualifiedLanguage.c)
 *     sub_1800EB91C @ 0x1800EB91C (sub_1800EB91C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18005A9FC(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  else
    return (unsigned int)-1073741811;
  return v1;
}
