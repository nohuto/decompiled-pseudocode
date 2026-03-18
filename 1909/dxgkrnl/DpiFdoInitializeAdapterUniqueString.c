/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1C0164DC8
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C0167414 (DpiFdoInitializeFdo.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000E210 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     DpiGetDevicePropertyString @ 0x1C0164B64 (DpiGetDevicePropertyString.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C0165038 (MonitorUnifyCCDMonitorString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rsi
  WCHAR *PoolWithTag; // r13
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  SIZE_T v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  wchar_t *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  WCHAR *v20; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  struct _DEVICE_OBJECT *v27; // rcx
  int DevicePropertyString; // eax
  PVOID v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-49h]
  ULONG Lengtha[2]; // [rsp+20h] [rbp-49h]
  PULONG ResultLength; // [rsp+28h] [rbp-41h]
  int v35; // [rsp+30h] [rbp-39h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  ULONG v38; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+E0h] [rbp+77h] BYREF
  PVOID P; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  KeyHandle = 0LL;
  PoolWithTag = 0LL;
  v38 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v7 = v3;
  if ( v3 < 0 )
    goto LABEL_18;
  RtlInitUnicodeString(&DestinationString, L"VideoID");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v38) != -1073741789 )
  {
    v24 = WdLogNewEntry5_WdEvent(v8);
    *(_QWORD *)(v24 + 24) = 0LL;
    WdLogEvent5_WdEvent(v24);
    v25 = ExUuidCreate((UUID *)(v1 + 4872));
    v7 = v25;
    if ( v25 < 0 )
      goto LABEL_18;
    v26 = RtlStringFromGUID((const GUID *const)(v1 + 4872), (PUNICODE_STRING)(v1 + 4840));
    v7 = v26;
    if ( v26 < 0 )
      goto LABEL_18;
    RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4840), (PCUNICODE_STRING)(v1 + 4840), 0);
    v15 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, *(PVOID *)(v1 + 4848), *(unsigned __int16 *)(v1 + 4842));
    goto LABEL_7;
  }
  v9 = WdLogNewEntry5_WdEvent(v8);
  *(_QWORD *)(v9 + 24) = -1073741789LL;
  WdLogEvent5_WdEvent(v9);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v38, 0x74727044u);
  if ( PoolWithTag )
  {
    v14 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, v38, &v38);
    v7 = v14;
    if ( v14 < 0 )
      goto LABEL_18;
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4840), PoolWithTag + 6) )
    {
      v15 = RtlGUIDFromString((PCUNICODE_STRING)(v1 + 4840), (GUID *)(v1 + 4872));
LABEL_7:
      v7 = v15;
      if ( v15 >= 0 )
      {
        if ( !*(_BYTE *)(v1 + 1160) )
        {
          v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4AuLL, 0x74727044u);
          v20 = v16;
          if ( v16 )
          {
            v35 = *(_DWORD *)(v1 + 1148);
            LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
            Length[0] = *(_DWORD *)(v1 + 1128);
            LODWORD(v7) = RtlStringCbPrintfW(
                            v16,
                            0x4AuLL,
                            L"%04X_%04X_%08X_%08X",
                            *(unsigned int *)(v1 + 1124),
                            *(_QWORD *)Length,
                            ResultLength,
                            v35);
LABEL_11:
            RtlInitUnicodeString((PUNICODE_STRING)(v1 + 4856), v20);
            MonitorUnifyCCDMonitorString(v1 + 4856);
            goto LABEL_12;
          }
LABEL_29:
          LODWORD(v7) = -1073741801;
          v31 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v31 + 24) = -1073741801LL;
          WdLogEvent5_WdError(v31);
          goto LABEL_30;
        }
        v27 = *(struct _DEVICE_OBJECT **)(v1 + 152);
        P = 0LL;
        DevicePropertyString = DpiGetDevicePropertyString(v27, DevicePropertyHardwareID, PagedPool, &P, &v39);
        v7 = DevicePropertyString;
        if ( DevicePropertyString >= 0 )
        {
          v29 = P;
          v30 = -1LL;
          do
            ++v30;
          while ( *((_WORD *)P + v30) );
          v7 = (unsigned int)(2 * v30 + 40);
          v20 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v7, 0x74727044u);
          if ( v20 )
          {
            LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
            Lengtha[0] = *(_DWORD *)(v1 + 1128);
            LODWORD(v7) = RtlStringCbPrintfW(
                            v20,
                            (unsigned int)v7,
                            L"%04X_%04X_%08X_%ls",
                            *(unsigned int *)(v1 + 1124),
                            *(_QWORD *)Lengtha,
                            ResultLength,
                            v29);
            if ( v29 )
              ExFreePoolWithTag(v29, 0);
            goto LABEL_11;
          }
          goto LABEL_29;
        }
      }
LABEL_18:
      v22 = WdLogNewEntry5_WdError(v5, v4, v6);
      *(_QWORD *)(v22 + 24) = v7;
      WdLogEvent5_WdError(v22);
LABEL_12:
      if ( (v7 & 0x80000000) == 0LL )
        goto LABEL_13;
      goto LABEL_30;
    }
  }
  LODWORD(v7) = -1073741801;
  v23 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
  *(_QWORD *)(v23 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v23);
LABEL_30:
  if ( *(_QWORD *)(v1 + 4864) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4856));
    *(_QWORD *)(v1 + 4864) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4848) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4840));
    *(_QWORD *)(v1 + 4848) = 0LL;
  }
LABEL_13:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v7;
}
