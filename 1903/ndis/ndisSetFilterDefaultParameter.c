/*
 * XREFs of ndisSetFilterDefaultParameter @ 0x1C00907CC
 * Callers:
 *     ndisSetAllFilterDefaultParameters @ 0x1C00904C0 (ndisSetAllFilterDefaultParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_dd @ 0x1C001D754 (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisSetFilterDefaultParameter(__int64 a1, const WCHAR *a2, __int64 a3, char a4)
{
  unsigned int v7; // edi
  const WCHAR *v8; // r12
  char v9; // si
  int v10; // edx
  NTSTATUS RegistryValues; // ebx
  wchar_t *Buffer; // rcx
  unsigned int v13; // ebx
  const WCHAR *v14; // rdx
  NTSTATUS v15; // eax
  int v16; // ecx
  char v18; // [rsp+30h] [rbp-D0h]
  ULONG Value; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[5]; // [rsp+90h] [rbp-70h] BYREF

  v7 = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  v8 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v9 = 1;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  Value = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      93,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      v18,
      a3);
  }
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = *(wchar_t **)(a3 + 8);
  QueryTable[1].QueryRoutine = 0LL;
  QueryTable[2].QueryRoutine = 0LL;
  QueryTable[3].QueryRoutine = 0LL;
  QueryTable[1].Name = L"Optional";
  QueryTable[4].Name = 0LL;
  QueryTable[1].Flags = a4 != 0 ? 288 : 32;
  QueryTable[1].EntryContext = &String;
  QueryTable[2].Flags = QueryTable[1].Flags;
  QueryTable[2].Name = L"Default";
  QueryTable[3].Flags = QueryTable[1].Flags;
  QueryTable[2].EntryContext = &DestinationString;
  QueryTable[0].Flags = 1;
  QueryTable[3].Name = L"Type";
  QueryTable[3].EntryContext = &String2;
  QueryTable[1].DefaultType = a4 != 0 ? 0x1000000 : 0;
  QueryTable[2].DefaultType = QueryTable[1].DefaultType;
  QueryTable[3].DefaultType = QueryTable[1].DefaultType;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, v8, QueryTable, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1,
      94,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      RegistryValues,
      a4);
  if ( RegistryValues )
  {
    v7 = -1073741823;
  }
  else
  {
    if ( String.Buffer )
      RtlUnicodeStringToInteger(&String, 0xAu, &Value);
    if ( !Value )
    {
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        if ( !String2.Buffer )
          goto LABEL_17;
        v13 = 0;
        while ( RtlCompareUnicodeString((PCUNICODE_STRING)((char *)&unk_1C00CBF20 + 24 * v13), &String2, 1u) )
        {
          if ( ++v13 >= 6 )
            goto LABEL_17;
        }
        v14 = (const WCHAR *)&unk_1C00CDC00;
        if ( (unsigned int)(*((_DWORD *)&unk_1C00CBF20 + 6 * v13 + 4) - 4) > 1 )
LABEL_17:
          v14 = L"0";
        RtlInitUnicodeString(&DestinationString, v14);
        Buffer = DestinationString.Buffer;
        v9 = 0;
      }
      v15 = RtlWriteRegistryValue(
              1u,
              *(PCWSTR *)(a1 + 8),
              *(PCWSTR *)(a3 + 8),
              1u,
              Buffer,
              DestinationString.Length + 2);
      v16 = 0;
      if ( v15 )
        v16 = -1073741823;
      v7 = v16;
    }
  }
  if ( String.Buffer )
    ExFreePoolWithTag(String.Buffer, 0);
  if ( DestinationString.Buffer && v9 )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1u,
      0x5Fu,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      (char)v8,
      a3,
      v7);
  return v7;
}
