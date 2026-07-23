/*
 * XREFs of RtlDowncaseUnicodeString @ 0x180070A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlDowncaseUnicodeChar_0 @ 0x180070AD4 (RtlDowncaseUnicodeChar_0.c)
 */

NTSTATUS __cdecl RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // ebx
  USHORT v6; // ax
  unsigned int v7; // r10d
  WCHAR v8; // ax
  __int64 v9; // r9
  unsigned int Length; // eax
  WCHAR *v12; // rax

  v5 = 0;
  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    v12 = (WCHAR *)sub_18006D6B8(Length);
    DestinationString->Buffer = v12;
    if ( !v12 )
      return -1073741801;
    v6 = SourceString->Length;
  }
  else
  {
    v6 = SourceString->Length;
    if ( SourceString->Length > DestinationString->MaximumLength )
      return -2147483643;
  }
  v7 = v6 >> 1;
  while ( v5 < v7 )
  {
    v8 = RtlDowncaseUnicodeChar_0(SourceString->Buffer[v5]);
    DestinationString->Buffer[v9] = v8;
    ++v5;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
