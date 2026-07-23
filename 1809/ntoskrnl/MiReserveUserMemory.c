/*
 * XREFs of MiReserveUserMemory @ 0x1405F2600
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertPrivateVad @ 0x1400767E0 (MiInsertPrivateVad.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiIsProcessCfgEnabled @ 0x1400884AC (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140088CC8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402B06EC (SeFreeCapturedObjectTypeList.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402C4F38 (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1402CB304 (MiUnlockAndDereferenceNestedVad.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1405F3360 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1405F4490 (MiAddSecureEntry.c)
 *     MiSecureVad @ 0x1405F45BC (MiSecureVad.c)
 *     MiCommitVadCfgBits @ 0x1405F55BC (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x1405F59F0 (MiIsVaRangeAvailable.c)
 *     MiArbitraryCodeBlocked @ 0x140677900 (MiArbitraryCodeBlocked.c)
 *     MiAdvanceVadHint @ 0x140696FD0 (MiAdvanceVadHint.c)
 *     MiCreateVadEventBitmap @ 0x140697348 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406CBC64 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406D1E70 (MiFreePlaceholderStorage.c)
 *     MiLogReserveVaFailed @ 0x14084F334 (MiLogReserveVaFailed.c)
 *     MiFreeRotateView @ 0x1408504F4 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1408506D4 (MiFreeVadEventBitmap.c)
 *     MiCreateUserPhysicalView @ 0x140850D4C (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x14085D918 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14085D9CC (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14085DA90 (MiPreparePlaceholderVadReplacement.c)
 *     MiCreateLargePageVad @ 0x14085E288 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14085E5D4 (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 */

