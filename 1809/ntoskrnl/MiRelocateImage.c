/*
 * XREFs of MiRelocateImage @ 0x140651084
 * Callers:
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x140684100 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiGetControlAreaPartition @ 0x1400937E8 (MiGetControlAreaPartition.c)
 *     MiUpdateControlAreaCommitCount @ 0x140095ED4 (MiUpdateControlAreaCommitCount.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1400D935C (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1400D955C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiLegacyImageArchitecture @ 0x1400DA4AC (MiLegacyImageArchitecture.c)
 *     PsRevertToUserPagePriorityThread @ 0x1400DA4D0 (PsRevertToUserPagePriorityThread.c)
 *     PsSetSystemPagePriorityThread @ 0x1400DA538 (PsSetSystemPagePriorityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiSetDeleteOnClose @ 0x1402A34FC (MiSetDeleteOnClose.c)
 *     MiSetLeafPfnBuddy @ 0x1402BFFC0 (MiSetLeafPfnBuddy.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402C3F8C (MiMakeUnusedImageExtentsCold.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x140650904 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x1406509BC (MiSelectImageBase.c)
 *     MiScanRelocationPage @ 0x140651840 (MiScanRelocationPage.c)
 *     MiLogRelocationFaults @ 0x1406519C4 (MiLogRelocationFaults.c)
 *     MiUnmapImageInSystemSpace @ 0x140651A4C (MiUnmapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     MiCompressRelocations @ 0x140652190 (MiCompressRelocations.c)
 *     MiFreeRelocations @ 0x1406FE4A0 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x1406FE53C (MiFreeImageLoadConfig.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // r9d
  __int64 v12; // r11
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // r10
  ULONG_PTR v16; // r13
  char v17; // r8
  unsigned int v18; // eax
  unsigned __int64 v19; // r8
  __int16 v20; // cx
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // r15
  SIZE_T v25; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v27; // r14
  _QWORD *v28; // rcx
  __int64 v29; // rdi
  int Config; // esi
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // r15
  size_t v34; // rsi
  __int64 v35; // r15
  __int64 v36; // rcx
  unsigned int v37; // esi
  unsigned int v38; // r8d
  unsigned __int64 v39; // r9
  unsigned int v40; // edx
  unsigned __int64 v41; // r10
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // esi
  __int64 *v45; // rdx
  __int64 v46; // r12
  unsigned __int64 v47; // rdi
  __int64 v48; // rsi
  _QWORD *v49; // r15
  unsigned int v50; // edi
  unsigned int v52; // ecx
  unsigned int v53; // r9d
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // r8
  unsigned int v56; // eax
  unsigned __int16 v57; // r9
  _WORD *v58; // r8
  unsigned int v59; // eax
  unsigned int v60; // esi
  _QWORD *v61; // r15
  __int64 v62; // r12
  unsigned int v63; // r9d
  unsigned int v64; // r11d
  __int64 v65; // r10
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // r8
  __int64 ControlAreaPartition; // rax
  unsigned __int64 v70; // r15
  volatile signed __int64 *v71; // rsi
  unsigned int v72; // [rsp+30h] [rbp-148h]
  unsigned int v73; // [rsp+30h] [rbp-148h]
  unsigned int v74; // [rsp+34h] [rbp-144h]
  int v75; // [rsp+38h] [rbp-140h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-138h]
  unsigned int *v77; // [rsp+48h] [rbp-130h]
  unsigned int v78; // [rsp+50h] [rbp-128h]
  unsigned __int64 v80; // [rsp+58h] [rbp-120h]
  int v81; // [rsp+58h] [rbp-120h]
  unsigned int v82; // [rsp+58h] [rbp-120h]
  unsigned int v84; // [rsp+60h] [rbp-118h]
  __int64 v85; // [rsp+68h] [rbp-110h]
  unsigned int v86; // [rsp+68h] [rbp-110h]
  unsigned int v88; // [rsp+78h] [rbp-100h]
  __int64 v89; // [rsp+80h] [rbp-F8h]
  unsigned __int64 v90; // [rsp+88h] [rbp-F0h] BYREF
  _DWORD v91[2]; // [rsp+90h] [rbp-E8h] BYREF
  size_t Size; // [rsp+98h] [rbp-E0h]
  ULONG_PTR v93; // [rsp+A0h] [rbp-D8h]
  _QWORD *v94; // [rsp+A8h] [rbp-D0h]
  struct _KTHREAD *v95; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 v96; // [rsp+B8h] [rbp-C0h]
  __int64 v97; // [rsp+C0h] [rbp-B8h]
  _QWORD *v98; // [rsp+C8h] [rbp-B0h]
  unsigned __int64 v99[2]; // [rsp+D0h] [rbp-A8h] BYREF
  _QWORD v100[2]; // [rsp+E0h] [rbp-98h] BYREF
  int v101; // [rsp+F0h] [rbp-88h]

  v7 = 2;
  v8 = *(_QWORD *)(a1 + 56);
  v98 = (_QWORD *)v8;
  if ( MiLegacyImageArchitecture(*(_WORD *)(v8 + 48)) )
  {
    v7 = 34;
    if ( (*(_BYTE *)(v8 + 44) & 1) != 0 )
      return 0LL;
    v13 = (*(_WORD *)(v8 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v13 = -1073741701;
  }
  v14 = *(unsigned int *)(v9 + 88);
  v91[0] = v14;
  v15 = *(unsigned int *)(v10 + 92);
  v74 = *(_DWORD *)(v10 + 92);
  v91[1] = v74;
  if ( (_DWORD)v14 )
  {
    if ( !(_DWORD)v15 )
      return v13;
  }
  else
  {
    if ( (_DWORD)v15 )
      return v13;
    v7 &= ~2u;
  }
  if ( (*(_BYTE *)(v12 + 15) & 1) != 0 )
    return 0LL;
  v16 = *(_QWORD *)v12;
  v93 = v16;
  v97 = *(_QWORD *)(v16 + 96);
  v17 = *(_BYTE *)(v12 + 14) & 0x40;
  if ( (v11 & 0xFFF) > (v17 != 0 ? 4092 : 4088) || ((v17 != 0 ? 3 : 7) & v11) != 0 )
    return v13;
  v18 = v11 | 1;
  if ( !v17 )
    v18 = v11;
  v72 = v18;
  v19 = *(_QWORD *)(v12 + 32);
  v80 = v19;
  if ( v7 >= 0x20 && !a4 )
  {
    v20 = *(_WORD *)(v8 + 46);
    if ( (v20 & 0x40) == 0 && MmRegistryState != -1 && (v20 & 0x1000) == 0 )
      return 0LL;
  }
  v21 = *(_DWORD *)(v12 + 8);
  v22 = v21;
  v78 = v21;
  if ( (v7 & 2) == 0 )
  {
    v22 = (v18 >> 12) + 1;
    v78 = v22;
  }
  v88 = v21 << 12;
  if ( (int)v14 + (int)v15 > v21 << 12 )
    return v13;
  if ( (v7 & 2) != 0 )
  {
    if ( (int)v14 + (int)v15 <= (unsigned int)v14 )
      return v13;
    v23 = v14;
    v85 = v14;
    if ( v14 + v19 <= v19 )
      return v13;
  }
  else
  {
    v23 = v14;
    v85 = v14;
  }
  if ( (v7 & 2) != 0 && v19 + v15 + v23 <= v19 )
    return v13;
  v24 = v22;
  Size = 8LL * v22;
  v25 = Size + v15 + 104;
  v90 = 0LL;
  v89 = 0LL;
  v101 = 0;
  v75 = 0;
  CurrentThread = KeGetCurrentThread();
  v95 = CurrentThread;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v25, 0x65526D4Du);
  v27 = PoolWithTag;
  v94 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v28 = PoolWithTag;
  do
    v28 += 512;
  while ( v28 < (_QWORD *)((char *)PoolWithTag + v25) );
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = 0LL;
  *((_BYTE *)PoolWithTag + 68) = 0;
  PoolWithTag[1] = 0LL;
  PoolWithTag[7] = v24;
  PoolWithTag[2] = 0LL;
  PoolWithTag[12] = 0LL;
  PoolWithTag[9] = 0LL;
  PoolWithTag[10] = 0LL;
  PoolWithTag[11] = 0LL;
  PoolWithTag[3] = 0LL;
  if ( (v7 & 2) == 0 )
    goto LABEL_28;
  if ( (int)MiMapImageInSystemSpace(v16, 3LL, v100) < 0 )
  {
    ExFreePoolWithTag(v27, 0);
    MiSetDeleteOnClose(v16, 0);
    return 0LL;
  }
  v29 = v100[0];
  v89 = v100[0];
  v75 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
  v7 |= 1u;
  Config = MiParseImageLoadConfig(v16, v29, (unsigned int)(v101 << 12), a2);
  if ( Config < 0 )
  {
    ExFreePoolWithTag(v27, 0);
    goto LABEL_72;
  }
LABEL_28:
  Config = MiSelectImageBase((__int64)v27, a1, a4, a6, &v90);
  if ( Config < 0 )
  {
    MiFreeImageLoadConfig(v27 + 9);
    ExFreePoolWithTag(v27, 0);
    if ( !a4 )
      Config = v13;
    goto LABEL_72;
  }
  v31 = v90;
  v96 = v90;
  Config = MiUpdateCfgSystemWideBitmap((__int64 *)v16, v90, (__int64)(v27 + 9));
  if ( Config < 0 )
    goto LABEL_151;
  *((_DWORD *)v27 + 16) = v72;
  v27[5] = v31 - v80;
  v32 = a5 - v80;
  if ( a5 == -1 )
    v32 = 0LL;
  v27[6] = v32;
  if ( v31 == v80 && !a6 )
    goto LABEL_71;
  v33 = v27 + 13;
  *v27 = v27 + 13;
  v34 = Size;
  memset(v27 + 13, 0, Size);
  v77 = (unsigned int *)((char *)v27 + v34 + 104);
  v27[4] = v77;
  v7 |= 4u;
  if ( (v7 & 2) != 0 )
  {
    memmove((char *)v27 + v34 + 104, (const void *)(v85 + v89), v74);
    LODWORD(v35) = 0;
    v36 = v27[11];
    if ( v36 )
    {
      LODWORD(v35) = v101 & 0xFFFFF;
      while ( (_DWORD)v35 )
      {
        v35 = (unsigned int)(v35 - 1);
        if ( *(_QWORD *)(v36 + 8 * v35 + 56) )
          goto LABEL_35;
      }
      LODWORD(v35) = 0;
    }
LABEL_35:
    v37 = v74;
    v38 = 0;
    if ( v74 )
    {
      v39 = (unsigned __int64)v77;
      while ( v37 >= 0xA )
      {
        v40 = *(_DWORD *)(v39 + 4);
        v73 = v40;
        if ( v40 > v37 || (v40 & 1) != 0 || v40 < 8 )
          goto LABEL_94;
        v41 = *(unsigned int *)v39;
        v81 = v41;
        v42 = v7 & 0xFFFFFFFB;
        if ( (v41 & 0xFFF) == 0 )
          v42 = v7;
        v7 = v42;
        if ( (int)v41 + 4096 < (unsigned int)v41 || (int)v41 + 4096 > v88 || (unsigned int)v41 < v38 )
          goto LABEL_94;
        if ( v40 == 8 )
        {
          v37 -= 8;
          v7 = v42 & 0xFFFFFFFB;
        }
        else
        {
          if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(v16 + 92) & 0x180000) != 0 )
          {
            if ( (*(_BYTE *)(MiOffsetToProtos(v16, v41, v99) + 32) & 4) != 0 )
            {
              Config = -1073741701;
              goto LABEL_71;
            }
            v40 = v73;
            LODWORD(v41) = v81;
            v39 = (unsigned __int64)v77;
          }
          v82 = (unsigned int)v41 >> 12;
          v27[((unsigned __int64)(unsigned int)v41 >> 12) + 13] |= v39;
          v84 = (v41 & 0xFFFFF000) + 4096;
          v86 = v37 - v40;
          Config = MiScanRelocationPage(v89, v41, (v40 - 8) >> 1, (int)v39 + 8, v16, (__int64)v27);
          if ( Config < 0 )
          {
            if ( Config == -1073741207 )
            {
              Config = 0;
            }
            else if ( Config == -1073741701 )
            {
              Config = v13;
            }
            goto LABEL_71;
          }
          v7 |= 0x10u;
          v43 = v82;
          if ( v82 <= (unsigned int)v35 )
            v43 = v35;
          LODWORD(v35) = v43;
          v37 = v86;
          v40 = v73;
          v38 = v84;
          v39 = (unsigned __int64)v77;
        }
        v39 += v40;
        v77 = (unsigned int *)v39;
        if ( !v37 )
        {
          v44 = v74;
          goto LABEL_54;
        }
      }
      if ( v37 != 8 )
        goto LABEL_94;
      v44 = v74 - 8;
    }
    else
    {
      v44 = 0;
    }
LABEL_54:
    MiUnmapImageInSystemSpace(v100);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v75);
    LOBYTE(v7) = v7 & 0xFE;
    v45 = (__int64 *)v27[2];
    if ( v45 )
    {
      while ( 1 )
      {
        v52 = v35;
        v53 = *((_DWORD *)v45 + 3);
        v54 = v27[((unsigned __int64)v53 >> 12) + 13];
        LODWORD(v35) = v53 >> 12;
        if ( v53 >> 12 <= v52 )
          LODWORD(v35) = v52;
        if ( v54 > 1 )
        {
          v55 = v54 & 0xFFFFFFFFFFFFFFFEuLL;
          v56 = *(_DWORD *)(v55 + 4) - 8;
          v57 = v53 & 0xFFF;
          v58 = (_WORD *)(v55 + 8);
          v59 = v56 >> 1;
          if ( v59 )
            break;
        }
LABEL_88:
        v45 = (__int64 *)*v45;
        if ( !v45 )
          goto LABEL_55;
      }
      while ( *v58 < 0x1000u || (unsigned __int16)(*v58 & 0xFFF) >= v57 )
      {
        ++v58;
        if ( !--v59 )
          goto LABEL_88;
      }
LABEL_94:
      Config = v13;
      goto LABEL_71;
    }
LABEL_55:
    MiLogRelocationFaults(v16, v91, v27);
    v27[7] = (unsigned int)(v35 + 1);
    if ( (v7 & 0x14) == 0x14 )
      v27 = (_QWORD *)MiCompressRelocations(v27, v44);
    v33 = v27 + 13;
  }
  v33[(unsigned __int64)*((unsigned int *)v27 + 16) >> 12] |= 1uLL;
  if ( (*(_DWORD *)(v16 + 56) & 0x40000000) != 0 )
  {
    v60 = 0;
    v61 = 0LL;
    v62 = *(_QWORD *)(a1 + 64);
    v63 = *((_DWORD *)v27 + 14);
    if ( v78 <= v63 )
      v63 = v78;
    v64 = 0;
    if ( v63 )
    {
      v65 = 7LL;
      do
      {
        if ( v27[v65 + 6] || (v66 = v27[11]) != 0 && *(_QWORD *)(v66 + v65 * 8) )
        {
          v67 = MI_READ_PTE_LOCK_FREE(v62 + 8LL * v64);
          v99[1] = v67;
          if ( (v67 & 0x800) != 0 )
          {
            if ( qword_14043B180 )
            {
              if ( (v67 & 0x10) != 0 )
                v67 &= ~0x10uLL;
              else
                v67 &= ~qword_14043B180;
            }
            MiSetLeafPfnBuddy((_QWORD *)(48 * ((v67 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), 0LL);
            if ( v27[12] )
              MiSetLeafPfnBuddy(v61, v68);
            else
              v27[12] = v68;
            v61 = (_QWORD *)v68;
            ++v60;
          }
        }
        ++v64;
        ++v65;
      }
      while ( v64 < v63 );
    }
    ControlAreaPartition = MiGetControlAreaPartition(v16);
    v70 = v60;
    if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, v60, 0) )
    {
      v27[12] = 0LL;
      Config = -1073741670;
      goto LABEL_71;
    }
    v46 = (__int64)CurrentThread;
    --CurrentThread->SpecialApcDisable;
    v71 = (volatile signed __int64 *)(a1 + 40);
    ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    MiUpdateControlAreaCommitCount(v16, v70);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v71);
    KeAbPostRelease((ULONG_PTR)v71);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v47 = v90;
  }
  else
  {
    v46 = (__int64)CurrentThread;
    v47 = v96;
  }
  LOBYTE(v7) = v7 | 8;
  MI_LOCK_RELOCATIONS_EXCLUSIVE(v46, (__int64)v27);
  v48 = v97;
  *(_QWORD *)(v97 + 32) = v27;
  *(_QWORD *)(a1 + 32) = v47;
  v49 = v98;
  *v98 += v27[5];
  *(_DWORD *)(v16 + 92) |= 0x1000000u;
  if ( (*(_DWORD *)(v16 + 56) & 0x800) != 0 )
    MiSetDeleteOnClose(v16, 0);
  if ( (MiFlags & 0x4000) == 0
    || (*(_DWORD *)(v16 + 92) & 0x180000) == 0
    || (qword_14040EE40
      ? (Config = qword_14040EE40(*(_QWORD *)(v48 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v47))
      : (Config = -1073741637),
        Config >= 0) )
  {
    Config = 0;
    v50 = a4 ? -1 : MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( a6 != 1 || v27[11] )
    {
      if ( (*(_DWORD *)(v16 + 56) & 0x40000000) != 0 )
      {
        MiWalkEntireImage(v16, 0LL, 8u, v50);
        if ( (HvlEnlightenments & 0x400000) != 0 )
          MiMakeUnusedImageExtentsCold(v16);
      }
      Config = MiWalkEntireImage(v16, 0LL, 2u, v50);
    }
  }
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE(v46, (__int64)v27);
  if ( Config >= 0 && !a6 )
    *((_BYTE *)v49 + 51) |= 4u;
LABEL_71:
  if ( (v7 & 8) == 0 )
LABEL_151:
    MiFreeRelocations(v16, v27);
LABEL_72:
  if ( (v7 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(v100);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v75);
  }
  return (unsigned int)Config;
}
