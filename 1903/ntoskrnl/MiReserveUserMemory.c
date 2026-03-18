/*
 * XREFs of MiReserveUserMemory @ 0x140607B60
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14001C880 (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14001D164 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiReferenceVad @ 0x140053980 (MiReferenceVad.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiInsertPrivateVad @ 0x1400712D0 (MiInsertPrivateVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071808 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140072FCC (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140073DA0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140073FB0 (MiUnlockVad.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlFindMostSignificantBit @ 0x140121C60 (RtlFindMostSignificantBit.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402D5C20 (SeFreeCapturedObjectTypeList.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402DEC7C (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1402E563C (MiUnlockAndDereferenceNestedVad.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiCommitVadCfgBits @ 0x1405EAD98 (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x1405EB1EC (MiIsVaRangeAvailable.c)
 *     MiAddSecureEntry @ 0x140609DB0 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x14060A440 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x14060A890 (MiSelectUserAddress.c)
 *     MiCreateWriteWatchView @ 0x14066FC68 (MiCreateWriteWatchView.c)
 *     MiArbitraryCodeBlocked @ 0x1406785AC (MiArbitraryCodeBlocked.c)
 *     MiSecureVad @ 0x1406BEB94 (MiSecureVad.c)
 *     MiCreateRotateView @ 0x1406EA100 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406F01E0 (MiFreePlaceholderStorage.c)
 *     MiLogReserveVaFailed @ 0x140889D54 (MiLogReserveVaFailed.c)
 *     MiFreeRotateView @ 0x14088B224 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x14088B408 (MiFreeVadEventBitmap.c)
 *     MiCreateUserPhysicalView @ 0x14089646C (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x14089922C (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408992E0 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408993A4 (MiPreparePlaceholderVadReplacement.c)
 *     MiCreateLargePageVad @ 0x140899B54 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140899F08 (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 */

