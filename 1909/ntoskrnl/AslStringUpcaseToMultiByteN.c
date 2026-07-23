/*
 * XREFs of AslStringUpcaseToMultiByteN @ 0x14070E814
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14070D7CC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14074C114 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x140667020 (RtlUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x14066AA90 (RtlUpcaseUnicodeString.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14070EABC (AslAlloc.c)
 */

__int64 __fastcall AslStringUpcaseToMultiByteN(char *a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int16 MaximumLength; // bx
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-30h] BYREF
  _STRING v9; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_DWORD *)(&v9.MaximumLength + 1) = 0;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  MaximumLength = DestinationString.MaximumLength;
  SourceString.Buffer = (wchar_t *)AslAlloc(v5, DestinationString.MaximumLength);
  if ( SourceString.Buffer )
  {
    SourceString.MaximumLength = MaximumLength;
    SourceString.Length = 0;
    v6 = RtlUpcaseUnicodeString(&SourceString, &DestinationString, 0);
    if ( v6 < 0
      || (v9.Buffer = a1,
          *(_DWORD *)&v9.Length = 0x1000000,
          v6 = RtlUnicodeStringToAnsiString(&v9, &SourceString, 0),
          v6 < 0) )
    {
      AslLogCallPrintf(1LL);
    }
    else
    {
      v6 = 0;
      a1[v9.Length] = 0;
    }
    if ( SourceString.Buffer )
      ExFreePoolWithTag(SourceString.Buffer, 0x74705041u);
  }
  else
  {
    v6 = -1073741801;
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v6;
}
