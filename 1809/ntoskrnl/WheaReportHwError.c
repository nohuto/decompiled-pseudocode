/*
 * XREFs of WheaReportHwError @ 0x14031FF10
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     WheapAddToDumpFile @ 0x140320238 (WheapAddToDumpFile.c)
 *     WheapAllocErrorRecord @ 0x140320278 (WheapAllocErrorRecord.c)
 *     WheapApplyThresholdChecks @ 0x14032030C (WheapApplyThresholdChecks.c)
 *     WheapAttemptErrorRecovery @ 0x140320408 (WheapAttemptErrorRecovery.c)
 *     WheapCompressErrorRecord @ 0x1403204D4 (WheapCompressErrorRecord.c)
 *     WheapFreeErrorRecord @ 0x140320610 (WheapFreeErrorRecord.c)
 *     WheapGetErrorSource @ 0x140320644 (WheapGetErrorSource.c)
 *     WheapGenerateETWEvents @ 0x140321178 (WheapGenerateETWEvents.c)
 *     WheapWorkQueueAddItem @ 0x140321374 (WheapWorkQueueAddItem.c)
 */

__int64 __fastcall WheaReportHwError(__int64 a1)
{
  unsigned int v1; // r10d
  unsigned int v3; // ebp
  _QWORD *WheaInfo; // r13
  __int64 v5; // rcx
  __int64 ErrorSource; // rax
  unsigned int v7; // edx
  unsigned int v8; // r10d
  __int64 v9; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r9
  int v15; // r15d
  int v16; // ecx
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 == 3 )
    return 0LL;
  v3 = 0;
  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo || (v5 = WheaInfo[1]) == 0 || !*(_DWORD *)(v5 + 4) )
  {
    if ( v1 <= 1 )
      KeBugCheckEx(0x124u, *(int *)(a1 + 28), 0LL, 0LL, 0LL);
    return 0LL;
  }
  ErrorSource = WheapGetErrorSource(v5, *(unsigned int *)(a1 + 24));
  v9 = ErrorSource;
  if ( !ErrorSource )
  {
    if ( v8 <= 1 && (*(_BYTE *)(a1 + 12) & 1) == 0 )
      KeBugCheckEx(0x122u, 9uLL, *(int *)(a1 + 28), v7, 0LL);
    return 3221225664LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(ErrorSource + 24));
  if ( *(_DWORD *)(a1 + 20) == 2 && !(unsigned __int8)WheapApplyThresholdChecks(ErrorSource) )
    return 0LL;
  v11 = WheapAllocErrorRecord(v9, &v17);
  v12 = v11;
  if ( !v11 )
  {
    ++*(_DWORD *)(v9 + 16);
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
      KeBugCheckEx(0x122u, 0xAuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
    return 3221225626LL;
  }
  v13 = v9 + 89;
  v14 = (unsigned int)(v17 - 40);
  *(_DWORD *)(v11 + 24) ^= (*(_DWORD *)(v11 + 24) ^ (*(_DWORD *)(a1 + 12) >> 2)) & 4;
  *(_DWORD *)(v11 + 24) ^= ((unsigned __int8)*(_DWORD *)(v11 + 24) ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 8;
  v15 = (*((__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))&unk_1404DD180 + 6 * *(int *)(v9 + 40)))(
          v9 + 89,
          a1,
          v11 + 40,
          v14,
          *(_QWORD *)(v9 + 56));
  if ( v15 >= 0 )
  {
    if ( (*(_BYTE *)(v12 + 144) & 2) != 0 )
    {
      WheapCompressErrorRecord(3LL, v12 + 40);
      goto LABEL_24;
    }
    if ( !WheapPolicyIgnoreDummyWrite )
    {
      WheapCompressErrorRecord(0LL, v12 + 40);
      PshedWriteErrorRecord(1LL, *(unsigned int *)(v12 + 60), v12 + 40);
    }
    v16 = *(_DWORD *)(a1 + 20);
    if ( v16 == 1 )
    {
      PshedFinalizeErrorRecord(v12 + 40, v13);
      WheapCompressErrorRecord(3LL, v12 + 40);
    }
    else
    {
      if ( (unsigned int)(v16 - 2) <= 1 )
      {
        PshedFinalizeErrorRecord(v12 + 40, v13);
        WheapCompressErrorRecord(3LL, v12 + 40);
LABEL_39:
        WheapWorkQueueAddItem(WheaInfo[2], v12);
        return v3;
      }
      if ( v16 )
      {
        WheapFreeErrorRecord(v12);
        return (unsigned int)-1073741811;
      }
      PshedFinalizeErrorRecord(v12 + 40, v13);
      WheapAttemptErrorRecovery(v12 + 40);
      WheapCompressErrorRecord(3LL, v12 + 40);
      if ( *(_DWORD *)(v12 + 52) == 2 )
      {
        *(_DWORD *)(v12 + 144) |= 1u;
LABEL_24:
        if ( (*(_DWORD *)(v12 + 24) & 1) != 0 )
        {
          if ( WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey == 1 )
            WheapGenerateETWEvents(v12 + 40);
          WheapFreeErrorRecord(v12);
          return v3;
        }
        goto LABEL_39;
      }
    }
    PshedWriteErrorRecord(0LL, *(unsigned int *)(v12 + 60), v12 + 40);
    WheapAddToDumpFile(v12 + 40, *(unsigned int *)(v12 + 60));
    PshedBugCheckSystem(v13, v12 + 40);
    return v3;
  }
  if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
    KeBugCheckEx(0x122u, 0xBuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
  WheapFreeErrorRecord(v12);
  return (unsigned int)v15;
}
