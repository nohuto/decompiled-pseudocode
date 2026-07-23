/*
 * XREFs of VeAllocatePoolWithTagPriority @ 0x140925F50
 * Callers:
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     IovAllocateMdl @ 0x140924960 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x140924A60 (IovAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140929CF0 (VerifierIoSetCompletionRoutineEx.c)
 *     ViIrpAllocateLockedPacket @ 0x140931768 (ViIrpAllocateLockedPacket.c)
 *     ViRtlReplaceStringBuffer @ 0x140944C5C (ViRtlReplaceStringBuffer.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14000E140 (ExIsSpecialPoolAddress.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     ViGrowPoolAllocation @ 0x140926A34 (ViGrowPoolAllocation.c)
 *     ViPostPoolAllocation @ 0x140926ADC (ViPostPoolAllocation.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversGetVerifierData @ 0x1409359E8 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x14093607C (ViTargetIncrementCounter.c)
 *     VfAllocPoolNotification @ 0x140938DDC (VfAllocPoolNotification.c)
 *     VfFillAllocatedMemory @ 0x140938E18 (VfFillAllocatedMemory.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140939240 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140939444 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ExAllocatePoolSanityChecks @ 0x14094BC10 (ExAllocatePoolSanityChecks.c)
 */

PVOID __fastcall VeAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority,
        __int64 a5)
{
  _SLIST_HEADER *VerifierData; // r14
  __int64 v6; // r12
  int v7; // r15d
  POOL_TYPE v11; // esi
  int v13; // r13d
  __int64 v14; // rcx
  PSLIST_ENTRY v15; // rdi
  ULONG_PTR PoolWithTagPriority; // rbp
  __int64 v17; // rcx
  unsigned int v18; // r14d
  SIZE_T v19; // rax
  SIZE_T v20; // [rsp+30h] [rbp-38h]
  SIZE_T v21; // [rsp+38h] [rbp-30h]
  ULONG Taga; // [rsp+80h] [rbp+18h] BYREF

  Taga = Tag;
  VerifierData = 0LL;
  v6 = a5;
  v7 = 0;
  v11 = PoolType;
  if ( (MiFlags & 2) != 0 )
  {
    if ( (PoolType & 0x80u) == 0 )
    {
      v11 = PoolType | 0x80;
    }
    else
    {
      v7 = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(a5);
      if ( !VerifierData )
        return ExAllocatePoolWithTagPriority(v11, NumberOfBytes, Tag, Priority);
    }
  }
  ExAllocatePoolSanityChecks((unsigned int)v11, NumberOfBytes, &Taga, v6);
  v13 = 0;
  if ( !NumberOfBytes && (unsigned int)VfVerifyMode <= 1 )
  {
    NumberOfBytes = 1LL;
    v13 = 1;
  }
  v20 = NumberOfBytes;
  v21 = NumberOfBytes;
  _InterlockedIncrement(&dword_14041BA70);
  if ( (v11 & 2) != 0 )
  {
    if ( (MmVerifierData & 8) != 0 && (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      VerifierBugCheckIfAppropriate(0xC2u, 0x9AuLL, (int)v11 & 0xFFFFFFFFFFFFFF7FuLL, NumberOfBytes, Taga);
  }
  else if ( (MmVerifierData & 4) != 0 )
  {
    if ( !v7 )
    {
      v7 = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v6);
    }
    if ( VerifierData )
    {
      v14 = Taga;
      LODWORD(v14) = Taga & 0x7FFFFFFF;
      if ( (unsigned int)VfFaultsInjectPoolAllocationFailure(v14) )
      {
        VfAllocPoolNotification(0LL, NumberOfBytes);
LABEL_38:
        if ( (v11 & 0x10) != 0 )
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
  v15 = 0LL;
  if ( (MmVerifierData & 8) != 0 && (v11 & 0x20) == 0 )
  {
    if ( !v7 )
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v6);
    if ( VerifierData && NumberOfBytes + 8 >= NumberOfBytes )
    {
      v15 = RtlpInterlockedPopEntrySList(VerifierData + 5);
      if ( v15 || (v15 = (PSLIST_ENTRY)ViGrowPoolAllocation(VerifierData)) != 0LL )
      {
        NumberOfBytes += 8LL;
        v11 |= 0x40u;
      }
    }
    else
    {
      ++dword_14041BA98;
    }
  }
  PoolWithTagPriority = (ULONG_PTR)ExAllocatePoolWithTagPriority(v11, NumberOfBytes, Taga, Priority);
  if ( !PoolWithTagPriority )
  {
    ++dword_14041BA88;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(v6, 160LL);
    VfAllocPoolNotification(0LL, NumberOfBytes);
    if ( v15 )
      RtlpInterlockedPushEntrySList(VerifierData + 5, v15);
    goto LABEL_38;
  }
  if ( v13 )
  {
    v17 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckWorkaroundLogIndex, 1u) + 1) & 0xF);
    *((_DWORD *)&ViBugcheckWorkaroundLog + 2 * v17) = 1;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v17 + 1) = v6;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v17 + 2) = PoolWithTagPriority;
  }
  v18 = 0;
  _InterlockedIncrement(&dword_14041BA74);
  if ( (unsigned int)ExIsSpecialPoolAddress(PoolWithTagPriority) == 1 )
  {
    v18 = 1;
LABEL_46:
    _InterlockedIncrement(&dword_14041BA78);
    goto LABEL_47;
  }
  if ( NumberOfBytes > 0xFE0 )
    goto LABEL_46;
LABEL_47:
  if ( v15 )
  {
    *((_QWORD *)&v15->Next + 1) = v6;
    v15->Next = (_SLIST_ENTRY *)(PoolWithTagPriority | v18);
    v19 = v20;
    if ( !v18 )
      v19 = NumberOfBytes;
    v15[1].Next = (_SLIST_ENTRY *)v19;
    *((_QWORD *)&v15[1].Next + 1) = Taga;
    PoolWithTagPriority = ViPostPoolAllocation(v15, (unsigned int)v11);
  }
  VfAllocPoolNotification(PoolWithTagPriority, v21);
  if ( v15 && !v18 )
    VfFillAllocatedMemory((void *)PoolWithTagPriority);
  return (PVOID)PoolWithTagPriority;
}
