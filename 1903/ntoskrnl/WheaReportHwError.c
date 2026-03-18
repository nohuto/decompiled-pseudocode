/*
 * XREFs of WheaReportHwError @ 0x14033FCD0
 * Callers:
 *     WheaReportHwErrorDeviceDriver @ 0x140340A70 (WheaReportHwErrorDeviceDriver.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WheapAddToDumpFile @ 0x140340114 (WheapAddToDumpFile.c)
 *     WheapAllocErrorRecord @ 0x140340154 (WheapAllocErrorRecord.c)
 *     WheapApplyThresholdChecks @ 0x1403401E8 (WheapApplyThresholdChecks.c)
 *     WheapAttemptErrorRecovery @ 0x140340378 (WheapAttemptErrorRecovery.c)
 *     WheapCompressErrorRecord @ 0x1403404C0 (WheapCompressErrorRecord.c)
 *     WheapFillOutErrorRecord @ 0x1403405FC (WheapFillOutErrorRecord.c)
 *     WheapFreeErrorRecord @ 0x140340678 (WheapFreeErrorRecord.c)
 *     WheapGetErrorSource @ 0x14034069C (WheapGetErrorSource.c)
 *     WheapGenerateETWEvents @ 0x1403417E0 (WheapGenerateETWEvents.c)
 *     WheapWorkQueueAddItem @ 0x1403426E0 (WheapWorkQueueAddItem.c)
 */

__int64 __fastcall WheaReportHwError(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // esi
  char v4; // r12
  _QWORD *WheaInfo; // r13
  __int64 v6; // rcx
  __int64 ErrorSource; // rax
  unsigned int v8; // edx
  __int64 v9; // r15
  __int64 v11; // rax
  _DWORD *v12; // r14
  int v13; // eax
  int v14; // ecx
  int v15; // [rsp+38h] [rbp-29h] BYREF
  _QWORD Src[5]; // [rsp+40h] [rbp-21h] BYREF
  _DWORD v17[10]; // [rsp+68h] [rbp+7h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(Src, 0, sizeof(Src));
  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  v4 = 0;
  if ( v2 < 0 )
  {
    v2 &= ~0x80000000;
    v4 = 1;
    *(_DWORD *)(a1 + 20) = v2;
  }
  if ( v2 == 3 && !v4 )
    return 0LL;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_LogErrorRecords__private_propertyCache,
    18563351LL,
    (__int64)&Feature_LogErrorRecords_logged_traits,
    1u,
    3);
  if ( !v4 && *(_DWORD *)(a1 + 20) != 2 && (*(_BYTE *)(a1 + 12) & 1) == 0 )
  {
    Src[0] = 0x1674C6857LL;
    Src[1] = 40LL;
    Src[2] = 0x800000054C4E524BuLL;
    Src[3] = 0x800000008LL;
    Src[4] = a1;
    WheaLogInternalEvent(Src);
  }
  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo || (v6 = WheaInfo[1]) == 0 || !*(_DWORD *)(v6 + 4) )
  {
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
      KeBugCheckEx(0x124u, *(int *)(a1 + 28), 0LL, 0LL, 0LL);
    return 0LL;
  }
  ErrorSource = WheapGetErrorSource(v6, *(unsigned int *)(a1 + 24));
  v9 = ErrorSource;
  if ( !ErrorSource )
  {
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
      KeBugCheckEx(0x122u, 9uLL, *(int *)(a1 + 28), v8, 0LL);
    return 3221225664LL;
  }
  _InterlockedAdd((volatile signed __int32 *)(ErrorSource + 24), 1u);
  if ( *(_DWORD *)(a1 + 20) == 2 && (unsigned __int8)WheapApplyThresholdChecks(ErrorSource) )
  {
    v17[8] = *(_DWORD *)(a1 + 28);
    v17[9] = *(_DWORD *)(a1 + 24);
    v17[0] = 1733060695;
    v17[1] = 1;
    v17[2] = 40;
    v17[3] = 1;
    v17[5] = -2147483644;
    v17[4] = 1280201291;
    v17[6] = 2;
    v17[7] = 8;
    WheaLogInternalEvent(v17);
    return 0LL;
  }
  v11 = WheapAllocErrorRecord(v9, &v15);
  v12 = (_DWORD *)v11;
  if ( !v11 )
  {
    ++*(_DWORD *)(v9 + 16);
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x122u, 0xAuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
    return 3221225626LL;
  }
  *(_DWORD *)(v11 + 24) ^= (*(_DWORD *)(v11 + 24) ^ (*(_DWORD *)(a1 + 12) >> 2)) & 4;
  *(_DWORD *)(v11 + 24) ^= ((unsigned __int8)*(_DWORD *)(v11 + 24) ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 8;
  v15 = WheapFillOutErrorRecord((unsigned int)(v15 - 40), a1, v9, v11 + 40);
  if ( v15 >= 0 )
  {
    v13 = v12[36];
    if ( v4 )
    {
      v13 |= 8u;
      v12[36] = v13;
    }
    if ( (v13 & 2) != 0 )
    {
      WheapCompressErrorRecord(3LL, v12 + 10);
      goto LABEL_37;
    }
    if ( !WheapPolicyIgnoreDummyWrite && !v4 )
    {
      WheapCompressErrorRecord(0LL, v12 + 10);
      PshedWriteErrorRecord(1LL, (unsigned int)v12[15], v12 + 10);
    }
    v14 = *(_DWORD *)(a1 + 20);
    if ( v14 == 1 )
    {
      if ( !v4 )
      {
        PshedFinalizeErrorRecord(v12 + 10, v9 + 96);
        WheapCompressErrorRecord(3LL, v12 + 10);
LABEL_47:
        PshedWriteErrorRecord(0LL, (unsigned int)v12[15], v12 + 10);
        WheapAddToDumpFile(v12 + 10, (unsigned int)v12[15]);
        PshedBugCheckSystem(v9 + 96, v12 + 10);
        return v3;
      }
    }
    else if ( (unsigned int)(v14 - 2) > 1 )
    {
      if ( v14 )
      {
        WheapFreeErrorRecord(v12);
        return (unsigned int)-1073741811;
      }
      if ( !v4 )
      {
        PshedFinalizeErrorRecord(v12 + 10, v9 + 96);
        WheapAttemptErrorRecovery(v12 + 10);
        WheapCompressErrorRecord(3LL, v12 + 10);
        if ( v12[13] == 2 )
        {
          v12[36] |= 1u;
LABEL_37:
          if ( (v12[6] & 1) != 0 )
          {
            if ( WheapEventingInitialized == 1 )
              WheapGenerateETWEvents(v12 + 10);
            WheapFreeErrorRecord(v12);
            return v3;
          }
          goto LABEL_55;
        }
        goto LABEL_47;
      }
    }
    PshedFinalizeErrorRecord(v12 + 10, v9 + 96);
    WheapCompressErrorRecord(3LL, v12 + 10);
LABEL_55:
    WheapWorkQueueAddItem(WheaInfo[2], v12);
    return v3;
  }
  if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
    KeBugCheckEx(0x122u, 0xBuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
  WheapFreeErrorRecord(v12);
  return (unsigned int)v15;
}
