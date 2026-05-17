/*
 * XREFs of RtlpInitializeHeapSegment @ 0x180048C68
 * Callers:
 *     RtlpExtendHeap @ 0x18003F020 (RtlpExtendHeap.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x180033C9C (RtlLogStackBackTraceEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInsertFreeBlock @ 0x18004580C (RtlpInsertFreeBlock.c)
 *     RtlpGetHeapProtection @ 0x18004733C (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047C74 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCreateUCREntry @ 0x180048E88 (RtlpCreateUCREntry.c)
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x18010321C (RtlpLogHeapCommit.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  unsigned __int64 v9; // r14
  __int64 v11; // r12
  unsigned __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r15
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r8
  unsigned __int64 *v21; // rbx
  __int64 *v22; // rax
  __int64 v24; // rdx
  int HeapProtection; // eax
  __int64 v26; // rcx
  __int16 v27; // ax
  __int64 v28[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int NtGlobalFlag; // [rsp+88h] [rbp+48h]

  v9 = a8;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v11 = a3 + 15;
  v12 = a7;
  v11 &= 0xFFFFFFFFFFFFFFF0uLL;
  a8 = (__int64)(a8 - a6) / 4096;
  v13 = v11 + a2;
  v14 = v11 >> 4;
  if ( v13 + 80 >= a7 )
  {
    if ( v13 + 80 < v9 )
    {
      v24 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      v28[0] = (v13 - a7 + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v28[0], v24, a1, (__int64 *)(a1 + 376)) )
      {
        HeapProtection = RtlpGetHeapProtection(a1, 1);
        if ( (int)ZwAllocateVirtualMemory(-1LL, &a7, 0LL, v28, 4096, HeapProtection) >= 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v26 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v26 = 2147353472LL;
          if ( *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, a7, v28[0], 3LL);
          v12 = v28[0] + a7;
          a7 += v28[0];
          goto LABEL_3;
        }
      }
      ++*(_DWORD *)(a1 + 632);
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 8) = v14;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v15 = (__int64)(v9 - v12) / 4096;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v27 = RtlLogStackBackTraceEx(1u);
    LODWORD(v12) = a7;
    *(_WORD *)(a2 + 88) = v27;
  }
  v16 = a8;
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 56) = v16;
  v17 = (unsigned int)(v16 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v17;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v13;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a1 + 576) += v17;
  *(_QWORD *)(a1 + 568) += v17;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v13 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v18 = *(_QWORD *)(a2 + 40);
  if ( v18 == a2 )
  {
    LOBYTE(v19) = 0;
  }
  else
  {
    v19 = ((unsigned __int64)(v13 - a2) >> 16) + 1;
    if ( v19 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v18, v13, a2, 0LL, 0LL);
      LODWORD(v12) = a7;
    }
  }
  *(_BYTE *)(v13 + 14) = v19;
  RtlpCreateUCREntry(a1, a2, v12 - 48, (_DWORD)v15 << 12, v13, (__int64)v28);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v28[0] )
    RtlpInsertFreeBlock(a1, v13, v28[0]);
  v20 = a1 + 288;
  v21 = (unsigned __int64 *)(a2 + 24);
  v22 = *(__int64 **)(a1 + 296);
  if ( *v22 == a1 + 288 )
  {
    *v21 = v20;
    v21[1] = (unsigned __int64)v22;
    *v22 = (__int64)v21;
    *(_QWORD *)(a1 + 296) = v21;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v20, 0, *v22, 0LL);
  }
  ++*(_DWORD *)(a1 + 600);
  return 1;
}
