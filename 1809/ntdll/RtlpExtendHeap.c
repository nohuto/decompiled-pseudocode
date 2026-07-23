/*
 * XREFs of RtlpExtendHeap @ 0x18001CBEC
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001B82C (RtlpCoalesceFreeBlocks.c)
 *     RtlpInsertFreeBlock @ 0x18001C380 (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     RtlpGetHeapProtection @ 0x180060908 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180060BEC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800611AC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeHeapSegment @ 0x1800617A8 (RtlpInitializeHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x18008C1D4 (RtlpCoalesceHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A0600 (ZwAllocateVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x180103F14 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180105DCC (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendHeap(unsigned __int64 *BaseAddress, unsigned __int64 a2)
{
  _BYTE *v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  int v7; // edx
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  ULONG_PTR v12; // rax
  ULONG Protect; // r15d
  NTSTATUS v14; // ecx
  ULONG_PTR v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  NTSTATUS v19; // esi
  int v20; // r9d
  char v21; // al
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  ULONG_PTR v30; // rax
  __int64 v31; // rax
  ULONG_PTR v32[2]; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddressa; // [rsp+98h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR v35; // [rsp+A8h] [rbp+58h] BYREF

  v35 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(BaseAddress, &v35);
  if ( v5 )
  {
    v35 >>= 4;
    v6 = RtlpCoalesceFreeBlocks(BaseAddress, v5, &v35, 0);
    RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v6, v35);
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v7 = *(_DWORD *)(v6 + 8) ^ *((_DWORD *)BaseAddress + 34);
      *(_DWORD *)(v6 + 8) = v7;
      if ( HIBYTE(v7) != ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v6);
    }
    return v6;
  }
  if ( (BaseAddress[14] & 2) == 0 )
    goto LABEL_37;
  BaseAddressa = 0LL;
  v9 = a2 + 0x2000;
  v10 = a2 + 0x2000;
  if ( a2 + 0x2000 <= BaseAddress[20] )
    v10 = BaseAddress[20];
  if ( *((_BYTE *)BaseAddress + 418) == 2 )
    v11 = BaseAddress[51];
  else
    v11 = 0LL;
  if ( !v11 && v10 >= 0x3F4000 )
    *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
  v12 = (v10 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v12 >= 0xFD0000 )
    v12 = 16580608LL;
  RegionSize = v12;
  Protect = RtlpGetHeapProtection(BaseAddress, 1LL);
  v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect);
  if ( v14 < 0 )
  {
    while ( 1 )
    {
      v15 = RegionSize;
      if ( RegionSize == v9 )
        break;
      v30 = RegionSize >> 1;
      if ( RegionSize >> 1 < v9 )
        v30 = a2 + 0x2000;
      RegionSize = v30;
      v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect);
      if ( v14 >= 0 )
      {
        v15 = RegionSize;
        break;
      }
    }
    if ( v14 < 0 )
    {
      ++*((_DWORD *)BaseAddress + 158);
      goto LABEL_37;
    }
  }
  else
  {
    v15 = RegionSize;
  }
  BaseAddress[20] += v15;
  v16 = a2 + 4096;
  if ( a2 + 4096 <= BaseAddress[21] )
    v16 = BaseAddress[21];
  v17 = BaseAddress[72] - BaseAddress[83];
  v32[0] = (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v32[0], v17, BaseAddress, BaseAddress + 47) )
  {
    v19 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, v32, 0x1000u, Protect);
    if ( v19 >= 0 )
    {
      v21 = RtlpInitializeHeapSegment(
              (int)BaseAddress,
              (int)BaseAddressa,
              112,
              v20,
              2,
              (__int64)BaseAddressa,
              (char *)BaseAddressa + v32[0],
              (__int64)BaseAddressa + RegionSize - 4096);
      v18 = 3221225495LL;
      if ( !v21 )
        v19 = -1073741801;
      if ( v19 >= 0 )
      {
        v22 = 2147353472LL;
        if ( RtlGetCurrentServiceSessionId() )
          v23 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v23 = 2147353472LL;
        if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapCommit(BaseAddress, BaseAddressa, v32[0], 4LL);
          if ( RtlGetCurrentServiceSessionId() )
            v22 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapExtendEvent(
            (int)BaseAddress,
            *((_QWORD *)BaseAddressa + 8),
            v32[0],
            16 * BaseAddress[24],
            (HANDLE)*(unsigned __int8 *)v22);
        }
        v24 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v25 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v25 = 2147353482LL;
        if ( *(_BYTE *)v25 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v24 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapExtendEvent(
            (int)BaseAddress,
            *((_QWORD *)BaseAddressa + 8),
            v32[0],
            16 * BaseAddress[24],
            (HANDLE)*(unsigned __int8 *)v24);
        }
        if ( RtlGetCurrentServiceSessionId() )
          v27 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v27 = 2147353480LL;
        if ( *(_BYTE *)v27 )
          RtlpHeapLogRangeReserve(BaseAddress, BaseAddressa, RegionSize, v26);
        v28 = *((_QWORD *)BaseAddressa + 8);
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v29 = *(_DWORD *)(v28 + 8) ^ *((_DWORD *)BaseAddress + 34);
          *(_DWORD *)(v28 + 8) = v29;
          if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
            RtlpAnalyzeHeapFailure(BaseAddress, v28);
        }
        return *((_QWORD *)BaseAddressa + 8);
      }
    }
  }
  RtlpSecMemFreeVirtualMemory(v18, &BaseAddressa, &RegionSize, 0x8000LL);
LABEL_37:
  if ( *((char *)BaseAddress + 112) < 0 )
  {
    v31 = RtlpCoalesceHeap(BaseAddress);
    v4 = (_BYTE *)v31;
    if ( v31 )
    {
      if ( *(unsigned __int16 *)(v31 + 8) >= a2 )
        return v31;
    }
  }
  v6 = 0LL;
  if ( v4 && *((_DWORD *)BaseAddress + 31) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *((_DWORD *)BaseAddress + 34);
  }
  return v6;
}
