/*
 * XREFs of AslStringAnsiToUnicode @ 0x1408EA524
 * Callers:
 *     AslpFileGet16BitDescription @ 0x1408ED4E0 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x1408ED5C4 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x1408EDB2C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x1408EDEF8 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitString @ 0x140002070 (RtlInitString.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405ABF20 (RtlxAnsiStringToUnicodeSize.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const CHAR *a2)
{
  ULONG v3; // eax
  __int64 v4; // rcx
  wchar_t *Buffer; // rdi
  unsigned __int16 v6; // si
  NTSTATUS v7; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ANSI_STRING AnsiString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitString(&AnsiString, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&AnsiString);
  Buffer = 0LL;
  v6 = v3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *a1 = 0LL;
  if ( v3 <= 0xFFFF )
  {
    DestinationString.Buffer = (wchar_t *)AslAlloc(v4, v3);
    if ( !DestinationString.Buffer )
    {
      v7 = -1073741801;
      AslLogCallPrintf(1LL);
      return (unsigned int)v7;
    }
    DestinationString.MaximumLength = v6;
    DestinationString.Length = 0;
    v7 = RtlAnsiStringToUnicodeString(&DestinationString, &AnsiString, 0);
    if ( v7 >= 0 )
    {
      v7 = 0;
      *a1 = DestinationString.Buffer;
    }
    else
    {
      AslLogCallPrintf(1LL);
      Buffer = DestinationString.Buffer;
    }
  }
  else
  {
    v7 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x74705041u);
  return (unsigned int)v7;
}
