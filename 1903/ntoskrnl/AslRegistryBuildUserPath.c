/*
 * XREFs of AslRegistryBuildUserPath @ 0x1407727BC
 * Callers:
 *     AslRegistryGetKey @ 0x140772620 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1406676F0 (RtlFormatCurrentUserKeyPath.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14070CCDC (AslAlloc.c)
 */

__int64 __fastcall AslRegistryBuildUserPath(PUNICODE_STRING Destination, PCWSTR Source)
{
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  wchar_t *v8; // rax
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&Sourcea.Length = 0LL;
  Sourcea.Buffer = 0LL;
  v5 = RtlFormatCurrentUserKeyPath(&Sourcea);
  if ( v5 < 0 )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    Destination->Length = 0;
    v6 = -1LL;
    do
      ++v6;
    while ( Source[v6] );
    v7 = Sourcea.Length + 2 * (v6 + 1);
    Destination->MaximumLength = v7;
    v8 = (wchar_t *)AslAlloc(v4, v7);
    Destination->Buffer = v8;
    if ( v8 )
    {
      RtlAppendUnicodeStringToString(Destination, &Sourcea);
      RtlAppendUnicodeToString(Destination, Source);
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
      AslLogCallPrintf(1LL);
    }
  }
  RtlFreeAnsiString(&Sourcea);
  return (unsigned int)v5;
}
