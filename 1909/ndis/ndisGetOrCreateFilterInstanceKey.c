/*
 * XREFs of ndisGetOrCreateFilterInstanceKey @ 0x1C008F898
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C008E0D4 (ndisCreateFilterInstanceRegistry.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_dd @ 0x1C001D754 (WPP_RECORDER_SF_dd.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002CE7C (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisGetOrCreateFilterInstanceKey(
        const UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        _BYTE *a5,
        PUNICODE_STRING Destination)
{
  unsigned __int16 *v6; // r15
  const UNICODE_STRING *v8; // rbx
  unsigned int v9; // edi
  char v10; // si
  const struct _GUID *v11; // rdx
  __int16 v12; // ax
  __int64 v13; // rbx
  wchar_t *PoolWithTag; // rax
  NTSTATUS v15; // ebx
  ULONG i; // esi
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  int v20; // eax
  NTSTATUS RegistryValues; // ebx
  wchar_t *v22; // rax
  unsigned __int16 v23; // ax
  wchar_t *v24; // rax
  NTSTATUS RegistryKey; // eax
  wchar_t *Buffer; // rcx
  char v28; // [rsp+50h] [rbp-B0h]
  char v29; // [rsp+51h] [rbp-AFh]
  int v32; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v34; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v37; // [rsp+9Ch] [rbp-64h]
  HANDLE KeyHandle; // [rsp+A0h] [rbp-60h] BYREF
  char v39[8]; // [rsp+A8h] [rbp-58h]
  _UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-50h] BYREF
  _UNICODE_STRING GuidString; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING String2; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING SourceString; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+F0h] [rbp-10h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+130h] [rbp+30h] BYREF

  v6 = 0LL;
  SourceString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
  *(_QWORD *)v39 = a2;
  v8 = a1;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10 = 0;
  *(_QWORD *)&SourceString.Length = 6946920LL;
  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = (wchar_t *)L"\\";
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v28 = 0;
  v29 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  *(_QWORD *)&v34.Length = 0LL;
  v34.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v37 = 0;
  v32 = 0;
  ResultLength = 0;
  v11 = &WPP_6ee99368f40c34c231f69366c0436dad_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v11,
      1,
      96,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)v8,
      a3,
      v39[0]);
  }
  if ( !*(_QWORD *)(a3 + 16) )
  {
    v9 = -1073741811;
    goto LABEL_54;
  }
  *a5 = 0;
  *(_QWORD *)&Destination->Length = 0LL;
  Destination->Buffer = 0LL;
  if ( RtlStringFromGUID((const GUID *const)(*(_QWORD *)(a3 + 16) + 4008LL), &GuidString) )
    goto LABEL_53;
  v12 = v8->Length + 2;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = GuidString.Length
                                  + SourceString.Length
                                  + ndisParameterStr.Length
                                  + ndisFilterAdapterStr.Length
                                  + v12;
  v28 = 1;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          DestinationString.MaximumLength,
                                          0x2020444Eu);
  if ( !DestinationString.Buffer )
  {
    v9 = -1073741670;
    goto LABEL_54;
  }
  memset(DestinationString.Buffer, 0, DestinationString.MaximumLength);
  RtlCopyUnicodeString(&DestinationString, &SourceString);
  RtlAppendUnicodeStringToString(&DestinationString, v8);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisFilterAdapterStr);
  RtlAppendUnicodeStringToString(&DestinationString, &GuidString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes) )
  {
    v9 = -1073741823;
    KeyHandle = 0LL;
LABEL_57:
    RtlFreeUnicodeString(&GuidString);
    goto LABEL_58;
  }
  v13 = *(_QWORD *)(*(_QWORD *)v39 + 112LL);
  if ( !v13 )
    goto LABEL_17;
  do
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 344LL) + 40LL) & 2) == 0 )
      break;
    v13 = *(_QWORD *)(v13 + 112);
  }
  while ( v13 );
  if ( !v13 )
  {
LABEL_17:
    if ( !RtlStringFromGUID((const GUID *const)(a3 + 4008), &UnicodeString) )
    {
      String1.Length = UnicodeString.Length;
      String1.MaximumLength = UnicodeString.MaximumLength;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, UnicodeString.MaximumLength, 0x2020444Eu);
      String1.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        v10 = 1;
        memset(PoolWithTag, 0, String1.MaximumLength);
        v15 = RtlUpcaseUnicodeString(&String1, &UnicodeString, 0);
        RtlFreeUnicodeString(&UnicodeString);
        if ( !v15 )
          goto LABEL_22;
      }
      else
      {
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
LABEL_18:
    LOBYTE(v8) = (_BYTE)a1;
LABEL_53:
    v9 = -1073741823;
    goto LABEL_54;
  }
  String1.Length = *(_WORD *)(*(_QWORD *)(v13 + 16) + 128LL);
  String1.MaximumLength = String1.Length + 2;
  String1.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(String1.Length + 2), 0x2020444Eu);
  if ( !String1.Buffer )
  {
LABEL_15:
    LOBYTE(v8) = (_BYTE)a1;
    v9 = -1073741670;
    goto LABEL_54;
  }
  memset(String1.Buffer, 0, String1.MaximumLength);
  memmove(String1.Buffer, *(const void **)(*(_QWORD *)(v13 + 16) + 136LL), String1.Length);
LABEL_22:
  v6 = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x218uLL, 0x2020444Eu);
  if ( !v6 )
  {
LABEL_23:
    v10 = 1;
    goto LABEL_15;
  }
  for ( i = 0; i <= 0x270F; ++i )
  {
    memset(v6, 0, 0x218uLL);
    ResultLength = 0;
    v17 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v6, 0x216u, &ResultLength);
    if ( v17 == -2147483622 )
      break;
    if ( v17 )
      goto LABEL_47;
    v34.Length = v6[6];
    v34.Buffer = v6 + 8;
    v34.MaximumLength = v34.Length + 2;
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].Flags = 1;
    QueryTable[0].Name = v6 + 8;
    v18 = *(_QWORD *)(*(_QWORD *)v39 + 16LL);
    v19 = *(_BYTE *)(v18 + 100);
    if ( v19 > 6u || v19 == 6 && *(_BYTE *)(v18 + 101) >= 0x28u )
    {
      v20 = 256;
      v37 = 0x1000000;
      v32 = 256;
    }
    else
    {
      v20 = v32;
    }
    QueryTable[1].Flags = v20 | 0x24;
    QueryTable[1].QueryRoutine = 0LL;
    QueryTable[1].Name = (wchar_t *)L"LowerComponent";
    QueryTable[1].EntryContext = &String2;
    QueryTable[2].Name = 0LL;
    QueryTable[1].DefaultType = v37;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v11,
        1,
        97,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        RegistryValues,
        v32);
    if ( RegistryValues )
      goto LABEL_47;
    if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
    {
      *a5 = 1;
      break;
    }
    if ( String2.Buffer )
    {
      ExFreePoolWithTag(String2.Buffer, 0);
      String2.Buffer = 0LL;
    }
  }
  if ( !*a5 )
  {
    if ( !a4 )
      goto LABEL_47;
    if ( i > 0x270F )
      goto LABEL_23;
    *(_DWORD *)&v34.Length = 655368;
    v22 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xAuLL, 0x2020444Eu);
    v34.Buffer = v22;
    if ( !v22 )
      goto LABEL_23;
    v29 = 1;
    memset(v22, 0, v34.MaximumLength);
    if ( (unsigned int)RtlStringCchPrintfW(v34.Buffer, (unsigned __int64)v34.MaximumLength >> 1, L"%04d", i) )
    {
LABEL_47:
      v10 = 1;
      goto LABEL_18;
    }
  }
  LOBYTE(v8) = (_BYTE)a1;
  v23 = GuidString.Length
      + Source.Length
      + ndisParameterStr.Length
      + ndisFilterAdapterStr.Length
      + v34.Length
      + a1->Length
      + 2;
  Destination->MaximumLength = v23;
  v24 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x2020444Eu);
  Destination->Buffer = v24;
  if ( !v24 )
  {
    v9 = -1073741670;
    v10 = 1;
    goto LABEL_54;
  }
  memset(v24, 0, Destination->MaximumLength);
  RtlCopyUnicodeString(Destination, a1);
  RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
  RtlAppendUnicodeStringToString(Destination, &ndisFilterAdapterStr);
  RtlAppendUnicodeStringToString(Destination, &GuidString);
  RtlAppendUnicodeStringToString(Destination, &Source);
  RtlAppendUnicodeStringToString(Destination, &v34);
  v10 = 1;
  if ( !*a5 )
  {
    v10 = 1;
    RegistryKey = RtlCreateRegistryKey(1u, (PWSTR)Destination->Buffer);
    Buffer = Destination->Buffer;
    if ( !RegistryKey )
    {
      if ( !RtlWriteRegistryValue(
              1u,
              (PCWSTR)Destination->Buffer,
              L"LowerComponent",
              1u,
              String1.Buffer,
              String1.Length + 2) )
        goto LABEL_54;
      Buffer = Destination->Buffer;
    }
    ExFreePoolWithTag(Buffer, 0);
    *(_QWORD *)&Destination->Length = 0LL;
    Destination->Buffer = 0LL;
    goto LABEL_53;
  }
LABEL_54:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v28 )
    goto LABEL_57;
LABEL_58:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v10 )
    ExFreePoolWithTag(String1.Buffer, 0);
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v29 )
    ExFreePoolWithTag(v34.Buffer, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v11,
      1u,
      0x62u,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)v8,
      a3,
      v39[0],
      v9);
  return v9;
}
