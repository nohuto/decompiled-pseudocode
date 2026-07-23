/*
 * XREFs of RtlpHpVsChunkSplit @ 0x18001E480
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x18009F81C (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     RtlpHpVsFreeChunkInsert @ 0x18001E2D8 (RtlpHpVsFreeChunkInsert.c)
 *     RtlRbRemoveNode @ 0x18001ECC0 (RtlRbRemoveNode.c)
 *     RtlpHpVsChunkCoalesce @ 0x18001F778 (RtlpHpVsChunkCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x18001F940 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x180021964 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180065688 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x18009F744 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x18009F7A8 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010E170 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  unsigned int v9; // edi
  __int64 v11; // rbx
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // edi
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // r11d
  unsigned int v21; // esi
  __int64 v22; // rdi
  int v23; // r9d
  int v24; // eax
  unsigned int v25; // edx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r10
  bool v28; // zf
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rdx
  unsigned int v33; // esi
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rdi
  unsigned int v37; // r12d
  unsigned int v38; // r10d
  unsigned int v39; // r8d
  unsigned int v40; // edx
  unsigned int v41; // r10d
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rbp
  char v45; // r13
  int v46; // r13d
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // r9d
  __int16 v53; // r11
  unsigned int v54; // r10d
  unsigned int v55; // r8d
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  BOOLEAN v61; // r8
  int v62; // ecx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // [rsp+30h] [rbp-58h]
  __int64 v65; // [rsp+90h] [rbp+8h] BYREF
  __int64 v66; // [rsp+98h] [rbp+10h]
  int v67; // [rsp+A0h] [rbp+18h]
  unsigned int v68; // [rsp+A4h] [rbp+1Ch]
  unsigned int v69; // [rsp+A8h] [rbp+20h]

  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(a3 + 8));
  v11 = 0LL;
  v12 = RtlpHpHeapGlobals ^ a3 ^ *(_DWORD *)a3;
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
  v17 = v9 - a4;
  if ( v17 && (*(_BYTE *)(a1 + 176) & 1) != 0 )
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
  v20 = v17 + a4;
  if ( 16 * v17 >= 0x20 )
    v20 = a4;
  v21 = 0;
  if ( 16 * v17 >= 0x20 )
    v21 = v17;
  LODWORD(v65) = v20;
  v22 = a6;
  v68 = v68 & 0xFF00FFFF | 0x10000;
  LODWORD(v66) = v21;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ BYTE2(v68);
  v23 = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ (v13 >> 12));
  v24 = 16 * v20 + 32;
  *(_DWORD *)(a3 + 8) = v23;
  if ( !v21 )
    v24 = 16 * v20;
  v25 = v20;
  v26 = (-1LL << (v13 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                         - (unsigned __int8)((unsigned __int64)(v24 + v13 - 1) >> 12)));
  v69 = v20;
  v27 = (v26 ^ *(_QWORD *)(a2 + 16)) & v26;
  v64 = v27;
  if ( v27 )
  {
    v28 = (a5 & 1) == 0;
    v29 = a5 & 1;
    *(_DWORD *)(a3 + 8) = v23 | 0x200;
    v67 = v29;
    if ( v28 )
    {
      RtlpHpReleaseQueuedLockExclusive(0x5555555555555555LL, v22);
      v27 = v64;
      v20 = v65;
    }
    v69 = v20;
    if ( (int)RtlpHpVsSubsegmentCommitPages(
                a1,
                a2,
                v27,
                (unsigned int)((0x101010101010101LL
                              * ((((v27 - ((v27 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v27 - ((v27 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v27 - ((v27 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v27 - ((v27 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                1) < 0 )
    {
      v21 = v66 + v65;
      v69 = 0;
    }
    if ( !v67 )
      RtlpHpAcquireQueuedLockExclusive(a1, v30, v22);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    v25 = v69;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ v25;
  if ( !v21 )
    return v25;
  v31 = a3 + 16LL * v25;
  v65 = 0LL;
  if ( v25 )
    v25 = (unsigned __int16)v25;
  else
    v25 = (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v31 ^ v31) >> 32);
  HIDWORD(v65) = v25 & 0xFF00FFFF | 0x10000;
  LODWORD(v65) = (v21 << 16) | (unsigned __int16)v65;
  *(_QWORD *)v31 = v65 ^ RtlpHpHeapGlobals ^ v31;
  v32 = v31 + 16LL * v21;
  *(_DWORD *)(v31 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v31 ^ ((unsigned int)(v31 - a2) >> 12));
  if ( v32 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
  {
    HIDWORD(v65) ^= (unsigned __int16)(v21 ^ WORD2(v65));
    *(_WORD *)(v32 + 4) = WORD2(v32) ^ WORD2(RtlpHpHeapGlobals) ^ WORD2(v65);
  }
  v33 = 0;
  v34 = RtlpHpVsChunkCoalesce(a1, a2, v31, &v65);
  v35 = *(unsigned __int16 *)(a2 + 32);
  v36 = v34;
  v37 = v65;
  if ( (_DWORD)v65 == (_DWORD)v35 )
  {
LABEL_45:
    RtlpHpVsSubsegmentCleanup(a1, a2);
    return v69;
  }
  else
  {
    while ( v37 > v33 )
    {
      v38 = (v36 - a2 + 4127) & 0xFFFFF000;
      v39 = (v36 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v36) ^ *(unsigned __int16 *)(v36 + 2)) - a2) & 0xFFFFF000;
      if ( v38 >= v39 )
        break;
      v40 = v39 - v38;
      v41 = v38 >> 12;
      v35 = (unsigned __int8)v41;
      v42 = *(_QWORD *)(a2 + 16) & (-1LL << v41) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                            - (unsigned __int8)((unsigned __int64)(v39 - 1) >> 12)));
      if ( v40 < 0x1000 )
        break;
      if ( !v42 )
        break;
      v43 = v42 - ((v42 >> 1) & 0x5555555555555555LL);
      v35 = v43 & 0x3333333333333333LL;
      v44 = (0x101010101010101LL
           * (((v43 & 0x3333333333333333LL)
             + ((v43 >> 2) & 0x3333333333333333LL)
             + (((v43 & 0x3333333333333333LL) + ((v43 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_BYTE *)(a1 + 176) & 2) == 0 )
      {
        v35 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v35 <= 8 )
          v35 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v44 <= v35 )
          break;
      }
      v45 = a5;
      HIDWORD(v66) = HIDWORD(v66) & 0xFF00FFFF | 0x10000;
      v66 ^= RtlpHpHeapGlobals ^ v36;
      *(_BYTE *)(v36 + 6) = BYTE6(v66);
      *(_DWORD *)(v36 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v36 ^ ((unsigned int)(v36 - a2) >> 12)) | 0x200;
      v46 = v45 & 1;
      if ( !v46 )
        RtlpHpReleaseQueuedLockExclusive(v35, a6);
      RtlpHpVsSubsegmentCommitPages(a1, a2, v42, v44, 0);
      if ( !v46 )
        RtlpHpAcquireQueuedLockExclusive(a1, v47, a6);
      *(_DWORD *)(v36 + 8) &= ~0x200u;
      v33 = v37;
      v48 = RtlpHpVsChunkCoalesce(a1, a2, v36, &v65);
      v37 = v65;
      v36 = v48;
      if ( (_DWORD)v65 == *(unsigned __int16 *)(a2 + 32) )
        goto LABEL_45;
    }
    if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v36 + 32) & 0xFFF) != 0 )
    {
      v50 = RtlpHpVsChunkAlignSplit(v35, a2, v36);
      if ( v50 )
        RtlpHpVsFreeChunkInsert(a1, a2, v50);
    }
    v51 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v36) ^ *(unsigned __int16 *)(v36 + 2));
    v52 = (v36 - a2 + 4127) & 0xFFFFF000;
    v53 = ((v51 + (unsigned __int64)(v36 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v51 + 4095) >> 12);
    v54 = (v51 + v36 - a2) & 0xFFFFF000;
    if ( v52 >= v54 )
    {
      v55 = 0;
      v56 = 0LL;
    }
    else
    {
      v55 = v54 - v52;
      v56 = *(_QWORD *)(a2 + 16) & (-1LL << (v52 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v54 - 1) >> 12)));
    }
    v57 = ((v56 - ((v56 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v56 - ((v56 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    v58 = (0x101010101010101LL * ((v57 + (v57 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    *(_QWORD *)(a1 + 56) += v58;
    *(_WORD *)v36 = RtlpHpHeapGlobals ^ v36 ^ (v53 + (v55 >> 12) - v58);
    v59 = *(_QWORD *)(a1 + 24);
    if ( (v59 & 1) != 0 )
    {
      v60 = *(_QWORD *)(a1 + 16);
      if ( v60 )
        v11 = v60 ^ (a1 + 16);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 16);
    }
    v61 = 0;
    v62 = v59 & 1;
    if ( v11 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v36 ^ (unsigned int)v36) < ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v11 - 8) ^ ((_DWORD)v11 - 8)) )
        {
          v63 = *(_QWORD *)v11;
          if ( v62 )
          {
            if ( !v63 )
              goto LABEL_69;
            v63 ^= v11;
          }
          if ( !v63 )
          {
LABEL_69:
            v61 = 0;
            break;
          }
        }
        else
        {
          v63 = *(_QWORD *)(v11 + 8);
          if ( v62 )
          {
            if ( !v63 )
              goto LABEL_63;
            v63 ^= v11;
          }
          if ( !v63 )
          {
LABEL_63:
            v61 = 1;
            break;
          }
        }
        v11 = v63;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)v11, v61, (PRTL_BALANCED_NODE)(v36 + 8));
    return v69;
  }
}
