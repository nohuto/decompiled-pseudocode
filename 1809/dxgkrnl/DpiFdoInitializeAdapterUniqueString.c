/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1C01496C8
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C014B840 (DpiFdoInitializeFdo.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0002B74 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     DpiGetDevicePropertyString @ 0x1C0149464 (DpiGetDevicePropertyString.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C0149938 (MonitorUnifyCCDMonitorString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rsi
  WCHAR *PoolWithTag; // r13
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  SIZE_T v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  wchar_t *v11; // rax
  __int64 v12; // rcx
  WCHAR *v13; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  struct _DEVICE_OBJECT *v21; // rcx
  int DevicePropertyString; // eax
  void *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  ULONG Length[2]; // [rsp+28h] [rbp-59h]
  ULONG Lengtha[2]; // [rsp+28h] [rbp-59h]
  PULONG ResultLength; // [rsp+30h] [rbp-51h]
  int v29; // [rsp+38h] [rbp-49h]
  ULONG v30; // [rsp+48h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-31h] BYREF
  __int64 v32; // [rsp+58h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  UUID Uuid; // [rsp+A0h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  ObjectAttributes.Length = 48;
  KeyHandle = 0LL;
  v30 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  PoolWithTag = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_16;
  RtlInitUnicodeString(&DestinationString, L"VideoID");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v30) != -1073741789 )
  {
    v17 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdEvent(v17);
    v18 = ExUuidCreate(&Uuid);
    v5 = v18;
    if ( v18 < 0 )
      goto LABEL_16;
    v19 = RtlStringFromGUID(&Uuid, (PUNICODE_STRING)(v1 + 4728));
    v5 = v19;
    if ( v19 < 0 )
      goto LABEL_16;
    RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4728), (PCUNICODE_STRING)(v1 + 4728), 0);
    v20 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, *(PVOID *)(v1 + 4736), *(unsigned __int16 *)(v1 + 4730));
    v5 = v20;
    if ( v20 < 0 )
      goto LABEL_16;
    goto LABEL_6;
  }
  v8 = WdLogNewEntry5_WdEvent(v7, v6);
  *(_QWORD *)(v8 + 24) = -1073741789LL;
  WdLogEvent5_WdEvent(v8);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v30, 0x74727044u);
  if ( PoolWithTag )
  {
    v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, v30, &v30);
    v5 = v10;
    if ( v10 < 0 )
      goto LABEL_16;
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4728), PoolWithTag + 6) )
    {
LABEL_6:
      if ( !*(_BYTE *)(v1 + 1152) )
      {
        v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4AuLL, 0x74727044u);
        v13 = v11;
        if ( v11 )
        {
          v29 = *(_DWORD *)(v1 + 1140);
          LODWORD(ResultLength) = *(_DWORD *)(v1 + 1136);
          Length[0] = *(_DWORD *)(v1 + 1120);
          LODWORD(v5) = RtlStringCbPrintfW(
                          v11,
                          0x4AuLL,
                          L"%04X_%04X_%08X_%08X",
                          *(unsigned int *)(v1 + 1116),
                          *(_QWORD *)Length,
                          ResultLength,
                          v29);
LABEL_9:
          RtlInitUnicodeString((PUNICODE_STRING)(v1 + 4744), v13);
          MonitorUnifyCCDMonitorString(v1 + 4744);
          goto LABEL_10;
        }
LABEL_28:
        LODWORD(v5) = -1073741801;
        v25 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v25 + 24) = -1073741801LL;
        WdLogEvent5_WdError(v25);
        goto LABEL_29;
      }
      v21 = *(struct _DEVICE_OBJECT **)(v1 + 152);
      *(_QWORD *)&Uuid.Data1 = 0LL;
      DevicePropertyString = DpiGetDevicePropertyString(v21, DevicePropertyHardwareID, PagedPool, &Uuid, &v32);
      v5 = DevicePropertyString;
      if ( DevicePropertyString >= 0 )
      {
        v23 = *(void **)&Uuid.Data1;
        v24 = -1LL;
        do
          ++v24;
        while ( *(_WORD *)(*(_QWORD *)&Uuid.Data1 + 2 * v24) );
        v5 = (unsigned int)(2 * v24 + 40);
        v13 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v5, 0x74727044u);
        if ( v13 )
        {
          LODWORD(ResultLength) = *(_DWORD *)(v1 + 1136);
          Lengtha[0] = *(_DWORD *)(v1 + 1120);
          LODWORD(v5) = RtlStringCbPrintfW(
                          v13,
                          (unsigned int)v5,
                          L"%04X_%04X_%08X_%ls",
                          *(unsigned int *)(v1 + 1116),
                          *(_QWORD *)Lengtha,
                          ResultLength,
                          v23);
          if ( v23 )
            ExFreePoolWithTag(v23, 0);
          goto LABEL_9;
        }
        goto LABEL_28;
      }
LABEL_16:
      v15 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v15 + 24) = v5;
      WdLogEvent5_WdError(v15);
LABEL_10:
      if ( (v5 & 0x80000000) == 0LL )
        goto LABEL_11;
      goto LABEL_29;
    }
  }
  LODWORD(v5) = -1073741801;
  v16 = WdLogNewEntry5_WdLowResource(v9);
  *(_QWORD *)(v16 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v16);
LABEL_29:
  if ( *(_QWORD *)(v1 + 4752) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4744));
    *(_QWORD *)(v1 + 4752) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4736) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4728));
    *(_QWORD *)(v1 + 4736) = 0LL;
  }
LABEL_11:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
