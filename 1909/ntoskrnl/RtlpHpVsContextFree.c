/*
 * XREFs of RtlpHpVsContextFree @ 0x140062FC0
 * Callers:
 *     RtlpHpSegFree @ 0x14001D8B4 (RtlpHpSegFree.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     RtlpFreeHeapInternal @ 0x140110910 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpHpVsSubsegmentCommitPages @ 0x14005F8C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14005FC30 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1400615A0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140061790 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkAlignSplit @ 0x140061B60 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x1400635E0 (RtlpHpVsChunkCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsChunkComputeCost @ 0x140064C30 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x14010B3C0 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x14010B46C (RtlpHpVsSubsegmentFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1401CC5F0 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFree(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char v6; // r15
  int v9; // edx
  unsigned __int64 v10; // rbx
  unsigned int v11; // ecx
  PSLIST_ENTRY v12; // rax
  _QWORD *v13; // r12
  int v14; // r13d
  unsigned __int64 v15; // r8
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  int v19; // edx
  int v20; // ecx
  unsigned __int64 v21; // rbx
  unsigned int i; // r14d
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // edi
  unsigned int v28; // r10d
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  unsigned int v31; // edx
  unsigned int v32; // r9d
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rax
  __int16 v37; // r8
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  BOOLEAN v40; // al
  unsigned __int64 v41; // rax
  _SLIST_HEADER *v43; // rcx
  int v44; // ecx
  int v45; // ecx
  unsigned __int64 v46; // r8
  int v47; // edi
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v51[4]; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v52; // [rsp+A0h] [rbp+8h] BYREF
  __int16 v53; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v54; // [rsp+B0h] [rbp+18h]
  unsigned int v55; // [rsp+B8h] [rbp+20h]

  v55 = a4;
  v6 = a4;
  v9 = *(_DWORD *)(a1 + 176);
  v10 = a3 - 16;
  if ( (v9 & 1) != 0 && (a3 & 0xFFF) == 0 )
    v10 = a3 - 32;
  if ( !a2 )
  {
    v44 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v10) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v44 & 0xFF0000) != 0 )
    {
      v45 = (unsigned __int8)(RtlpHpHeapGlobals ^ v10 ^ *(_BYTE *)(v10 + 8));
    }
    else
    {
      if ( (_WORD)v44 )
      {
        v46 = v10 - 16LL * (unsigned __int16)((v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v10) >> 32);
        v47 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v46) ^ HIDWORD(*(_QWORD *)v46);
        if ( (v47 & 0xFF0000) != 0 )
        {
          v45 = (unsigned __int8)(RtlpHpHeapGlobals ^ v46 ^ *(_BYTE *)(v46 + 8));
        }
        else if ( (_WORD)v47 )
        {
          v46 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ v46 ^ *(_QWORD *)v46) >> 32);
          v45 = (unsigned __int8)(RtlpHpHeapGlobals ^ v46 ^ *(_BYTE *)(v46 + 8));
        }
        else
        {
          v45 = 0;
        }
        goto LABEL_64;
      }
      v45 = 0;
    }
    v46 = v10;
LABEL_64:
    a2 = (v46 - (unsigned int)(v45 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, a1 ^ *(_DWORD *)(a1 + 128), a2, 0, 0LL, 0LL);
    return 0LL;
  }
  else if ( ((v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v10) & 0xFF000000000000LL) != 0 )
  {
    v11 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v10) ^ *(unsigned __int16 *)(v10 + 2)) - 16;
    *a5 = v11;
    v12 = 0LL;
    if ( (v9 & 4) != 0 && v11 < 0x1000 )
    {
      v43 = (_SLIST_HEADER *)(a1 + 64);
      if ( *(_WORD *)(a1 + 64) < 0x20u )
      {
        RtlpInterlockedPushEntrySList(v43, (PSLIST_ENTRY)(v10 + 16));
        return 1LL;
      }
      v12 = RtlpInterlockedFlushSList(v43);
    }
    v13 = (_QWORD *)(v10 + 16);
    *(_QWORD *)(v10 + 16) = v12;
    memset(v51, 0, 24);
    v14 = v6 & 1;
    if ( (v6 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)a1, *(_DWORD *)(a1 + 8), v51);
    if ( v10 != -16LL )
    {
      do
      {
        v15 = *(v13 - 2);
        v16 = (__int64)(v13 - 2);
        v17 = (unsigned __int64)(v13 - 2);
        v13 = (_QWORD *)*v13;
        v18 = v16;
        v19 = ((RtlpHpHeapGlobals ^ v15 ^ v17) >> 32) & 0xFF0000;
        if ( v19 )
        {
          v20 = (unsigned __int8)(RtlpHpHeapGlobals ^ v16 ^ *(_BYTE *)(v16 + 8));
        }
        else
        {
          v48 = (RtlpHpHeapGlobals ^ v16 ^ v15) >> 32;
          if ( !(_WORD)v48 )
            goto LABEL_83;
          v18 = v16 - 16LL * (unsigned __int16)v48;
          v49 = (RtlpHpHeapGlobals ^ (unsigned __int64)v18 ^ *(_QWORD *)v18) >> 32;
          if ( (v49 & 0xFF0000) != 0 )
          {
            v20 = (unsigned __int8)(RtlpHpHeapGlobals ^ v18 ^ *(_BYTE *)(v18 + 8));
          }
          else
          {
            if ( !(_WORD)v49 )
            {
LABEL_83:
              v20 = 0;
              goto LABEL_14;
            }
            v18 -= 16LL * (unsigned __int16)v49;
            v20 = (unsigned __int8)(RtlpHpHeapGlobals ^ v18 ^ *(_BYTE *)(v18 + 8));
          }
        }
LABEL_14:
        v21 = (v18 - (unsigned int)(v20 << 12)) & 0xFFFFFFFFFFFFF000uLL;
        if ( (((unsigned __int16)(*(_WORD *)(v21 + 32) ^ *(_WORD *)(v21 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
        {
          RtlpLogHeapFailure(18, a1 ^ *(_DWORD *)(a1 + 128), v21, 0, 0LL, 0LL);
        }
        else if ( v19 )
        {
          for ( i = 0; ; i = v27 )
          {
            v23 = RtlpHpVsChunkCoalesce(a1, v21, v16, &v52);
            v27 = v52;
            v16 = v23;
            if ( v52 == *(unsigned __int16 *)(v21 + 32) )
            {
              RtlpHpVsSubsegmentCleanup(a1, v21, v25, v26);
              if ( !v14 )
                RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)v51);
              RtlpHpVsSubsegmentFree(a1, v21, v55);
              if ( !v14 )
                RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)a1, *(_DWORD *)(a1 + 8), v51);
              goto LABEL_46;
            }
            if ( v52 <= i )
              break;
            v28 = v23 - v21;
            v29 = (v23 - v21 + 4127) & 0xFFFFF000;
            v30 = (v23 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v23) ^ *(unsigned __int16 *)(v23 + 2)) - v21) & 0xFFFFF000;
            if ( v29 >= v30 )
              break;
            v31 = v30 - v29;
            v32 = v29 >> 12;
            v24 = (unsigned __int8)v32;
            v33 = *(_QWORD *)(v21 + 16) & (-1LL << v32) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                   - (unsigned __int8)((unsigned __int64)(v30 - 1) >> 12)));
            if ( v31 < 0x1000 )
              break;
            if ( !v33 )
              break;
            v34 = v33 - ((v33 >> 1) & 0x5555555555555555LL);
            v24 = v34 & 0x3333333333333333LL;
            v35 = (0x101010101010101LL
                 * (((v34 & 0x3333333333333333LL)
                   + ((v34 >> 2) & 0x3333333333333333LL)
                   + (((v34 & 0x3333333333333333LL) + ((v34 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            if ( *(__int16 *)(v21 + 34) < 0 )
              break;
            if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
            {
              v24 = *(_QWORD *)(a1 + 48) >> 7;
              if ( v24 <= 8 )
                v24 = 8LL;
              if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v35 <= v24 )
                break;
            }
            v54 = 0x1000000000000LL;
            *(_BYTE *)(v16 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v16) ^ 1;
            *(_DWORD *)(v16 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v16 ^ (v28 >> 12)) | 0x200;
            if ( !v14 )
              RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)v51);
            RtlpHpVsSubsegmentCommitPages(a1, v21, v33, v35, 0);
            if ( !v14 )
              RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)a1, *(_DWORD *)(a1 + 8), v51);
            *(_DWORD *)(v16 + 8) &= ~0x200u;
          }
          if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((v16 + 32) & 0xFFF) != 0 )
          {
            v36 = RtlpHpVsChunkAlignSplit(v24, v21, v16);
            if ( v36 )
              RtlpHpVsFreeChunkInsert((_RTL_RB_TREE *)a1, v21, v36);
          }
          v37 = RtlpHpVsChunkComputeCost(v16, v21, &v53, &v50);
          v38 = (0x101010101010101LL
               * ((((v50 - ((v50 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v50 - ((v50 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v50 - ((v50 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v50 - ((v50 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          *(_QWORD *)(a1 + 56) += v38;
          *(_WORD *)v16 = RtlpHpHeapGlobals ^ v16 ^ (v53 + v37 - v38);
          v39 = *(_QWORD *)(a1 + 16);
          if ( (*(_QWORD *)(a1 + 24) & 1) != 0 && v39 )
            v39 ^= a1 + 16;
          v40 = 0;
          if ( v39 )
          {
            while ( 1 )
            {
              if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v16 ^ *(_DWORD *)v16) < (*(_DWORD *)(v39 - 8) ^ (unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v39 - 8)) )
              {
                v41 = *(_QWORD *)v39;
                if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
                {
                  if ( !v41 )
                    goto LABEL_43;
                  v41 ^= v39;
                }
                if ( !v41 )
                {
LABEL_43:
                  v40 = 0;
                  break;
                }
              }
              else
              {
                v41 = *(_QWORD *)(v39 + 8);
                if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
                {
                  if ( !v41 )
                    goto LABEL_44;
                  v41 ^= v39;
                }
                if ( !v41 )
                {
LABEL_44:
                  v40 = 1;
                  break;
                }
              }
              v39 = v41;
            }
          }
          RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)v39, v40, (PRTL_BALANCED_NODE)(v16 + 8));
        }
        else
        {
          RtlpLogHeapFailure(8, a1 ^ *(_DWORD *)(a1 + 128), v16, 0, 0LL, 0LL);
        }
LABEL_46:
        ;
      }
      while ( v13 );
    }
    if ( !v14 )
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)v51);
    return 1LL;
  }
  else
  {
    RtlpLogHeapFailure(8, a1 ^ *(_DWORD *)(a1 + 128), a3, v10, 0LL, 0LL);
    return 0LL;
  }
}