__int64 __fastcall MiReserveUserMemory(__int64 a1, __int64 *a2, unsigned int a3, char a4, unsigned __int64 *a5)
{
  unsigned int v5; // r13d
  char v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r12
  _QWORD *PoolWithTag; // rax
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned int v18; // r8d
  int v19; // eax
  int v20; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v22; // eax
  unsigned __int64 v23; // r12
  char v24; // bl
  bool v25; // zf
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rcx
  int v29; // eax
  int v30; // r13d
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // r10
  __int64 v33; // r13
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ebx
  int v37; // eax
  PVOID v38; // r14
  __int64 result; // rax
  __int64 v40; // rcx
  int v41; // ebx
  int v42; // eax
  unsigned __int64 v43; // r11
  int v44; // r9d
  __int64 v45; // rax
  int v46; // ecx
  int v47; // eax
  __int64 v48; // rdx
  int v49; // eax
  unsigned int v50; // r8d
  __int64 ProcessPartition; // rax
  int v52; // edx
  __int64 v53; // rdx
  int v54; // ecx
  unsigned int v55; // eax
  volatile signed __int64 *v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  int PlaceholderStorage; // [rsp+58h] [rbp-31h] BYREF
  struct _KTHREAD *v60; // [rsp+60h] [rbp-29h]
  PVOID P; // [rsp+68h] [rbp-21h]
  unsigned __int64 v62; // [rsp+70h] [rbp-19h] BYREF
  _QWORD *v63; // [rsp+78h] [rbp-11h] BYREF
  __int64 v64; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int64 v65; // [rsp+88h] [rbp-1h]
  unsigned __int64 v66; // [rsp+90h] [rbp+7h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+Fh]
  __int64 v68; // [rsp+A0h] [rbp+17h] BYREF
  char v71; // [rsp+100h] [rbp+77h] BYREF

  v71 = a4;
  v5 = a3;
  P = 0LL;
  if ( a2 == (__int64 *)1 )
    return 3221225485LL;
  v8 = 16;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 1296LL) + 48LL;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v8 = 0;
  if ( (*(_DWORD *)(a1 + 44) & 0x88) != 0 )
    return 3221225541LL;
  if ( (*(_DWORD *)(a1 + 60) & 0x20000000) != 0 && (MiFlags & 0x100000) == 0
    || (a3 & 2) == 0
    || (result = MiArbitraryCodeBlocked(*(_QWORD *)(a1 + 96)), PlaceholderStorage = result, (int)result >= 0) )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v63 = 0LL;
    v11 = ((v10 & 0xFFF) != 0) + (v10 >> 12);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
    v13 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[6] = 0LL;
    PoolWithTag[7] = 0LL;
    v14 = *(_DWORD *)(a1 + 52);
    PoolWithTag[2] = -2LL;
    BugCheckParameter2 = (ULONG_PTR)(PoolWithTag + 5);
    PoolWithTag[5] = 0LL;
    *((_DWORD *)PoolWithTag + 12) ^= (*((_DWORD *)PoolWithTag + 12) ^ (v14 << 12)) & 0x3F000;
    v15 = *((_DWORD *)PoolWithTag + 12);
    if ( v14 )
    {
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1296LL) + 352LL) = 1;
      v15 = *(_DWORD *)(v13 + 48);
    }
    v16 = *(_DWORD *)(a1 + 40);
    if ( (v16 & 0x1000) != 0 )
    {
      *(_DWORD *)(v13 + 52) |= 0x80000000;
      v17 = v11;
    }
    else
    {
      v17 = 0LL;
    }
    v18 = v15 & 0xFFFFF07F | ((v5 & 0x1F | 0x2000) << 7);
    v19 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(v13 + 48) = v18;
    if ( (v19 & 0x40000000) != 0 )
    {
      v18 |= 0x4000000u;
      *(_DWORD *)(v13 + 48) = v18;
    }
    if ( (v19 & 1) != 0 )
    {
      v17 = 0x7FFFFFFFELL;
    }
    else if ( (v19 & 0x8000000) != 0 )
    {
      v17 = 0x7FFFFFFFDLL;
    }
    v20 = (*(_DWORD *)(v13 + 52) ^ v17) & 0x7FFFFFFF;
    *(_BYTE *)(v13 + 34) = v17 >> 31;
    *(_DWORD *)(v13 + 52) ^= v20;
    CurrentThread = KeGetCurrentThread();
    v22 = v16 & 0x20400000;
    v60 = CurrentThread;
    if ( (v16 & 0x20400000) == 0x20000000 )
    {
      v48 = *(_QWORD *)(a1 + 120);
      v49 = v18 | 0xC0000;
      v50 = v18 & 0xFFF3FFFF | 0x80000;
      if ( (v48 & 0x10) != 0 )
        v50 = v49;
      *(_DWORD *)(v13 + 48) = v50;
    }
    else
    {
      if ( v22 != 541065216 )
      {
        if ( v22 != 0x400000 )
        {
          if ( (v16 & 0x800000) != 0 )
          {
            if ( !(unsigned int)MiCreateRotateView(v13) )
            {
              v30 = -1073741670;
              v24 = v8;
              goto LABEL_73;
            }
            *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 48) & 0xFFFFFF8F | 0x40;
          }
          goto LABEL_21;
        }
        v52 = v5 & 7;
        if ( (v5 & 0xFFFFFFF8) != 0x10 && (v52 == 4 || v52 == 1) )
        {
          v53 = v5;
          if ( (*(_BYTE *)(a1 + 120) & 1) == 0 )
          {
LABEL_119:
            PlaceholderStorage = MiCreateUserPhysicalView(v13, v53, a1, &v63);
            if ( PlaceholderStorage < 0 )
            {
              v30 = -1073741670;
              v24 = v8;
              goto LABEL_73;
            }
            *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 48) & 0xFDFFFF8F | 0x30;
            *(_QWORD *)(v13 + 8) = v63[4];
            goto LABEL_21;
          }
          if ( *(_QWORD *)(a1 + 112) )
          {
            v54 = *(_DWORD *)(a1 + 48);
            v53 = v5 | 2;
            if ( (v54 & 0x1C000) == 0 )
              v53 = v5;
            if ( (v54 & 0x12000) != 0 )
              v53 = v53 & 0xFFFFFFFA | 4;
            goto LABEL_119;
          }
        }
        v30 = -1073741755;
        v24 = v8;
        goto LABEL_74;
      }
      v48 = *(_QWORD *)(a1 + 120);
      v50 = v18 & 0xFFF3FFFF | 0x40000;
      *(_DWORD *)(v13 + 48) = v50;
      if ( (v48 & 2) == 0 )
      {
LABEL_21:
        if ( (*(_DWORD *)(a1 + 40) & 0x200000) != 0 )
        {
          PlaceholderStorage = MiCreateWriteWatchView(*(_QWORD *)(a1 + 88), v13, v11);
          v30 = PlaceholderStorage;
          v24 = v8;
          if ( PlaceholderStorage < 0 )
            goto LABEL_73;
          *(_DWORD *)(v13 + 48) |= 0x200000u;
          v5 = a3;
        }
        if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
        {
          if ( (*(_DWORD *)(a1 + 40) & 0x20400000) == 0x400000 || (*(_DWORD *)(v13 + 48) & 0x500000) == 0x500000 )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
LABEL_24:
              v23 = 0LL;
              v24 = v8;
              v25 = (*(_DWORD *)(a1 + 60) & 0x4000000) == 0;
              v62 = 0LL;
              if ( !v25 )
              {
                PlaceholderStorage = MiCreatePlaceholderStorage(v13);
                v30 = PlaceholderStorage;
                if ( PlaceholderStorage < 0 )
                  goto LABEL_72;
                v5 = a3;
                v24 = v8 | 8;
              }
              v26 = *(_QWORD *)(a1 + 88);
              v27 = 0LL;
              v24 |= 4u;
              v64 = 0LL;
              LOCK_ADDRESS_SPACE((__int64)v60, v26);
              v28 = *(_QWORD *)(a1 + 88);
              if ( (*(_DWORD *)(v28 + 780) & 0x20) != 0 )
              {
                v30 = -1073741558;
                goto LABEL_72;
              }
              v29 = *(_DWORD *)(a1 + 60);
              if ( (v24 & 0x10) == 0 )
              {
                v30 = MiSelectUserAddress(
                        *(_DWORD *)(a1 + 40),
                        *(_QWORD *)a1,
                        *(_QWORD *)(a1 + 8),
                        *(_QWORD *)(a1 + 24),
                        *(_QWORD *)(a1 + 16),
                        0LL,
                        v5,
                        v29,
                        (__int64)&v64,
                        (__int64)&v62);
                if ( v30 >= 0 )
                {
                  v23 = v62;
                  v27 = v64;
                  v31 = *(_QWORD *)(a1 + 24) + v62 - 1;
                  goto LABEL_29;
                }
                MiLogReserveVaFailed(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 16), *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
                v23 = v62;
LABEL_72:
                *a5 = v23;
                if ( P )
                {
                  if ( (v24 & 1) != 0 )
                    MiFinishPlaceholderVadReplacement(P);
                  else
                    MiUnlockVad((__int64)v60, (__int64)P);
                }
                goto LABEL_73;
              }
              if ( (v29 & 0x4000000) != 0 )
              {
                P = (PVOID)MiFindPlaceholderVadToReplace(
                             *(_QWORD *)a1,
                             *(_QWORD *)(a1 + 8),
                             *(_BYTE *)(a1 + 104),
                             &PlaceholderStorage);
                if ( !P )
                {
                  v30 = PlaceholderStorage;
                  goto LABEL_72;
                }
                v43 = *(_QWORD *)a1;
                v31 = *(_QWORD *)(a1 + 8);
              }
              else if ( !MiIsVaRangeAvailable(
                           v28,
                           *(_QWORD *)a1,
                           *(_QWORD *)(a1 + 24),
                           *(_QWORD *)a1,
                           *(_QWORD *)(a1 + 8)) )
              {
                v30 = -1073741800;
                goto LABEL_72;
              }
              v23 = v43;
              v62 = v43;
LABEL_29:
              v32 = v31 >> 12;
              v65 = v23 >> 12;
              *(_DWORD *)(v13 + 24) = v23 >> 12;
              *(_BYTE *)(v13 + 32) = v23 >> 44;
              v25 = (*(_BYTE *)(a1 + 120) & 1) == 0;
              v66 = v32;
              *(_DWORD *)(v13 + 28) = v32;
              *(_BYTE *)(v13 + 33) = BYTE4(v32);
              if ( v25 )
              {
                PlaceholderStorage = MiInsertVadCharges(v13, *(_QWORD *)(a1 + 88));
                v30 = PlaceholderStorage;
                if ( PlaceholderStorage >= 0 )
                {
                  if ( P )
                  {
                    v24 |= 1u;
                    MiPreparePlaceholderVadReplacement(P, *(_QWORD *)(a1 + 88), v9);
                    ExAcquirePushLockExclusiveEx(v13 + 40, 0LL);
                    v33 = (__int64)v60;
                  }
                  else
                  {
                    v33 = (__int64)v60;
                    MiLockVad((__int64)v60, v13);
                  }
                  MiInsertPrivateVad(v13, (__int64)v63, *(_QWORD *)(a1 + 88));
                  if ( v27 )
                    MiAdvanceVadHint(v65, v66);
                  if ( (a3 & 2) != 0 && MiIsProcessCfgEnabled() )
                    v24 = 2;
                  v36 = v24 & 2;
                  if ( !v36 )
                  {
                    v37 = *(_DWORD *)(v13 + 48);
                    if ( ((v37 & 0x100000) == 0 || (v37 & 0x400000) == 0 && (v37 & 0xC0000u) < 0x80000)
                      && !*(_QWORD *)(a1 + 80) )
                    {
                      v38 = P;
                      if ( !P )
                      {
                        MiUnlockVad(v33, v13);
                        UNLOCK_ADDRESS_SPACE(v33, *(_QWORD *)(a1 + 88));
LABEL_43:
                        *a5 = v23;
                        return 0LL;
                      }
                      v56 = (volatile signed __int64 *)BugCheckParameter2;
                      if ( (_InterlockedExchangeAdd64(
                              (volatile signed __int64 *)BugCheckParameter2,
                              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                        ExfTryToWakePushLock(v56);
                      KeAbPostRelease((ULONG_PTR)v56);
                      UNLOCK_ADDRESS_SPACE_UNORDERED(v33, *(_QWORD *)(a1 + 88), v57, v58);
                      v23 = v62;
                      goto LABEL_157;
                    }
                  }
                  UNLOCK_ADDRESS_SPACE_UNORDERED(v33, *(_QWORD *)(a1 + 88), v34, v35);
                  MiReferenceVad(v13);
                  if ( v36 && (v41 = MiCommitVadCfgBits(v40, 0LL, &v71), v41 < 0)
                    || (v42 = *(_DWORD *)(v13 + 48), (v42 & 0x100000) != 0)
                    && ((v42 & 0x400000) != 0 || (v42 & 0xC0000u) >= 0x80000)
                    && *(int *)(v13 + 52) < 0
                    && (v41 = MiMapUserLargePages(v13, *(unsigned __int8 *)(a1 + 56), a2), v41 < 0) )
                  {
                    MiDeleteVad((unsigned int *)v13, (__int64)P, 0);
                    return (unsigned int)v41;
                  }
                  if ( !*(_QWORD *)(a1 + 80) )
                  {
LABEL_58:
                    v38 = P;
                    if ( !P )
                    {
                      MiUnlockAndDereferenceVad((char *)v13);
                      goto LABEL_43;
                    }
                    MiUnlockAndDereferenceNestedVad((PVOID)v13);
LABEL_157:
                    MiFinishPlaceholderVadReplacement(v38);
                    goto LABEL_43;
                  }
                  v44 = *(_DWORD *)(a1 + 76);
                  if ( (*(_DWORD *)(a1 + 60) & 0x40000000) != 0 )
                  {
                    v45 = MiAddSecureEntry(
                            v13,
                            *(_DWORD *)(v13 + 24) << 12,
                            (*(_DWORD *)(v13 + 28) << 12) | 0xFFFu,
                            v44,
                            1);
                    if ( v45 )
                      goto LABEL_67;
                    v30 = -1073741670;
                  }
                  else
                  {
                    if ( v44 != -2147483647 && (unsigned int)(v44 - 1) > 1 && v44 != 4 )
                    {
                      v30 = -1073741755;
                      goto LABEL_155;
                    }
                    v30 = MiSecureVad(v13, v23, *(_QWORD *)(a1 + 24), v44, 0, (__int64)&v68);
                    if ( v30 >= 0 )
                    {
                      v45 = v68;
LABEL_67:
                      **(_QWORD **)(a1 + 80) = v45 ^ qword_140465A28 ^ *(_QWORD *)(a1 + 88);
                      goto LABEL_58;
                    }
                  }
LABEL_155:
                  MiDeleteVad((unsigned int *)v13, (__int64)P, 0);
                  return (unsigned int)v30;
                }
              }
              else
              {
                v55 = *(_DWORD *)(a1 + 48);
                if ( (v55 & 0x20000) != 0 )
                {
                  *(_DWORD *)(v13 + 48) |= 0x2000000u;
                  v55 &= ~0x20000u;
                }
                v30 = -1073741637;
                *(_DWORD *)(v13 + 48) ^= (*(_DWORD *)(v13 + 48) ^ (RtlFindMostSignificantBit((unsigned __int64)v55 >> 11) << 26)) & 0x1C000000;
              }
              goto LABEL_72;
            }
            v30 = -1073741755;
            v24 = v8;
          }
          else
          {
            v30 = -1073741637;
            v24 = v8;
          }
        }
        else
        {
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_24;
          v30 = -1073741755;
          v24 = v8;
        }
LABEL_73:
        CurrentThread = v60;
LABEL_74:
        if ( (v24 & 4) != 0 )
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, *(_QWORD *)(a1 + 88));
        v46 = *(_DWORD *)(v13 + 48);
        if ( (v46 & 0x300000) == 0x300000 )
        {
          MiFreeVadEventBitmap(*(_QWORD *)(a1 + 88), v13, 4LL);
          v46 = *(_DWORD *)(v13 + 48);
        }
        if ( (v46 & 0x70) == 0x40 )
        {
          MiFreeRotateView(v13);
          v46 = *(_DWORD *)(v13 + 48);
        }
        LOBYTE(v47) = v46;
        if ( (v46 & 0x100000) != 0 && ((v46 & 0x400000) != 0 || (v46 & 0xC0000u) >= 0x80000) )
        {
          MiFreeLargePageView(*(_QWORD *)(a1 + 88), v13, 0LL);
          v47 = *(_DWORD *)(v13 + 48);
        }
        if ( (v47 & 0x70) == 0x30 )
          SeFreeCapturedObjectTypeList(v63);
        if ( (v24 & 8) != 0 )
          MiFreePlaceholderStorage(v13);
        ExFreePoolWithTag((PVOID)v13, 0);
        return (unsigned int)v30;
      }
    }
    if ( (v48 & 4) != 0 )
    {
      if ( (v48 & 0x1A) == 0
        || (!a2
          ? (ProcessPartition = MiGetProcessPartition(*(_QWORD *)(a1 + 88)), CurrentThread = v60)
          : (struct _KTHREAD *)(ProcessPartition = *a2),
            (*(_DWORD *)(ProcessPartition + 4) & 0x40) == 0) )
      {
        v30 = -1073741811;
        v24 = v8;
        goto LABEL_74;
      }
      *(_DWORD *)(v13 + 48) = v50 | 0x800000;
    }
    PlaceholderStorage = MiCreateLargePageVad(*(_QWORD *)(a1 + 88), v13, a2, 0LL);
    v30 = PlaceholderStorage;
    v24 = v8;
    if ( PlaceholderStorage < 0 )
      goto LABEL_73;
    v5 = a3;
    if ( (*(_BYTE *)(a1 + 120) & 0x1A) != 0 )
      *(_DWORD *)(v13 + 48) |= 0x400000u;
    goto LABEL_21;
  }
  return result;
}
