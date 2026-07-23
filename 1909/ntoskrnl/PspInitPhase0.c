/*
 * XREFs of PspInitPhase0 @ 0x140A04A98
 * Callers:
 *     PsInitSystem @ 0x1409FEE9C (PsInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     PsIumResumeAfterHibernate @ 0x14015E434 (PsIumResumeAfterHibernate.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14017AAF0 (KeRegisterBugCheckReasonCallback.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x14018BAEC (SeRegisterObjectTypeMandatoryPolicy.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018C9D0 (VslGetNestedPageProtectionFlags.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     strcpy_s @ 0x1401A6750 (strcpy_s.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140672580 (PsCreateSystemThread.c)
 *     ExCreateHandleTable @ 0x1406B7240 (ExCreateHandleTable.c)
 *     PspValidateMitigationAuditOptions @ 0x1406DB400 (PspValidateMitigationAuditOptions.c)
 *     PspValidateMitigationOptions @ 0x1406DBDE0 (PspValidateMitigationOptions.c)
 *     RtlRunOnceInitialize @ 0x14071B300 (RtlRunOnceInitialize.c)
 *     MmAllocateMappingAddress @ 0x140736640 (MmAllocateMappingAddress.c)
 *     PsChangeQuantumTable @ 0x140746DEC (PsChangeQuantumTable.c)
 *     ObCreateObjectType @ 0x14075E2F0 (ObCreateObjectType.c)
 *     PspCreateProcess @ 0x140787730 (PspCreateProcess.c)
 *     PspInitializeSiloStructures @ 0x140A03B50 (PspInitializeSiloStructures.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A1C2B8 (PspInitializeSystemPartitionPhase0.c)
 *     PspInitializeJobStructures @ 0x140A20B90 (PspInitializeJobStructures.c)
 */

