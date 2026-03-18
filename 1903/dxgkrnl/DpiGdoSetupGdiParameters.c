/*
 * XREFs of DpiGdoSetupGdiParameters @ 0x1C015C9B0
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x1C015BA58 (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000DF74 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiCopyUnicodeString @ 0x1C015B86C (DpiCopyUnicodeString.c)
 *     DpiAppendStringToString @ 0x1C015CF4C (DpiAppendStringToString.c)
 *     DpiGdoCreateServiceEntry @ 0x1C015D04C (DpiGdoCreateServiceEntry.c)
 *     DpiFdoGetAdapterUniqueGUID @ 0x1C015D23C (DpiFdoGetAdapterUniqueGUID.c)
 */

__int64 __fastcall DpiGdoSetupGdiParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 AdapterUniqueGUID; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int appended; // eax
  __int64 v13; // rbx
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  HANDLE v31; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v41; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[4]; // [rsp+110h] [rbp+10h] BYREF
  int v43; // [rsp+118h] [rbp+18h]
  __int16 v44; // [rsp+11Ch] [rbp+1Ch]

  v3 = *(_QWORD *)(a1 + 64);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)SourceString = 0LL;
  v43 = 0;
  v44 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  KeyHandle = 0LL;
  v31 = 0LL;
  memset(&v41, 0, sizeof(v41));
  Handle = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_BYTE *)(v7 + 480) )
  {
    appended = DpiCopyUnicodeString(&Source, (PCUNICODE_STRING)(*(_QWORD *)(v7 + 40) + 40LL), v6);
  }
  else
  {
    AdapterUniqueGUID = DpiFdoGetAdapterUniqueGUID(*(_QWORD *)(v7 + 24));
    if ( !AdapterUniqueGUID )
    {
      v13 = -1073741823LL;
      goto LABEL_33;
    }
    appended = DpiAppendStringToString(
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\",
                 *(unsigned __int16 **)(AdapterUniqueGUID + 8),
                 &Source);
  }
  LODWORD(v13) = appended;
  if ( appended < 0 )
    goto LABEL_20;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  ObjectAttributes.ObjectName = &Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v13 = v14;
  if ( v14 < 0 )
    goto LABEL_33;
  LODWORD(v13) = DpiGdoCreateServiceEntry(*(_QWORD *)(v7 + 40) + 40LL, KeyHandle);
  if ( (int)v13 < 0 )
    goto LABEL_20;
  if ( *(_BYTE *)(v7 + 480) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    goto LABEL_12;
  }
  RtlStringCbPrintfW(SourceString, 0xEuLL, L"\\%04d", a3);
  RtlInitUnicodeString(&DestinationString, &SourceString[1]);
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v31, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    v24 = ZwDeleteKey(v31);
    v28 = v24;
    if ( v24 < 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v29 + 24) = v28;
      WdLogEvent5_WdWarning(v29);
    }
  }
  v15 = ZwCreateKey(&v31, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
  v13 = v15;
  if ( v15 < 0 )
  {
    if ( v15 == -1073741771 )
      goto LABEL_12;
LABEL_33:
    v30 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v30 + 24) = v13;
    WdLogEvent5_WdError(v30);
    goto LABEL_20;
  }
  if ( Disposition == 1 )
  {
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    RtlInitUnicodeString(&ValueName, L"SymbolicLinkValue");
    v16 = ZwSetValueKey(v31, &ValueName, 0, 6u, *(PVOID *)(v7 + 536), *(unsigned __int16 *)(v7 + 528));
    v13 = v16;
    if ( v16 < 0 )
      goto LABEL_33;
  }
LABEL_12:
  LODWORD(v13) = DpiAppendStringToString(Source.Buffer, SourceString, &UnicodeString);
  if ( (int)v13 >= 0 )
  {
    v17 = RtlWriteRegistryValue(
            4u,
            L"VIDEO",
            *(PCWSTR *)(a2 + 8),
            1u,
            UnicodeString.Buffer,
            UnicodeString.MaximumLength);
    v13 = v17;
    if ( v17 < 0 )
      goto LABEL_33;
    Destination.MaximumLength = Source.Length + 52;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)(Source.Length + 52),
                                      0x74727044u);
    if ( !Destination.Buffer )
      goto LABEL_33;
    v18 = RtlAppendUnicodeStringToString(&Destination, &Source);
    v13 = v18;
    if ( v18 < 0 )
      goto LABEL_33;
    v19 = RtlAppendUnicodeToString(&Destination, SourceString);
    v13 = v19;
    if ( v19 < 0 )
      goto LABEL_33;
    v20 = RtlAppendUnicodeToString(&Destination, L"\\VolatileSettings");
    v13 = v20;
    if ( v20 < 0 )
      goto LABEL_33;
    v41.ObjectName = &Destination;
    v41.Length = 48;
    v41.RootDirectory = 0LL;
    *(_OWORD *)&v41.SecurityDescriptor = 0LL;
    v41.Attributes = 576;
    v21 = ZwCreateKey(&Handle, 0xC0000000, &v41, 0, 0LL, 1u, 0LL);
    v13 = v21;
    if ( v21 < 0 )
      goto LABEL_33;
    v22 = RtlWriteRegistryValue(
            0,
            Destination.Buffer,
            L"{5b45201d-f2f2-4f3b-85bb-30ff1f953599}",
            3u,
            *(PVOID *)(v3 + 168),
            *(unsigned __int16 *)(v3 + 160));
    v13 = v22;
    if ( v22 < 0 )
      goto LABEL_33;
  }
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&Destination);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v31 )
    ZwClose(v31);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v13;
}
