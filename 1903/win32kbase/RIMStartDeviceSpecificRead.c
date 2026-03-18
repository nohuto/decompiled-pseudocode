/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C006F2B0
 * Callers:
 *     rimStartDeviceReadIfAllowed @ 0x1C000540C (rimStartDeviceReadIfAllowed.c)
 *     rimOnPnpArrived @ 0x1C00690B0 (rimOnPnpArrived.c)
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 *     rimInputApc @ 0x1C006E9D0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0067E40 (WPP_RECORDER_SF_qqd.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C006F440 (EtwTraceStartInputDeviceRead.c)
 *     RIMStartDeviceRead @ 0x1C006F45C (RIMStartDeviceRead.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C006F750 (RawInputManagerDeviceObjectReference.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0121340 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01346BC (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C013A9CC (RimDeviceTypeToRimInputTypeString.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(HANDLE *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  HANDLE *v5; // r14
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // r9d
  unsigned int v11; // ecx
  const CHAR *v12; // rax
  const WCHAR *v13; // rax
  unsigned __int8 v14; // cl
  int v15; // edx
  const WCHAR *v16; // rax
  int v17; // edx
  const WCHAR *v18; // rax
  int v19; // [rsp+40h] [rbp-29h] BYREF
  __int64 v20; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  int *v24; // [rsp+90h] [rbp+27h]
  int v25; // [rsp+98h] [rbp+2Fh]
  int v26; // [rsp+9Ch] [rbp+33h]

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
    v19 = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 3221226614LL);
    return (unsigned int)v19;
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
  if ( *(_QWORD *)(a2 + 224) )
  {
    if ( (_BYTE)a1 == 2 && !*(_QWORD *)(a2 + 472) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v6 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 184) |= 0x80u;
    v19 = RawInputManagerDeviceObjectReference(v6);
    if ( v19 >= 0 )
    {
      v7 = RIMStartDeviceRead((PVOID)a2);
      LOBYTE(v8) = *(_BYTE *)(a2 + 48);
      v19 = v7;
      EtwTraceStartInputDeviceRead(v8, v7);
      if ( dword_1C020FB50 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
      {
        v11 = *(unsigned __int8 *)(a2 + 48);
        v22.Reserved = 0;
        v22.Ptr = (ULONGLONG)&v20;
        v20 = a2;
        v22.Size = 8;
        v12 = InputTraceLogging::RimDevTypeToString(v11);
        TlgCreateSz(&pDesc, v12);
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E53D8, 0LL, 0LL, 4u, &pData);
      }
      if ( v19 < 0 )
      {
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
      }
      else
      {
        v9 = *(_DWORD *)(a2 + 184);
        if ( (v9 & 0x100) != 0 )
        {
          if ( dword_1C020F490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F490, 0x400000000000uLL) )
          {
            v13 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&v22, v13);
            TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 216));
            v26 = 0;
            v24 = &v19;
            v25 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020F490, &unk_1C01E537D, 0LL, 0LL, 5u, &pData);
            v9 = *(_DWORD *)(a2 + 184);
          }
          *(_DWORD *)(a2 + 184) = v9 & 0xFFFFFEFF;
        }
      }
      if ( v19 == -1073741670 )
      {
        v14 = *(_BYTE *)(a2 + 204);
        *(_BYTE *)(a2 + 204) = v14 + 1;
        if ( v14 >= 5u )
        {
          DbgPrintGDI(
            ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %!STATUS!..not retrying read as maximum retryReads reached",
            v5,
            a2);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = 4;
            WPP_RECORDER_SF_qqd(
              (_DWORD)gRimLog,
              v17,
              1,
              11,
              (__int64)&WPP_6d2edae1f7af377a8d6306946426cb53_Traceguids,
              (char)v5,
              a2,
              v19);
          }
          if ( dword_1C020F490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F490, 0x400000000000uLL) )
          {
            v18 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&v22, v18);
            TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 216));
            v26 = 0;
            v24 = &v19;
            v25 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020F490, &unk_1C01E52D7, 0LL, 0LL, 5u, &pData);
          }
        }
        else
        {
          DbgPrintGDI(
            ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n",
            v5,
            (const void *)a2,
            -1073741670);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = 4;
            WPP_RECORDER_SF_qqd(
              (_DWORD)gRimLog,
              v15,
              1,
              10,
              (__int64)&WPP_6d2edae1f7af377a8d6306946426cb53_Traceguids,
              (char)v5,
              a2,
              v19);
          }
          if ( dword_1C020F490 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F490, 0x400000000000uLL) )
            {
              v16 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
              TlgCreateWsz(&v22, v16);
              TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 216));
              v26 = 0;
              v24 = &v19;
              v25 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_1C020F490, &unk_1C01E5326, 0LL, 0LL, 5u, &pData);
            }
          }
          *(_DWORD *)(a2 + 184) &= ~0x80u;
          ZwSetEvent(v5[48], 0LL);
        }
      }
    }
    return (unsigned int)v19;
  }
  return 0LL;
}
