/*
 * XREFs of AslpPathWildcardAllocMatchNode @ 0x140928538
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1409272DC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409278C4 (AslPathWildcardFindNext.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140092AB0 (RtlUnicodeStringCopy.c)
 *     RtlUShortAdd @ 0x14011ED4C (RtlUShortAdd.c)
 *     RtlUnicodeStringCatString @ 0x140191794 (RtlUnicodeStringCatString.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlUnicodeStringCbCatStringN @ 0x140345BBC (RtlUnicodeStringCbCatStringN.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14070CCDC (AslAlloc.c)
 *     AslpPathWildcardFreeMatchNode @ 0x140928844 (AslpPathWildcardFreeMatchNode.c)
 */

__int64 __fastcall AslpPathWildcardAllocMatchNode(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        _WORD *a3,
        int a4,
        NTSTRSAFE_PCWSTR pszSrc,
        USHORT a6)
{
  NTSTATUS v10; // ebx
  USHORT v11; // si
  __int64 v12; // rcx
  SIZE_T v13; // rdx
  wchar_t *v14; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  USHORT pusResult; // [rsp+90h] [rbp+20h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = 0LL;
  DestinationString[1].Buffer = 0LL;
  while ( 1 )
  {
    *(_QWORD *)&DestinationString[1].Length = a3;
    if ( !*a3 )
      break;
    ++a3;
  }
  *(_QWORD *)&DestinationString[1].Length = a3 + 1;
  if ( !a3[1] )
  {
    v10 = a4 != 0 ? -1073741638 : -1073741197;
    goto LABEL_20;
  }
  if ( !a4 )
  {
    v10 = -1073741565;
LABEL_21:
    AslpPathWildcardFreeMatchNode(DestinationString);
    return (unsigned int)v10;
  }
  v11 = a6;
  pusResult = SourceString->Length;
  v10 = RtlUShortAdd(pusResult, a6, &pusResult);
  if ( v10 >= 0 )
  {
    v10 = RtlUShortAdd(pusResult, 4u, &pusResult);
    if ( v10 >= 0 )
    {
      v13 = pusResult;
      DestinationString->MaximumLength = pusResult;
      DestinationString->Length = 0;
      v14 = (wchar_t *)AslAlloc(v12, v13);
      DestinationString->Buffer = v14;
      if ( !v14 )
      {
        v10 = -1073741801;
        goto LABEL_21;
      }
      v10 = RtlUnicodeStringCopy(DestinationString, SourceString);
      if ( v10 >= 0 )
      {
        if ( DestinationString->Buffer[((unsigned __int64)DestinationString->Length >> 1) - 1] == 92
          || (v10 = RtlUnicodeStringCatString(DestinationString, L"\\"), v10 >= 0) )
        {
          if ( !pszSrc || !v11 || (v10 = RtlUnicodeStringCbCatStringN(DestinationString, pszSrc, v11), v10 >= 0) )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            ObjectAttributes.ObjectName = DestinationString;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v10 = ZwOpenFile(
                    (PHANDLE)&DestinationString[1].Buffer,
                    0x100001u,
                    &ObjectAttributes,
                    &IoStatusBlock,
                    1u,
                    0x21u);
            if ( v10 >= 0 )
              return (unsigned int)v10;
          }
        }
      }
    }
  }
  AslLogCallPrintf(1LL);
LABEL_20:
  if ( v10 < 0 )
    goto LABEL_21;
  return (unsigned int)v10;
}
