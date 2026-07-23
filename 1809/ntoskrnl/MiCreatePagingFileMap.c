/*
 * XREFs of MiCreatePagingFileMap @ 0x14061FB18
 * Callers:
 *     MiCreateSection @ 0x1405DEAC0 (MiCreateSection.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiFreeLargeZeroPages @ 0x14002891C (MiFreeLargeZeroPages.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiUpdateControlAreaCommitCount @ 0x140095ED4 (MiUpdateControlAreaCommitCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeDemandZeroPte @ 0x140097E20 (MiMakeDemandZeroPte.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     MiGetPfnLink @ 0x1400E10E0 (MiGetPfnLink.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiUpdateLargePageSectionPfn @ 0x1402AB0AC (MiUpdateLargePageSectionPfn.c)
 *     MiDeleteSectionAwe @ 0x1402B06C4 (MiDeleteSectionAwe.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402C0230 (MiReturnPartitionResidentAvailable.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     MiInitializePrototypePtes @ 0x140620030 (MiInitializePrototypePtes.c)
 *     MiLogSectionCreate @ 0x14084F998 (MiLogSectionCreate.c)
 *     MiAllocateAweInfo @ 0x14085073C (MiAllocateAweInfo.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiCreatePagingFileMap(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r15
  char v3; // bl
  unsigned __int64 v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR **v8; // r13
  ULONG_PTR *v9; // r13
  int v10; // ebx
  unsigned __int64 v11; // rsi
  volatile signed __int64 **PoolWithTag; // rax
  volatile signed __int64 **v13; // r14
  volatile signed __int64 *v14; // rax
  volatile signed __int64 *v15; // r12
  __int16 v16; // dx
  int v17; // ecx
  int v18; // eax
  volatile signed __int64 ***v19; // rdx
  volatile signed __int64 ***v20; // r10
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int16 v24; // ax
  __int16 v25; // cx
  __int16 v26; // cx
  PVOID v27; // rax
  __int16 v29; // ax
  unsigned __int64 v30; // rcx
  unsigned int v31; // ebx
  int v32; // r8d
  int v33; // r9d
  unsigned __int64 v34; // r14
  int v35; // r9d
  unsigned __int16 *v36; // rsi
  unsigned __int16 *v37; // r12
  _QWORD *PfnLink; // rcx
  __int64 v39; // r13
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // r8
  unsigned __int64 v43; // r15
  PVOID *v44; // rbx
  int v45; // edi
  int ValidPte; // ebx
  __int64 DemandZeroPte; // rsi
  unsigned __int64 v48; // r12
  _DWORD *v49; // rdi
  __int64 v50; // r13
  __int64 *v51; // rdx
  int v52; // eax
  _QWORD *v53; // rdi
  __int64 v54; // rdx
  _QWORD *v55; // r11
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 *v58; // rdi
  __int64 v59; // r11
  __int64 v60; // r15
  __int64 v61; // rdx
  int v62; // r8d
  __int64 v63; // r11
  char v64; // r9
  int v65; // r10d
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // [rsp+40h] [rbp-79h]
  __int64 v68; // [rsp+48h] [rbp-71h]
  PVOID v69; // [rsp+50h] [rbp-69h]
  __int64 v70; // [rsp+50h] [rbp-69h]
  __int64 v71; // [rsp+58h] [rbp-61h]
  __int64 *v72; // [rsp+58h] [rbp-61h]
  unsigned __int64 v73; // [rsp+60h] [rbp-59h]
  ULONG_PTR *v74; // [rsp+68h] [rbp-51h]
  __int64 v75; // [rsp+70h] [rbp-49h]
  volatile signed __int64 ***v76; // [rsp+78h] [rbp-41h]
  unsigned __int64 v77; // [rsp+80h] [rbp-39h]
  volatile signed __int64 ***v78; // [rsp+88h] [rbp-31h]
  unsigned __int64 v79; // [rsp+90h] [rbp-29h]
  __int64 v80; // [rsp+98h] [rbp-21h] BYREF
  unsigned __int64 v81; // [rsp+A0h] [rbp-19h]
  _QWORD *v82[3]; // [rsp+A8h] [rbp-11h] BYREF
  volatile signed __int64 **v83; // [rsp+C0h] [rbp+7h]
  volatile signed __int64 *v84; // [rsp+C8h] [rbp+Fh]
  char v86; // [rsp+128h] [rbp+6Fh]
  __int16 v87; // [rsp+128h] [rbp+6Fh]
  _QWORD *v88; // [rsp+128h] [rbp+6Fh]
  int v89; // [rsp+130h] [rbp+77h]
  _QWORD *v90; // [rsp+130h] [rbp+77h]
  unsigned __int64 v91; // [rsp+138h] [rbp+7Fh]

  v1 = *(_DWORD *)(a1 + 16);
  memset(v82, 0, sizeof(v82));
  v2 = a1;
  if ( (v1 & 0x1000000) != 0 )
    return 3221225504LL;
  v3 = *(_BYTE *)(a1 + 192);
  v86 = v3;
  if ( v3 )
  {
    if ( (v1 & 0x2BF7FFFF) != 0
      || (v1 & 0x4000000) == 0
      || (v1 & 0x8000000) != 0
      || (v1 & 0x80080000) == 0x80080000
      || (v1 & 0x50000000) == 0x50000000 )
    {
      return 3221225485LL;
    }
    if ( (*(_DWORD *)(a1 + 28) & 7) != 4 )
      return 3221225541LL;
    if ( (*(_DWORD *)(a1 + 32) & 7) != 4 )
      return 3221225485LL;
  }
  else
  {
    if ( v1 >= 0 )
      goto LABEL_4;
    if ( (v1 & 0x8000000) == 0 )
      return 3221225716LL;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 72)) )
    return 3221225569LL;
LABEL_4:
  v4 = *(_QWORD *)(v2 + 152);
  v5 = 1LL;
  if ( !v3 )
  {
    if ( v4 )
    {
      if ( v4 > 0xFFFFF000000LL )
        return 3221225536LL;
      v6 = (v4 + 4095) >> 12;
      goto LABEL_8;
    }
    return 3221225714LL;
  }
  if ( v4 )
    return 3221225714LL;
  v6 = 1LL;
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  v8 = *(ULONG_PTR ***)(v2 + 176);
  v68 = 0LL;
  v81 = 0LL;
  v71 = (__int64)CurrentThread;
  if ( v8 )
    v9 = *v8;
  else
    v9 = &MiSystemPartition;
  v10 = *(_DWORD *)(v2 + 16);
  v74 = v9;
  v89 = v10 & 0x8000000;
  if ( (v10 & 0x8000000) == 0 )
    goto LABEL_15;
  if ( !(unsigned int)MiChargeCommit((__int64)v9, v6, 0) )
    return 3221225773LL;
  if ( (v10 & 0x80000) != 0 && (v6 & 0xF) != 0 )
  {
LABEL_74:
    v31 = -1073741582;
    goto LABEL_89;
  }
  if ( v10 >= 0 )
  {
    v5 = 1LL;
    goto LABEL_15;
  }
  if ( (v6 & 0x1FF) != 0 )
    goto LABEL_74;
  if ( !(unsigned int)MiChargeResident(v9, v6, 0LL) )
    goto LABEL_88;
  v33 = *(_DWORD *)(v2 + 172);
  v34 = v6;
  if ( v33 )
    v35 = v33 - 1;
  else
    v35 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 23572);
  v36 = (unsigned __int16 *)((char *)qword_14043B110 + 2 * v35 * (unsigned int)(unsigned __int16)KeNumberNodes);
  v37 = &v36[(unsigned __int16)KeNumberNodes];
  while ( 1 )
  {
    v34 -= MiAllocateLargeZeroPages((_DWORD)v9, v34, v32, v35, *(_DWORD *)(v2 + 32), (__int64)v82, 0);
    if ( !v34 )
    {
      PfnLink = v82[0];
      v5 = 1LL;
      if ( v82[0] )
      {
        v39 = 0LL;
        do
        {
          v39 += v5;
          PfnLink = (_QWORD *)MiGetPfnLink((__int64)PfnLink);
        }
        while ( PfnLink );
        v68 = v39;
        v9 = v74;
      }
      v81 = v6;
LABEL_15:
      v69 = 0LL;
      v80 = 0LL;
      if ( (v10 & 0x88000000) == 0x8000000 )
      {
        v73 = v6;
        v11 = v5;
        v91 = v5;
      }
      else
      {
        v30 = (unsigned __int64)(((v10 >> 31) & 0x100000u) + 0x100000) >> 3;
        v73 = v30;
        v91 = v6 / v30;
        v11 = v6 / v30;
        if ( v6 % v30 )
        {
          v11 += v5;
          v91 = v11;
        }
      }
      PoolWithTag = (volatile signed __int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, 88 * v11 + 128, 0x61436D4Du);
      v83 = PoolWithTag;
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_140;
      memset(PoolWithTag, 0, 88 * v11 + 128);
      v14 = (volatile signed __int64 *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x6765534Du);
      v84 = v14;
      v15 = v14;
      if ( !v14 )
      {
LABEL_107:
        v43 = 0LL;
        if ( v11 )
        {
          v44 = (PVOID *)(v13 + 17);
          do
          {
            if ( !*v44 )
              break;
            ExFreePoolWithTag(*v44, 0);
            v44 += 11;
            ++v43;
          }
          while ( v43 < v11 );
        }
        if ( v80 )
          MiDeleteSectionAwe((__int64)v13);
        ExFreePoolWithTag(v13, 0);
        if ( v15 )
          ExFreePoolWithTag((PVOID)v15, 0);
LABEL_140:
        if ( v89 )
        {
          v66 = v81;
          if ( v81 )
          {
            MiFreeLargeZeroPages((__int64)v9, v82);
            if ( v9 == &MiSystemPartition )
              MiReturnResidentAvailable(v66);
            else
              MiReturnPartitionResidentAvailable((__int64)v9, v66);
          }
          else
          {
            v66 = v6;
          }
          MiReturnCommit((__int64)v9, v66);
        }
        return 3221225626LL;
      }
      *((_QWORD *)v14 + 9) = 0LL;
      v16 = (*(_WORD *)v9 ^ *((_WORD *)v13 + 30)) & 0x3FF;
      *((_DWORD *)v13 + 24) = v11;
      *((_WORD *)v13 + 30) ^= v16;
      *v13 = v14;
      v13[2] = (volatile signed __int64 *)(v13 + 1);
      v13[1] = (volatile signed __int64 *)(v13 + 1);
      v17 = *((_DWORD *)v13 + 14);
      v13[14] = (volatile signed __int64 *)1;
      v13[3] = (volatile signed __int64 *)1;
      v13[6] = (volatile signed __int64 *)1;
      if ( (v10 & 0x200000) != 0 )
      {
        v17 |= 0x40u;
        *((_DWORD *)v13 + 14) = v17;
      }
      if ( (v10 & 0x4000000) != 0 )
      {
        v17 |= 0x1000u;
        *((_DWORD *)v13 + 14) = v17;
      }
      if ( v89 )
      {
        v17 |= 0x2000u;
        *((_DWORD *)v13 + 14) = v17;
      }
      if ( (v10 & 0x80000) != 0 )
      {
        v17 |= 0x80000000;
        *((_DWORD *)v13 + 14) = v17;
      }
      v18 = v17 ^ (*(_DWORD *)(v2 + 172) << 20);
      v13[13] = 0LL;
      *((_DWORD *)v13 + 14) = v17 ^ v18 & 0x3F00000;
      memset((void *)v15, 0, 0x48uLL);
      *((_QWORD *)v15 + 5) = 0LL;
      if ( (v10 & 0x10000000) != 0 )
      {
        v29 = 0x8000;
      }
      else
      {
        if ( (v10 & 0x40000000) == 0 )
          goto LABEL_29;
        v29 = 0x4000;
      }
      *((_WORD *)v15 + 6) |= v29;
LABEL_29:
      *((_BYTE *)v15 + 14) ^= (*((_BYTE *)v15 + 14) ^ (2 * *(_BYTE *)(v2 + 32))) & 0x3E;
      *((_DWORD *)v15 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      *v15 = (volatile signed __int64)v13;
      *((_QWORD *)v15 + 3) = v6 << 12;
      *((_DWORD *)v15 + 2) = v6;
      if ( v86 )
      {
        v40 = *(_DWORD *)(v2 + 16);
        v41 = v40 >= 0 ? (v40 & 0x80000) != 0 : 2;
        if ( (v40 & 0x10000000) != 0 )
        {
          v41 |= 0x10u;
        }
        else if ( (v40 & 0x40000000) != 0 )
        {
          v41 |= 8u;
        }
        v42 = v41 | 4;
        if ( (*(_DWORD *)(v2 + 196) & 1) == 0 )
          v42 = v41;
        if ( (int)MiAllocateAweInfo(v13, 0LL, v42, &v80) < 0 )
          goto LABEL_107;
      }
      v77 = 0LL;
      v78 = (volatile signed __int64 ***)(v13 + 16);
      v19 = (volatile signed __int64 ***)(v13 + 16);
      v67 = v6;
      v20 = (volatile signed __int64 ***)(v13 + 16);
      v79 = 0LL;
      v21 = 0LL;
      if ( v11 )
      {
        LOWORD(v22) = 0;
        v87 = 0;
        do
        {
          v20 = v19;
          v76 = v19;
          v19[10] = (volatile signed __int64 **)((unsigned __int64)v19[10] & 0xFFFFFFFFFFFFFFF8uLL | 1);
          v23 = v73;
          v24 = *((_WORD *)v19 + 16);
          if ( v67 <= v73 )
            v23 = v67;
          *v19 = v13;
          v25 = *(_WORD *)(v2 + 32);
          *((_DWORD *)v19 + 11) = v23;
          *((_DWORD *)v19 + 9) = v21;
          v26 = v24 & 1 | (2 * (_BYTE)v25) & 0x3F;
          if ( v67 <= v73 )
            LOWORD(v22) = v87;
          v67 -= v23;
          *((_WORD *)v19 + 16) = ((_WORD)v22 << 6) | v26;
          if ( v89 )
          {
            v27 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8 * v23, 0x74536D4Du);
            v69 = v27;
            if ( !v27 )
              goto LABEL_107;
            v19 = v78;
            v20 = v76;
            v21 = v77;
            LODWORD(v23) = *((_DWORD *)v78 + 11);
            v78[1] = (volatile signed __int64 **)v27;
          }
          v19 += 11;
          v78 = v19;
          v77 = v21 + (unsigned int)v23;
          v22 = HIDWORD(v77);
          v21 = v77;
          v20[2] = (volatile signed __int64 **)v19;
          v87 = WORD2(v77);
          ++v79;
        }
        while ( v79 < v11 );
      }
      v20[2] = 0LL;
      *((_QWORD *)v15 + 8) = v69;
      if ( !v89 )
        goto LABEL_45;
      --*(_WORD *)(v71 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 5), 0LL);
      MiUpdateControlAreaCommitCount((__int64)v13, v6);
      if ( (_InterlockedExchangeAdd64(v15 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15 + 5);
      KeAbPostRelease((ULONG_PTR)(v15 + 5));
      KiLeaveGuardedRegionUnsafe(v71);
      if ( v10 >= 0 )
      {
        MiInitializePrototypePtes((ULONG_PTR)v13[17]);
        MiUpdateSystemProtoPtesTree((unsigned __int64 *)v13 + 23, 1);
        goto LABEL_45;
      }
      *((_WORD *)v15 + 6) |= 0x1000u;
      *((_DWORD *)v13 + 23) |= 0x10000u;
      v45 = *(_DWORD *)(v2 + 32);
      ValidPte = MiMakeValidPte(0LL, -1LL, v45 | 0x80000000);
      DemandZeroPte = MiMakeDemandZeroPte(v45);
      if ( !v91 )
      {
LABEL_45:
        *(_QWORD *)(v2 + 64) = v13;
        _InterlockedAdd64((volatile signed __int64 *)v9 + 162, 1uLL);
        *(_DWORD *)v2 |= 4u;
        *(_QWORD *)(v2 + 128) = _InterlockedCompareExchange64(v15 + 3, -1LL, -1LL);
        if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
          MiLogSectionCreate(v13, 1LL);
        return 0LL;
      }
      v48 = v91;
      v49 = v13 + 22;
      v50 = v68;
      v88 = v13 + 22;
      while ( 1 )
      {
        v51 = (__int64 *)*((_QWORD *)v49 - 5);
        v52 = *v49 & 0x3FFFFFFF | 0x40000000;
        v72 = v51;
        *v49 = v52;
        if ( v50 )
        {
          v68 = --v50;
          *v49 = v52 & 0x3FFFFFFF | 0x80000000;
        }
        memset(v51, 0, 8LL * (unsigned int)*(v49 - 1));
        v53 = v88;
        MiUpdateSystemProtoPtesTree(v88 + 1, 1);
        v70 = 0LL;
        if ( *((_DWORD *)v88 - 1) )
          break;
LABEL_138:
        v49 = v53 + 11;
        --v48;
        v88 = v49;
        v91 = v48;
        if ( !v48 )
        {
          v13 = v83;
          v2 = a1;
          v15 = v84;
          v9 = v74;
          goto LABEL_45;
        }
      }
LABEL_120:
      v54 = 0LL;
      while ( 1 )
      {
        v55 = v82[v54];
        v90 = v55;
        if ( v55 )
          break;
        if ( (unsigned __int64)++v54 >= 3 )
          goto LABEL_125;
      }
      v56 = (_QWORD *)MiGetPfnLink((__int64)v55);
      v82[v57] = v56;
LABEL_125:
      v75 = MiLargePageSizes[(unsigned int)MiFreeZeroPageSizeIndex((__int64)v55)];
      v58 = v72;
      v60 = (v59 + 0x58000000000LL) / 48;
      while ( 1 )
      {
        ValidPte ^= (ValidPte ^ ((_DWORD)v60 << 12)) & 0xFFFFF000;
        if ( MiPteInShadowRange((unsigned __int64)v58) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v62 = v65;
            if ( HIBYTE(word_14043B26C) == v64 )
              goto LABEL_131;
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
LABEL_131:
            if ( ((unsigned __int8)ValidPte & (unsigned __int8)v65) != 0 )
              v61 |= 0x8000000000000000uLL;
          }
        }
        *v58 = v61;
        if ( v62 )
          MiWritePteShadow((__int64)v58, v61);
        MiUpdateLargePageSectionPfn(v63, (__int64)v58, DemandZeroPte);
        LODWORD(v60) = v60 + 1;
        ++v58;
        v90 += 6;
        if ( v58 >= &v72[v75] )
        {
          v72 = v58;
          v53 = v88;
          v70 += v75;
          if ( v70 == *((_DWORD *)v88 - 1) )
          {
            v48 = v91;
            v50 = v68;
            goto LABEL_138;
          }
          goto LABEL_120;
        }
      }
    }
    if ( ++v36 == v37 )
      break;
    v35 = *v36;
  }
  if ( v34 != v6 )
    MiFreeLargeZeroPages((__int64)v9, v82);
  if ( v9 == &MiSystemPartition )
    MiReturnResidentAvailable(v6);
  else
    MiReturnPartitionResidentAvailable((__int64)v9, v6);
LABEL_88:
  v31 = -1073741670;
LABEL_89:
  MiReturnCommit((__int64)v9, v6);
  return v31;
}
