/*
 * XREFs of RIMOpenDev @ 0x1C0049C08
 * Callers:
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ApiSetIsRemoteConnection @ 0x1C00503D8 (ApiSetIsRemoteConnection.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C010F99C (RimDeviceTypeToRimInputTypeString.c)
 *     WPP_RECORDER_SF_qdDSD @ 0x1C01224B8 (WPP_RECORDER_SF_qdDSD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4)
{
  unsigned int MaxOpenRetries; // edi
  int v8; // r15d
  NTSTATUS File; // eax
  NTSTATUS v10; // r10d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  char v16; // al
  int v17; // edx
  int v18; // r8d
  char v19; // r10
  const WCHAR *v20; // rax
  char v21; // al
  int v22; // edx
  int v23; // r8d
  char v24; // r10
  int AllocationSize; // [rsp+20h] [rbp-A1h]
  NTSTATUS v26; // [rsp+60h] [rbp-61h] BYREF
  ULONG ShareAccess; // [rsp+64h] [rbp-5Dh]
  PVOID Object; // [rsp+68h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+A0h] [rbp-21h] BYREF
  NTSTATUS *v32; // [rsp+B0h] [rbp-11h]
  int v33; // [rsp+B8h] [rbp-9h]
  int v34; // [rsp+BCh] [rbp-5h]

  v26 = 0;
  ShareAccess = a4;
  if ( (int)IsGetMaxOpenRetriesSupported() < 0 )
    MaxOpenRetries = 1;
  else
    MaxOpenRetries = GetMaxOpenRetries();
  if ( *(_BYTE *)(a1 + 48) == 2 && (unsigned int)ApiSetIsRemoteConnection() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  *(_DWORD *)(a1 + 184) |= 0x100u;
  v8 = 0;
  if ( !MaxOpenRetries )
    goto LABEL_22;
  while ( 1 )
  {
    File = ZwCreateFile((PHANDLE)(a1 + 224), a3, a2, (PIO_STATUS_BLOCK)(a1 + 256), 0LL, 0, ShareAccess, 3u, 0, 0LL, 0);
    v26 = File;
    v10 = File;
    *(_DWORD *)(a1 + 288) = File;
    if ( File != -1073741757 && File != -1073741790 )
      break;
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      v15 = (int)IsGetgfSwitchInProgressSupported() < 0 ? 0 : GetgfSwitchInProgress();
      v10 = v26;
      if ( !v15 )
        break;
    }
    v16 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    WPP_RECORDER_SF_qdDSD(*(_QWORD *)(a1 + 216), v17, v18, 16, AllocationSize, a1, v18, v16, *(_QWORD *)(a1 + 216), v19);
    RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    DbgPrintRIMAlways("rimdev: RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %08x..retry after 100ms\n");
    Object = (PVOID)-1000000LL;
    KeDelayExecutionThread(1, 0, (PLARGE_INTEGER)&Object);
    if ( ++v8 >= MaxOpenRetries )
      goto LABEL_22;
  }
  if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
  {
    v20 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a1, *(unsigned __int8 *)(a1 + 48));
    TlgCreateWsz(&pDesc, v20);
    TlgCreateWsz(&v31, *(LPCWSTR *)(a1 + 216));
    v34 = 0;
    v32 = &v26;
    v33 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019F090, 0LL, 0LL, 5u, &pData);
    v10 = v26;
  }
  if ( v10 == -1073741757 || v10 == -1073741790 )
  {
    v21 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    WPP_RECORDER_SF_qdDSD(*(_QWORD *)(a1 + 216), v22, v23, 17, AllocationSize, a1, v23, v21, *(_QWORD *)(a1 + 216), v24);
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
      KeBugCheckEx(0x164u, 5uLL, a1 + 208, 0LL, 0LL);
LABEL_22:
    v10 = v26;
  }
  if ( v10 >= 0 )
  {
    v10 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 224), 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    *(_QWORD *)(a1 + 232) = Object;
  }
  return (unsigned int)v10;
}
