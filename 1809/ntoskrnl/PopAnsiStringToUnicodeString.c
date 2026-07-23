/*
 * XREFs of PopAnsiStringToUnicodeString @ 0x140589D18
 * Callers:
 *     PopAvlGetPowerRequestKey @ 0x14058A1B4 (PopAvlGetPowerRequestKey.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405ABF20 (RtlxAnsiStringToUnicodeSize.c)
 */

NTSTATUS __fastcall PopAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PCANSI_STRING SourceString)
{
  ULONG v4; // ebp
  PVOID *p_Buffer; // rbx
  PVOID PoolWithTag; // r14
  NTSTATUS result; // eax

  v4 = RtlxAnsiStringToUnicodeSize(SourceString);
  p_Buffer = (PVOID *)&DestinationString->Buffer;
  if ( v4 > 0xFFFF )
  {
    if ( *p_Buffer )
      goto LABEL_7;
    v4 = 0xFFFF;
  }
  if ( !*p_Buffer || DestinationString->MaximumLength < v4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x54515750u);
    if ( PoolWithTag )
    {
      if ( *p_Buffer )
        ExFreePoolWithTag(*p_Buffer, 0);
      *p_Buffer = PoolWithTag;
      DestinationString->Length = 0;
      DestinationString->MaximumLength = v4;
    }
  }
LABEL_7:
  result = RtlAnsiStringToUnicodeString(DestinationString, SourceString, 0);
  if ( result >= 0 )
    *((_WORD *)*p_Buffer + ((unsigned __int64)DestinationString->Length >> 1)) = 0;
  return result;
}
