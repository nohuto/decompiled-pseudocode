/*
 * XREFs of EtwTraceAppStateChange @ 0x1405B2C80
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x1405B1974 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1405B170C (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteAppStateChange @ 0x1405B18E4 (EtwpWriteAppStateChange.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B2694 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1405B38C0 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     ObGetProcessHandleCount @ 0x1405B3960 (ObGetProcessHandleCount.c)
 *     PsReferencePrimaryToken @ 0x1405DD640 (PsReferencePrimaryToken.c)
 *     PsQueryStatisticsProcess @ 0x1405FE700 (PsQueryStatisticsProcess.c)
 *     EtwpInitStateChangeInfo @ 0x14060DB80 (EtwpInitStateChangeInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14066C858 (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x14066C9EC (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x14066CD4C (EtwpQueryTokenPackageInfo.c)
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
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  _BYTE v22[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  int ProcessHandleCount; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+B4h] [rbp-4Ch]
  __int64 v30; // [rsp+BCh] [rbp-44h]
  __int64 v31; // [rsp+C4h] [rbp-3Ch]
  int v32; // [rsp+CCh] [rbp-34h]
  int v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D4h] [rbp-2Ch]
  int v35; // [rsp+D8h] [rbp-28h]
  char v36[41]; // [rsp+DCh] [rbp-24h] BYREF
  unsigned __int64 v37; // [rsp+105h] [rbp+5h]
  unsigned __int64 v38; // [rsp+10Dh] [rbp+Dh]
  unsigned __int64 v39; // [rsp+115h] [rbp+15h]
  unsigned __int64 v40; // [rsp+11Dh] [rbp+1Dh]
  unsigned __int64 v41; // [rsp+125h] [rbp+25h]
  _BYTE v42[48]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v43[416]; // [rsp+170h] [rbp+70h] BYREF

  if ( TraceLoggingProviderEnabled(&stru_140400308, 0, 0x600000000001uLL) )
  {
    EtwpInitStateChangeInfo(BugCheckParameter1, v36);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - *(_QWORD *)(BugCheckParameter1 + 1872);
    v7 = *(_BYTE *)(a2 + 52);
    v36[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v36[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    v37 = v8 / 0x2710;
    v38 = v9 / 0x2710;
    v39 = v6 / 0x2710;
    v40 = v5 / 0x2710;
    v41 = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      PsQueryStatisticsProcess(BugCheckParameter1, v22);
      ProcessHandleCount = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v10 = -1;
      v11 = -1;
      v29 = *(_QWORD *)(BugCheckParameter1 + 1264) << 12;
      v30 = *(_QWORD *)(BugCheckParameter1 + 1272) << 12;
      v12 = -1;
      if ( v24 < 0xFFFFFFFFLL )
        v12 = v24;
      v32 = v12;
      v13 = -1;
      if ( v25 < 0xFFFFFFFFLL )
        v13 = v25;
      v33 = v13;
      if ( v26 / 1024 < 0xFFFFFFFFLL )
        v11 = v26 / 1024;
      v34 = v11;
      if ( v27 / 1024 < 0xFFFFFFFFLL )
        v10 = v27 / 1024;
      v35 = v10;
      v31 = v23;
      EtwpWriteAppStateChangeWithStats();
      p_ProcessHandleCount = (unsigned int *)&ProcessHandleCount;
    }
    else
    {
      EtwpWriteAppStateChange();
      p_ProcessHandleCount = 0LL;
    }
    if ( TraceLoggingProviderEnabled(&stru_140400308, 0, 0x400000000000uLL) )
    {
      memset(v43, 0, 0x198uLL);
      v15 = 0;
      v18 = 0;
      v16 = 1;
      v19 = 0LL;
      v20 = 0LL;
      P = 0LL;
      if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v42);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
      EtwpQueryTokenPackageInfo(v17, v43, &v18);
      ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 856), (unsigned __int64)v17);
      if ( v16 )
      {
        if ( *(_QWORD *)(BugCheckParameter1 + 1016)
          && (unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
        {
          EtwpQueryProcessCommandLine(BugCheckParameter1, &v20);
        }
        EtwpQueryProcessOtherInfo(BugCheckParameter1, &v19);
      }
      if ( v15 )
      {
        KiUnstackDetachProcess((__int64)v42, 0LL);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
      }
      EtwpWriteAppStateChangeSummary(
        BugCheckParameter1,
        v36,
        p_ProcessHandleCount,
        (__int64)v43,
        &v19,
        (unsigned __int16 *)&v20);
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
}
