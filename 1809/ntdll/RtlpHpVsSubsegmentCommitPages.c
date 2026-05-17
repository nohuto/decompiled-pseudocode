/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x180021964
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x18001FE60 (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x18009F788 (RtlpHpReleaseQueuedLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        int a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  unsigned int v8; // r14d
  unsigned __int64 v10; // rbp
  int v11; // ecx
  unsigned int v12; // r15d
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebp
  unsigned __int64 v17; // rax
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  _BitScanForward64(&v5, (unsigned __int64)a3);
  _BitScanReverse64(&v6, (unsigned __int64)a3);
  v8 = a4;
  v10 = a2 + (unsigned int)((_DWORD)v5 << 12);
  v11 = v6 - v5 + 1;
  v12 = v11 << 12;
  v19[0] = 0LL;
  v13 = ((1LL << v11) - 1) << v5;
  v19[1] = a2 + 24;
  v19[2] = 0LL;
  RtlAcquireSRWLockExclusive(a2 + 24, a2, a3, a4);
  v14 = a1 ^ *(_QWORD *)(a1 + 128);
  if ( !a5 )
  {
    ((void (__fastcall *)(__int64, unsigned __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 160)))(
      v14,
      v10,
      v12);
    *(_QWORD *)(a2 + 16) &= ~v13;
    v17 = -v8;
    goto LABEL_5;
  }
  v16 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
          v14,
          v10,
          v12);
  if ( v16 >= 0 )
  {
    *(_QWORD *)(a2 + 16) |= v13;
    v17 = v8;
LABEL_5:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v17);
    v16 = 0;
  }
  RtlpHpReleaseQueuedLockExclusive(v15, v19);
  return (unsigned int)v16;
}
