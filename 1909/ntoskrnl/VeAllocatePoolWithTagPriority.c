/*
 * XREFs of VeAllocatePoolWithTagPriority @ 0x140971F50
 * Callers:
 *     ExAllocateHeapPool @ 0x140037CE0 (ExAllocateHeapPool.c)
 *     IovAllocateMdl @ 0x140962AC0 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x140962BC0 (IovAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140967370 (VerifierIoSetCompletionRoutineEx.c)
 *     ViIrpAllocateLockedPacket @ 0x14096EFF0 (ViIrpAllocateLockedPacket.c)
 *     VerifierExAllocatePoolWithTag @ 0x140972660 (VerifierExAllocatePoolWithTag.c)
 *     ViRtlReplaceStringBuffer @ 0x14098362C (ViRtlReplaceStringBuffer.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x140037BB0 (ExAllocatePoolWithTagPriority.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     MmKernelVerifierEnabled @ 0x1402BF234 (MmKernelVerifierEnabled.c)
 *     ExIsSpecialPoolAddress @ 0x14033ECB4 (ExIsSpecialPoolAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     ViGrowPoolAllocation @ 0x140972AA4 (ViGrowPoolAllocation.c)
 *     ViPostPoolAllocation @ 0x140972B4C (ViPostPoolAllocation.c)
 *     VfTargetDriversGetVerifierData @ 0x140973FBC (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140979B58 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140979D5C (VfFaultsIsSystemSufficientlyBooted.c)
 *     VfAllocPoolNotification @ 0x14097D2F0 (VfAllocPoolNotification.c)
 *     VfFillAllocatedMemory @ 0x14097D32C (VfFillAllocatedMemory.c)
 *     ExAllocatePoolSanityChecks @ 0x14098A60C (ExAllocatePoolSanityChecks.c)
 */

PVOID __fastcall VeAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        ULONG_PTR BugCheckParameter3,
        ULONG Tag,
        EX_POOL_PRIORITY Priority,
        __int64 a5)
{
  _SLIST_HEADER *VerifierData; // r14
  int v10; // r15d
  int v11; // eax
  __int64 v12; // r12
  int v14; // r13d
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rsi
  ULONG_PTR PoolWithTagPriority; // rbp
  __int64 v18; // rcx
  unsigned int v19; // r14d
  ULONG_PTR v20; // rax
  ULONG_PTR v21; // [rsp+30h] [rbp-38h]
  ULONG_PTR v22; // [rsp+38h] [rbp-30h]
  ULONG Taga; // [rsp+80h] [rbp+18h] BYREF

  Taga = Tag;
  VerifierData = 0LL;
  v10 = 0;
  v11 = MmKernelVerifierEnabled();
  v12 = a5;
  if ( v11 )
  {
    if ( (PoolType & 0x80u) == 0 )
    {
      PoolType |= 0x80u;
    }
    else
    {
      v10 = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(a5);
      if ( !VerifierData )
        return ExAllocatePoolWithTagPriority(PoolType, BugCheckParameter3, Tag, Priority);
    }
  }
  ExAllocatePoolSanityChecks((unsigned int)PoolType, BugCheckParameter3, &Taga, v12);
  v14 = 0;
  if ( !BugCheckParameter3 && (unsigned int)VfVerifyMode <= 1 )
  {
    BugCheckParameter3 = 1LL;
    v14 = 1;
  }
  v21 = BugCheckParameter3;
  v22 = BugCheckParameter3;
  _InterlockedIncrement(&dword_140446330);
  if ( (PoolType & 2) != 0 )
  {
    if ( (MmVerifierData & 8) != 0 && (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      VerifierBugCheckIfAppropriate(0xC2u, 0x9AuLL, (int)PoolType & 0xFFFFFFFFFFFFFF7FuLL, BugCheckParameter3, Taga);
  }
  else if ( (MmVerifierData & 4) != 0 )
  {
    if ( !v10 )
    {
      v10 = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v12);
    }
    if ( VerifierData )
    {
      v15 = Taga;
      LODWORD(v15) = Taga & 0x7FFFFFFF;
      if ( (unsigned int)VfFaultsInjectPoolAllocationFailure(v15) )
      {
        VfAllocPoolNotification(0LL, BugCheckParameter3);
LABEL_38:
        if ( (PoolType & 0x10) != 0 )
          RtlRaiseStatus(-1073741670);
        return 0LL;
      }
    }
  }
  if ( (Priority & 9) == 0 && (MmVerifierData & 1) != 0 )
  {
    if ( MmSpecialPoolCatchOverruns == 1 )
      Priority |= 8u;
    else
      Priority |= 9u;
  }
  v16 = 0LL;
  if ( (MmVerifierData & 8) != 0 && (PoolType & 0x20) == 0 )
  {
    if ( !v10 )
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v12);
    if ( VerifierData && BugCheckParameter3 + 8 >= BugCheckParameter3 )
    {
      v16 = RtlpInterlockedPopEntrySList(VerifierData + 5);
      if ( v16 || (v16 = (PSLIST_ENTRY)ViGrowPoolAllocation(VerifierData)) != 0LL )
      {
        BugCheckParameter3 += 8LL;
        PoolType |= 0x40u;
      }
    }
    else
    {
      ++dword_140446358;
    }
  }
  PoolWithTagPriority = (ULONG_PTR)ExAllocatePoolWithTagPriority(PoolType, BugCheckParameter3, Taga, Priority);
  if ( !PoolWithTagPriority )
  {
    ++dword_140446348;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(v12, 160LL);
    VfAllocPoolNotification(0LL, BugCheckParameter3);
    if ( v16 )
      RtlpInterlockedPushEntrySList(VerifierData + 5, v16);
    goto LABEL_38;
  }
  if ( v14 )
  {
    v18 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckWorkaroundLogIndex, 1u) + 1) & 0xF);
    *((_DWORD *)&ViBugcheckWorkaroundLog + 2 * v18) = 1;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v18 + 1) = v12;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v18 + 2) = PoolWithTagPriority;
  }
  v19 = 0;
  _InterlockedIncrement(&dword_140446334);
  if ( (unsigned int)ExIsSpecialPoolAddress(PoolWithTagPriority) == 1 )
  {
    v19 = 1;
LABEL_46:
    _InterlockedIncrement(&dword_140446338);
    goto LABEL_47;
  }
  if ( BugCheckParameter3 > 0xFE0 )
    goto LABEL_46;
LABEL_47:
  if ( v16 )
  {
    *((_QWORD *)&v16->Next + 1) = v12;
    v16->Next = (_SLIST_ENTRY *)(PoolWithTagPriority | v19);
    v20 = v21;
    if ( !v19 )
      v20 = BugCheckParameter3;
    v16[1].Next = (_SLIST_ENTRY *)v20;
    *((_QWORD *)&v16[1].Next + 1) = Taga;
    PoolWithTagPriority = ViPostPoolAllocation(v16, (unsigned int)PoolType);
  }
  VfAllocPoolNotification(PoolWithTagPriority, v22);
  if ( v16 && !v19 )
    VfFillAllocatedMemory((void *)PoolWithTagPriority);
  return (PVOID)PoolWithTagPriority;
}