__int64 __fastcall MiReserveUserMemory(_QWORD *a1, __int64 a2, int a3, char a4, unsigned __int64 *a5)
{
  char v6; // r14
  int v7; // r13d
  __int64 v9; // r15
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r12
  PVOID PoolWithTag; // rax
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  unsigned __int64 v18; // r8
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // eax
  struct _KTHREAD *CurrentThread; // r8
  int v23; // eax
  unsigned __int64 v24; // r12
  char v25; // bl
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rcx
  int v30; // eax
  int VadEventBitmap; // r13d
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r10
  __int64 v34; // r13
  int v35; // ebx
  void *v36; // rbx
  __int64 result; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  int v40; // r14d
  unsigned __int64 v41; // r11
  unsigned int v42; // eax
  int v43; // r9d
  __int64 v44; // rax
  int v45; // ecx
  volatile signed __int64 *v46; // rsi
  __int64 v47; // [rsp+50h] [rbp-41h]
  PVOID P; // [rsp+58h] [rbp-39h]
  unsigned __int64 v49; // [rsp+60h] [rbp-31h] BYREF
  void *v50; // [rsp+68h] [rbp-29h] BYREF
  __int64 v51; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v52; // [rsp+78h] [rbp-19h]
  unsigned __int64 v53; // [rsp+80h] [rbp-11h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-9h]
  __int64 v55[3]; // [rsp+90h] [rbp-1h] BYREF
  int LargePageVad; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 v57; // [rsp+F8h] [rbp+67h]
  int v58; // [rsp+100h] [rbp+6Fh]
  char v59; // [rsp+108h] [rbp+77h] BYREF

  v59 = a4;
  v58 = a3;
  v57 = a2;
  v6 = 16;
  P = 0LL;
  v7 = a3;
  v9 = *(_QWORD *)(a1[10] + 1296LL) + 48LL;
  if ( a1[1] - *a1 + 1LL != a1[3] )
    v6 = 0;
  if ( (*((_DWORD *)a1 + 11) & 0x88) != 0 )
    return 3221225541LL;
  if ( (*((_DWORD *)a1 + 13) & 0x20000000) != 0 && (MiFlags & 0x100000) == 0
    || (a3 & 2) == 0
    || (result = MiArbitraryCodeBlocked(a1[11]), LargePageVad = result, (int)result >= 0) )
  {
    v10 = a1[3];
    v50 = 0LL;
    v11 = ((v10 & 0xFFF) != 0) + (v10 >> 12);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
    v13 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x40uLL);
    v14 = *((_DWORD *)a1 + 12);
    BugCheckParameter2 = v13 + 40;
    *(_QWORD *)(v13 + 40) = 0LL;
    v15 = (*(_DWORD *)(v13 + 48) ^ (v14 << 8)) & 0x3F00;
    *(_QWORD *)(v13 + 16) = -2LL;
    *(_DWORD *)(v13 + 48) ^= v15;
    v16 = *(_DWORD *)(v13 + 48);
    if ( v14 )
    {
      *(_BYTE *)(*(_QWORD *)(a1[10] + 1296LL) + 304LL) = 1;
      v16 = *(_DWORD *)(v13 + 48);
    }
    v17 = *((_DWORD *)a1 + 10);
    if ( (v17 & 0x1000) != 0 )
    {
      *(_DWORD *)(v13 + 52) |= 0x80000000;
      v18 = v11;
    }
    else
    {
      v18 = 0LL;
    }
    v19 = v16 & 0xFFFFFF07 | (8 * (v7 & 0x1F | 0x800));
    v20 = *((_DWORD *)a1 + 13);
    *(_DWORD *)(v13 + 48) = v19;
    if ( (v20 & 0x40000000) != 0 )
    {
      v19 |= 0x80000u;
      *(_DWORD *)(v13 + 48) = v19;
    }
    if ( (v20 & 1) != 0 )
    {
      v18 = 0x7FFFFFFFELL;
    }
    else if ( (v20 & 0x8000000) != 0 )
    {
      v18 = 0x7FFFFFFFDLL;
    }
    v21 = v18 ^ *(_DWORD *)(v13 + 52);
    *(_BYTE *)(v13 + 34) = v18 >> 31;
    *(_DWORD *)(v13 + 52) ^= v21 & 0x7FFFFFFF;
    CurrentThread = KeGetCurrentThread();
    v23 = v17 & 0x20400000;
    v47 = (__int64)CurrentThread;
    if ( a1[14] && v23 != 0x400000 )
    {
      VadEventBitmap = -1073741637;
      v25 = v6;
      goto LABEL_71;
    }
    if ( v23 == 541065216 )
    {
      *(_DWORD *)(v13 + 48) = v19 | 0x40000;
    }
    else
    {
      if ( v23 != 0x400000 )
      {
        if ( v23 == 0x20000000 )
        {
          LargePageVad = MiCreateLargePageVad(a1[10], v13, a2);
          VadEventBitmap = LargePageVad;
          v25 = v6;
          if ( LargePageVad >= 0 )
          {
            v7 = v58;
            v42 = *(_DWORD *)(v13 + 48) & 0xFFFFFFF8 | 5;
            goto LABEL_61;
          }
        }
        else
        {
          if ( (v17 & 0x800000) == 0 )
            goto LABEL_21;
          if ( (unsigned int)MiCreateRotateView(v13) )
          {
            v42 = *(_DWORD *)(v13 + 48) & 0xFFFFFFF8 | 6;
LABEL_61:
            *(_DWORD *)(v13 + 48) = v42;
            goto LABEL_21;
          }
          VadEventBitmap = -1073741670;
          v25 = v6;
        }
LABEL_70:
        CurrentThread = (struct _KTHREAD *)v47;
LABEL_71:
        if ( (v25 & 4) != 0 )
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1[10]);
        v45 = *(_DWORD *)(v13 + 48);
        if ( (v45 & 7) == 4 )
        {
          MiFreeVadEventBitmap(a1[10], v13, 4LL);
          v45 = *(_DWORD *)(v13 + 48);
        }
        if ( (v45 & 7) == 6 )
        {
          MiFreeRotateView(v13);
          v45 = *(_DWORD *)(v13 + 48);
        }
        if ( (v45 & 7) == 5 )
        {
          MiFreeLargePageView(a1[10], v13, 0LL);
          v45 = *(_DWORD *)(v13 + 48);
        }
        if ( (v45 & 7) == 3 )
          SeFreeCapturedObjectTypeList(v50);
        if ( (v25 & 8) != 0 )
          MiFreePlaceholderStorage(v13);
        ExFreePoolWithTag((PVOID)v13, 0);
        return (unsigned int)VadEventBitmap;
      }
      LargePageVad = MiCreateUserPhysicalView(v13, a1, &v50);
      if ( LargePageVad < 0 )
      {
        VadEventBitmap = -1073741670;
        v25 = v6;
        goto LABEL_70;
      }
      *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 48) & 0xFFFDFFF8 | 3;
      *(_QWORD *)(v13 + 8) = *((_QWORD *)v50 + 4);
    }
