/*
 * XREFs of rimInputApc @ 0x1C006E9D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0067E40 (WPP_RECORDER_SF_qqd.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C006B5CC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C006BA34 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z @ 0x1C006EB40 (-InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C006EC00 (EtwTraceCompleteInputDeviceRead.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006F2B0 (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00726E8 (WPP_RECORDER_SF_qq.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0121340 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C013A9CC (RimDeviceTypeToRimInputTypeString.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C015CE68 (RIMApplyPTPConfigRemedy.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInputApc(char *ApcContext, const struct _IO_STATUS_BLOCK *IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  BOOL v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r15d
  int v17; // r9d
  unsigned int v18; // eax
  char v19; // cl
  int v20; // edx
  __int64 v21; // r8
  const WCHAR *v22; // rax
  int v23; // edx
  const WCHAR *v24; // rax
  NTSTATUS Status; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[8]; // [rsp+48h] [rbp-B8h] BYREF
  LPCWSTR *v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+90h] [rbp-70h] BYREF
  NTSTATUS *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v33; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+E0h] [rbp-20h] BYREF
  NTSTATUS *p_Status; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v27, L"InputApc", 0LL);
  if ( ApcContext + 256 != (char *)IoStatusBlock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  LOBYTE(v6) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 152) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v6);
  InputTraceLogging::RIM::InputApc((const struct RIMDEV *)ApcContext, IoStatusBlock);
  v11 = *((_QWORD *)ApcContext + 42);
  if ( !*(_BYTE *)(v11 + 81) && !*(_BYTE *)(v11 + 80) )
  {
    if ( ApcContext + 256 != (char *)IoStatusBlock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v12 = ApcContext[48] == 2
       && ((*((_DWORD *)ApcContext + 46) & 0x8000) != 0 || (*((_DWORD *)ApcContext + 50) & 0x80u) != 0);
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v26, v12, 0);
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
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum nretryErrorCompletion reached\n",
                (const void *)v11,
                ApcContext,
                v17);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v23) = 4;
                WPP_RECORDER_SF_qqd(
                  (_DWORD)gRimLog,
                  v23,
                  1,
                  27,
                  (__int64)&WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids,
                  v11,
                  (char)ApcContext,
                  Status);
              }
              if ( dword_1C020F490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F490, 0x400000000000uLL) )
              {
                v24 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(ApcContext, (unsigned __int8)ApcContext[48]);
                TlgCreateWsz(&v34, v24);
                TlgCreateWsz(&v35, *((LPCWSTR *)ApcContext + 27));
                v37 = 4LL;
                p_Status = &Status;
                TlgWrite((TraceLoggingHProvider)&dword_1C020F490, &unk_1C01E540A, 0LL, 0LL, 5u, &v33);
              }
            }
            else
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum nretryErrorCompletion not reached\n",
                (const void *)v11,
                ApcContext,
                v17);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v20) = 4;
                WPP_RECORDER_SF_qqd(
                  (_DWORD)gRimLog,
                  v20,
                  1,
                  26,
                  (__int64)&WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids,
                  v11,
                  (char)ApcContext,
                  Status);
              }
              if ( dword_1C020F490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F490, 0x400000000000uLL) )
              {
                v22 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(ApcContext, (unsigned __int8)ApcContext[48]);
                TlgCreateWsz(&pDesc, v22);
                TlgCreateWsz(&v30, *((LPCWSTR *)ApcContext + 27));
                v32 = 4LL;
                v31 = &Status;
                TlgWrite((TraceLoggingHProvider)&dword_1C020F490, &unk_1C01E5463, 0LL, 0LL, 5u, &pData);
              }
              RIMStartDeviceSpecificRead(v11, ApcContext, v21);
            }
          }
        }
        else
        {
          ApcContext[205] = 0;
          *((LARGE_INTEGER *)ApcContext + 267) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 270) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v11, (struct RIMDEV *)ApcContext);
        }
        *(_QWORD *)(v11 + 576) = 0LL;
        ExReleasePushLockExclusiveEx(v11 + 568, 0LL);
        KeLeaveCriticalRegion();
      }
      else if ( Status >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_qq(
            (_DWORD)gRimLog,
            v13,
            1,
            28,
            (__int64)&WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids,
            v11,
            (char)ApcContext);
        }
        DbgPrintGDI("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n", (const void *)v11, ApcContext);
      }
      if ( v16 )
      {
        *(_QWORD *)(v11 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v11 + 104, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( IoStatusBlock->Status != -1073741536 )
        RIMApplyPTPConfigRemedy(v11, ApcContext);
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v26);
      goto LABEL_18;
    }
    v16 = 1;
    if ( *(_QWORD *)(v11 + 640) && !*(_BYTE *)(v11 + 584) )
    {
      if ( gDebugPhoneInitRace )
      {
LABEL_31:
        RIMLockExclusive(v11 + 104);
        goto LABEL_11;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    }
    if ( !gDebugPhoneInitRace )
      gDebugPhoneInitRace = 1;
    goto LABEL_31;
  }
LABEL_18:
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v27);
}
