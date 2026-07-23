/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x140589974
 * Callers:
 *     PoGetRequester @ 0x1400021D0 (PoGetRequester.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14058A0BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlGetPowerRequestKey @ 0x14058A1B4 (PopAvlGetPowerRequestKey.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1406DC9D8 (PopAvlFindOrMakeStatsForAudio.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140017780 (RtlUnicodeStringCopy.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PopUnicodeStringDeepCopy(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        __int64 a3,
        ULONG a4)
{
  PVOID *p_Buffer; // rbx
  unsigned int v5; // ebp
  PVOID PoolWithTag; // r14
  NTSTATUS result; // eax

  p_Buffer = (PVOID *)&DestinationString->Buffer;
  v5 = SourceString->Length + 2;
  if ( v5 > 0xFFFF )
  {
    if ( *p_Buffer )
      goto LABEL_7;
    v5 = 0xFFFF;
  }
  if ( !*p_Buffer || DestinationString->MaximumLength < v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, a4);
    if ( PoolWithTag )
    {
      if ( *p_Buffer )
        ExFreePoolWithTag(*p_Buffer, 0);
      *p_Buffer = PoolWithTag;
      DestinationString->Length = 0;
      DestinationString->MaximumLength = v5;
    }
  }
LABEL_7:
  result = RtlUnicodeStringCopy(DestinationString, SourceString);
  if ( result >= 0 )
    *((_WORD *)*p_Buffer + ((unsigned __int64)DestinationString->Length >> 1)) = 0;
  return result;
}
