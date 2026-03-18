/*
 * XREFs of PpmPerfAction @ 0x14009C480
 * Callers:
 *     <none>
 * Callees:
 *     PpmConvertTime @ 0x140004EB4 (PpmConvertTime.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400358F0 (PpmSnapPerformanceAccumulation.c)
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140036AB0 (EtwpLevelKeywordEnabled.c)
 *     PpmCheckContinueExecution @ 0x14009C880 (PpmCheckContinueExecution.c)
 *     PpmPerfApplyProcessorState @ 0x1401762A0 (PpmPerfApplyProcessorState.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PpmParkReportSoftParkChange @ 0x1401BFE88 (PpmParkReportSoftParkChange.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PpmParkReportParkedCore @ 0x1402F850C (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x1402F85E8 (PpmParkReportUnparkedCore.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1402FE3D0 (PopDiagTraceIllegalProcessorThrottle.c)
 */

void __fastcall PpmPerfAction(
        unsigned __int64 Dpc,
        signed __int64 DeferredContext,
        __int64 SystemArgument1,
        _BYTE *SystemArgument2)
{
  _QWORD *v4; // rbx
  char v5; // r14
  __int64 v6; // rdi
  unsigned __int8 v7; // r15
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  void (__fastcall *v14)(__int64 *); // rax
  __int64 v16; // rax
  __int16 v17; // [rsp+48h] [rbp-59h] BYREF
  int v18; // [rsp+50h] [rbp-51h] BYREF
  int v19; // [rsp+58h] [rbp-49h] BYREF
  __int64 v20; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-39h]
  unsigned __int64 v22; // [rsp+70h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  char *v24; // [rsp+88h] [rbp-19h]
  __int64 v25; // [rsp+90h] [rbp-11h]
  int *v26; // [rsp+98h] [rbp-9h]
  __int64 v27; // [rsp+A0h] [rbp-1h]
  unsigned __int64 *v28; // [rsp+A8h] [rbp+7h]
  __int64 v29; // [rsp+B0h] [rbp+Fh]
  int *v30; // [rsp+B8h] [rbp+17h]
  __int64 v31; // [rsp+C0h] [rbp+1Fh]

  v4 = (_QWORD *)DeferredContext;
  v5 = _InterlockedExchange((volatile __int32 *)(DeferredContext + 24144), 0);
  if ( (v5 & 1) == 0 )
    goto LABEL_35;
  v6 = *(_QWORD *)(DeferredContext + 24168);
  v7 = DeferredContext != (_QWORD)KeGetCurrentPrcb();
  if ( !v6 )
    goto LABEL_35;
  v8 = (unsigned __int64 *)(v6 + 120);
  if ( !PpmSnapPerformanceAccumulation(DeferredContext, 0, v7, 1, (LARGE_INTEGER *)(v6 + 120)) )
    goto LABEL_35;
  v9 = *(_QWORD *)(v6 + 208);
  if ( *v8 <= v9 )
    goto LABEL_35;
  v10 = *v8 - v9;
  v11 = *(_QWORD *)(v6 + 128) - *(_QWORD *)(v6 + 216);
  if ( v11 > v10 )
  {
    if ( v7 )
      goto LABEL_35;
    goto LABEL_9;
  }
  if ( !v7 )
  {
LABEL_9:
    v12 = v4[3023];
    v13 = v4[3022];
    v21 = v12;
    if ( PopProcessorThrottleLogInterval )
    {
      if ( v13 )
      {
        if ( v12 )
        {
          v14 = *(void (__fastcall **)(__int64 *))(v13 + 216);
          if ( v14 )
          {
            if ( *((_BYTE *)v4 + 24048) )
            {
              v14(&v20);
              Dpc = v21;
              if ( *(_DWORD *)(v21 + 72) >= *(_DWORD *)(v13 + 316) )
              {
                if ( *((_BYTE *)v4 + 24056) )
                {
                  if ( v4[3008] != v20 )
                  {
                    HIDWORD(DeferredContext) = 0;
                    Dpc = (unsigned int)(*((_DWORD *)v4 + 6013) + 1);
                    *((_DWORD *)v4 + 6013) = Dpc;
                    LODWORD(DeferredContext) = (unsigned int)Dpc % PopProcessorThrottleLogInterval;
                    if ( !((unsigned int)Dpc % PopProcessorThrottleLogInterval) || (_DWORD)Dpc == 1 )
                    {
                      LODWORD(Dpc) = KeGetPcr()->Prcb.Number;
                      PopDiagTraceIllegalProcessorThrottle(Dpc, v20, v4 + 3009);
                    }
                  }
                }
                else
                {
                  *((_BYTE *)v4 + 24056) = 1;
                }
              }
              else
              {
                *((_BYTE *)v4 + 24056) = 0;
              }
              v4[3008] = v20;
            }
          }
        }
      }
    }
  }
  if ( v11 )
  {
    SystemArgument1 = (*(_QWORD *)(v6 + 152) - *(_QWORD *)(v6 + 240)) / v11;
    DeferredContext = (*(_QWORD *)(v6 + 144) - *(_QWORD *)(v6 + 232)) % v11;
    if ( __PAIR64__((*(_QWORD *)(v6 + 144) - *(_QWORD *)(v6 + 232)) / v11, SystemArgument1) != *(_QWORD *)(v6 + 296) )
    {
      v19 = (*(_QWORD *)(v6 + 144) - *(_QWORD *)(v6 + 232)) / v11;
      v18 = SystemArgument1;
      if ( PpmEtwRegistered )
      {
        SystemArgument2 = (_BYTE *)PpmEtwHandle;
        if ( PpmEtwHandle )
        {
          if ( EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, 4u, 128LL)
            || SystemArgument2[101]
            && EtwpLevelKeywordEnabled(*((_QWORD *)SystemArgument2 + 5) + 96LL, 4u, SystemArgument1) )
          {
            v17 = *((unsigned __int8 *)v4 + 208);
            v22 = PpmConvertTime(v10, PopQpcFrequency, 0xF4240uLL);
            *(_QWORD *)&UserData.Size = 2LL;
            v25 = 1LL;
            UserData.Ptr = (ULONGLONG)&v17;
            v27 = 4LL;
            v24 = (char *)v4 + 209;
            v29 = 8LL;
            v26 = &v18;
            v28 = &v22;
            v30 = &v19;
            v31 = 4LL;
            EtwWriteEx(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
          }
        }
      }
    }
  }
  *(_OWORD *)(v6 + 208) = *(_OWORD *)v8;
  *(_OWORD *)(v6 + 224) = *(_OWORD *)(v6 + 136);
  *(_OWORD *)(v6 + 240) = *(_OWORD *)(v6 + 152);
  *(_OWORD *)(v6 + 256) = *(_OWORD *)(v6 + 168);
  *(_OWORD *)(v6 + 272) = *(_OWORD *)(v6 + 184);
  *(_QWORD *)(v6 + 288) = *(_QWORD *)(v6 + 200);
LABEL_35:
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    v16 = v4[3023];
    if ( *(_BYTE *)(v16 + 120) )
    {
      LOBYTE(DeferredContext) = 1;
      *(_BYTE *)(v16 + 120) = 0;
      PpmPerfApplyProcessorState(v4, DeferredContext, SystemArgument1, SystemArgument2);
    }
    PpmPerfApplyProcessorState(v4, 0LL, SystemArgument1, SystemArgument2);
  }
  if ( (v5 & 8) != 0 )
    PpmParkReportParkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 0x10) != 0 )
    PpmParkReportSoftParkChange(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( _InterlockedExchangeAdd(&PpmCheckCount, 0xFFFFFFFF) == 1 )
    PpmCheckContinueExecution(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