LABEL_21:
    if ( (a1[5] & 0x200000) != 0 )
    {
      v38 = a1[10];
      VadEventBitmap = MiCreateVadEventBitmap(v38, v13, v11, 4LL);
      if ( VadEventBitmap >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(v38 + 772), 0x8000u);
        VadEventBitmap = 0;
      }
      LargePageVad = VadEventBitmap;
      v25 = v6;
      if ( VadEventBitmap < 0 )
        goto LABEL_70;
      v7 = v58;
      *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 48) & 0xFFFFFFF8 | 4;
    }
    v24 = 0LL;
    v25 = v6;
    v26 = (*((_DWORD *)a1 + 13) & 0x4000000) == 0;
    v49 = 0LL;
    if ( !v26 )
    {
      LargePageVad = MiCreatePlaceholderStorage(v13);
      VadEventBitmap = LargePageVad;
      if ( LargePageVad < 0 )
        goto LABEL_69;
      v7 = v58;
      v25 = v6 | 8;
    }
    v27 = a1[10];
    v28 = 0LL;
    v25 |= 4u;
    v51 = 0LL;
    LOCK_ADDRESS_SPACE(v47, v27);
    v29 = a1[10];
    if ( (*(_DWORD *)(v29 + 772) & 0x20) != 0 )
    {
      VadEventBitmap = -1073741558;
      goto LABEL_69;
    }
    v30 = *((_DWORD *)a1 + 13);
    if ( (v25 & 0x10) == 0 )
    {
      VadEventBitmap = MiSelectUserAddress(
                         *((unsigned int *)a1 + 10),
                         *a1,
                         a1[1],
                         a1[3],
                         a1[2],
                         0LL,
                         v7,
                         v30,
                         &v51,
                         &v49);
      if ( VadEventBitmap >= 0 )
      {
        v24 = v49;
        v28 = v51;
        v32 = a1[3] + v49 - 1;
        goto LABEL_27;
      }
      MiLogReserveVaFailed(a1[3], a1[2], *a1, a1[1]);
      v24 = v49;
LABEL_69:
      *a5 = v24;
      if ( P )
      {
        if ( (v25 & 1) != 0 )
          MiFinishPlaceholderVadReplacement(P);
        else
          MiUnlockVad(v47, (__int64)P);
      }
      goto LABEL_70;
    }
    if ( (v30 & 0x4000000) != 0 )
    {
      P = (PVOID)MiFindPlaceholderVadToReplace(*a1, a1[1], *((_BYTE *)a1 + 96), &LargePageVad);
      if ( !P )
      {
        VadEventBitmap = LargePageVad;
        goto LABEL_69;
      }
      v41 = *a1;
      v32 = a1[1];
    }
    else if ( !(unsigned int)MiIsVaRangeAvailable(v29, *a1, a1[3], *a1, a1[1]) )
    {
      VadEventBitmap = -1073741800;
      goto LABEL_69;
    }
    v24 = v41;
    v49 = v41;
