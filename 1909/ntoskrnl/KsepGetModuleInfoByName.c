/*
 * XREFs of KsepGetModuleInfoByName @ 0x14088375C
 * Callers:
 *     KsepResolveShimHooks @ 0x140882C14 (KsepResolveShimHooks.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140667020 (RtlUnicodeStringToAnsiString.c)
 *     RtlCompareString @ 0x14066AD50 (RtlCompareString.c)
 */

__int64 __fastcall KsepGetModuleInfoByName(PCWSTR SourceString, _DWORD *a2, _QWORD *a3)
{
  NTSTATUS v5; // ebx
  int v6; // ebx
  __int64 v7; // r14
  _STRING String2; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  _STRING String1; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !SourceString || !a3 || !a2 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v5 = RtlUnicodeStringToAnsiString(&String2, &DestinationString, 1u);
  if ( v5 >= 0 )
  {
    v6 = 0;
    if ( *a2 )
    {
      while ( 1 )
      {
        v7 = (__int64)&a2[74 * v6 + 2];
        RtlInitAnsiString(&String1, (PCSZ)(v7 + *(unsigned __int16 *)(v7 + 38) + 40LL));
        if ( !RtlCompareString(&String1, &String2, 1u) )
          break;
        if ( (unsigned int)++v6 >= *a2 )
          goto LABEL_8;
      }
      v5 = 0;
      *a3 = *(_QWORD *)(v7 + 16);
    }
    else
    {
LABEL_8:
      v5 = -1073741275;
    }
  }
  if ( String2.Buffer )
    RtlFreeAnsiString((PUNICODE_STRING)&String2);
  return (unsigned int)v5;
}
