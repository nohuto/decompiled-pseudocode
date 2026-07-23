/*
 * XREFs of EtwTraceAppStateChange @ 0x140634190
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x1406356F4 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     TraceLoggingProviderEnabled @ 0x14008A644 (TraceLoggingProviderEnabled.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     PsQueryStatisticsProcess @ 0x140611F40 (PsQueryStatisticsProcess.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140634D1C (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140637274 (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpInitStateChangeInfo @ 0x14063FB6C (EtwpInitStateChangeInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x140690FC0 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14069114C (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14069118C (EtwpQueryProcessCommandLine.c)
 *     ObGetProcessHandleCount @ 0x1406CD780 (ObGetProcessHandleCount.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406D5A64 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x1406E64C4 (EtwpWriteAppStateChange.c)
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
  _DWORD *v14; // r15
  char v15; // r14
  char v16; // si
  PACCESS_TOKEN v17; // rbx
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  _QWORD v21[12]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v22[11]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v23[100]; // [rsp+DCh] [rbp-24h] BYREF
  _BYTE v24[48]; // [rsp+140h] [rbp+40h] BYREF
  ULONG_PTR PackageSize[52]; // [rsp+170h] [rbp+70h] BYREF

  memset(v23, 0, 0x62uLL);
  memset(v22, 0, sizeof(v22));
  if ( TraceLoggingProviderEnabled(&stru_140426650, 0, 0x600000000001uLL) )
  {
    EtwpInitStateChangeInfo(BugCheckParameter1, v23);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - *(_QWORD *)(BugCheckParameter1 + 1920);
    v7 = *(_BYTE *)(a2 + 52);
    v23[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v23[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    *(_QWORD *)&v23[41] = v8 / 0x2710;
    *(_QWORD *)&v23[49] = v9 / 0x2710;
    *(_QWORD *)&v23[57] = v6 / 0x2710;
    *(_QWORD *)&v23[65] = v5 / 0x2710;
    *(_QWORD *)&v23[73] = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      memset(v21, 0, 0x58uLL);
      PsQueryStatisticsProcess(BugCheckParameter1, v21);
      v22[0] = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v10 = -1;
      v11 = -1;
      *(_QWORD *)&v22[1] = *(_QWORD *)(BugCheckParameter1 + 1264) << 12;
      *(_QWORD *)&v22[3] = *(_QWORD *)(BugCheckParameter1 + 1272) << 12;
      v12 = -1;
      if ( v21[5] < 0xFFFFFFFFLL )
        v12 = v21[5];
      v22[7] = v12;
      v13 = -1;
      if ( v21[6] < 0xFFFFFFFFLL )
        v13 = v21[6];
      v22[8] = v13;
      if ( v21[8] / 1024LL < 0xFFFFFFFFLL )
        v11 = v21[8] / 1024LL;
      v22[9] = v11;
      if ( v21[9] / 1024LL < 0xFFFFFFFFLL )
        v10 = v21[9] / 1024LL;
      v22[10] = v10;
      *(_QWORD *)&v22[5] = v21[3];
      EtwpWriteAppStateChangeWithStats(BugCheckParameter1, v23, v22, 1024LL);
      v14 = v22;
    }
    else
    {
      EtwpWriteAppStateChange(v23);
      LODWORD(v14) = 0;
    }
    if ( TraceLoggingProviderEnabled(&stru_140426650, 0, 0x400000000000uLL) )
    {
      memset(PackageSize, 0, 0x198uLL);
      v18 = 0LL;
      v19 = 0LL;
      P = 0LL;
      memset(v24, 0, sizeof(v24));
      v15 = 0;
      v16 = 1;
      if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v24);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
      EtwpQueryTokenPackageInfo(v17, PackageSize);
      ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 864), (unsigned __int64)v17);
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
        KiUnstackDetachProcess((struct _KTHREAD *)v24, 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
      }
      EtwpWriteAppStateChangeSummary(
        BugCheckParameter1,
        (unsigned int)v23,
        (_DWORD)v14,
        (unsigned int)PackageSize,
        (__int64)&v18,
        (__int64)&v19);
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
}
