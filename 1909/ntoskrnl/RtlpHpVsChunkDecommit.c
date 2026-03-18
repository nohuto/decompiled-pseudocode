/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x14010B20C
 * Callers:
 *     RtlpHpVsChunkFree @ 0x14010B118 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsSubsegmentCommitPages @ 0x14005F8C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14005FC30 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140061790 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkComputeCost @ 0x140064C30 (RtlpHpVsChunkComputeCost.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  unsigned int v9; // r15d
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v15[4]; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0;
  RtlpHpVsChunkComputeCost(a3, a2, (unsigned int *)&v14, v15);
  if ( (_DWORD)v14 )
  {
    if ( v15[0] )
    {
      v11 = (0x101010101010101LL
           * ((((v15[0] - ((v15[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v15[0] - ((v15[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v15[0] - ((v15[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v15[0] - ((v15[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( *(__int16 *)(a2 + 34) >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
          goto LABEL_9;
        v12 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v12 <= 8 )
          v12 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v11 > v12 )
        {
LABEL_9:
          v9 = 1;
          v14 = 0x1000000000000LL;
          *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
          *(_DWORD *)(a3 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ ((unsigned int)(a3 - a2) >> 12)) | 0x200;
          v13 = a4 & 1;
          if ( !v13 )
            RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)a5);
          RtlpHpVsSubsegmentCommitPages(a1, a2, v15[0], v11, 0);
          if ( !v13 )
            RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)a1, *(_DWORD *)(a1 + 8), a5);
          *(_DWORD *)(a3 + 8) &= ~0x200u;
        }
      }
    }
  }
  return v9;
}
