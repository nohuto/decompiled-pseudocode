/*
 * XREFs of rimInputApc @ 0x1C008E340
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0049D94 (WPP_RECORDER_SF_qqD.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0089540 (WPP_RECORDER_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x1C008DF48 (RIMStartDeviceSpecificRead.c)
 *     ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z @ 0x1C008E4D0 (-InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C008E590 (EtwTraceCompleteInputDeviceRead.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C010F99C (RimDeviceTypeToRimInputTypeString.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C012FEAC (RIMApplyPTPConfigRemedy.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r15d
  int v17; // r9d
  unsigned int v18; // eax
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  const WCHAR *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const WCHAR *v26; // rax
  int Status; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v28[2]; // [rsp+48h] [rbp-41h] BYREF
  LPCWSTR *v29[2]; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+90h] [rbp+7h] BYREF
  int *p_Status; // [rsp+A0h] [rbp+17h]
  __int64 v34; // [rsp+A8h] [rbp+1Fh]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v29, L"InputApc", 0LL);
  if ( ApcContext + 256 != (char *)IoStatusBlock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  LOBYTE(v6) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 152) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v6);
  InputTraceLogging::RIM::InputApc((const struct RIMDEV *)ApcContext, Status);
  v11 = *((_QWORD *)ApcContext + 42);
  if ( !*(_BYTE *)(v11 + 81) && !*(_BYTE *)(v11 + 80) )
  {
    if ( ApcContext + 256 != (char *)IoStatusBlock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    if ( ApcContext[48] != 2 || (v12 = 1, (*((_DWORD *)ApcContext + 46) & 0x8000) == 0) )
      v12 = 0;
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v28, v12, 0);
    if ( ApcContext[48] != 2 || (*((_DWORD *)ApcContext + 50) & 0x80u) == 0 )
    {
      v16 = 0;
LABEL_11:
      if ( *((_QWORD *)ApcContext + 28) )
      {
        RIMLockExclusive(v11 + 568);
        v17 = Status;
        v18 = *((_DWORD *)ApcContext + 46) & 0xFFFFFF7F;
        *((_DWORD *)ApcContext + 46) = v18;
        if ( v17 < 0 )
        {
          if ( (v18 & 8) == 0 && v17 != -1073741536 )
          {
            v19 = ApcContext[205];
            ApcContext[205] = v19 + 1;
            if ( (unsigned __int8)v19 >= 5u )
            {
              DbgPrintRIMAlways(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum nretryErrorCompletion reached\n");
              WPP_RECORDER_SF_qqD(
                v25,
                v24,
                0x16u,
                0x1Bu,
                (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids,
                v11,
                ApcContext,
                Status);
              if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
              {
                v26 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(ApcContext, (unsigned __int8)ApcContext[48]);
                TlgCreateWsz(&pDesc, v26);
                TlgCreateWsz(&v32, *((LPCWSTR *)ApcContext + 27));
                v34 = 4LL;
                p_Status = &Status;
                TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019F50F, 0LL, 0LL, 5u, &pData);
              }
            }
            else
            {
              DbgPrintRIMAlways(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum nretryErrorCompletion not reached\n");
              WPP_RECORDER_SF_qqD(
                v21,
                v20,
                0x16u,
                0x1Au,
                (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids,
                v11,
                ApcContext,
                Status);
              if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
              {
                v23 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(ApcContext, (unsigned __int8)ApcContext[48]);
                TlgCreateWsz(&pDesc, v23);
                TlgCreateWsz(&v32, *((LPCWSTR *)ApcContext + 27));
                v34 = 4LL;
                p_Status = &Status;
                TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019F568, 0LL, 0LL, 5u, &pData);
              }
              RIMStartDeviceSpecificRead(v11, (__int64)ApcContext, v22);
            }
          }
        }
        else
        {
          ApcContext[205] = 0;
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v11, (struct RIMDEV *)ApcContext);
        }
        *(_QWORD *)(v11 + 576) = 0LL;
        ExReleasePushLockExclusiveEx(v11 + 568, 0LL);
        KeLeaveCriticalRegion();
      }
      else if ( Status >= 0 )
      {
        WPP_RECORDER_SF_qq(
          gRimLog,
          3u,
          0x16u,
          0x1Cu,
          (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids,
          v11,
          ApcContext);
        DbgPrintRIMAlways("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n");
      }
      if ( v16 )
      {
        *(_QWORD *)(v11 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v11 + 104, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( IoStatusBlock->Status != -1073741536 )
        RIMApplyPTPConfigRemedy(v11, ApcContext);
      if ( v28[0] && !v28[1] && (int)IsLeaveEditionCritSupported() >= 0 )
        LeaveEditionCrit();
      goto LABEL_19;
    }
    v16 = 1;
    if ( *(_QWORD *)(v11 + 640) && !*(_BYTE *)(v11 + 584) )
    {
      if ( gDebugPhoneInitRace )
      {
LABEL_33:
        RIMLockExclusive(v11 + 104);
        goto LABEL_11;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    }
    if ( !gDebugPhoneInitRace )
      gDebugPhoneInitRace = 1;
    goto LABEL_33;
  }
LABEL_19:
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v29);
}