LABEL_27:
    v33 = v32 >> 12;
    v53 = v24 >> 12;
    *(_DWORD *)(v13 + 24) = v24 >> 12;
    *(_BYTE *)(v13 + 32) = v24 >> 44;
    v26 = a1[14] == 0LL;
    v52 = v33;
    *(_DWORD *)(v13 + 28) = v33;
    *(_BYTE *)(v13 + 33) = BYTE4(v33);
    if ( v26 )
    {
      LargePageVad = MiInsertVadCharges(v13, a1[10]);
      VadEventBitmap = LargePageVad;
      if ( LargePageVad >= 0 )
      {
        if ( P )
        {
          v25 |= 1u;
          MiPreparePlaceholderVadReplacement(P, a1[10], v9);
          ExAcquirePushLockExclusiveEx(v13 + 40, 0LL);
          v34 = v47;
        }
        else
        {
          v34 = v47;
          MiLockVad(v47, v13);
        }
        MiInsertPrivateVad(v13, (__int64)v50, a1[10]);
        if ( v28 )
          MiAdvanceVadHint(v53, v52);
        if ( (v58 & 2) != 0 && MiIsProcessCfgEnabled() )
          v25 = 2;
        v35 = v25 & 2;
        if ( !v35 && (*(_BYTE *)(v13 + 48) & 7) != 5 && !a1[9] )
        {
          v36 = P;
          if ( !P )
          {
            MiUnlockVad(v34, v13);
            UNLOCK_ADDRESS_SPACE(v34, a1[10]);
LABEL_39:
            *a5 = v24;
            return 0LL;
          }
          v46 = (volatile signed __int64 *)BugCheckParameter2;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v46);
          KeAbPostRelease((ULONG_PTR)v46);
          UNLOCK_ADDRESS_SPACE_UNORDERED(v34, a1[10]);
          v24 = v49;
          goto LABEL_122;
        }
        UNLOCK_ADDRESS_SPACE_UNORDERED(v34, a1[10]);
        MiReferenceVad(v13);
        if ( v35 && (v40 = MiCommitVadCfgBits(v39, 0LL, &v59), v40 < 0)
          || (*(_BYTE *)(v13 + 48) & 7) == 5
          && (v40 = MiMapUserLargePages(v13, (*(_DWORD *)(v13 + 48) >> 8) & 0x3F, v57), v40 < 0) )
        {
          MiDeleteVad((unsigned int *)v13, (__int64)P, 0);
          return (unsigned int)v40;
        }
        if ( !a1[9] )
        {
LABEL_54:
          v36 = P;
          if ( !P )
          {
            MiUnlockAndDereferenceVad((char *)v13);
            goto LABEL_39;
          }
          MiUnlockAndDereferenceNestedVad((PVOID)v13);
LABEL_122:
          MiFinishPlaceholderVadReplacement(v36);
          goto LABEL_39;
        }
        v43 = *((_DWORD *)a1 + 17);
        if ( (*((_DWORD *)a1 + 13) & 0x40000000) != 0 )
        {
          v44 = MiAddSecureEntry(v13, *(_DWORD *)(v13 + 24) << 12, (*(_DWORD *)(v13 + 28) << 12) | 0xFFFu, v43, 1);
          if ( v44 )
            goto LABEL_66;
          VadEventBitmap = -1073741670;
        }
        else
        {
          if ( v43 != -2147483647 && (unsigned int)(v43 - 1) > 1 && v43 != 4 )
          {
            VadEventBitmap = -1073741755;
            goto LABEL_120;
          }
          VadEventBitmap = MiSecureVad(v13, v24, a1[3], v43, 0, (__int64)v55);
          if ( VadEventBitmap >= 0 )
          {
            v44 = v55[0];
LABEL_66:
            *(_QWORD *)a1[9] = a1[10] ^ v44 ^ qword_14043B0D0;
            goto LABEL_54;
          }
        }
LABEL_120:
        MiDeleteVad((unsigned int *)v13, (__int64)P, 0);
        return (unsigned int)VadEventBitmap;
      }
    }
    else
    {
      VadEventBitmap = -1073741637;
    }
    goto LABEL_69;
  }
  return result;
}
