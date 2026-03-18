/*
 * XREFs of RIMOpenDev @ 0x1C00F7DB0
 * Callers:
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     ApiSetIsRemoteConnection @ 0x1C000F32C (ApiSetIsRemoteConnection.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00E5E3C (RimDeviceTypeToRimInputTypeString.c)
 *     WPP_RECORDER_SF_qdDSD @ 0x1C00F84E0 (WPP_RECORDER_SF_qdDSD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4)
{
  unsigned int MaxOpenRetries; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r15d
  NTSTATUS File; // eax
  NTSTATUS v12; // r10d
  int v13; // eax
  char v14; // al
  int v15; // edx
  int v16; // r8d
  char v17; // r10
  unsigned int v18; // eax
  __int64 v19; // r8
  const wchar_t *v21; // rax
  LPCGUID v22; // r9
  char v23; // al
  int v24; // edx
  int v25; // r8d
  char v26; // r10
  int AllocationSize; // [rsp+20h] [rbp-A1h]
  ULONG FileAttributes[2]; // [rsp+28h] [rbp-99h]
  ULONG HandleInformation; // [rsp+60h] [rbp-61h] BYREF
  ULONG HandleInformation_4; // [rsp+64h] [rbp-5Dh]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+A0h] [rbp-21h] BYREF
  ULONG *p_HandleInformation; // [rsp+B0h] [rbp-11h]
  int v36; // [rsp+B8h] [rbp-9h]
  int v37; // [rsp+BCh] [rbp-5h]

  HandleInformation = 0;
  HandleInformation_4 = a4;
  if ( (int)IsGetMaxOpenRetriesSupported() < 0 )
    MaxOpenRetries = 1;
  else
    MaxOpenRetries = GetMaxOpenRetries();
  if ( *(_BYTE *)(a1 + 48) == 2 && (unsigned int)ApiSetIsRemoteConnection() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  *(_DWORD *)(a1 + 184) |= 0x80u;
  v10 = 0;
  if ( !MaxOpenRetries )
    goto LABEL_16;
  while ( 1 )
  {
    File = ZwCreateFile(
             (PHANDLE)(a1 + 224),
             a3,
             a2,
             (PIO_STATUS_BLOCK)(a1 + 256),
             0LL,
             0,
             HandleInformation_4,
             3u,
             0,
             0LL,
             0);
    HandleInformation = File;
    v12 = File;
    *(_DWORD *)(a1 + 288) = File;
    if ( File != -1073741757 && File != -1073741790 )
      break;
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      v13 = (int)IsGetgfSwitchInProgressSupported() < 0 ? 0 : GetgfSwitchInProgress();
      v12 = HandleInformation;
      if ( !v13 )
        break;
    }
    v14 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    WPP_RECORDER_SF_qdDSD(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      v16,
      16,
      AllocationSize,
      a1,
      v16,
      v14,
      *(_QWORD *)(a1 + 216),
      v17);
    v18 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    FileAttributes[0] = HandleInformation;
    DbgPrintRIMAlways(
      "rimdev: RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %08x..retry after 100ms\n",
      a1,
      v19,
      v18,
      *(_QWORD *)(a1 + 216),
      *(_QWORD *)FileAttributes);
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(1, 0, &Interval);
    if ( ++v10 >= MaxOpenRetries )
      goto LABEL_16;
  }
  if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
  {
    v21 = RimDeviceTypeToRimInputTypeString(a1, *(unsigned __int8 *)(a1 + 48));
    TlgCreateWsz(&pDesc, v21);
    TlgCreateWsz(&v34, *(LPCWSTR *)(a1 + 216));
    v37 = 0;
    p_HandleInformation = &HandleInformation;
    v36 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178620, 0LL, v22, 5u, &pData);
    v12 = HandleInformation;
  }
  if ( v12 == -1073741757 || v12 == -1073741790 )
  {
    v23 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    WPP_RECORDER_SF_qdDSD(
      WPP_GLOBAL_Control->DeviceExtension,
      v24,
      v25,
      17,
      AllocationSize,
      a1,
      v25,
      v23,
      *(_QWORD *)(a1 + 216),
      v26);
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
      KeBugCheckEx(0x164u, 5uLL, a1 + 208, 0LL, 0LL);
LABEL_16:
    v12 = HandleInformation;
  }
  if ( v12 >= 0 )
  {
    v12 = ObReferenceObjectByHandle(
            *(HANDLE *)(a1 + 224),
            0,
            (POBJECT_TYPE)IoFileObjectType,
            0,
            (PVOID *)&Interval,
            0LL);
    *(union _LARGE_INTEGER *)(a1 + 232) = Interval;
  }
  return (unsigned int)v12;
}