char __fastcall PspInitPhase0(PVOID StartContext)
{
  char *v1; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  char v6; // cl
  int *v7; // r8
  __int64 v8; // r9
  int v9; // eax
  size_t v10; // rbx
  void *v11; // r11
  _RTL_RUN_ONCE *v12; // rcx
  _RTL_RUN_ONCE *v13; // rcx
  __int64 v14; // rax
  _RTL_RUN_ONCE *v15; // rcx
  _RTL_RUN_ONCE *v16; // rcx
  __int64 v17; // rax
  _RTL_RUN_ONCE *v18; // rcx
  _RTL_RUN_ONCE *v19; // rcx
  __int64 v20; // rax
  _KPROCESS *Process; // rcx
  __int64 *v22; // rdi
  int v23; // ebx
  HANDLE *v24; // rbx
  NTSTATUS v25; // eax
  PVOID v26; // rcx
  _QWORD *v27; // rcx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v30[16]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE ThreadHandle; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v34; // [rsp+100h] [rbp+0h] BYREF
  int v35; // [rsp+110h] [rbp+10h]
  char v36; // [rsp+114h] [rbp+14h] BYREF
  int v37; // [rsp+118h] [rbp+18h]
  char v38; // [rsp+11Ch] [rbp+1Ch]
  int v39; // [rsp+120h] [rbp+20h]
  char v40; // [rsp+124h] [rbp+24h]
  int v41; // [rsp+128h] [rbp+28h]
  char v42; // [rsp+12Ch] [rbp+2Ch]
  int v43; // [rsp+130h] [rbp+30h]
  char v44; // [rsp+134h] [rbp+34h]
  int v45; // [rsp+138h] [rbp+38h]
  char v46; // [rsp+13Ch] [rbp+3Ch]
  _OWORD v47[2]; // [rsp+140h] [rbp+40h] BYREF

  v1 = &v36;
  PspMinimumWorkingSet += 30LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  PspMaximumWorkingSet += 300LL;
  DestinationString.Buffer = 0LL;
  v35 = 0;
  v36 = 1;
  v38 = 3;
  v3 = 6LL;
  v39 = 3;
  v40 = 1;
  v41 = 1;
  v42 = 1;
  v44 = 1;
  v46 = 1;
  v37 = 2;
  v43 = 4;
  v45 = 5;
  v47[0] = _mm_load_si128((const __m128i *)&_xmm);
  PspHardenedMitigationOptionsMap[0] = 0LL;
  v47[1] = _mm_load_si128((const __m128i *)&_xmm);
  qword_140572A28 = 0LL;
  do
  {
    v4 = (unsigned int)(4 * *((_DWORD *)v1 - 1));
    v5 = (unsigned __int8)*v1;
    v6 = (4 * *(v1 - 4)) & 0x3F;
    v1 += 8;
    PspHardenedMitigationOptionsMap[v4 >> 6] = (v5 << v6) | PspHardenedMitigationOptionsMap[v4 >> 6] & ~(3LL << v6);
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)PspSystemMitigationOptionsLength < 0x10 )
    memset(
      (void *)(0x140000000LL + (unsigned int)PspSystemMitigationOptionsLength + 5711624LL),
      0,
      16LL - (unsigned int)PspSystemMitigationOptionsLength);
  PspSystemMitigationOptionsLength = 16;
  v33 = PspSystemMitigationOptions;
  if ( (int)PspValidateMitigationOptions((__m128i *)&v33, 1) < 0 )
    PspSystemMitigationOptions = 0uLL;
  v7 = (int *)v47;
  v8 = 8LL;
  do
  {
    v9 = *v7++;
    *((_QWORD *)&PspSystemMitigationOptions + ((unsigned __int64)(unsigned int)(4 * v9) >> 6)) &= ~(3LL << ((4 * v9) & 0x3F));
    --v8;
  }
  while ( v8 );
  v10 = (unsigned int)PspSystemMitigationAuditOptionsLength;
  if ( (unsigned int)PspSystemMitigationAuditOptionsLength < 0x10 )
    memset(
      (char *)&PspSystemMitigationAuditOptions + (unsigned int)PspSystemMitigationAuditOptionsLength,
      0,
      16LL - (unsigned int)PspSystemMitigationAuditOptionsLength);
  v34 = PspSystemMitigationAuditOptions;
  if ( (int)PspValidateMitigationAuditOptions(&v34) < 0 )
    memset(v11, 0, v10);
  v12 = &PspCreateThreadNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v12);
    v12 = v13 + 1;
  }
  while ( v14 != 1 );
  v15 = &PspCreateProcessNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v15);
    v15 = v16 + 1;
  }
  while ( v17 != 1 );
  v18 = &PspLoadImageNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v18);
    v18 = v19 + 1;
  }
  while ( v20 != 1 );
  PsChangeQuantumTable(0, PsRawPrioritySeparation);
  PspActiveProcessLock = 0LL;
  qword_140436B28 = (__int64)&PsActiveProcessHead;
  PsActiveProcessHead = (__int64)&PsActiveProcessHead;
  Process = KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  *(_QWORD *)&Process[1].Header.Lock = 0LL;
  ExInitializePushLock((PKSPIN_LOCK)&Process[1].ProfileListHead.Blink);
  *((_DWORD *)PsIdleProcess + 157) = 0;
  memset(v30, 0, 0x78uLL);
  LOWORD(v30[0]) = 120;
  *(_QWORD *)((char *)&v30[4] + 4) = 512LL;
  RtlInitUnicodeString(&DestinationString, L"Job");
  *(_QWORD *)((char *)v30 + 4) = 2048LL;
  v30[9] = PspJobDelete;
  HIDWORD(v30[5]) = 1568;
  v30[8] = PspJobClose;
  HIDWORD(v30[3]) = 2031679;
  BYTE2(v30[0]) = BYTE2(v30[0]) & 0x77 | 8;
  *(_OWORD *)((char *)&v30[1] + 4) = PspJobMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsJobType) >= 0
    && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsJobType, 1) >= 0 )
  {
    LODWORD(v30[1]) = 176;
    RtlInitUnicodeString(&DestinationString, L"Process");
    BYTE2(v30[0]) |= 0xC2u;
    v30[9] = PspProcessDelete;
    HIDWORD(v30[0]) = 32;
    v30[7] = PspProcessOpen;
    v30[5] = 0x88000001000LL;
    v30[8] = PspProcessClose;
    HIDWORD(v30[3]) = 0x1FFFFF;
    LODWORD(v30[4]) = 1052672;
    *(_OWORD *)((char *)&v30[1] + 4) = PspProcessMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsProcessType) >= 0
      && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsProcessType, 3) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread");
      BYTE2(v30[0]) |= 0x80u;
      v30[9] = PspThreadDelete;
      HIDWORD(v30[0]) = 4;
      v30[7] = PspThreadOpen;
      v30[5] = 0x82000000000LL;
      v30[8] = 0LL;
      HIDWORD(v30[3]) = 0x1FFFFF;
      LODWORD(v30[4]) = 1054720;
      *(_OWORD *)((char *)&v30[1] + 4) = PspThreadMapping;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsThreadType) >= 0
        && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsThreadType, 3) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Partition");
        memset(v30, 0, 0x78uLL);
        BYTE2(v30[0]) |= 0xCu;
        v30[7] = PspOpenPartitionHandle;
        LOWORD(v30[0]) = 120;
        v30[8] = PspClosePartitionHandle;
        LODWORD(v30[1]) = 16;
        v30[9] = PspDeletePartition;
        HIDWORD(v30[3]) = 2031619;
        HIDWORD(v30[4]) = 512;
        *(_OWORD *)((char *)&v30[1] + 4) = PspPartitionMapping;
        HIDWORD(v30[5]) = 128;
        if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsPartitionType) >= 0 )
        {
          memset(v30, 0, 0x78uLL);
          LOWORD(v30[0]) = 120;
          HIDWORD(v30[4]) = 512;
          BYTE2(v30[0]) = BYTE2(v30[0]) & 0x7D | 2;
          v22 = PspMemoryReserveObjectSizes;
          LODWORD(v30[1]) = 176;
          v23 = 0;
          *(_OWORD *)((char *)&v30[1] + 4) = PspMemReserveMapping;
          HIDWORD(v30[3]) = 983043;
          do
          {
            HIDWORD(v30[5]) = *(_DWORD *)v22;
            if ( (int)ObCreateObjectType(
                        (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v23],
                        (__int64)v30,
                        0LL,
                        (__int64)(&PspMemoryReserveObjectTypes + v23)) < 0 )
              return 0;
            ++v23;
            ++v22;
          }
          while ( v23 < 2 );
          RtlInitUnicodeString(&DestinationString, L"ActivityReference");
          memset(v30, 0, 0x78uLL);
          BYTE2(v30[0]) |= 4u;
          LOWORD(v30[0]) = 120;
          *(_QWORD *)((char *)&v30[4] + 4) = 0x800000001LL;
          LODWORD(v30[1]) = 402;
          *(_OWORD *)((char *)&v30[1] + 4) = PspActivityReferenceMapping;
          HIDWORD(v30[3]) = 2031616;
          v30[8] = PspCloseActivityReference;
          if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PspActivityReferenceObjectType) >= 0 )
          {
            if ( (unsigned __int8)PspInitializeJobStructures() )
            {
              if ( PspInitializeSiloStructures() )
              {
                qword_14042BDB0 = 0LL;
                qword_14042BDA8 = (__int64)&PspWorkingSetChangeHead;
                PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
                PspAffinityUpdateLock = 0LL;
                PspCidTable = ExCreateHandleTable(0LL, 0LL);
                if ( PspCidTable )
                {
                  RtlRunOnceInitialize(&PsWin32CallBack);
                  RtlRunOnceInitialize(&PsWin32NullCallBack);
                  *(_BYTE *)(PspCidTable + 44) |= 1u;
                  qword_140436BB0 = (__int64)PspReaper;
                  qword_140436B50 = (__int64)PspProcessRundownWorker;
                  PspProcessRundownCacheWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspProcessRundownWorkerSingle;
                  PsReaperListHead = 0LL;
                  qword_140436BB8 = 0LL;
                  PsReaperWorkItem = 0LL;
                  qword_140436B58 = 0LL;
                  PspProcessRundownWorkItem = 0LL;
                  PspProcessRundownCacheWorkItem.Parameter = 0LL;
                  PspProcessRundownCacheWorkItem.List.Flink = 0LL;
                  PspBootAccessToken = (PVOID)(*((_QWORD *)PsIdleProcess + 108) & 0xFFFFFFFFFFFFFFF0uLL);
                  if ( (int)PspInitializeSystemPartitionPhase0() >= 0 )
                  {
                    v24 = (HANDLE *)PspSystemPartition;
                    if ( PspCreateProcess((__int64)PspSystemPartition + 112, 0x1FFFFF, 0LL, 0LL, 0, 0, 0LL, 0LL, 0LL) >= 0 )
                    {
                      v25 = ObReferenceObjectByHandle(v24[14], 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
                      v26 = Object;
                      v24[13] = Object;
                      if ( v25 >= 0 )
                      {
                        PsInitialSystemProcess = (PEPROCESS)v26;
                        _InterlockedOr((volatile signed __int32 *)v26 + 532, 0x40000000u);
                        _InterlockedOr((volatile signed __int32 *)&PsInitialSystemProcess[2].Spare2[11], 0x2000u);
                        _InterlockedOr(
                          (volatile signed __int32 *)&PsInitialSystemProcess[2].ActiveProcessors.Bitmap[4] + 1,
                          0x1000u);
                        strcpy_s((char *)PsIdleProcess + 1104, 0xFuLL, "Idle");
                        strcpy_s((char *)&PsInitialSystemProcess[1].ActiveProcessors.Bitmap[11], 0xFuLL, "System");
                        PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14] = (unsigned __int64)ExAllocatePoolWithTag(
                                                                                                    NonPagedPoolNx,
                                                                                                    0x10uLL,
                                                                                                    0x61506553u);
                        v27 = (_QWORD *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14];
                        if ( v27 )
                        {
                          *v27 = 0LL;
                          v27[1] = 0LL;
                          if ( PsCreateSystemThread(
                                 &ThreadHandle,
                                 0x1FFFFFu,
                                 0LL,
                                 0LL,
                                 0LL,
                                 (PKSTART_ROUTINE)Phase1Initialization,
                                 StartContext) >= 0 )
                          {
                            ObCloseHandle(ThreadHandle, 0);
                            if ( !VslVsmEnabled )
                              return 1;
                            PspIumWorkItem.Parameter = 0LL;
                            PspIumWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspIumWorker;
                            PspIumWorkItem.List.Flink = 0LL;
                            PspIumFreeMapping = MmAllocateMappingAddress(0x1000uLL, 0x466D7356u);
                            if ( PspIumFreeMapping )
                            {
                              PspIumLogBuffer = MmAllocateIndependentPagesEx(
                                                  0x2000uLL,
                                                  -1,
                                                  (_QWORD *)0xFFFFFFFFFFFFFFFFLL,
                                                  1u);
                              PsIumResumeAfterHibernate();
                              if ( (VslGetNestedPageProtectionFlags() & 0x40) != 0 )
                                *(_QWORD *)&PspSystemMitigationOptions = PspSystemMitigationOptions & 0xFFFFFF0FFFFFFFFFuLL | 0x5000000000LL;
                              if ( PspIumLogBuffer )
                              {
                                PspVsmLogCallbackRecord.State = 0;
                                KeRegisterBugCheckReasonCallback(
                                  &PspVsmLogCallbackRecord,
                                  (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PspVsmLogBugCheckCallback,
                                  KbCallbackSecondaryDumpData,
                                  (PUCHAR)"SecureKernelFailureLog");
                              }
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
