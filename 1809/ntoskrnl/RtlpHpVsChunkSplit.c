/*
 * XREFs of RtlpHpVsChunkSplit @ 0x1400BC790
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x1401B6824 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     RtlpHpVsFreeChunkRemove @ 0x1400BD260 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1400BD3C0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14010EC30 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x140154A48 (RtlpHpVsSubsegmentCleanup.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1401B646C (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1401B64D4 (RtlpHpReleaseQueuedLockExclusive.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ebx
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // r11d
  int v21; // r9d
  int v22; // eax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  unsigned int v28; // ebx
  unsigned int v29; // eax
  unsigned __int64 v30; // rdi
  int v31; // edx
  unsigned __int64 v32; // rdx
  unsigned int i; // r13d
  __int64 v34; // r9
  __int64 v35; // rbx
  unsigned int v36; // esi
  __int64 v37; // r12
  unsigned __int16 v38; // cx
  unsigned __int64 v39; // r8
  __int64 v40; // r12
  unsigned __int16 v41; // dx
  __int64 v42; // r12
  unsigned int v43; // r10d
  unsigned int v44; // r8d
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  unsigned int v50; // r8d
  unsigned __int64 v51; // rdx
  __int64 v52; // r10
  unsigned __int64 v53; // r11
  unsigned int v54; // r9d
  unsigned int v55; // r10d
  __int16 v56; // r11
  unsigned int v57; // r8d
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  BOOLEAN v61; // al
  unsigned __int64 v62; // rax
  unsigned __int64 v64; // [rsp+30h] [rbp-59h]
  int v65; // [rsp+34h] [rbp-55h]
  int v66; // [rsp+38h] [rbp-51h]
  __int64 v67; // [rsp+40h] [rbp-49h]
  unsigned int v68; // [rsp+48h] [rbp-41h]
  __int64 v69; // [rsp+50h] [rbp-39h]
  int v70; // [rsp+58h] [rbp-31h]
  _QWORD v71[3]; // [rsp+68h] [rbp-21h] BYREF

  v10 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(a3 + 8));
  v11 = 0;
  v12 = RtlpHpHeapGlobals ^ *(_DWORD *)a3 ^ a3;
  v13 = a3 - a2;
  v14 = 16 * HIWORD(v12);
  v15 = (a3 - a2 + 4127) & 0xFFFFF000;
  v16 = ((a3 + v14 - a2) & 0xFFFFF000) - v15;
  if ( v15 >= (((_DWORD)a3 + (_DWORD)v14 - (_DWORD)a2) & 0xFFFFF000) )
    v16 = 0;
  *(_QWORD *)(a1 + 56) -= (unsigned int)((v14 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12)
                        + (v16 >> 12)
                        - (unsigned int)((unsigned __int64)(v14 + 4095) >> 12)
                        - (unsigned __int16)v12;
  v17 = v10 - a4;
  if ( v17 && (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v18 = (((a3 + 16LL * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16LL * a4)) >> 4;
    v19 = 16 * v18;
    if ( (unsigned int)(16 * v18) >= 0x20 )
    {
      if ( (v19 & 0xFFFFFFC0) == 0 && v19 != 32 )
      {
        ++a4;
        --v17;
      }
    }
    else
    {
      a4 += v18;
      v17 -= v18;
    }
  }
  v20 = a4 + v17;
  if ( 16 * v17 >= 0x20 )
  {
    v20 = a4;
    v11 = v17;
  }
  v68 = v20;
  *(_BYTE *)(a3 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(a3) ^ ((v65 & 0xFF00FFFF | 0x10000) >> 16);
  v21 = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ (v13 >> 12));
  v22 = 16 * v20 + 32;
  *(_DWORD *)(a3 + 8) = v21;
  if ( !v11 )
    v22 = 16 * v20;
  v23 = (-1LL << (v13 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                         - (unsigned __int8)((unsigned __int64)(v22 + v13 - 1) >> 12)));
  v24 = (v23 ^ *(_QWORD *)(a2 + 16)) & v23;
  v64 = v24;
  if ( v24 )
  {
    *(_DWORD *)(a3 + 8) = v21 | 0x200;
    if ( (a5 & 1) == 0 )
    {
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a6);
      v24 = v64;
    }
    memset(v71, 0, sizeof(v71));
    _BitScanReverse64(&v25, v24);
    v26 = ((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    _BitScanForward64(&v27, v24);
    v64 = v27;
    LOWORD(v70) = v27;
    v66 = v25 - v27 + 1;
    RtlpHpAcquireQueuedLockExclusive(a2 + 24, *(unsigned int *)(a1 + 8), v71);
    LODWORD(v69) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(RtlpHpHeapGlobals ^ a1 ^ *(_QWORD *)(a1 + 152)))(
                     a1 ^ *(_QWORD *)(a1 + 128),
                     a2 + (unsigned int)((_DWORD)v64 << 12),
                     (unsigned int)(v66 << 12));
    if ( (int)v69 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= ((1LL << v66) - 1) << v64;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(a1 + 48),
        (0x101010101010101LL * ((v26 + (v26 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56);
      LODWORD(v69) = 0;
    }
    RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), v71);
    v28 = 0;
    if ( (int)v69 >= 0 )
      v28 = v68;
    v29 = v11 + v68;
    if ( (int)v69 >= 0 )
      v29 = v11;
    v11 = v29;
    if ( (a5 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a6);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    v20 = v28;
    v68 = v28;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ v20;
  if ( !v11 )
    return v20;
  v30 = a3 + 16LL * v20;
  if ( v20 )
    v31 = (unsigned __int16)v20;
  else
    v31 = (unsigned __int16)((RtlpHpHeapGlobals ^ v30 ^ *(_QWORD *)v30) >> 32);
  HIDWORD(v67) = v31 & 0xFF00FFFF | 0x10000;
  LODWORD(v67) = v11 << 16;
  *(_QWORD *)v30 = v67 ^ RtlpHpHeapGlobals ^ v30;
  v32 = v30 + 16LL * v11;
  *(_DWORD *)(v30 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v30 ^ ((unsigned int)(v30 - a2) >> 12));
  if ( v32 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
  {
    HIDWORD(v64) ^= (unsigned __int16)(v11 ^ WORD2(v64));
    *(_WORD *)(v32 + 4) = WORD2(v32) ^ WORD2(RtlpHpHeapGlobals) ^ WORD2(v64);
  }
  for ( i = 0; ; i = v36 )
  {
    v34 = a2 + 48;
    HIDWORD(v67) &= 0xFF00FFFF;
    v35 = RtlpHpHeapGlobals ^ v30 ^ *(_QWORD *)v30;
    v36 = ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v30 ^ *(_DWORD *)v30) >> 16;
    v67 ^= RtlpHpHeapGlobals ^ v30;
    *(_BYTE *)(v30 + 6) = BYTE6(v67);
    if ( WORD2(v35) )
    {
      v37 = RtlpHpHeapGlobals ^ *(_QWORD *)(v30 - 16LL * WORD2(v35)) ^ (v30 - 16LL * WORD2(v35));
      if ( (v37 & 0xFF000000000000LL) == 0 )
      {
        RtlpHpVsFreeChunkRemove(a1, a2, v30 - 16LL * WORD2(v35), v34);
        v34 = a2 + 48;
        v36 += WORD1(v37);
        v30 -= 16LL * WORD2(v35);
      }
    }
    v38 = *(_WORD *)(a2 + 32);
    v39 = v30 + 16LL * v36;
    if ( v39 < v34 + 16 * (unsigned __int64)v38 )
    {
      v40 = RtlpHpHeapGlobals ^ v39 ^ *(_QWORD *)v39;
      if ( (v40 & 0xFF000000000000LL) == 0 )
      {
        RtlpHpVsFreeChunkRemove(a1, a2, v39, v34);
        v38 = *(_WORD *)(a2 + 32);
        v34 = a2 + 48;
        v36 += WORD1(v40);
      }
    }
    v41 = v38;
    if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
    {
      v39 = v30 + 16LL * v36;
      if ( v39 < v34 + 16 * (unsigned __int64)v38 )
      {
        v42 = RtlpHpHeapGlobals ^ v39 ^ *(_QWORD *)v39;
        if ( (v42 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v39, v34);
          v41 = *(_WORD *)(a2 + 32);
          v36 += WORD1(v42);
        }
      }
    }
    if ( WORD1(v35) != v36 )
    {
      v39 = v30 + 16LL * v36;
      v70 = RtlpHpHeapGlobals ^ v30 ^ ((v36 << 16) | (unsigned __int16)v70);
      *(_WORD *)(v30 + 2) = HIWORD(v70);
      v41 = *(_WORD *)(a2 + 32);
      if ( v39 < a2 + 48 + 16 * (unsigned __int64)v41 )
      {
        HIDWORD(v69) ^= (unsigned __int16)(v36 ^ WORD2(v69));
        v69 ^= RtlpHpHeapGlobals ^ v39;
        *(_WORD *)(v39 + 4) = WORD2(v69);
        v41 = *(_WORD *)(a2 + 32);
      }
    }
    if ( v36 == v41 )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2, v39, v34);
      return v68;
    }
    if ( v36 <= i )
      break;
    v43 = (v30 - a2 + 4127) & 0xFFFFF000;
    v44 = (v30 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2)) - a2) & 0xFFFFF000;
    if ( v43 >= v44 )
      break;
    v45 = *(_QWORD *)(a2 + 16) & (-1LL << (v43 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v44 - 1) >> 12)));
    if ( v44 - v43 < 0x1000 )
      break;
    if ( !v45 )
      break;
    v46 = (0x101010101010101LL
         * ((((v45 - ((v45 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v45 - ((v45 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v45 - ((v45 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v45 - ((v45 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( *(__int16 *)(a2 + 34) < 0 )
      break;
    if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
    {
      v47 = *(_QWORD *)(a1 + 48) >> 7;
      if ( v47 <= 8 )
        v47 = 8LL;
      if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v46 <= v47 )
        break;
    }
    HIDWORD(v64) = HIDWORD(v64) & 0xFF00FFFF | 0x10000;
    v64 ^= RtlpHpHeapGlobals ^ v30;
    *(_BYTE *)(v30 + 6) = BYTE6(v64);
    *(_DWORD *)(v30 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v30 ^ ((unsigned int)(v30 - a2) >> 12)) | 0x200;
    if ( (a5 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a6);
    RtlpHpVsSubsegmentCommitPages(a1, a2, v45, v46, 0);
    if ( (a5 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a6);
    *(_DWORD *)(v30 + 8) &= ~0x200u;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0
    && ((v30 + 32) & 0xFFF) != 0
    && ((v30 + 4111) & 0xFFFFFFFFFFFFF000uLL) - v30 < 16
                                                    * (unsigned __int64)(WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2)) )
  {
    v48 = ((v30 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
    v49 = (__int64)(v48 - v30) >> 4;
    v50 = (WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2)) - v49;
    *(_WORD *)(v30 + 2) = WORD1(RtlpHpHeapGlobals) ^ v49 ^ WORD1(v30);
    *(_QWORD *)v48 = 0LL;
    *(_QWORD *)(v48 + 8) = 0LL;
    *(_QWORD *)(v48 + 16) = 0LL;
    *(_QWORD *)(v48 + 24) = 0LL;
    *(_WORD *)(v48 + 4) = v49;
    *(_WORD *)(v48 + 2) = v50;
    *(_QWORD *)v48 ^= RtlpHpHeapGlobals ^ v48;
    v51 = v48 + 16LL * v50;
    if ( v51 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      *(_WORD *)(v51 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v51) ^ v50;
    RtlpHpVsFreeChunkInsert(a1, a2, ((v30 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32);
  }
  v52 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2));
  v53 = v52 + (v30 & 0xFFF) + 4095;
  v54 = (v30 - a2 + 4127) & 0xFFFFF000;
  v55 = (v30 + v52 - a2) & 0xFFFFF000;
  v56 = (v53 >> 12)
      - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2))) + 4095) >> 12);
  if ( v54 >= v55 )
  {
    v57 = 0;
    v58 = 0LL;
  }
  else
  {
    v57 = v55 - v54;
    v58 = *(_QWORD *)(a2 + 16) & (-1LL << (v54 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v55 - 1) >> 12)));
  }
  v59 = (0x101010101010101LL
       * ((((v58 - ((v58 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
         + (((v58 - ((v58 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
         + ((((v58 - ((v58 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v58 - ((v58 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 56) += v59;
  *(_WORD *)v30 = RtlpHpHeapGlobals ^ v30 ^ (v56 + (v57 >> 12) - v59);
  v60 = *(_QWORD *)(a1 + 16);
  if ( (*(_QWORD *)(a1 + 24) & 1) != 0 && v60 )
    v60 ^= a1 + 16;
  v61 = 0;
  if ( v60 )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)v30 ^ (unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v30) < (*(_DWORD *)(v60 - 8) ^ (unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v60 - 8)) )
      {
        v62 = *(_QWORD *)v60;
        if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
        {
          if ( !v62 )
            goto LABEL_85;
          v62 ^= v60;
        }
        if ( !v62 )
        {
LABEL_85:
          v61 = 0;
          break;
        }
      }
      else
      {
        v62 = *(_QWORD *)(v60 + 8);
        if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
        {
          if ( !v62 )
            goto LABEL_79;
          v62 ^= v60;
        }
        if ( !v62 )
        {
LABEL_79:
          v61 = 1;
          break;
        }
      }
      v60 = v62;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)v60, v61, (PRTL_BALANCED_NODE)(v30 + 8));
  return v68;
}
