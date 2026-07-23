/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x14010EC30
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x1400BC790 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x1400BE740 (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1401B646C (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1401B64D4 (RtlpHpReleaseQueuedLockExclusive.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  unsigned int v11; // r14d
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // ebp
  _QWORD v17[3]; // [rsp+28h] [rbp-60h] BYREF

  v5 = a4;
  memset(v17, 0, sizeof(v17));
  _BitScanForward64(&v7, a3);
  _BitScanReverse64(&v9, a3);
  LODWORD(v9) = v9 - v7;
  v10 = a2 + (unsigned int)((_DWORD)v7 << 12);
  v11 = ((_DWORD)v9 + 1) << 12;
  v12 = ((1LL << ((unsigned __int8)v9 + 1)) - 1) << v7;
  RtlpHpAcquireQueuedLockExclusive(a2 + 24, *(unsigned int *)(a1 + 8), v17);
  v13 = a1 ^ *(_QWORD *)(a1 + 128);
  if ( a5 )
  {
    v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
            v13,
            v10,
            v11);
    if ( v15 < 0 )
      goto LABEL_4;
    *(_QWORD *)(a2 + 16) |= v12;
    v14 = v5;
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 160)))(v13, v10, v11);
    *(_QWORD *)(a2 + 16) &= ~v12;
    v14 = -(int)v5;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v14);
  v15 = 0;
LABEL_4:
  RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), v17);
  return (unsigned int)v15;
}
