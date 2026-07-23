/*
 * XREFs of sub_18005A9FC @ 0x18005A9FC
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x18005A920 (RtlpIsQualifiedLanguage.c)
 *     sub_1800EB91C @ 0x1800EB91C (sub_1800EB91C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18005A9FC(PVOID BaseAddress)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  else
    return (unsigned int)-1073741811;
  return v1;
}
