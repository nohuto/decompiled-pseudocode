/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x18001FE60
 * Callers:
 *     RtlpHpVsChunkFree @ 0x18001F6B0 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x180001074 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x180021964 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x18009F744 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x18009F7A8 (RtlpHpReleaseQueuedLockExclusive.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v9; // r15d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // rdx
  unsigned int v16; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-24h]
  unsigned __int64 v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0;
  RtlpHpVsChunkComputeCost(a3, a2, &v16, v18);
  if ( v16 )
  {
    if ( v18[0] )
    {
      v10 = (0x101010101010101LL
           * ((((v18[0] - ((v18[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v18[0] - ((v18[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v18[0] - ((v18[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v18[0] - ((v18[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( *(__int16 *)(a2 + 34) >= 0 )
      {
        if ( (*(_BYTE *)(a1 + 176) & 2) != 0 )
          goto LABEL_8;
        v11 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v11 <= 8 )
          v11 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v10 > v11 )
        {
LABEL_8:
          v9 = 1;
          v17 = v17 & 0xFF00FFFF | 0x10000;
          v12 = HIWORD(HIDWORD(RtlpHpHeapGlobals));
          LOBYTE(v12) = BYTE6(a3) ^ BYTE2(v17) ^ BYTE6(RtlpHpHeapGlobals);
          *(_BYTE *)(a3 + 6) = v12;
          *(_DWORD *)(a3 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ ((unsigned int)(a3 - a2) >> 12)) | 0x200;
          v13 = a4 & 1;
          if ( !v13 )
            RtlpHpReleaseQueuedLockExclusive(v12, a5);
          RtlpHpVsSubsegmentCommitPages(a1, a2, v18[0], v10, 0);
          if ( !v13 )
            RtlpHpAcquireQueuedLockExclusive(a1, v14, a5);
          *(_DWORD *)(a3 + 8) &= ~0x200u;
        }
      }
    }
  }
  return v9;
}
