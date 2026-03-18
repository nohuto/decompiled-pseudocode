/*
 * XREFs of RIMOpenDev @ 0x1C00531F0
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ApiSetGetMaxOpenRetries @ 0x1C0053364 (ApiSetGetMaxOpenRetries.c)
 *     ApiSetIsRemoteConnection @ 0x1C00579BC (ApiSetIsRemoteConnection.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0058A18 (RimDeviceTypeToRimInputType.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C011E9D0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C013835C (RimDeviceTypeToRimInputTypeString.c)
 *     WPP_RECORDER_SF_qdDSd @ 0x1C014BDC4 (WPP_RECORDER_SF_qdDSd.c)
 *     ApiSetGetgfSwitchInProgress @ 0x1C019D5A4 (ApiSetGetgfSwitchInProgress.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4)
{
  unsigned int MaxOpenRetries; // edi
  int v8; // esi
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
  unsigned int v20; // eax
  int v21; // r10d
  __int64 v22; // r8
  const WCHAR *v23; // rax
  char v24; // al
  int v25; // edx
  int v26; // r8d
  char v27; // r10
  int Object; // [rsp+20h] [rbp-A1h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-99h]
  NTSTATUS v30; // [rsp+60h] [rbp-61h] BYREF
  ULONG ShareAccess; // [rsp+64h] [rbp-5Dh]
  PVOID v32; // [rsp+68h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR v33; // [rsp+70h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A0h] [rbp-21h] BYREF
  NTSTATUS *v36; // [rsp+B0h] [rbp-11h]
  int v37; // [rsp+B8h] [rbp-9h]
  int v38; // [rsp+BCh] [rbp-5h]

  v30 = 0;
  ShareAccess = a4;
  MaxOpenRetries = ApiSetGetMaxOpenRetries();
  if ( *(_BYTE *)(a1 + 48) == 2 && (unsigned int)ApiSetIsRemoteConnection() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  *(_DWORD *)(a1 + 184) |= 0x100u;
  v8 = 0;
  if ( MaxOpenRetries )
  {
    while ( 1 )
    {
      File = ZwCreateFile((PHANDLE)(a1 + 224), a3, a2, (PIO_STATUS_BLOCK)(a1 + 256), 0LL, 0, ShareAccess, 3u, 0, 0LL, 0);
      v30 = File;
      v10 = File;
      *(_DWORD *)(a1 + 288) = File;
      if ( File != -1073741757 && File != -1073741790 )
        break;
      if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
      {
        v15 = ApiSetGetgfSwitchInProgress();
        v10 = v30;
        if ( !v15 )
          break;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
        WPP_RECORDER_SF_qdDSd(*(_QWORD *)(a1 + 216), v17, v18, 17, Object, a1, v18, v16, *(_QWORD *)(a1 + 216), v19);
      }
      v20 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      LODWORD(pData) = v21;
      DbgPrintGDI(
        "RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %!STATUS!..retry after 100ms",
        a1,
        v22,
        v20,
        *(_QWORD *)(a1 + 216),
        pData);
      v32 = (PVOID)-1000000LL;
      KeDelayExecutionThread(1, 0, (PLARGE_INTEGER)&v32);
      if ( ++v8 >= MaxOpenRetries )
        goto LABEL_18;
    }
    if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
    {
      v23 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a1, *(unsigned __int8 *)(a1 + 48));
      TlgCreateWsz(&pDesc, v23);
      TlgCreateWsz(&v35, *(LPCWSTR *)(a1 + 216));
      v38 = 0;
      v36 = &v30;
      v37 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2FC3, 0LL, 0LL, 5u, &v33);
      v10 = v30;
    }
    if ( v10 == -1073741757 || v10 == -1073741790 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
        WPP_RECORDER_SF_qdDSd(*(_QWORD *)(a1 + 216), v25, v26, 18, Object, a1, v26, v24, *(_QWORD *)(a1 + 216), v27);
        v10 = v30;
      }
      if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
        KeBugCheckEx(0x164u, 5uLL, a1 + 208, 0LL, 0LL);
    }
  }
  else
  {
LABEL_18:
    v10 = v30;
  }
  if ( v10 >= 0 )
  {
    v10 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 224), 0, (POBJECT_TYPE)IoFileObjectType, 0, &v32, 0LL);
    *(_QWORD *)(a1 + 232) = v32;
  }
  return (unsigned int)v10;
}
