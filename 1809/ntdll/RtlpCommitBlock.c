/*
 * XREFs of RtlpCommitBlock @ 0x180060934
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001B82C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x180020328 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800214E4 (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceHeap @ 0x18008C1D4 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F5670 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801095C0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180060BEC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpHeapValidateProtection @ 0x180060C34 (RtlpHpHeapValidateProtection.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180061158 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     ZwAllocateVirtualMemory @ 0x1800A0600 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180105DCC (RtlpLogHeapExtendEvent.c)
 */

char __fastcall RtlpCommitBlock(char *BaseAddress, __int64 a2)
{
  ULONG Protect; // eax
  NTSTATUS v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v12; // r8
  ULONG_PTR v13; // rdx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+20h] BYREF
  PVOID BaseAddressa; // [rsp+60h] [rbp+30h] BYREF

  RtlpGetFreeBlockInsidePageBoundaries(BaseAddress, a2, &BaseAddressa, &RegionSize);
  if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                       RegionSize,
                       *((_QWORD *)BaseAddress + 72) - *((_QWORD *)BaseAddress + 83),
                       BaseAddress,
                       BaseAddress + 376) )
  {
    Protect = RtlpHpHeapValidateProtection(BaseAddress);
    v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
    if ( v5 >= 0 )
    {
      v6 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v7 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v7 = 2147353472LL;
      if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(BaseAddress, BaseAddressa, RegionSize, 8LL);
      *((_QWORD *)BaseAddress + 83) -= RegionSize;
      --*((_DWORD *)BaseAddress + 165);
      if ( RtlGetCurrentServiceSessionId() )
        v8 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v8 = 2147353472LL;
      if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v6 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapExtendEvent(
          (int)BaseAddress,
          (int)BaseAddressa,
          RegionSize,
          16 * *((_QWORD *)BaseAddress + 24),
          (HANDLE)*(unsigned __int8 *)v6);
      }
      v9 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v10 = 2147353482LL;
      if ( *(_BYTE *)v10 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapExtendEvent(
          (int)BaseAddress,
          (int)BaseAddressa,
          RegionSize,
          16 * *((_QWORD *)BaseAddress + 24),
          (HANDLE)*(unsigned __int8 *)v9);
      }
      ++*((_DWORD *)BaseAddress + 156);
      if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
        goto LABEL_13;
      v12 = (char *)BaseAddressa;
      v13 = RegionSize >> 2;
      if ( !(RegionSize >> 2) )
        goto LABEL_13;
      if ( ((unsigned __int8)BaseAddressa & 4) != 0 )
      {
        *(_DWORD *)BaseAddressa = -17891602;
        if ( !--v13 )
        {
LABEL_13:
          *(_BYTE *)(a2 + 10) &= 0x17u;
          return 1;
        }
        v12 += 4;
      }
      memset64(v12, 0xFEEEFEEEFEEEFEEEuLL, v13 >> 1);
      if ( (v13 & 1) != 0 )
        *(_DWORD *)&v12[4 * v13 - 4] = -17891602;
      goto LABEL_13;
    }
  }
  else
  {
    v5 = -1073741523;
  }
  ++*((_DWORD *)BaseAddress + 159);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
    v5,
    BaseAddress,
    BaseAddressa,
    RegionSize);
  return 0;
}
