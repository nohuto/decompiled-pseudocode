/*
 * XREFs of RtlpHpVsChunkSplit @ 0x180039740
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x180038840 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18009C730 (RtlpHpVsContextGrowInPlace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkCoalesce @ 0x180039500 (RtlpHpVsChunkCoalesce.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1800514F0 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180068684 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1800852E4 (RtlpHpVsSubsegmentCommitPages.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010BD38 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(__int64 SRWLock, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  __int64 v7; // r13
  unsigned int v9; // r14d
  unsigned __int64 v11; // rbx
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // r14d
  unsigned int v18; // r9d
  unsigned int v19; // r11d
  unsigned int v20; // r14d
  unsigned int v21; // r12d
  int v22; // eax
  unsigned __int64 v23; // rdx
  char v24; // cl
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  int v27; // edx
  unsigned __int64 v28; // rdx
  unsigned int i; // esi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned int v32; // r14d
  unsigned int v33; // r9d
  unsigned int v34; // r8d
  __int64 v35; // rcx
  unsigned int v36; // r9d
  __int16 v37; // r11
  unsigned int v38; // r10d
  unsigned int v39; // r8d
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r8
  BOOLEAN v43; // al
  int v44; // r8d
  unsigned __int64 v45; // rax
  unsigned __int64 v47; // rax
  unsigned int v48; // edx
  unsigned int v49; // r9d
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // r12
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r14
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rax
  int v61; // [rsp+30h] [rbp-58h]
  unsigned __int64 v62; // [rsp+90h] [rbp+8h]
  __int64 v63; // [rsp+90h] [rbp+8h]
  int v64; // [rsp+90h] [rbp+8h]
  int v65; // [rsp+90h] [rbp+8h]
  int v66; // [rsp+94h] [rbp+Ch]
  __int64 v67; // [rsp+98h] [rbp+10h]
  unsigned int v68; // [rsp+A0h] [rbp+18h]
  int v69; // [rsp+A0h] [rbp+18h]
  unsigned int v70; // [rsp+A8h] [rbp+20h] BYREF

  v7 = a4;
  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(SRWLock + 16), (PRTL_BALANCED_NODE)(a3 + 8));
  v11 = 0LL;
  v12 = RtlpHpHeapGlobals ^ *(_DWORD *)a3 ^ a3;
  v13 = a3 - a2;
  v14 = 16 * HIWORD(v12);
  v15 = (a3 - a2 + 4127) & 0xFFFFF000;
  v16 = ((a3 + v14 - a2) & 0xFFFFF000) - v15;
  if ( v15 >= (((_DWORD)a3 + (_DWORD)v14 - (_DWORD)a2) & 0xFFFFF000) )
    v16 = 0;
  *(_QWORD *)(SRWLock + 56) -= (unsigned int)((v14 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12)
                             + (v16 >> 12)
                             - (unsigned int)((unsigned __int64)(v14 + 4095) >> 12)
                             - (unsigned __int16)v12;
  v17 = v9 - v7;
  if ( v17 && (*(_BYTE *)(SRWLock + 176) & 1) != 0 )
  {
    v58 = (((a3 + 16 * v7 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16 * v7)) >> 4;
    v59 = 16 * v58;
    if ( (unsigned int)(16 * v58) >= 0x20 )
    {
      if ( (v59 & 0xFFFFFFC0) == 0 && v59 != 32 )
      {
        LODWORD(v7) = v7 + 1;
        --v17;
      }
    }
    else
    {
      LODWORD(v7) = v58 + v7;
      v17 -= v58;
    }
  }
  v18 = v17 + v7;
  v19 = 0;
  if ( 16 * v17 >= 0x20 )
  {
    v18 = v7;
    v19 = v17;
  }
  v68 = v18;
  v20 = v19;
  v21 = v18;
  LODWORD(v67) = v19;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ ((v66 & 0xFF00FFFF | 0x10000) >> 16);
  v70 = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ (v13 >> 12));
  *(_DWORD *)(a3 + 8) = v70;
  v22 = 16 * v18 + 32;
  if ( !v19 )
    v22 = 16 * v18;
  v23 = 0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((unsigned __int64)(v22 + v13 - 1) >> 12));
  v24 = a5;
  v25 = ((-1LL << (v13 >> 12)) & v23 ^ *(_QWORD *)(a2 + 16)) & (-1LL << (v13 >> 12)) & v23;
  v62 = v25;
  if ( v25 )
  {
    *(_DWORD *)(a3 + 8) = v70 | 0x200;
    v61 = v24 & 1;
    if ( (v24 & 1) == 0 )
    {
      v53 = a6;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
      v25 = v62;
      *(_QWORD *)(v53 + 8) = 0LL;
    }
    _BitScanForward64((unsigned __int64 *)&v54, v25);
    _BitScanReverse64(&v55, v25);
    v56 = ((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    v70 = v55 - v54 + 1;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    v65 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(SRWLock ^ RtlpHpHeapGlobals ^ *(_QWORD *)(SRWLock + 152)))(
            SRWLock ^ *(_QWORD *)(SRWLock + 128),
            a2 + (unsigned int)((_DWORD)v54 << 12),
            v70 << 12);
    if ( v65 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= ((1LL << v70) - 1) << v54;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(SRWLock + 48),
        (0x101010101010101LL * ((v56 + (v56 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56);
      v65 = 0;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    v20 = v67;
    v21 = v68;
    if ( v65 < 0 )
    {
      v20 = v68 + v67;
      v21 = 0;
    }
    if ( !v61 )
    {
      v57 = a6;
      *(_QWORD *)a6 = 0LL;
      *(_QWORD *)(v57 + 16) = 0LL;
      *(_QWORD *)(v57 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
    }
    *(_DWORD *)(a3 + 8) &= ~0x200u;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ v21 ^ WORD1(a3);
  if ( v20 )
  {
    v26 = a3 + 16LL * v21;
    if ( v21 )
      v27 = (unsigned __int16)v21;
    else
      v27 = (unsigned __int16)((RtlpHpHeapGlobals ^ v26 ^ *(_QWORD *)v26) >> 32);
    HIDWORD(v63) = v27 & 0xFF00FFFF | 0x10000;
    LODWORD(v63) = v20 << 16;
    *(_QWORD *)v26 = v63 ^ RtlpHpHeapGlobals ^ v26;
    v28 = v26 + 16LL * v20;
    *(_DWORD *)(v26 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v26 ^ ((unsigned int)(v26 - a2) >> 12));
    if ( v28 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      *(_WORD *)(v28 + 4) = WORD2(v28) ^ WORD2(RtlpHpHeapGlobals) ^ v20;
    for ( i = 0; ; i = v32 )
    {
      v30 = RtlpHpVsChunkCoalesce(SRWLock, a2, v26, &v70);
      v32 = v70;
      v26 = v30;
      if ( v70 == *(unsigned __int16 *)(a2 + 32) )
      {
        RtlpHpVsSubsegmentCleanup(SRWLock, a2);
        return v21;
      }
      if ( v70 <= i )
        break;
      v33 = (v30 - a2 + 4127) & 0xFFFFF000;
      v34 = (v30 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2)) - a2) & 0xFFFFF000;
      if ( v33 >= v34 )
        break;
      v48 = v34 - v33;
      v49 = v33 >> 12;
      v31 = (unsigned __int8)v49;
      v50 = *(_QWORD *)(a2 + 16) & (-1LL << v49) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                            - (unsigned __int8)((unsigned __int64)(v34 - 1) >> 12)));
      if ( v48 < 0x1000 )
        break;
      if ( !v50 )
        break;
      v31 = (0x101010101010101LL
           * ((((v50 - ((v50 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v50 - ((v50 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v50 - ((v50 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v50 - ((v50 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v69 = v31;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_BYTE *)(SRWLock + 176) & 2) == 0 )
      {
        v51 = *(_QWORD *)(SRWLock + 48) >> 7;
        if ( v51 <= 8 )
          v51 = 8LL;
        if ( *(_QWORD *)(SRWLock + 56) + (unsigned __int64)(unsigned int)v31 <= v51 )
          break;
      }
      HIDWORD(v67) = HIDWORD(v67) & 0xFF00FFFF | 0x10000;
      v67 ^= RtlpHpHeapGlobals ^ v30;
      *(_BYTE *)(v30 + 6) = BYTE6(v67);
      *(_DWORD *)(v30 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v30 ^ ((unsigned int)(v30 - a2) >> 12)) | 0x200;
      v64 = a5 & 1;
      if ( (a5 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
        LODWORD(v31) = v69;
        *(_QWORD *)(a6 + 8) = 0LL;
      }
      RtlpHpVsSubsegmentCommitPages(SRWLock, a2, v50, v31, 0);
      if ( !v64 )
      {
        v52 = a6;
        *(_QWORD *)a6 = 0LL;
        *(_QWORD *)(v52 + 16) = 0LL;
        *(_QWORD *)(v52 + 8) = SRWLock;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
      }
      *(_DWORD *)(v26 + 8) &= ~0x200u;
    }
    if ( (*(_BYTE *)(SRWLock + 176) & 1) != 0 && ((v30 + 32) & 0xFFF) != 0 )
    {
      v60 = RtlpHpVsChunkAlignSplit(v31, a2, v30);
      if ( v60 )
        RtlpHpVsFreeChunkInsert(SRWLock, a2, v60);
    }
    v35 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v26) ^ *(unsigned __int16 *)(v26 + 2));
    v36 = (v26 - a2 + 4127) & 0xFFFFF000;
    v37 = ((v35 + (v26 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v35 + 4095) >> 12);
    v38 = (v35 + v26 - a2) & 0xFFFFF000;
    if ( v36 < v38 )
    {
      v39 = v38 - v36;
      v40 = *(_QWORD *)(a2 + 16) & (-1LL << (v36 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v38 - 1) >> 12)));
    }
    else
    {
      v39 = 0;
      v40 = 0LL;
    }
    v41 = (0x101010101010101LL
         * ((((v40 - ((v40 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v40 - ((v40 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v40 - ((v40 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v40 - ((v40 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    *(_QWORD *)(SRWLock + 56) += v41;
    *(_WORD *)v26 = RtlpHpHeapGlobals ^ v26 ^ (v37 + (v39 >> 12) - v41);
    v42 = *(_QWORD *)(SRWLock + 24);
    if ( (v42 & 1) != 0 )
    {
      v47 = *(_QWORD *)(SRWLock + 16);
      if ( v47 )
        v11 = v47 ^ (SRWLock + 16);
    }
    else
    {
      v11 = *(_QWORD *)(SRWLock + 16);
    }
    v43 = 0;
    v44 = v42 & 1;
    if ( v11 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v26 ^ (unsigned int)v26) < ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v11 - 8) ^ ((_DWORD)v11 - 8)) )
        {
          v45 = *(_QWORD *)v11;
          if ( v44 )
          {
            if ( !v45 )
              goto LABEL_35;
            v45 ^= v11;
          }
          if ( !v45 )
          {
LABEL_35:
            v43 = 0;
            break;
          }
        }
        else
        {
          v45 = *(_QWORD *)(v11 + 8);
          if ( v44 )
          {
            if ( !v45 )
              goto LABEL_36;
            v45 ^= v11;
          }
          if ( !v45 )
          {
LABEL_36:
            v43 = 1;
            break;
          }
        }
        v11 = v45;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(SRWLock + 16), (PRTL_BALANCED_NODE)v11, v43, (PRTL_BALANCED_NODE)(v26 + 8));
  }
  return v21;
}
