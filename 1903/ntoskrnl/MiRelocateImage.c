/*
 * XREFs of MiRelocateImage @ 0x14068C010
 * Callers:
 *     MiCreateNewSection @ 0x140689A04 (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x140710698 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiGetControlAreaPartition @ 0x1400A9178 (MiGetControlAreaPartition.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1400A9194 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1400A9390 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiOffsetToProtos @ 0x1400D5DB0 (MiOffsetToProtos.c)
 *     MiUpdateControlAreaCommitCount @ 0x1400E0358 (MiUpdateControlAreaCommitCount.c)
 *     MiLegacyImageArchitecture @ 0x1400E2E08 (MiLegacyImageArchitecture.c)
 *     PsSetSystemPagePriorityThread @ 0x14012DDC0 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14012ED5C (PsRevertToUserPagePriorityThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiSetDeleteOnClose @ 0x1402BA6BC (MiSetDeleteOnClose.c)
 *     MiGetSubsectionFromPte @ 0x1402D8DA8 (MiGetSubsectionFromPte.c)
 *     MiSetLeafPfnBuddy @ 0x1402D96F8 (MiSetLeafPfnBuddy.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402DE044 (MiMakeUnusedImageExtentsCold.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiLogRelocationFaults @ 0x140658B64 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x140659FF0 (MiParseImageLoadConfig.c)
 *     MiDoesPageRequireRetpolineFixups @ 0x14065CD58 (MiDoesPageRequireRetpolineFixups.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14066F624 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x14066F6E8 (MiSelectImageBase.c)
 *     MiUnmapImageInSystemSpace @ 0x14066FFB0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     MiScanRelocationPage @ 0x14068C820 (MiScanRelocationPage.c)
 *     MiCompressRelocations @ 0x1406AAA90 (MiCompressRelocations.c)
 *     MiFreeRelocations @ 0x14072A130 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x14072A1C0 (MiFreeImageLoadConfig.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  unsigned int v10; // edx
  int v11; // r10d
  __int64 v12; // r11
  unsigned int v13; // r12d
  unsigned int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rdi
  unsigned int v17; // eax
  ULONG_PTR v18; // r13
  char v19; // r10
  unsigned int v20; // eax
  unsigned __int64 v21; // r10
  char v22; // cl
  __int16 v23; // r11
  unsigned int v24; // r8d
  unsigned int v25; // r11d
  __int64 v26; // r15
  __int64 v27; // r8
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rdi
  SIZE_T v31; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *v33; // rsi
  unsigned int *v34; // rcx
  int v35; // r14d
  char *v36; // rdi
  int updated; // edi
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rcx
  size_t v40; // rdi
  unsigned int *v41; // rdi
  __int64 v42; // rcx
  unsigned int v43; // ecx
  unsigned int v44; // r8d
  char v45; // dl
  unsigned int v46; // edx
  unsigned __int64 v47; // rdi
  int v48; // r9d
  int v49; // eax
  unsigned int v50; // edi
  __int64 *v51; // r8
  _QWORD *v52; // r12
  struct _KTHREAD *v53; // r12
  __int64 v54; // rdi
  unsigned __int64 v55; // rdx
  __int64 v56; // rbx
  unsigned int SessionId; // edi
  unsigned int v59; // ecx
  unsigned int v60; // r9d
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  unsigned int v63; // eax
  unsigned __int16 v64; // r9
  _WORD *v65; // rdx
  unsigned int v66; // eax
  _QWORD *v67; // rdi
  __int64 v68; // r15
  unsigned int v69; // r10d
  unsigned int v70; // r9d
  unsigned int v71; // r10d
  unsigned __int64 v72; // rax
  int v73; // edx
  _QWORD *v74; // r8
  unsigned __int64 v75; // r8
  __int64 ControlAreaPartition; // rax
  unsigned int v77; // r11d
  unsigned __int64 v78; // r15
  volatile signed __int64 *v79; // rdi
  char v80; // bl
  __int64 v81; // [rsp+20h] [rbp-148h]
  unsigned int v82; // [rsp+30h] [rbp-138h]
  char v83; // [rsp+30h] [rbp-138h]
  unsigned int v84; // [rsp+30h] [rbp-138h]
  unsigned int v85; // [rsp+34h] [rbp-134h]
  unsigned int v86; // [rsp+34h] [rbp-134h]
  unsigned int v87; // [rsp+38h] [rbp-130h]
  int v89; // [rsp+44h] [rbp-124h]
  unsigned int v90; // [rsp+48h] [rbp-120h]
  __int64 v91; // [rsp+50h] [rbp-118h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-110h]
  __int64 v93; // [rsp+60h] [rbp-108h]
  __int64 v94; // [rsp+68h] [rbp-100h]
  unsigned __int64 v95; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v96; // [rsp+78h] [rbp-F0h]
  size_t Size; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v98; // [rsp+88h] [rbp-E0h]
  __int64 v99; // [rsp+90h] [rbp-D8h]
  ULONG_PTR v100; // [rsp+98h] [rbp-D0h]
  unsigned int *v101; // [rsp+A0h] [rbp-C8h]
  __int64 v102; // [rsp+A8h] [rbp-C0h]
  __int64 v103; // [rsp+B0h] [rbp-B8h]
  unsigned __int64 v104[3]; // [rsp+B8h] [rbp-B0h] BYREF
  _QWORD v105[10]; // [rsp+D0h] [rbp-98h] BYREF

  v93 = a2;
  v94 = a1;
  memset(v105, 0, sizeof(v105));
  v91 = 0LL;
  v103 = *(_QWORD *)(a1 + 56);
  if ( MiLegacyImageArchitecture(*(_WORD *)(v103 + 48)) )
  {
    v10 = v11 + 34;
    if ( (*(_BYTE *)(v12 + 44) & 1) != 0 )
      return 0LL;
    v13 = (*(_WORD *)(v12 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v13 = -1073741701;
  }
  v14 = v10;
  v15 = *(unsigned int *)(a2 + 88);
  LODWORD(v91) = v15;
  v16 = *(unsigned int *)(a2 + 92);
  v87 = v16;
  HIDWORD(v91) = v16;
  v17 = v10;
  if ( !(_DWORD)v15 || !(_DWORD)v16 )
  {
    if ( (_DWORD)v15 || (_DWORD)v16 )
      return v13;
    v10 &= ~2u;
    v14 = v17 & 0xFFFFFFFD;
  }
  if ( (*(_BYTE *)(a1 + 15) & 1) != 0 )
    return 0LL;
  v18 = *(_QWORD *)a1;
  v100 = v18;
  v102 = *(_QWORD *)(v18 + 96);
  v19 = *(_BYTE *)(a1 + 14) & 0x40;
  if ( (a3 & 0xFFF) > (v19 != 0 ? 4092 : 4088) || ((v19 != 0 ? 3 : 7) & a3) != 0 )
    return v13;
  v20 = a3 | 1;
  if ( !v19 )
    v20 = a3;
  v85 = v20;
  v21 = *(_QWORD *)(a1 + 32);
  v98 = v21;
  v22 = v14;
  if ( v14 >= 0x20 && !a4 )
  {
    v23 = *(_WORD *)(v12 + 46);
    if ( (v23 & 0x40) == 0 && MmRegistryState != -1 && (v23 & 0x1000) == 0 )
      return 0LL;
  }
  v24 = *(_DWORD *)(a1 + 8);
  v25 = v24;
  v90 = v24;
  if ( (v22 & 2) == 0 )
  {
    v25 = (v20 >> 12) + 1;
    v90 = v25;
  }
  v96 = v24 << 12;
  if ( (int)v16 + (int)v15 > v24 << 12 )
    return v13;
  if ( (v22 & 2) == 0 )
    goto LABEL_96;
  if ( (int)v16 + (int)v15 <= (unsigned int)v15 )
    return v13;
  if ( (v22 & 2) == 0 )
  {
LABEL_96:
    v26 = v15;
    v27 = v15;
    goto LABEL_21;
  }
  v26 = v15;
  v27 = v15;
  if ( v15 + v21 <= v21 )
    return v13;
LABEL_21:
  v28 = (v22 & 2) == 0;
  v29 = v16;
  if ( !v28 && v21 + v16 + v27 <= v21 )
    return v13;
  v30 = v25;
  Size = 8LL * v25;
  v31 = v29 + Size + 112;
  v95 = 0LL;
  v82 = v10 & 0xFFFFFFF6;
  v99 = 0LL;
  v89 = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v31, 0x65526D4Du);
  v33 = PoolWithTag;
  v101 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v34 = PoolWithTag;
  do
    v34 += 1024;
  while ( v34 < (unsigned int *)((char *)PoolWithTag + v31) );
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  *((_QWORD *)PoolWithTag + 6) = 0LL;
  *((_BYTE *)PoolWithTag + 68) = 0;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 7) = v30;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  *((_QWORD *)PoolWithTag + 13) = 0LL;
  memset(PoolWithTag + 18, 0, 0x20uLL);
  *((_QWORD *)v33 + 3) = 0LL;
  v35 = v82;
  if ( (v82 & 2) == 0 )
  {
LABEL_29:
    updated = MiSelectImageBase(v94, (__int64)v33, a4, a6, (__int64 *)&v95);
    if ( updated < 0 )
    {
      MiFreeImageLoadConfig(v33 + 18);
      ExFreePoolWithTag(v33, 0);
      if ( !a4 )
        updated = v13;
      goto LABEL_72;
    }
    v38 = v95;
    updated = MiUpdateCfgSystemWideBitmap((__int64 *)v18, v95, (__int64)(v33 + 18));
    if ( updated < 0 )
      goto LABEL_155;
    v33[16] = v85;
    v39 = v98;
    *((_QWORD *)v33 + 5) = v38 - v98;
    if ( a5 == -1 )
      *((_QWORD *)v33 + 6) = 0LL;
    else
      *((_QWORD *)v33 + 6) = a5 - v39;
    *(_QWORD *)v33 = v33 + 28;
    v40 = Size;
    memset(v33 + 28, 0, Size);
    v41 = (unsigned int *)((char *)v33 + v40 + 112);
    v93 = (__int64)v41;
    *((_QWORD *)v33 + 4) = v41;
    v35 |= 4u;
    v83 = v35;
    if ( (v35 & 2) == 0 )
      goto LABEL_95;
    memmove(v41, (const void *)(v26 + v99), v87);
    LODWORD(v26) = 0;
    v42 = *((_QWORD *)v33 + 12);
    if ( v42 )
    {
      LODWORD(v26) = v105[2] & 0xFFFFF;
      while ( (_DWORD)v26 )
      {
        v26 = (unsigned int)(v26 - 1);
        if ( *(_QWORD *)(v42 + 8 * v26 + 56) )
          goto LABEL_35;
      }
      LODWORD(v26) = 0;
    }
LABEL_35:
    v43 = HIDWORD(v91);
    v84 = HIDWORD(v91);
    v35 &= ~0x10u;
    v44 = 0;
    if ( HIDWORD(v91) )
    {
      v45 = v35;
      while ( v43 >= 0xA )
      {
        v46 = v41[1];
        v86 = v46;
        if ( v46 > v43 || (v46 & 1) != 0 || v46 < 8 )
          goto LABEL_100;
        v47 = *v41;
        if ( (v47 & 0xFFF) != 0 )
          v35 &= ~4u;
        if ( (int)v47 + 4096 < (unsigned int)v47 || (int)v47 + 4096 > v96 || (unsigned int)v47 < v44 )
          goto LABEL_100;
        if ( v46 == 8 )
        {
          v43 -= 8;
          v84 = v43;
          v35 &= ~4u;
        }
        else
        {
          if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(v18 + 92) & 0xC0000) != 0 )
          {
            if ( (MiOffsetToProtos((_DWORD *)v18, v47, v104)[8] & 4) != 0 )
            {
              updated = -1073741701;
              goto LABEL_71;
            }
            v43 = v84;
            v46 = v86;
          }
          LODWORD(Size) = (unsigned int)v47 >> 12;
          v48 = v93;
          *(_QWORD *)&v33[2 * (v47 >> 12) + 28] |= v93;
          LODWORD(v98) = (v47 & 0xFFFFF000) + 4096;
          v84 = v43 - v46;
          updated = MiScanRelocationPage(v99, v47, (v46 - 8) >> 1, v48 + 8, v18, (__int64)v33);
          if ( updated < 0 )
          {
            if ( updated == -1073741207 )
            {
              updated = 0;
            }
            else if ( updated == -1073741701 )
            {
              updated = v13;
            }
            goto LABEL_71;
          }
          v35 |= 0x10u;
          v49 = Size;
          if ( (unsigned int)Size <= (unsigned int)v26 )
            v49 = v26;
          LODWORD(v26) = v49;
          v43 = v84;
          v44 = v98;
        }
        v45 = v35;
        v41 = (unsigned int *)(v86 + v93);
        v93 = (__int64)v41;
        if ( !v43 )
          goto LABEL_53;
      }
      if ( v43 != 8 )
        goto LABEL_100;
      v50 = HIDWORD(v91) - 8;
      LOBYTE(v35) = v45;
    }
    else
    {
LABEL_53:
      v50 = v87;
    }
    MiUnmapImageInSystemSpace((__int64)v105);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v89);
    LOBYTE(v35) = v35 & 0xFE;
    v83 = v35;
    v51 = (__int64 *)*((_QWORD *)v33 + 2);
    if ( !v51 )
    {
LABEL_55:
      MiLogRelocationFaults((_DWORD *)v18, (unsigned int *)&v91, (__int64)v33);
      *((_QWORD *)v33 + 7) = (unsigned int)(v26 + 1);
      if ( (v35 & 0x10) != 0 && (v35 & 4) != 0 )
      {
        v33 = (unsigned int *)MiCompressRelocations(v33, v50);
        v52 = v33 + 28;
LABEL_58:
        v52[(unsigned __int64)v33[16] >> 12] |= 1uLL;
        if ( (*(_DWORD *)(v18 + 56) & 0x40000000) != 0 )
        {
          v67 = 0LL;
          v68 = *(_QWORD *)(v94 + 64);
          v69 = v33[14];
          if ( v90 <= v69 )
            v69 = v90;
          v70 = 0;
          if ( v69 )
          {
            do
            {
              if ( *v52 || MiDoesPageRequireRetpolineFixups((__int64)(v33 + 18), v70) )
              {
                v72 = MI_READ_PTE_LOCK_FREE(v68 + 8LL * v70);
                v104[1] = v72;
                if ( (v72 & 0x400) != 0 )
                {
                  *((_QWORD *)v33 + 13) = 0LL;
                  updated = -1073740023;
                  goto LABEL_71;
                }
                if ( (v72 & 0x800) != 0 )
                {
                  v73 = 1;
                  if ( qword_140465B00 )
                  {
                    if ( (v72 & 0x10) != 0 )
                      v72 &= ~0x10uLL;
                    else
                      v72 &= ~qword_140465B00;
                  }
                  v74 = (_QWORD *)(48 * ((v72 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
                  if ( (v74[2] & 0x400LL) != 0 && (*(_BYTE *)(MiGetSubsectionFromPte(v74[2]) + 34) & 2) != 0 )
                    v73 = 0;
                  if ( v73 )
                  {
                    MiSetLeafPfnBuddy(v74, 0LL);
                    if ( *((_QWORD *)v33 + 13) )
                      MiSetLeafPfnBuddy(v67, v75);
                    else
                      *((_QWORD *)v33 + 13) = v75;
                    v67 = (_QWORD *)v75;
                  }
                }
              }
              ++v70;
              ++v52;
            }
            while ( v70 < v71 );
          }
          ControlAreaPartition = MiGetControlAreaPartition(v18);
          v78 = v77;
          if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, v77, 0) )
          {
            *((_QWORD *)v33 + 13) = 0LL;
            updated = -1073741670;
            goto LABEL_71;
          }
          v53 = CurrentThread;
          --CurrentThread->SpecialApcDisable;
          v79 = (volatile signed __int64 *)(v94 + 40);
          ExAcquirePushLockExclusiveEx(v94 + 40, 0LL);
          MiUpdateControlAreaCommitCount(v18, v78);
          v80 = _InterlockedExchangeAdd64(v79, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v80 & 2) != 0 && (v80 & 4) == 0 )
            ExfTryToWakePushLock(v79);
          KeAbPostRelease((ULONG_PTR)v79);
          KiLeaveGuardedRegionUnsafe((__int64)v53);
          LOBYTE(v35) = v83;
        }
        else
        {
          v53 = CurrentThread;
        }
        LOBYTE(v35) = v35 | 8;
        MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)v53, (__int64)v33);
        v54 = v102;
        *(_QWORD *)(v102 + 32) = v33;
        v55 = v95;
        *(_QWORD *)(v94 + 32) = v95;
        v56 = v103;
        *(_QWORD *)v103 += *((_QWORD *)v33 + 5);
        *(_DWORD *)(v18 + 92) |= 0x400000u;
        if ( (*(_DWORD *)(v18 + 56) & 0x800) != 0 )
        {
          MiSetDeleteOnClose(v18, 0);
          v55 = v95;
        }
        if ( (MiFlags & 0x4000) == 0
          || (*(_DWORD *)(v18 + 92) & 0xC0000) == 0
          || (qword_140436500
            ? (updated = qword_140436500(*(_QWORD *)(v54 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v55))
            : (updated = -1073741637),
              updated >= 0) )
        {
          if ( a4 )
            SessionId = -1;
          else
            SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          if ( a6 != 1 || *((_QWORD *)v33 + 12) )
          {
            if ( (*(_DWORD *)(v18 + 56) & 0x40000000) != 0 )
            {
              MiWalkEntireImage(v18, 0LL, 8, SessionId);
              if ( (HvlEnlightenments & 0x400000) != 0 )
                MiMakeUnusedImageExtentsCold(v18);
            }
            updated = MiWalkEntireImage(v18, 0LL, 2, SessionId);
          }
          else
          {
            updated = 0;
          }
        }
        MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)v53, (__int64)v33);
        if ( updated >= 0 && !a6 )
          *(_BYTE *)(v56 + 51) |= 4u;
LABEL_71:
        if ( (v35 & 8) != 0 )
          goto LABEL_72;
LABEL_155:
        MiFreeRelocations(v18, v33);
        goto LABEL_72;
      }
LABEL_95:
      v52 = v33 + 28;
      goto LABEL_58;
    }
    while ( 1 )
    {
      v59 = v26;
      v60 = *((_DWORD *)v51 + 3);
      v61 = *(_QWORD *)&v33[2 * ((unsigned __int64)v60 >> 12) + 28];
      LODWORD(v26) = v60 >> 12;
      if ( v60 >> 12 <= v59 )
        LODWORD(v26) = v59;
      if ( v61 > 1 )
      {
        v62 = v61 & 0xFFFFFFFFFFFFFFFEuLL;
        v63 = *(_DWORD *)(v62 + 4) - 8;
        v64 = v60 & 0xFFF;
        v65 = (_WORD *)(v62 + 8);
        v66 = v63 >> 1;
        if ( v66 )
          break;
      }
LABEL_93:
      v51 = (__int64 *)*v51;
      if ( !v51 )
        goto LABEL_55;
    }
    while ( *v65 < 0x1000u || (unsigned __int16)(*v65 & 0xFFF) >= v64 )
    {
      ++v65;
      if ( !--v66 )
        goto LABEL_93;
    }
LABEL_100:
    updated = v13;
    goto LABEL_71;
  }
  if ( (int)MiMapImageInSystemSpace((__int64 *)v18, 3, (__int64)v105) < 0 )
  {
    ExFreePoolWithTag(v33, 0);
    MiSetDeleteOnClose(v18, 0);
    return 0LL;
  }
  v36 = (char *)v105[0];
  v99 = v105[0];
  v89 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
  v35 = v82 | 1;
  updated = MiParseImageLoadConfig((_DWORD *)v18, v36, LODWORD(v105[2]) << 12, v93, v81, (__int64)(v33 + 18));
  if ( updated >= 0 )
    goto LABEL_29;
  ExFreePoolWithTag(v33, 0);
LABEL_72:
  if ( (v35 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace((__int64)v105);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v89);
  }
  return (unsigned int)updated;
}
