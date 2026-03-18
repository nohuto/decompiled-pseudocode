/*
 * XREFs of MiCreatePagingFileMap @ 0x14064E964
 * Callers:
 *     MiCreateSection @ 0x1405D7770 (MiCreateSection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiMakeDemandZeroPte @ 0x1400765C8 (MiMakeDemandZeroPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400BFFF0 (MiUpdateSystemProtoPtesTree.c)
 *     MiUpdateControlAreaCommitCount @ 0x1400C01D8 (MiUpdateControlAreaCommitCount.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiGetPfnLink @ 0x14013CD90 (MiGetPfnLink.c)
 *     MiFreeLargeZeroPages @ 0x140186C94 (MiFreeLargeZeroPages.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiUpdateLargePageSectionPfn @ 0x1402C382C (MiUpdateLargePageSectionPfn.c)
 *     MiDeleteSectionAwe @ 0x1402D5958 (MiDeleteSectionAwe.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402D96CC (MiReturnPartitionResidentAvailable.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x14064F444 (MiInitializePrototypePtes.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     MiLogSectionCreate @ 0x14088A030 (MiLogSectionCreate.c)
 *     MiAllocateAweInfo @ 0x140895678 (MiAllocateAweInfo.c)
 *     MiAllocateLargeZeroPages @ 0x140898C74 (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiCreatePagingFileMap(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // esi
  char v4; // di
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  int v8; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR **v10; // r15
  ULONG_PTR *v11; // r15
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // r14
  _DWORD *v16; // r12
  __int64 LargeZeroPages; // rax
  unsigned __int64 v18; // rdi
  __int64 PfnLink; // rcx
  __int64 v20; // r15
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  volatile signed __int64 **PoolWithTag; // rax
  volatile signed __int64 **v24; // r14
  volatile signed __int64 *v25; // rax
  volatile signed __int64 *v26; // r12
  __int16 v27; // dx
  int v28; // ecx
  int v29; // eax
  __int16 v30; // ax
  __int16 v31; // ax
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // r11
  unsigned __int64 v36; // r10
  volatile signed __int64 ***v37; // rdx
  volatile signed __int64 ***i; // r9
  unsigned __int64 v39; // r8
  unsigned __int8 v40; // al
  __int16 v41; // cx
  PVOID v42; // rax
  int v43; // edi
  unsigned __int64 ValidPte; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 DemandZeroPte; // rsi
  unsigned __int64 v49; // r12
  _QWORD *v50; // r13
  __int64 v51; // r15
  _QWORD *v52; // rdi
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r11
  __int64 v56; // rax
  _QWORD *v57; // r14
  __int64 v58; // rbp
  __int64 v59; // rdx
  int v60; // r8d
  __int64 v61; // r11
  int v62; // r9d
  unsigned __int64 v63; // rbp
  PVOID *v64; // rsi
  unsigned __int64 v65; // rdi
  PVOID v66; // [rsp+40h] [rbp-D8h]
  __int64 v67; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v68; // [rsp+48h] [rbp-D0h]
  ULONG_PTR *v69; // [rsp+50h] [rbp-C8h]
  volatile signed __int64 ***v70; // [rsp+58h] [rbp-C0h]
  __int64 v71; // [rsp+58h] [rbp-C0h]
  __int64 v72; // [rsp+60h] [rbp-B8h]
  __int64 v73; // [rsp+68h] [rbp-B0h]
  volatile signed __int64 ***v74; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v75; // [rsp+78h] [rbp-A0h]
  __int64 v76; // [rsp+80h] [rbp-98h] BYREF
  unsigned __int64 v77; // [rsp+88h] [rbp-90h]
  __int64 v78; // [rsp+90h] [rbp-88h]
  volatile signed __int64 **v79; // [rsp+98h] [rbp-80h]
  volatile signed __int64 *v80; // [rsp+A0h] [rbp-78h]
  __int64 v81[14]; // [rsp+A8h] [rbp-70h] BYREF
  char v83; // [rsp+128h] [rbp+10h]
  unsigned __int64 v84; // [rsp+128h] [rbp+10h]
  __int64 v85; // [rsp+128h] [rbp+10h]
  unsigned __int64 v86; // [rsp+130h] [rbp+18h]
  __int64 v87; // [rsp+138h] [rbp+20h]

  v1 = a1;
  memset(v81, 0, 0x20uLL);
  v2 = *(_DWORD *)(v1 + 16);
  if ( (v2 & 0x1000000) != 0 )
    return 3221225504LL;
  v4 = *(_BYTE *)(v1 + 192);
  v83 = v4;
  if ( v4 )
  {
    if ( (v2 & 0x2BF7FFFF) != 0
      || (v2 & 0x4000000) == 0
      || (v2 & 0x8000000) != 0
      || (v2 & 0x80080000) == 0x80080000
      || (v2 & 0x50000000) == 0x50000000 )
    {
      return 3221225485LL;
    }
    if ( (*(_DWORD *)(v1 + 28) & 7) != 4 )
      return 3221225541LL;
    if ( (*(_DWORD *)(v1 + 32) & 7) != 4 )
      return 3221225485LL;
  }
  else
  {
    if ( v2 >= 0 )
      goto LABEL_18;
    if ( (v2 & 0x8000000) == 0 )
      return 3221225716LL;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(v1 + 72)) )
    return 3221225569LL;
LABEL_18:
  v5 = *(_QWORD *)(v1 + 152);
  v6 = 1LL;
  v78 = 1LL;
  if ( v4 )
  {
    if ( !v5 )
    {
      v7 = 1LL;
      v8 = v2 & 0x8000000;
      goto LABEL_26;
    }
    return 3221225714LL;
  }
  if ( !v5 )
    return 3221225714LL;
  v8 = v2 & 0x8000000;
  if ( v5 > (-(__int64)((v2 & 0x8000000) != 0) & 0xFFFFF001000uLL) - 4096 )
    return 3221225536LL;
  v7 = (v5 + 4095) >> 12;
LABEL_26:
  CurrentThread = KeGetCurrentThread();
  v10 = *(ULONG_PTR ***)(v1 + 176);
  v87 = 0LL;
  v77 = 0LL;
  v72 = (__int64)CurrentThread;
  if ( v10 )
    v11 = *v10;
  else
    v11 = &MiSystemPartition;
  v69 = v11;
  if ( v8 )
  {
    if ( !(unsigned int)MiChargeCommit((__int64)v11, v7, 0) )
      return 3221225773LL;
    if ( (v2 & 0x80000) != 0 && (v7 & 0xF) != 0 )
      goto LABEL_36;
    if ( v2 >= 0 )
    {
      v6 = 1LL;
    }
    else
    {
      if ( (v7 & 0x1FF) != 0 )
      {
LABEL_36:
        v12 = -1073741582;
LABEL_50:
        MiReturnCommit((__int64)v11, v7);
        return v12;
      }
      if ( !(unsigned int)MiChargeResident(v11, v7, 0LL) )
      {
LABEL_49:
        v12 = -1073741670;
        goto LABEL_50;
      }
      v13 = *(_DWORD *)(v1 + 172);
      if ( v13 )
        v14 = v13 - 1;
      else
        v14 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 23572);
      v15 = (_DWORD *)(qword_140465750 + 4LL * v14 * (unsigned int)(unsigned __int16)KeNumberNodes);
      v16 = &v15[(unsigned __int16)KeNumberNodes];
      LargeZeroPages = MiAllocateLargeZeroPages(
                         (_DWORD)v11,
                         v7,
                         0x40000,
                         512,
                         v14,
                         *(_DWORD *)(v1 + 32),
                         (__int64)v81,
                         0);
      v18 = v7 - LargeZeroPages;
      if ( v7 != LargeZeroPages )
      {
        do
        {
          if ( ++v15 == v16 )
            break;
          v18 -= MiAllocateLargeZeroPages((_DWORD)v11, v18, 0x40000, 512, *v15, *(_DWORD *)(v1 + 32), (__int64)v81, 0);
        }
        while ( v18 );
        if ( v18 )
        {
          if ( v18 != v7 )
            MiFreeLargeZeroPages((__int64)v11, v81);
          if ( v11 == &MiSystemPartition )
            MiReturnResidentAvailable(v7);
          else
            MiReturnPartitionResidentAvailable((__int64)v11, v7);
          goto LABEL_49;
        }
      }
      PfnLink = v81[0];
      v6 = 1LL;
      if ( v81[0] )
      {
        v20 = 0LL;
        do
        {
          v20 += v6;
          PfnLink = MiGetPfnLink(PfnLink);
        }
        while ( PfnLink );
        v87 = v20;
        v11 = v69;
      }
      v77 = v7;
    }
  }
  v66 = 0LL;
  v76 = 0LL;
  if ( (v2 & 0x88000000) == 0x8000000 )
  {
    v68 = v7;
    v21 = v6;
    v86 = v6;
  }
  else
  {
    v22 = (unsigned __int64)(((v2 >> 31) & 0x100000u) + 0x100000) >> 3;
    v68 = v22;
    v86 = v7 / v22;
    v21 = v7 / v22;
    if ( v7 % v22 )
    {
      v21 += v6;
      v86 = v21;
    }
  }
  PoolWithTag = (volatile signed __int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, 88 * v21 + 128, 0x61436D4Du);
  v79 = PoolWithTag;
  v24 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_136;
  memset(PoolWithTag, 0, 88 * v21 + 128);
  v25 = (volatile signed __int64 *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x6765534Du);
  v80 = v25;
  v26 = v25;
  if ( !v25 )
  {
LABEL_128:
    v63 = 0LL;
    if ( v21 )
    {
      v64 = (PVOID *)(v24 + 17);
      do
      {
        if ( !*v64 )
          break;
        ExFreePoolWithTag(*v64, 0);
        v64 += 11;
        ++v63;
      }
      while ( v63 < v21 );
    }
    if ( v76 )
      MiDeleteSectionAwe((__int64)v24);
    ExFreePoolWithTag(v24, 0);
    if ( v26 )
      ExFreePoolWithTag((PVOID)v26, 0);
LABEL_136:
    if ( v8 )
    {
      v65 = v77;
      if ( v77 )
      {
        MiFreeLargeZeroPages((__int64)v11, v81);
        if ( v11 == &MiSystemPartition )
          MiReturnResidentAvailable(v65);
        else
          MiReturnPartitionResidentAvailable((__int64)v11, v65);
      }
      else
      {
        v65 = v7;
      }
      MiReturnCommit((__int64)v11, v65);
    }
    return 3221225626LL;
  }
  *((_QWORD *)v25 + 9) = 0LL;
  v27 = (*((_WORD *)v24 + 30) ^ *(_WORD *)v11) & 0x3FF;
  *((_DWORD *)v24 + 24) = v21;
  *((_WORD *)v24 + 30) ^= v27;
  *v24 = v25;
  v24[2] = (volatile signed __int64 *)(v24 + 1);
  v24[1] = (volatile signed __int64 *)(v24 + 1);
  v28 = *((_DWORD *)v24 + 14);
  v24[14] = (volatile signed __int64 *)1;
  v24[3] = (volatile signed __int64 *)1;
  v24[6] = (volatile signed __int64 *)1;
  if ( (v2 & 0x200000) != 0 )
  {
    v28 |= 0x40u;
    *((_DWORD *)v24 + 14) = v28;
  }
  if ( (v2 & 0x4000000) != 0 )
  {
    v28 |= 0x1000u;
    *((_DWORD *)v24 + 14) = v28;
  }
  if ( v8 )
  {
    v28 |= 0x2000u;
    *((_DWORD *)v24 + 14) = v28;
  }
  if ( (v2 & 0x80000) != 0 )
  {
    v28 |= 0x80000000;
    *((_DWORD *)v24 + 14) = v28;
  }
  v29 = *(_DWORD *)(v1 + 172);
  v24[13] = 0LL;
  *((_DWORD *)v24 + 14) = v28 ^ (v28 ^ (v29 << 20)) & 0x3F00000;
  memset((void *)v26, 0, 0x48uLL);
  if ( (v2 & 0x10000000) != 0 )
  {
    v30 = 0x8000;
LABEL_76:
    *((_WORD *)v26 + 6) |= v30;
    goto LABEL_77;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v30 = 0x4000;
    goto LABEL_76;
  }
LABEL_77:
  *((_BYTE *)v26 + 14) ^= (*((_BYTE *)v26 + 14) ^ (2 * *(_BYTE *)(v1 + 32))) & 0x3E;
  *((_DWORD *)v26 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  *((_QWORD *)v26 + 3) = v7 << 12;
  v31 = (*((_WORD *)v26 + 6) ^ WORD2(v7)) & 0x3FF;
  *v26 = (volatile signed __int64)v24;
  *((_WORD *)v26 + 6) ^= v31;
  *((_DWORD *)v26 + 2) = v7;
  if ( v83 )
  {
    v32 = *(_DWORD *)(v1 + 16);
    v33 = v32 >= 0 ? (v32 & 0x80000) != 0 : 2;
    if ( (v32 & 0x10000000) != 0 )
    {
      v33 |= 0x10u;
    }
    else if ( (v32 & 0x40000000) != 0 )
    {
      v33 |= 8u;
    }
    v34 = v33 | 4;
    if ( (*(_DWORD *)(v1 + 196) & 1) == 0 )
      v34 = v33;
    if ( (int)MiAllocateAweInfo(v24, 0LL, v34, &v76) < 0 )
      goto LABEL_128;
  }
  v84 = v7;
  v35 = 0LL;
  v74 = (volatile signed __int64 ***)(v24 + 16);
  v36 = 0LL;
  v73 = 0LL;
  v75 = 0LL;
  v37 = (volatile signed __int64 ***)(v24 + 16);
  for ( i = (volatile signed __int64 ***)(v24 + 16); v36 < v21; v75 = v36 )
  {
    i = v37;
    v39 = v68;
    v70 = v37;
    v37[10] = (volatile signed __int64 **)((unsigned __int64)v37[10] & 0xFFFFFFFFFFFFFFF8uLL | 1);
    if ( v84 <= v68 )
      v39 = v84;
    v40 = v78 & (_WORD)v37[4];
    v84 -= v39;
    *v37 = v24;
    v41 = *(_WORD *)(v1 + 32);
    *((_DWORD *)v37 + 11) = v39;
    *((_DWORD *)v37 + 9) = v35;
    *((_WORD *)v37 + 16) = (WORD2(v35) << 6) | (v40 | (unsigned __int8)(2 * v41)) & 0x3F;
    if ( v8 )
    {
      v42 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8 * v39, 0x74536D4Du);
      v66 = v42;
      if ( !v42 )
        goto LABEL_128;
      v37 = v74;
      i = v70;
      v36 = v75;
      v35 = v73;
      LODWORD(v39) = *((_DWORD *)v74 + 11);
      v74[1] = (volatile signed __int64 **)v42;
    }
    v37 += 11;
    v35 += (unsigned int)v39;
    v74 = v37;
    ++v36;
    v73 = v35;
    i[2] = (volatile signed __int64 **)v37;
  }
  i[2] = 0LL;
  *((_QWORD *)v26 + 8) = v66;
  if ( !v8 )
    goto LABEL_125;
  --*(_WORD *)(v72 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v26 + 5), 0LL);
  MiUpdateControlAreaCommitCount((__int64)v24, v7);
  if ( (_InterlockedExchangeAdd64(v26 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v26 + 5);
  KeAbPostRelease((ULONG_PTR)(v26 + 5));
  KiLeaveGuardedRegionUnsafe(v72);
  if ( v2 < 0 )
  {
    *((_WORD *)v26 + 6) |= 0x1000u;
    *((_DWORD *)v24 + 23) |= 0x10000u;
    v43 = *(_DWORD *)(v1 + 32);
    ValidPte = MiMakeValidPte(0LL, -1LL, v43 | 0x80000000);
    DemandZeroPte = MiMakeDemandZeroPte(v43, v45, v46, v47);
    if ( !v86 )
      goto LABEL_125;
    v49 = v86;
    v50 = v24 + 22;
    v51 = v87;
    while ( 1 )
    {
      v52 = (_QWORD *)*(v50 - 5);
      v53 = *(_DWORD *)v50 & 0x3FFFFFFF | 0x40000000;
      *(_DWORD *)v50 = v53;
      if ( v51 )
      {
        v87 = --v51;
        *(_DWORD *)v50 = v53 & 0x3FFFFFFF | 0x80000000;
      }
      memset(v52, 0, 8LL * *((unsigned int *)v50 - 1));
      MiUpdateSystemProtoPtesTree(v50 + 1, 1);
      v67 = 0LL;
      if ( *((_DWORD *)v50 - 1) )
        break;
LABEL_122:
      v50 += 11;
      v86 = --v49;
      if ( !v49 )
      {
        v24 = v79;
        v1 = a1;
        v11 = v69;
        v26 = v80;
        goto LABEL_125;
      }
    }
LABEL_104:
    v54 = 0LL;
    while ( 1 )
    {
      v55 = v81[v54];
      v85 = v55;
      if ( v55 )
        break;
      if ( (unsigned __int64)++v54 >= 4 )
        goto LABEL_109;
    }
    v56 = MiGetPfnLink(v55);
    v81[v54] = v56;
LABEL_109:
    v71 = MiLargePageSizes[(unsigned int)v54];
    v57 = &v52[v71];
    v58 = (v55 + 0x58000000000LL) / 48;
    while ( 1 )
    {
      ValidPte ^= (ValidPte ^ (v58 << 12)) & 0xFFFFFFFFF000LL;
      if ( MiPteInShadowRange((unsigned __int64)v52) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v60 = v62;
          if ( !HIBYTE(word_1404658EC) )
            goto LABEL_115;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
LABEL_115:
          if ( ((unsigned __int8)ValidPte & (unsigned __int8)v62) != 0 )
            v59 |= 0x8000000000000000uLL;
        }
      }
      *v52 = v59;
      if ( v60 )
        MiWritePteShadow((__int64)v52);
      MiUpdateLargePageSectionPfn(v61, (__int64)v52, DemandZeroPte);
      ++v58;
      ++v52;
      v85 += 48LL;
      if ( v52 >= v57 )
      {
        v67 += v71;
        if ( v67 == *((_DWORD *)v50 - 1) )
        {
          v49 = v86;
          v51 = v87;
          goto LABEL_122;
        }
        goto LABEL_104;
      }
    }
  }
  MiInitializePrototypePtes((ULONG_PTR)v24[17]);
  MiUpdateSystemProtoPtesTree((unsigned __int64 *)v24 + 23, 1);
LABEL_125:
  *(_QWORD *)(v1 + 64) = v24;
  _InterlockedAdd64((volatile signed __int64 *)v11 + 162, 1uLL);
  *(_DWORD *)v1 |= 4u;
  *(_QWORD *)(v1 + 128) = _InterlockedCompareExchange64(v26 + 3, -1LL, -1LL);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
    MiLogSectionCreate(v24, 1LL);
  return 0LL;
}
