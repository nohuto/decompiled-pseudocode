/*
 * XREFs of RtlpCreateLowFragHeap @ 0x18004B21C
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x18004B574 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x18004733C (RtlpGetHeapProtection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180048120 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x180049F38 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpInitializeLowFragHeap @ 0x18004B400 (RtlpInitializeLowFragHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x18010321C (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1801034A4 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpCreateLowFragHeap(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // esi
  __int64 v5; // rcx
  int HeapProtection; // eax
  int v7; // eax
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF
  __int64 v18; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0, 0, &v16, 4LL) >= 0 && v16 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v5 = 0LL;
    v4 = v2 & 1;
  }
  else
  {
    v3 = RtlpAffinityState[0];
    v4 = v2 & 1;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v5 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  v17 = 0LL;
  v18 = v5;
  HeapProtection = RtlpGetHeapProtection(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v17, 0LL, &v18, 0x2000, HeapProtection) < 0 )
    return 0LL;
  v7 = RtlpAffinityState[0];
  if ( v4 )
    v7 = 1;
  v8 = 48LL * (unsigned int)(v7 - 1);
  v19 = (v8 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v9 = RtlpGetHeapProtection(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v17, 0LL, &v19, 4096, v9) < 0 )
  {
    v18 = 0LL;
    RtlpSecMemFreeVirtualMemory(v10, &v17, &v18, 0x8000LL);
    return 0LL;
  }
  v11 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v12 = 2147353472LL;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v17, v19, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v11);
    RtlpLogHeapCommit(a1, v17, v19, 9LL);
  }
  RtlpInitializeLowFragHeap(a1, v2, v17);
  *(_QWORD *)(*(_QWORD *)(v17 + 24) + 568LL) += v18;
  *(_QWORD *)(*(_QWORD *)(v17 + 24) + 576LL) += v19;
  *(_QWORD *)(v17 + 48) = v17 + v18;
  v13 = v17;
  *(_QWORD *)(v17 + 40) = v17 + v19;
  v14 = v17;
  *(_QWORD *)(v17 + 32) = v8 + v17 + 3312;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray(v14, v13);
  }
  *(_DWORD *)(v17 + 672) = v2;
  return v17;
}
