/*
 * XREFs of rimInputApc @ 0x1C00FE6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C000F3BC (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00AB810 (EtwTraceCompleteInputDeviceRead.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00E5E3C (RimDeviceTypeToRimInputTypeString.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00FC1AC (WPP_RECORDER_SF_qqD.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00FDADC (RIMStartDeviceSpecificRead.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C01087F4 (RIMApplyPTPConfigRemedy.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInputApc(
        struct _MCGEN_TRACE_CONTEXT *ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        const GUID *Reserved)
{
  struct _IO_STATUS_BLOCK *p_Level; // rbx
  struct _MCGEN_TRACE_CONTEXT *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  PULONG EnableBitMask; // rsi
  char v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r15d
  int v13; // r9d
  unsigned int v14; // eax
  unsigned __int8 v15; // cl
  __int64 v16; // rdx
  const GUID *v17; // r8
  const wchar_t *v18; // rax
  LPCGUID v19; // r9
  __int64 v20; // rdx
  const wchar_t *v21; // rax
  LPCGUID v22; // r9
  NTSTATUS Status; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v24[2]; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+80h] [rbp+7h] BYREF
  NTSTATUS *p_Status; // [rsp+90h] [rbp+17h]
  __int64 v29; // [rsp+98h] [rbp+1Fh]

  p_Level = (struct _IO_STATUS_BLOCK *)&ApcContext[3].Level;
  v5 = ApcContext;
  if ( &ApcContext[3].Level != (UCHAR *)IoStatusBlock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(ApcContext, IoStatusBlock);
  LOBYTE(ApcContext) = v5->EnableBitMask;
  *(struct _IO_STATUS_BLOCK *)&v5[2].Logger = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(ApcContext, Status, Reserved);
  EnableBitMask = v5[4].EnableBitMask;
  if ( !*((_WORD *)EnableBitMask + 36) )
  {
    if ( p_Level != IoStatusBlock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    v9 = (char)v5->EnableBitMask;
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v24, v9 == 2, 0);
    if ( v9 != 2 || (LODWORD(v5[2].EnableKeyWords) & 0x80u) == 0 )
    {
      v12 = 0;
      goto LABEL_16;
    }
    v12 = 1;
    if ( *((_QWORD *)EnableBitMask + 78) && !*((_BYTE *)EnableBitMask + 568) )
    {
      if ( gDebugPhoneInitRace )
      {
LABEL_14:
        RIMLockExclusive((__int64)(EnableBitMask + 24));
LABEL_16:
        if ( v5[3].Logger )
        {
          RIMLockExclusive((__int64)(EnableBitMask + 138));
          v13 = Status;
          v14 = *(_DWORD *)&v5[2].Level & 0xFFFFFFBF;
          *(_DWORD *)&v5[2].Level = v14;
          if ( v13 < 0 )
          {
            if ( (v14 & 8) == 0 && v13 != -1073741536 )
            {
              v15 = BYTE5(v5[2].EnableKeyWords);
              BYTE5(v5[2].EnableKeyWords) = v15 + 1;
              if ( v15 >= 5u )
              {
                DbgPrintRIMAlways(
                  ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum nretryErrorCompletion reached\n",
                  EnableBitMask,
                  v5,
                  v13);
                WPP_RECORDER_SF_qqD(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  v20,
                  0x15u,
                  0x1Bu,
                  (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
                  EnableBitMask,
                  v5,
                  Status);
                if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
                {
                  v21 = RimDeviceTypeToRimInputTypeString((__int64)v5, LOBYTE(v5->EnableBitMask));
                  TlgCreateWsz(&pDesc, v21);
                  TlgCreateWsz(&v27, (LPCWSTR)v5[3].RegistrationHandle);
                  v29 = 4LL;
                  p_Status = &Status;
                  TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C01788D4, 0LL, v22, 5u, &pData);
                }
              }
              else
              {
                DbgPrintRIMAlways(
                  ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum nretryErrorCompletion not reached\n",
                  EnableBitMask,
                  v5,
                  v13);
                WPP_RECORDER_SF_qqD(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  v16,
                  0x15u,
                  0x1Au,
                  (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
                  EnableBitMask,
                  v5,
                  Status);
                if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
                {
                  v18 = RimDeviceTypeToRimInputTypeString((__int64)v5, LOBYTE(v5->EnableBitMask));
                  TlgCreateWsz(&pDesc, v18);
                  TlgCreateWsz(&v27, (LPCWSTR)v5[3].RegistrationHandle);
                  v29 = 4LL;
                  p_Status = &Status;
                  TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C017892D, 0LL, v19, 5u, &pData);
                }
                RIMStartDeviceSpecificRead((struct _MCGEN_TRACE_CONTEXT *)EnableBitMask, (__int64)v5, v17);
              }
            }
          }
          else
          {
            BYTE5(v5[2].EnableKeyWords) = 0;
            rimProcessDeviceBufferAndStartRead(EnableBitMask, v5);
          }
          *((_QWORD *)EnableBitMask + 70) = 0LL;
          ExReleasePushLockExclusiveEx(EnableBitMask + 138, 0LL);
          KeLeaveCriticalRegion();
        }
        else if ( Status >= 0 )
        {
          WPP_RECORDER_SF_qq(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x15u,
            0x1Cu,
            (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
            EnableBitMask,
            v5);
          DbgPrintRIMAlways("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n", EnableBitMask, v5);
        }
        if ( v12 )
        {
          *((_QWORD *)EnableBitMask + 13) = 0LL;
          ExReleasePushLockExclusiveEx(EnableBitMask + 24, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( IoStatusBlock->Status != -1073741536 )
          RIMApplyPTPConfigRemedy(EnableBitMask, v5);
        if ( v24[0] && !v24[1] && (int)IsLeaveEditionCritSupported() >= 0 )
          LeaveEditionCrit();
        goto LABEL_40;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    }
    if ( !gDebugPhoneInitRace )
      gDebugPhoneInitRace = 1;
    goto LABEL_14;
  }
LABEL_40:
  ObfDereferenceObject(*(PVOID *)&v5->Flags);
}
