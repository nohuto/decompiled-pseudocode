/*
 * XREFs of MiWriteAwePtes @ 0x1402D7E08
 * Callers:
 *     MiDeleteVadAwePtes @ 0x1402D5C3C (MiDeleteVadAwePtes.c)
 *     NtMapUserPhysicalPages @ 0x140897C30 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140897F10 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiPageTableLockIsContended @ 0x14008DE78 (MiPageTableLockIsContended.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewPage @ 0x1400F6568 (MiWriteValidPteNewPage.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiDecrementAweMapCount @ 0x1402D5840 (MiDecrementAweMapCount.c)
 *     MiDeleteAwePageTable @ 0x1402D5948 (MiDeleteAwePageTable.c)
 *     MiGetAweNode @ 0x1402D6468 (MiGetAweNode.c)
 *     MiUpdateAwePageTable @ 0x1402D7CD8 (MiUpdateAwePageTable.c)
 *     MiRewritePteWithLockBit @ 0x1402D8F30 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiWriteAwePtes(
        int *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // r15
  __int64 v9; // rbx
  ULONG_PTR v10; // r13
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // r12
  unsigned int v14; // ebx
  unsigned int v15; // edx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edi
  unsigned __int64 v19; // rsi
  unsigned __int8 v20; // al
  __int64 v21; // r11
  bool v22; // zf
  BOOL v23; // eax
  unsigned __int64 LeafVa; // rax
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  unsigned int v31; // ecx
  int v32; // r10d
  unsigned int v33; // edi
  int v34; // r8d
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  unsigned __int64 v38; // r15
  int updated; // r14d
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r14
  unsigned __int64 v44; // rcx
  __int64 v45; // rsi
  int v46; // edi
  __int64 v47; // r12
  ULONG_PTR v48; // rax
  unsigned __int64 v49; // r14
  __int64 v50; // r14
  unsigned __int64 v51; // rbx
  int v52; // ebx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  int v57; // ebx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int8 v61; // [rsp+30h] [rbp-D0h]
  __int64 v62; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+40h] [rbp-C0h]
  unsigned int v64; // [rsp+48h] [rbp-B8h]
  BOOL v65; // [rsp+4Ch] [rbp-B4h]
  unsigned int v66; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v67; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  unsigned int v70; // [rsp+70h] [rbp-90h]
  unsigned __int64 v71; // [rsp+78h] [rbp-88h]
  __int64 v72; // [rsp+80h] [rbp-80h]
  __int64 v73; // [rsp+88h] [rbp-78h]
  __int64 v74; // [rsp+90h] [rbp-70h]
  int v75; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 ValidPte; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v77; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v78; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-48h]
  __int64 v80; // [rsp+C0h] [rbp-40h]
  __int64 v81; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v82; // [rsp+D0h] [rbp-30h]
  __int64 v83; // [rsp+D8h] [rbp-28h]
  _DWORD *v84; // [rsp+E0h] [rbp-20h]
  __int64 v85; // [rsp+E8h] [rbp-18h]
  _QWORD v86[24]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = a5;
  v9 = a6;
  v10 = a7;
  v79 = a3;
  v80 = a2;
  v84 = a1;
  v74 = a5;
  v69 = a6;
  v83 = a4;
  memset(v86, 0, 0xB8uLL);
  v73 = *((_QWORD *)a1 + 1);
  LODWORD(v86[1]) = 20;
  v11 = v73;
  LODWORD(v86[0]) = 1;
  if ( v73 == 512 )
    v11 = 1LL;
  v77 = v11;
  v78 = 0LL;
  v71 = 0LL;
  v68 = 0LL;
  v12 = 0x4000000;
  v70 = v73 == 512;
  if ( v73 != 512 )
    v12 = 0;
  v62 = 0LL;
  LODWORD(v63) = 0;
  v13 = 0LL;
  v81 = 0LL;
  WORD2(v86[0]) = 0;
  v86[2] = 0LL;
  v86[3] = 0LL;
  if ( a6 )
  {
    v14 = *(_DWORD *)(a6 + 48);
    v15 = v12 | 0x80000000;
    v16 = *a1;
    if ( (v14 & 0x300000) == 0x300000 )
      v15 = v12;
    v66 = v15;
    if ( (v16 & 1) != 0 )
      v17 = 4;
    else
      v17 = (v14 >> 7) & 0x1F;
    ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v17 | v15);
    v18 = (v14 >> 12) & 0x3F;
    v19 = ValidPte;
    v64 = v18;
    v20 = MiLockWorkingSetShared(a5);
    v21 = v73;
    v61 = v20;
    v22 = (v14 & 0x1100000) == 17825792;
    v9 = v69;
    v23 = v22;
  }
  else
  {
    ValidPte = 0LL;
    v64 = 0;
    v66 = v12 | 0x80000000;
    v19 = 0LL;
    v61 = 17;
    v18 = 0;
    LeafVa = MiGetLeafVa(a7);
    v23 = (*(_DWORD *)(MiLocateAddress(LeafVa) + 48) & 0x1100000) == 17825792;
  }
  v65 = v23;
  if ( !v79 )
  {
LABEL_110:
    MiUnlockWorkingSetShared(v7, v61);
    return v81;
  }
  v25 = v80;
  v26 = 0LL;
  v27 = v83;
  v28 = v80;
  v82 = 0LL;
  v29 = v83 - v80;
  v72 = v80;
  v85 = v83 - v80;
  while ( 2 )
  {
    if ( v27 )
    {
      v30 = *(_QWORD *)(v29 + v28);
      v31 = v70;
      v10 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v21 == 512 )
      {
        do
        {
          v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v31;
        }
        while ( v31 );
        v13 = v71;
      }
      if ( v30 < (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) << 12
        || v30 > (((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) << 12) | 0xFFF) )
      {
        v69 = MiGetAweNode(v30)[3];
        v33 = *(_DWORD *)(v69 + 48);
        if ( (*v84 & 1) != 0 )
          v34 = 4;
        else
          v34 = (v33 >> 7) & 0x1F;
        v35 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v32 | (unsigned int)v34);
        v28 = v72;
        v19 = v35;
        v18 = (v33 >> 12) & 0x3F;
        ValidPte = v35;
        v64 = v18;
      }
      if ( !v80 || (v36 = v19, !*(_QWORD *)v28) )
        v36 = ZeroPte;
    }
    else
    {
      v36 = ZeroPte;
      if ( v25 )
        v36 = v19;
    }
    if ( (v36 & 1) != 0 )
      v36 ^= (v36 ^ (*(_QWORD *)v28 << 12)) & 0xFFFFFFFFF000LL;
    v37 = (v10 >> 9) & 0x7FFFFFFFF8LL;
    if ( v69 )
    {
      v38 = v37 - 0x98000000000LL;
      if ( v13 != v37 - 0x98000000000LL )
      {
        if ( v13 )
        {
          updated = MiUpdateAwePageTable(v13, v26, v63);
          MiFlushTbList((int *)v86, v40, v41, v42);
          if ( v65 )
            v68 = 0LL;
          MiUnlockPageTableInternal(v74, v13);
          if ( updated )
            MiDeleteAwePageTable(v74, v13);
          v43 = 0LL;
          LODWORD(v63) = 0;
          v62 = 0LL;
        }
        else
        {
          v43 = v62;
        }
        MiMakeSystemAddressValid(v10, 0LL, v18, v61, 0);
        v13 = v38;
        v71 = v38;
        v7 = v74;
        goto LABEL_47;
      }
      v7 = v74;
    }
    else
    {
      v13 = v37 - 0x98000000000LL;
      v71 = v37 - 0x98000000000LL;
    }
    v43 = v62;
LABEL_47:
    v44 = 0LL;
    v67 = 0LL;
    if ( !v77 )
      goto LABEL_91;
    v45 = v62;
    v46 = v63;
    v47 = v69;
    do
    {
      v48 = v10;
      v49 = *(_QWORD *)v10;
      v62 = *(_QWORD *)v10;
      if ( v68 )
        v48 = v68;
      v68 = v48;
      v63 = v36 & 1;
      if ( (v36 & 1) == 0 )
      {
        if ( !v49 )
          goto LABEL_87;
        --v46;
        --v45;
        if ( (v49 & 1) == 0 || v73 != 512 )
        {
          *(_QWORD *)v10 = v36;
LABEL_65:
          if ( !v49 )
            goto LABEL_87;
          goto LABEL_66;
        }
        goto LABEL_62;
      }
      if ( (v49 & 1) != 0 )
      {
        if ( v36 == v49 )
          goto LABEL_65;
        if ( v73 != 512 )
        {
          MiWriteValidPteNewPage((__int64 *)v10, v36, 1);
LABEL_63:
          v44 = v67;
          goto LABEL_65;
        }
LABEL_62:
        MiRewritePteWithLockBit(v7, v10, v36, v28);
        goto LABEL_63;
      }
      *(_QWORD *)v10 = v36;
      if ( (v49 & 0x800) != 0 )
        goto LABEL_65;
      ++v45;
      if ( !v49 )
      {
        ++v46;
        goto LABEL_65;
      }
LABEL_66:
      if ( (v49 & 1) != 0 )
      {
        if ( v47 )
        {
          if ( v73 == 512 )
            MiInsertLargeTbFlushEntry((__int64)v86, v70, v10);
          else
            MiInsertTbFlushEntry((__int64)v86, (__int64)(v10 << 25) >> 16, 1LL, 0);
        }
        v49 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v62);
      }
      else if ( qword_140465B00 && (v49 & 0x10) == 0 )
      {
        v49 &= ~qword_140465B00;
      }
      v44 = v67;
      v50 = 48 * ((v49 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( !v67 )
      {
        v28 = 0x3FFFFFFFFFFFFFFFLL;
        if ( (*(_QWORD *)(v50 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          goto LABEL_85;
        v75 &= v67;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v75);
            while ( *(__int64 *)(v50 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) );
          v28 = 0x3FFFFFFFFFFFFFFFLL;
        }
        v44 = *(_QWORD *)(v50 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v44 == 1 )
          v44 = 1LL;
        else
          *(_QWORD *)(v50 + 24) ^= (*(_QWORD *)(v50 + 24) ^ (v44 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v44 == 1 )
LABEL_85:
          MiDecrementAweMapCount(v44, v50, &v81, 0);
        v44 = v67;
      }
LABEL_87:
      v10 += 8LL;
      if ( v63 )
        v36 ^= (v36 ^ (v36 + 4096)) & 0xFFFFFFFFF000LL;
      v67 = ++v44;
    }
    while ( v44 < v77 );
    v13 = v71;
    v62 = v45;
    v19 = ValidPte;
    v43 = v62;
    LODWORD(v63) = v46;
    v18 = v64;
LABEL_91:
    v51 = v78 + 1;
    v28 = v72 + 8;
    ++v78;
    v72 += 8LL;
    v82 += v77;
    if ( (v82 & 0x3F) != 0 )
    {
      v26 = v62;
      goto LABEL_104;
    }
    if ( !MiWorkingSetIsContended(v7) && !(unsigned int)MiPageTableLockIsContended(v7, v13) && !KeShouldYieldProcessor() )
    {
      v26 = v62;
      goto LABEL_103;
    }
    if ( v51 != v79 )
    {
      v52 = MiUpdateAwePageTable(v13, v43, v63);
      MiFlushTbList((int *)v86, v53, v54, v55);
      if ( v65 )
        v68 = 0LL;
      MiUnlockPageTableInternal(v7, v13);
      if ( v52 )
        MiDeleteAwePageTable(v7, v13);
      MiUnlockWorkingSetShared(v7, v61);
      v13 = 0LL;
      v26 = 0LL;
      LODWORD(v63) = 0;
      v71 = 0LL;
      v62 = 0LL;
      MiLockWorkingSetShared(v7);
      v51 = v78;
LABEL_103:
      v28 = v72;
LABEL_104:
      v21 = v73;
      v29 = v85;
      v25 = v80;
      v27 = v83;
      if ( v51 < v79 )
      {
        v9 = v69;
        continue;
      }
      v43 = v62;
    }
    break;
  }
  if ( !v13 )
    goto LABEL_110;
  v57 = MiUpdateAwePageTable(v13, v43, v63);
  if ( v69 )
  {
    MiFlushTbList((int *)v86, v56, v58, v59);
    MiUnlockPageTableInternal(v7, v13);
    if ( v57 )
      MiDeleteAwePageTable(v7, v13);
    goto LABEL_110;
  }
  return v81;
}
