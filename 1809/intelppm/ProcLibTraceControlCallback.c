/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C0024D00
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001500 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0002F1C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002F5C (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0007C68 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0007E24 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTracePepPerfDomain @ 0x1C0007FB4 (ProcLibTracePepPerfDomain.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001E3B4 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceSummary2 @ 0x1C001FECC (ProcLibTraceSummary2.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0027C30 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0027E80 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0028138 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C00284D8 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0028870 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0028ABC (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0028CD8 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0028EE8 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0028F68 (ProcLibTracePccErrata.c)
 *     ProcLibTracePccSummary @ 0x1C0028F94 (ProcLibTracePccSummary.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0029084 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0029458 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C0029484 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C0029610 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x1C0029880 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0029980 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C0029C38 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0029E70 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C0029FD8 (ProcLibTraceSummary.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002A2E4 (ProcLibTraceThrottleStatesErrata.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx
  __int64 *i; // rbx
  unsigned __int8 *j; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  bool v16; // zf
  void (__fastcall *v17)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001A398,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C001A3D8; i != &qword_1C001A3D8; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (unsigned __int8 *)qword_1C001A3B8; j != (unsigned __int8 *)&qword_1C001A3B8; j = *(unsigned __int8 **)j )
    {
      ProcLibTracePStateDomainRundown((__int64)j);
      if ( j[48] )
        ProcLibTracePepPerfDomain(j, 1);
    }
    if ( (dword_1C001A828 & 0x7F077) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceIdleStatesErrata(v4);
    }
    if ( (dword_1C001A828 & 0x70000000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePerfStatesErrata(v4);
    }
    if ( (dword_1C001A828 & 0x3300000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceThrottleStatesErrata(v4);
    }
    if ( dword_1C001A828 < 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePccErrata(v4);
    }
    InitializeEnumerationContext((__int64)&qword_1C001A3A8, 32, (__int64)v19);
    ProcLibTraceGetPlatformIdleStates(1);
    LOBYTE(v7) = 1;
    ProcLibTracePlatformIdleStates(v7);
    LOBYTE(v8) = 1;
    ProcLibTraceCoordinatedIdleStates(v8);
    v9 = (_DWORD *)qword_1C001A910;
    if ( qword_1C001A910 )
    {
      v10 = 0LL;
      if ( *(_DWORD *)qword_1C001A910 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v9[8 * v10 + 2 + 2 * (unsigned int)v10]);
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *v9 );
      }
    }
    ResetEnumerationContext(v19);
    while ( 1 )
    {
      v16 = (unsigned int)EnumerateNextDevice((__int64)v19, &v18) == 0;
      v17 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v16 )
        break;
      v17(WdfDriverGlobals, qword_1C001A398);
      v11 = v18;
      ProcLibTraceProcessorRundown(v18);
      ProcLibTraceSummary(v11);
      ProcLibTraceSummary2(v11, 1);
      ProcLibTracePerfStatesRundown(v11);
      ProcLibTraceBiosPStatesRundown(v11);
      ProcLibTraceBiosCStatesRundown(v11);
      ProcLibTraceBiosTStatesRundown(v11);
      ProcLibTraceProcessorLpiRundown(v11);
      LOBYTE(v12) = 1;
      ProcLibTraceQueryCapabilities(v11, v12);
      LOBYTE(v13) = 1;
      ProcLibTraceGetProcessorIdleStates(v11, v13);
      LOBYTE(v14) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v11, v14);
      LOBYTE(v15) = 1;
      ProcLibTracePepPerfCapabilities(v11, v15);
      ProcLibTraceProcessorIds(v11);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001A398,
        0LL);
    }
    v17(WdfDriverGlobals, qword_1C001A398);
  }
}
