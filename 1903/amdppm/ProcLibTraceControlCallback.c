/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C001D140
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00025A4 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C00025D4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C000272C (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C00027E0 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibGetProcessorNumber @ 0x1C00028C0 (ProcLibGetProcessorNumber.c)
 *     ProcLibTracePepPerfDomain @ 0x1C0002A20 (ProcLibTracePepPerfDomain.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     ProcLibTraceSummary @ 0x1C001C7F0 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C001CB00 (ProcLibTraceSummary2.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C001CF1C (ProcLibTraceNoPayloadEvent.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001D5D0 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTracePccSummary @ 0x1C001D80C (ProcLibTracePccSummary.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C001D8FC (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C001DBBC (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001DE10 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C001E0CC (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C001E318 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001E5AC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001E718 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001E7B8 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001E9D8 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001EBEC (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001EED8 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C001F240 (ProcLibTraceCoordinatedIdleStates.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 *i; // rbx
  unsigned __int8 *j; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int *v10; // rdi
  unsigned int v11; // ebx
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  _BYTE *PoolWithTag; // rdi
  unsigned int v16; // ecx
  unsigned int k; // r9d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  struct _PROCESSOR_NUMBER v26; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v27; // [rsp+3Ch] [rbp-5Dh] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-59h] BYREF
  __int64 v29[4]; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-31h] BYREF
  unsigned __int8 *p_Number; // [rsp+78h] [rbp-21h]
  __int64 v32; // [rsp+80h] [rbp-19h]
  unsigned int *v33; // [rsp+88h] [rbp-11h]
  __int64 v34; // [rsp+90h] [rbp-9h]
  _QWORD *v35; // [rsp+98h] [rbp-1h]
  __int64 v36; // [rsp+A0h] [rbp+7h]
  _QWORD *v37; // [rsp+A8h] [rbp+Fh]
  __int64 v38; // [rsp+B0h] [rbp+17h]

  memset(v29, 0, sizeof(v29));
  if ( ControlCode == 2 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0013418,
      0LL);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C0013458; i != &qword_1C0013458; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (unsigned __int8 *)qword_1C0013438; j != (unsigned __int8 *)&qword_1C0013438; j = *(unsigned __int8 **)j )
    {
      ProcLibTracePStateDomainRundown((__int64)j);
      if ( j[48] )
        ProcLibTracePepPerfDomain(j, 1);
    }
    if ( (dword_1C00138B8 & 0x7F077) != 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_IDLE_STATES_ERRATA_RUNDOWN);
    if ( (dword_1C00138B8 & 0x70000000) != 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_ERRATA_RUNDOWN);
    if ( (dword_1C00138B8 & 0x3300000) != 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_THROTTLE_STATES_ERRATA_RUNDOWN);
    if ( dword_1C00138B8 < 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PCC_ERRATA_RUNDOWN);
    InitializeEnumerationContext((__int64)&qword_1C0013428, 32, (__int64)v29);
    LOBYTE(v7) = 1;
    ProcLibTraceGetPlatformIdleStates(v7);
    LOBYTE(v8) = 1;
    ProcLibTracePlatformIdleStates(v8);
    LOBYTE(v9) = 1;
    ProcLibTraceCoordinatedIdleStates(v9);
    v10 = (unsigned int *)qword_1C00139A0;
    if ( qword_1C00139A0 )
    {
      v11 = 0;
      if ( *(_DWORD *)qword_1C00139A0 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v10[8 * v11 + 2 + 2 * v11]);
          ++v11;
        }
        while ( v11 < *v10 );
      }
    }
    ResetEnumerationContext(v29);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v29, &v28) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C0013418);
      v12 = v28;
      ProcLibTraceProcessorRundown(v28);
      ProcLibTraceSummary(v12);
      ProcLibTraceSummary2((__int64)v12, 1);
      v26 = 0;
      if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_PERF_STATES_RUNDOWN) )
      {
        if ( (int)ProcLibGetProcessorNumber((__int64)v12, &v26) >= 0 )
        {
          v13 = v12[27];
          if ( v13 )
          {
            v14 = *(_QWORD *)(v13 + 24);
            v27 = *(_DWORD *)(v14 + 64);
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 6LL * v27, 0x72637250u);
            if ( PoolWithTag )
            {
              v16 = v27;
              for ( k = 0; k < v27; v16 = v27 )
              {
                v18 = k;
                v19 = k++;
                v20 = *(_QWORD *)(v14 + 56) + 32 * v19;
                v21 = 3 * v18;
                *(_DWORD *)&PoolWithTag[2 * v21] = *(_DWORD *)(v20 + 16);
                PoolWithTag[2 * v21 + 4] = *(_BYTE *)(v20 + 24);
                PoolWithTag[2 * v21 + 5] = *(_BYTE *)(v20 + 25);
              }
              *(_QWORD *)&UserData.Size = 2LL;
              UserData.Ptr = (unsigned __int64)&v26;
              v32 = 1LL;
              p_Number = &v26.Number;
              v34 = 4LL;
              v33 = &v27;
              v35 = PoolWithTag;
              v36 = 6 * v16;
              EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_PERF_STATES_RUNDOWN, 0LL, 4u, &UserData);
              ExFreePoolWithTag(PoolWithTag, 0x72637250u);
            }
          }
        }
      }
      ProcLibTraceBiosPStatesRundown(v12);
      ProcLibTraceBiosCStatesRundown(v12);
      ProcLibTraceBiosTStatesRundown(v12);
      ProcLibTraceProcessorLpiRundown(v12);
      LOBYTE(v22) = 1;
      ProcLibTraceQueryCapabilities(v12, v22);
      LOBYTE(v23) = 1;
      ProcLibTraceGetProcessorIdleStates(v12, v23);
      LOBYTE(v24) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v12, v24);
      LOBYTE(v25) = 1;
      ProcLibTracePepPerfCapabilities(v12, v25);
      v26 = 0;
      if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_PROCESSOR_ID_RUNDOWN) )
      {
        if ( (int)ProcLibGetProcessorNumber((__int64)v12, &v26) >= 0 )
        {
          UserData.Ptr = (unsigned __int64)&v26;
          *(_QWORD *)&UserData.Size = 2LL;
          p_Number = &v26.Number;
          v32 = 1LL;
          v33 = (unsigned int *)v12 + 13;
          v34 = 4LL;
          v35 = v12 + 6;
          v37 = v12 + 7;
          v36 = 4LL;
          v38 = 4LL;
          EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_PROCESSOR_ID_RUNDOWN, 0LL, 5u, &UserData);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0013418,
        0LL);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0013418);
  }
}
