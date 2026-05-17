/*
 * XREFs of RtlUnicodeStringToOemString @ 0x180061C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToOemN @ 0x180061E60 (RtlUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800621F0 (RtlxUnicodeStringToOemSize.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  char *v8; // rax
  NTSTATUS v9; // edi
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString);
  if ( v6 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    v8 = (char *)sub_18006D6B8(v6, v7);
    DestinationString->Buffer = v8;
    if ( !v8 )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v6 - 1) >= DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v9 = RtlUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         (unsigned int)&v11,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 )
  {
    DestinationString->Buffer[v11] = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      RtlDeleteBoundaryDescriptor(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v9;
}
