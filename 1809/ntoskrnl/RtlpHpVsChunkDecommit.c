/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x1400BE740
 * Callers:
 *     RtlpHpVsChunkFree @ 0x1400BD2D0 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x1400BD510 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14010EC30 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1401B646C (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1401B64D4 (RtlpHpReleaseQueuedLockExclusive.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  int v9; // ebp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  int v12; // r12d
  unsigned int v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-24h]
  unsigned __int64 v16[4]; // [rsp+38h] [rbp-20h] BYREF

  RtlpHpVsChunkComputeCost(a3, a2, &v14, v16);
  if ( !v14 )
    return 0LL;
  v9 = v16[0];
  if ( !v16[0] )
    return 0LL;
  v10 = (0x101010101010101LL
       * ((((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
         + (((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
         + ((((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( *(__int16 *)(a2 + 34) < 0 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 48) >> 7;
    if ( v11 <= 8 )
      v11 = 8LL;
    if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v10 <= v11 )
      return 0LL;
  }
  v15 = v15 & 0xFF00FFFF | 0x10000;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE2(v15) ^ BYTE6(RtlpHpHeapGlobals);
  *(_DWORD *)(a3 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ ((unsigned int)(a3 - a2) >> 12)) | 0x200;
  v12 = a4 & 1;
  if ( !v12 )
    RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a5);
  RtlpHpVsSubsegmentCommitPages(a1, a2, v9, v10, 0);
  if ( !v12 )
    RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a5);
  *(_DWORD *)(a3 + 8) &= ~0x200u;
  return 1LL;
}
