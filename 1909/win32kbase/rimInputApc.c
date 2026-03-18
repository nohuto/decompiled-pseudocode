/*
 * XREFs of rimInputApc @ 0x1C0150BC0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0031A80 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0031DC0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00535D0 (WPP_RECORDER_SF_qqd.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C005766C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0057AD4 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00595E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_qq @ 0x1C005C218 (WPP_RECORDER_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0062114 (RIMStartDeviceSpecificRead.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0092BB0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z @ 0x1C00A74E0 (-InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00A8480 (EtwTraceCompleteInputDeviceRead.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C011E9D0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C013835C (RimDeviceTypeToRimInputTypeString.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C015AC70 (RIMApplyPTPConfigRemedy.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInputApc(char *ApcContext, const struct _IO_STATUS_BLOCK *IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rdx
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  const GUID *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  BOOL v12; // edx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  int v16; // r14d
  int v17; // r9d
  unsigned int v18; // eax
  char v19; // cl
  int v20; // edx
  __int64 v21; // r8
  const wchar_t *v22; // rax
  int v23; // edx
  const wchar_t *v24; // rax
  NTSTATUS Status; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[8]; // [rsp+48h] [rbp-B8h] BYREF
  LPCWSTR *v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+90h] [rbp-70h] BYREF
  NTSTATUS *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  EVENT_DATA_DESCRIPTOR v34; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+E0h] [rbp-20h] BYREF
  NTSTATUS *p_Status; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v27, L"InputApc", 0LL);
  if ( ApcContext + 256 != (char *)IoStatusBlock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  LOBYTE(v6) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 152) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v6, Status, v7);
  InputTraceLogging::RIM::InputApc((const struct RIMDEV *)ApcContext, IoStatusBlock);
  v11 = *((_QWORD *)ApcContext + 42);
  if ( !*(_BYTE *)(v11 + 81) && !*(_BYTE *)(v11 + 80) )
  {
    if ( ApcContext + 256 != (char *)IoStatusBlock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v12 = ApcContext[48] == 2
       && ((*((_DWORD *)ApcContext + 46) & 0x8000) != 0 || (*((_DWORD *)ApcContext + 50) & 0x80u) != 0);
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v26, v12, 0);
    v15 = Status;
    if ( Status >= 0 && (ApcContext[48] != 2 || (*((_DWORD *)ApcContext + 50) & 0x80u) == 0) )
    {
      v16 = 0;
LABEL_23:
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
                  (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids,
                  v11,
                  (char)ApcContext,
                  Status);
              }
              if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
              {
                v24 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, (unsigned __int8)ApcContext[48]);
                TlgCreateWsz(&v35, v24);
                TlgCreateWsz(&v36, *((LPCWSTR *)ApcContext + 27));
                v39 = 0;
                p_Status = &Status;
                v38 = 4;
                TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E344A, 0LL, 0LL, 5u, &v34);
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
                  (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids,
                  v11,
                  (char)ApcContext,
                  Status);
              }
              if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
              {
                v22 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, (unsigned __int8)ApcContext[48]);
                TlgCreateWsz(&pDesc, v22);
                TlgCreateWsz(&v30, *((LPCWSTR *)ApcContext + 27));
                v33 = 0;
                v31 = &Status;
                v32 = 4;
                TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E34A3, 0LL, 0LL, 5u, &pData);
              }
              RIMStartDeviceSpecificRead((HANDLE *)v11, (__int64)ApcContext, v21);
            }
          }
        }
        else
        {
          ApcContext[205] = 0;
          *((LARGE_INTEGER *)ApcContext + 269) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 272) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v11, (struct RIMDEV *)ApcContext);
        }
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v11 + 568));
      }
      else if ( v15 >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_qq(
            (_DWORD)gRimLog,
            v13,
            1,
            28,
            (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids,
            v11,
            (char)ApcContext);
        }
        DbgPrintGDI("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n", (const void *)v11, ApcContext);
      }
      if ( v16 )
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v11 + 104));
      if ( IoStatusBlock->Status != -1073741536 )
        RIMApplyPTPConfigRemedy(v11, ApcContext);
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v26);
      goto LABEL_50;
    }
    v16 = 1;
    if ( *(_QWORD *)(v11 + 640) && !*(_BYTE *)(v11 + 584) )
    {
      if ( gDebugPhoneInitRace )
      {
LABEL_22:
        RIMLockExclusive(v11 + 104);
        v15 = Status;
        goto LABEL_23;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)Status, v13, v14);
    }
    if ( !gDebugPhoneInitRace )
      gDebugPhoneInitRace = 1;
    goto LABEL_22;
  }
LABEL_50:
  CompositionObject::Release(*((CompositionObject **)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v27);
}
