/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C008DF48
 * Callers:
 *     rimStartDeviceReadIfAllowed @ 0x1C00047E8 (rimStartDeviceReadIfAllowed.c)
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     rimInputApc @ 0x1C008E340 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0049D94 (WPP_RECORDER_SF_qqD.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C008E130 (EtwTraceStartInputDeviceRead.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C010A83C (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C010F99C (RimDeviceTypeToRimInputTypeString.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // r14
  __int64 v6; // rax
  ULONG Length; // esi
  void *Buffer; // rdi
  unsigned int File; // eax
  __int64 v10; // rcx
  int v11; // r9d
  __int64 v13; // rax
  unsigned int v14; // ecx
  const CHAR *v15; // rax
  const WCHAR *v16; // rax
  unsigned __int8 v17; // cl
  __int64 v18; // rdx
  __int64 v19; // rcx
  const WCHAR *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  const WCHAR *v23; // rax
  PLARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-51h]
  NTSTATUS v25; // [rsp+50h] [rbp-39h] BYREF
  __int64 v26; // [rsp+58h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+80h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+7h] BYREF
  NTSTATUS *v30; // [rsp+A0h] [rbp+17h]
  int v31; // [rsp+A8h] [rbp+1Fh]
  int v32; // [rsp+ACh] [rbp+23h]

  v3 = *(_DWORD *)(a2 + 184);
  v5 = a1;
  if ( (v3 & 0x2000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_DWORD *)(a2 + 184);
  }
  LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  if ( (v3 & 0x80u) != 0 )
  {
    v25 = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 3221226614LL);
    return (unsigned int)v25;
  }
  *(_QWORD *)(a2 + 264) = 0LL;
  *(_DWORD *)(a2 + 152) = 0;
  *(_QWORD *)(a2 + 160) = 0LL;
  *(_DWORD *)(a2 + 256) = -1073741823;
  if ( (_BYTE)a1 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  }
  v6 = 32 * ((unsigned __int8)a1 + 4LL);
  if ( *(_QWORD *)(a2 + 224) )
  {
    if ( (_BYTE)a1 == 2 )
    {
      if ( !*(_QWORD *)(a2 + 472) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      v13 = *(_QWORD *)(a2 + 464);
      Buffer = *(void **)(v13 + 24);
      Length = 10 * *(unsigned __int16 *)(v13 + 44);
    }
    else
    {
      Length = *(_DWORD *)(v6 + v5 + 24);
      Buffer = (void *)(a2 + *(unsigned int *)(v6 + v5 + 20));
    }
    *(_DWORD *)(a2 + 184) |= 0x80u;
    v25 = ObReferenceObjectByPointer(*(PVOID *)(a2 + 32), 3u, ExRawInputManagerObjectType, 0);
    if ( v25 >= 0 )
    {
      File = ZwReadFile(
               *(HANDLE *)(a2 + 224),
               0LL,
               rimInputApc,
               (PVOID)a2,
               (PIO_STATUS_BLOCK)(a2 + 256),
               Buffer,
               Length,
               (PLARGE_INTEGER)&gZero,
               0LL);
      LOBYTE(v10) = *(_BYTE *)(a2 + 48);
      *(_DWORD *)(a2 + 272) = File;
      v25 = File;
      EtwTraceStartInputDeviceRead(v10, File);
      if ( dword_1C01C7F10 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
      {
        v14 = *(unsigned __int8 *)(a2 + 48);
        v28.Reserved = 0;
        v28.Ptr = (ULONGLONG)&v26;
        v26 = a2;
        v28.Size = 8;
        v15 = InputTraceLogging::RimDevTypeToString(v14);
        TlgCreateSz(&pDesc, v15);
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F4DD, 0LL, 0LL, 4u, &pData);
      }
      if ( v25 < 0 )
      {
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
      }
      else
      {
        v11 = *(_DWORD *)(a2 + 184);
        if ( (v11 & 0x100) != 0 )
        {
          if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
          {
            v16 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&v28, v16);
            TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 216));
            v32 = 0;
            v30 = &v25;
            v31 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019F482, 0LL, 0LL, 5u, &pData);
            v11 = *(_DWORD *)(a2 + 184);
          }
          *(_DWORD *)(a2 + 184) = v11 & 0xFFFFFEFF;
        }
      }
      if ( v25 == -1073741670 )
      {
        v17 = *(_BYTE *)(a2 + 204);
        *(_BYTE *)(a2 + 204) = v17 + 1;
        if ( v17 >= 5u )
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum retryReads reached\n");
          LODWORD(ByteOffset) = v25;
          WPP_RECORDER_SF_qqD(
            v22,
            v21,
            0x16u,
            0xBu,
            (__int64)&WPP_901ff501b44439c8b7ae29517e564609_Traceguids,
            v5,
            a2,
            ByteOffset);
          if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
          {
            v23 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&v28, v23);
            TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 216));
            v32 = 0;
            v30 = &v25;
            v31 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019F3DC, 0LL, 0LL, 5u, &pData);
          }
        }
        else
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n");
          LODWORD(ByteOffset) = v25;
          WPP_RECORDER_SF_qqD(
            v19,
            v18,
            0x16u,
            0xAu,
            (__int64)&WPP_901ff501b44439c8b7ae29517e564609_Traceguids,
            v5,
            a2,
            ByteOffset);
          if ( dword_1C01C7A38 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
            {
              v20 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
              TlgCreateWsz(&v28, v20);
              TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 216));
              v32 = 0;
              v30 = &v25;
              v31 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019F42B, 0LL, 0LL, 5u, &pData);
            }
          }
          *(_DWORD *)(a2 + 184) &= ~0x80u;
          ZwSetEvent(*(HANDLE *)(v5 + 384), 0LL);
        }
      }
    }
    return (unsigned int)v25;
  }
  return 0LL;
}
