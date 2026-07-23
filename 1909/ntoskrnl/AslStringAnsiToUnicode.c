/*
 * XREFs of AslStringAnsiToUnicode @ 0x140925940
 * Callers:
 *     AslpFileGet16BitDescription @ 0x140928DBC (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x140928EA0 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x1409293F8 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x1409297C4 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitString @ 0x140105320 (RtlInitString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14063FCE0 (RtlxAnsiStringToUnicodeSize.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14070EABC (AslAlloc.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const CHAR *a2)
{
  ULONG v3; // eax
  __int64 v4; // rcx
  wchar_t *Buffer; // rdi
  unsigned __int16 v6; // si
  NTSTATUS v7; // ebx
  UNICODE_STRING v9; // [rsp+30h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitString(&DestinationString, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  Buffer = 0LL;
  v6 = v3;
  *(_QWORD *)&v9.Length = 0LL;
  *a1 = 0LL;
  if ( v3 <= 0xFFFF )
  {
    v9.Buffer = (wchar_t *)AslAlloc(v4, v3);
    if ( !v9.Buffer )
    {
      v7 = -1073741801;
      AslLogCallPrintf(1LL);
      return (unsigned int)v7;
    }
    v9.MaximumLength = v6;
    v9.Length = 0;
    v7 = RtlAnsiStringToUnicodeString(&v9, &DestinationString, 0);
    if ( v7 >= 0 )
    {
      v7 = 0;
      *a1 = v9.Buffer;
    }
    else
    {
      AslLogCallPrintf(1LL);
      Buffer = v9.Buffer;
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
