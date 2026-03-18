/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C00FDADC
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 *     rimStartDeviceReadIfAllowed @ 0x1C00FE20C (rimStartDeviceReadIfAllowed.c)
 *     rimInputApc @ 0x1C00FE6E0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C00AC830 (EtwTraceStartInputDeviceRead.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00E5E3C (RimDeviceTypeToRimInputTypeString.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00FC1AC (WPP_RECORDER_SF_qqD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, const GUID *a3)
{
  struct _MCGEN_TRACE_CONTEXT *v4; // rdi
  __int64 v5; // rax
  __int64 v7; // rax
  void *Buffer; // rsi
  ULONG Length; // r14d
  NTSTATUS File; // eax
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  const GUID *v12; // r8
  int v13; // r9d
  const wchar_t *v14; // rax
  LPCGUID v15; // r9
  unsigned __int8 v16; // cl
  __int64 v17; // rdx
  const wchar_t *v18; // rax
  LPCGUID v19; // r9
  __int64 v20; // rdx
  const wchar_t *v21; // rax
  LPCGUID v22; // r9
  PLARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-51h]
  _DWORD v24[4]; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+90h] [rbp+7h] BYREF
  _DWORD *v28; // [rsp+A0h] [rbp+17h]
  int v29; // [rsp+A8h] [rbp+1Fh]
  int v30; // [rsp+ACh] [rbp+23h]

  v4 = a1;
  if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( HIDWORD(v4[11].EnableKeyWords) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  if ( (*(_DWORD *)(a2 + 184) & 0x40) != 0 )
  {
    v24[0] = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 0xC0000476, a3);
  }
  else
  {
    *(_QWORD *)(a2 + 264) = 0LL;
    *(_DWORD *)(a2 + 152) = 0;
    *(_QWORD *)(a2 + 160) = 0LL;
    *(_DWORD *)(a2 + 256) = -1073741823;
    if ( (_BYTE)a1 == 3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      LOBYTE(a1) = *(_BYTE *)(a2 + 48);
    }
    v5 = 32LL * (unsigned __int8)a1;
    if ( !*(_QWORD *)(a2 + 224) )
      return 0LL;
    if ( (_BYTE)a1 == 2 )
    {
      if ( !*(_QWORD *)(a2 + 472) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      v7 = *(_QWORD *)(a2 + 464);
      Buffer = *(void **)(v7 + 24);
      Length = 10 * *(unsigned __int16 *)(v7 + 44);
    }
    else
    {
      Length = *(_DWORD *)((char *)&v4[2].RegistrationHandle + v5);
      Buffer = (void *)(a2 + *(unsigned int *)((char *)&v4[1].EnableLevel + v5 + 4));
    }
    *(_DWORD *)(a2 + 184) |= 0x40u;
    v24[0] = ObReferenceObjectByPointer(*(PVOID *)(a2 + 32), 3u, ExRawInputManagerObjectType, 0);
    if ( v24[0] >= 0 )
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
      LOBYTE(v11) = *(_BYTE *)(a2 + 48);
      *(_DWORD *)(a2 + 272) = File;
      v24[0] = File;
      EtwTraceStartInputDeviceRead(v11, File, v12);
      if ( v24[0] >= 0 )
      {
        v13 = *(_DWORD *)(a2 + 184);
        if ( (v13 & 0x80u) != 0 )
        {
          if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
          {
            v14 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v14);
            TlgCreateWsz(&v27, *(LPCWSTR *)(a2 + 216));
            v30 = 0;
            v28 = v24;
            v29 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178879, 0LL, v15, 5u, &pData);
            v13 = *(_DWORD *)(a2 + 184);
          }
          *(_DWORD *)(a2 + 184) = v13 & 0xFFFFFF7F;
        }
      }
      else
      {
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
      }
      if ( v24[0] == -1073741670 )
      {
        v16 = *(_BYTE *)(a2 + 204);
        *(_BYTE *)(a2 + 204) = v16 + 1;
        if ( v16 >= 5u )
        {
          DbgPrintRIMAlways(
            ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum retryReads reached\n",
            v4,
            (const void *)a2,
            -1073741670);
          LODWORD(ByteOffset) = v24[0];
          WPP_RECORDER_SF_qqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v20,
            0x15u,
            0xBu,
            (__int64)&WPP_b8ab63d3fdc53277a0bf045626d34b8d_Traceguids,
            v4,
            a2,
            ByteOffset);
          if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
          {
            v21 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v21);
            TlgCreateWsz(&v27, *(LPCWSTR *)(a2 + 216));
            v30 = 0;
            v28 = v24;
            v29 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C01787D3, 0LL, v22, 5u, &pData);
          }
        }
        else
        {
          DbgPrintRIMAlways(
            ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n",
            v4,
            (const void *)a2,
            -1073741670);
          LODWORD(ByteOffset) = v24[0];
          WPP_RECORDER_SF_qqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v17,
            0x15u,
            0xAu,
            (__int64)&WPP_b8ab63d3fdc53277a0bf045626d34b8d_Traceguids,
            v4,
            a2,
            ByteOffset);
          if ( dword_1C019EBC0 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
            {
              v18 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
              TlgCreateWsz(&pDesc, v18);
              TlgCreateWsz(&v27, *(LPCWSTR *)(a2 + 216));
              v30 = 0;
              v28 = v24;
              v29 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178822, 0LL, v19, 5u, &pData);
            }
          }
          *(_DWORD *)(a2 + 184) &= ~0x40u;
          ZwSetEvent((HANDLE)v4[5].MatchAnyKeyword, 0LL);
        }
      }
    }
  }
  return v24[0];
}
