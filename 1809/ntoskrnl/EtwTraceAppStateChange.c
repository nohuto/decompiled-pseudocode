/*
 * XREFs of EtwTraceAppStateChange @ 0x1405B3C80
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x1405B2974 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1405B270C (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteAppStateChange @ 0x1405B28E4 (EtwpWriteAppStateChange.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B3694 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1405B48C0 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     ObGetProcessHandleCount @ 0x1405B4960 (ObGetProcessHandleCount.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     PsQueryStatisticsProcess @ 0x1405FF700 (PsQueryStatisticsProcess.c)
 *     EtwpInitStateChangeInfo @ 0x14060EB80 (EtwpInitStateChangeInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14066DA18 (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x14066DBAC (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x14066DF0C (EtwpQueryTokenPackageInfo.c)
 */

void __fastcall EtwTraceAppStateChange(__int64 BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  char v7; // r10
  unsigned __int64 v8; // kr00_8
  unsigned __int64 v9; // rcx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int *p_ProcessHandleCount; // r15
  char v15; // r14
  char v16; // si
  PACCESS_TOKEN v17; // rbx
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  _BYTE v21[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int ProcessHandleCount; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+B4h] [rbp-4Ch]
  __int64 v29; // [rsp+BCh] [rbp-44h]
  __int64 v30; // [rsp+C4h] [rbp-3Ch]
  int v31; // [rsp+CCh] [rbp-34h]
  int v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D4h] [rbp-2Ch]
  int v34; // [rsp+D8h] [rbp-28h]
  char v35[41]; // [rsp+DCh] [rbp-24h] BYREF
  unsigned __int64 v36; // [rsp+105h] [rbp+5h]
  unsigned __int64 v37; // [rsp+10Dh] [rbp+Dh]
  unsigned __int64 v38; // [rsp+115h] [rbp+15h]
  unsigned __int64 v39; // [rsp+11Dh] [rbp+1Dh]
  unsigned __int64 v40; // [rsp+125h] [rbp+25h]
  _BYTE v41[48]; // [rsp+140h] [rbp+40h] BYREF
  ULONG_PTR PackageSize[52]; // [rsp+170h] [rbp+70h] BYREF

  if ( TraceLoggingProviderEnabled(&stru_1404012D0, 0, 0x600000000001uLL) )
  {
    EtwpInitStateChangeInfo(BugCheckParameter1, v35);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - *(_QWORD *)(BugCheckParameter1 + 1872);
    v7 = *(_BYTE *)(a2 + 52);
    v35[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v35[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    v36 = v8 / 0x2710;
    v37 = v9 / 0x2710;
    v38 = v6 / 0x2710;
    v39 = v5 / 0x2710;
    v40 = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      PsQueryStatisticsProcess(BugCheckParameter1, v21);
      ProcessHandleCount = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v10 = -1;
      v11 = -1;
      v28 = *(_QWORD *)(BugCheckParameter1 + 1264) << 12;
      v29 = *(_QWORD *)(BugCheckParameter1 + 1272) << 12;
      v12 = -1;
      if ( v23 < 0xFFFFFFFFLL )
        v12 = v23;
      v31 = v12;
      v13 = -1;
      if ( v24 < 0xFFFFFFFFLL )
        v13 = v24;
      v32 = v13;
      if ( v25 / 1024 < 0xFFFFFFFFLL )
        v11 = v25 / 1024;
      v33 = v11;
      if ( v26 / 1024 < 0xFFFFFFFFLL )
        v10 = v26 / 1024;
      v34 = v10;
      v30 = v22;
      EtwpWriteAppStateChangeWithStats();
      p_ProcessHandleCount = (unsigned int *)&ProcessHandleCount;
    }
    else
    {
      EtwpWriteAppStateChange();
      p_ProcessHandleCount = 0LL;
    }
    if ( TraceLoggingProviderEnabled(&stru_1404012D0, 0, 0x400000000000uLL) )
    {
      memset(PackageSize, 0, 0x198uLL);
      v15 = 0;
      v16 = 1;
      v18 = 0LL;
      v19 = 0LL;
      P = 0LL;
      if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v41);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
      EtwpQueryTokenPackageInfo(v17, PackageSize);
      ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 856), (unsigned __int64)v17);
      if ( v16 )
      {
        if ( *(_QWORD *)(BugCheckParameter1 + 1016)
          && (unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
        {
          EtwpQueryProcessCommandLine(BugCheckParameter1, &v19);
        }
        EtwpQueryProcessOtherInfo(BugCheckParameter1, &v18);
      }
      if ( v15 )
      {
        KiUnstackDetachProcess((__int64)v41, 0LL);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
      }
      EtwpWriteAppStateChangeSummary(
        BugCheckParameter1,
        v35,
        p_ProcessHandleCount,
        (__int64)PackageSize,
        &v18,
        (unsigned __int16 *)&v19);
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
}
