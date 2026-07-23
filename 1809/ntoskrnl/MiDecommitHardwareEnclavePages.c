/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x1402BD3C4
 * Callers:
 *     MiDecommitEnclavePages @ 0x14085B2B4 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x14085BA24 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlInterlockedSetClearRun @ 0x140014CE0 (RtlInterlockedSetClearRun.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeBlockEnclavePage @ 0x14028FB24 (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x14028FD44 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14028FD84 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14028FE20 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14028FE64 (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x1402AA944 (MiGetExceptionInfo.c)
 *     MiDeleteEnclavePage @ 0x1402BDD44 (MiDeleteEnclavePage.c)
 */

__int64 __fastcall MiDecommitHardwareEnclavePages(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4, int a5)
{
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // r13
  int v18; // ebx
  unsigned __int8 v19; // bl
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  int v22; // eax
  int v23; // ebx
  unsigned __int64 v24; // r8
  unsigned int v25; // r10d
  unsigned int v26; // r11d
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 *v29; // rdx
  __int64 i; // rax
  __int64 v31; // rbx
  __int64 v32; // r9
  int v33; // ebx
  __int64 result; // rax
  struct _KTHREAD *v35; // rbx
  __int64 v36; // rdx
  unsigned int SessionId; // r10d
  unsigned __int8 v38; // r15
  _KLOCK_ENTRY *v39; // r14
  unsigned int v40; // r8d
  __int64 v41; // rcx
  bool v42; // zf
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // ecx
  volatile signed __int32 *v47; // r9
  __int64 v48; // r10
  int v49; // r15d
  unsigned __int8 v50; // [rsp+30h] [rbp-1A8h]
  int v51; // [rsp+34h] [rbp-1A4h]
  unsigned int v52; // [rsp+3Ch] [rbp-19Ch]
  int v53; // [rsp+40h] [rbp-198h]
  int v54; // [rsp+44h] [rbp-194h] BYREF
  ULONG_PTR v55; // [rsp+48h] [rbp-190h]
  int v56; // [rsp+50h] [rbp-188h]
  ULONG_PTR v57; // [rsp+58h] [rbp-180h]
  unsigned __int64 v58; // [rsp+60h] [rbp-178h]
  __int64 v59; // [rsp+68h] [rbp-170h]
  int v60; // [rsp+70h] [rbp-168h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-160h]
  ULONG_PTR v62; // [rsp+80h] [rbp-158h]
  __int64 ValidPte; // [rsp+88h] [rbp-150h] BYREF
  __int64 v64; // [rsp+90h] [rbp-148h]
  __int64 v65; // [rsp+98h] [rbp-140h]
  __int64 v66; // [rsp+A0h] [rbp-138h]
  ULONG_PTR v67; // [rsp+A8h] [rbp-130h]
  __int64 v68; // [rsp+B0h] [rbp-128h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-120h]
  int v70; // [rsp+C0h] [rbp-118h]
  int v71; // [rsp+D0h] [rbp-108h] BYREF
  __int16 v72; // [rsp+D4h] [rbp-104h]
  __int64 v73; // [rsp+D8h] [rbp-100h]
  __int64 v74; // [rsp+E0h] [rbp-F8h]
  __int64 v75; // [rsp+E8h] [rbp-F0h]

  v57 = a3;
  v59 = a2;
  v66 = a2;
  v67 = a3;
  v64 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 1280;
  v68 = a1 + 1280;
  v6 = 0LL;
  v58 = 0LL;
  v7 = 0;
  v55 = 0LL;
  v65 = 0LL;
  v56 = 0;
  v73 = 20LL;
  v71 = 1;
  v72 = 0;
  v74 = 0LL;
  v75 = 0LL;
  v8 = 2;
  v53 = 2;
  v50 = MiLockWorkingSetShared(a1 + 1280);
  v12 = 0;
  while ( 1 )
  {
    v52 = v12;
    if ( v12 >= v8 )
      break;
    if ( v12 == 2 )
    {
      KeTrackEnclaveTbFlush();
      MiInsertTbFlushEntry((__int64)&v71, (__int64)(v57 << 25) >> 16, 1LL, 0);
      MiFlushTbList(&v71, v13, v14, v15);
    }
    v16 = v57;
    v17 = v57;
    v62 = v57;
    while ( v17 <= a4 )
    {
      if ( (v17 & 0x78) != 0 || v17 == v16 )
        goto LABEL_18;
      v18 = 0;
      if ( MiWorkingSetIsContended(v5)
        || KeShouldYieldProcessor()
        || v6 && (unsigned int)MiPageTableLockIsContended(v5, v6) )
      {
        v18 = 1;
      }
      if ( v18 != 1 )
      {
LABEL_18:
        v19 = v50;
      }
      else
      {
        if ( v6 )
        {
          MiFlushTbList(&v71, v9, v10, v11);
          MiUnlockPageTableInternal(v5, v6);
          v6 = 0LL;
          v58 = 0LL;
        }
        v19 = v50;
        MiUnlockWorkingSetShared(v5, v50);
        MiLockWorkingSetShared(v5);
      }
      if ( v6 )
      {
        if ( (v17 & 0xFFF) != 0 )
          goto LABEL_23;
        MiFlushTbList(&v71, v9, v10, v11);
        MiUnlockPageTableInternal(v5, v6);
      }
      v6 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v58 = v6;
      LOBYTE(v11) = v19;
      MiMakeSystemAddressValid(v17, 0LL, (*(_DWORD *)(v64 + 48) >> 8) & 0x3F, v11, 0);
LABEL_23:
      ValidPte = MI_READ_PTE_LOCK_FREE(v17);
      if ( !ValidPte )
        goto LABEL_51;
      v20 = (__int64)(v17 << 25) >> 16;
      BugCheckParameter2 = v20;
      if ( v52 )
      {
        if ( v52 == 1 )
        {
          v22 = KeRemoveEnclavePage();
          v23 = v22;
          v51 = v22;
          if ( v22 < 0 )
          {
            if ( v22 != -1073741757 || a5 )
            {
              v23 = 0;
            }
            else
            {
              if ( !v55 )
              {
                while ( 1 )
                {
                  v24 = *(unsigned int *)qword_14043B258;
                  v25 = (*(_DWORD *)(qword_14043B258 + 8) & 4) != 0LL ? 0x20 : 0;
                  v26 = v25 + v24 - 1;
                  v27 = *(_QWORD *)(qword_14043B258 + 8) - ((*(_QWORD *)(qword_14043B258 + 8) & 4LL) != 0 ? 4 : 0);
                  if ( (_DWORD)v24 )
                  {
                    v24 = v27 + 8 * ((unsigned __int64)v26 >> 6);
                    v29 = (__int64 *)(v27 + 8 * ((unsigned __int64)v25 >> 6));
                    for ( i = *v29 | ((1LL << v25) - 1); i == -1; i = *v29 )
                    {
                      if ( (unsigned __int64)++v29 > v24 )
                        goto LABEL_32;
                    }
                    _BitScanForward64((unsigned __int64 *)&i, ~i);
                    v70 = i;
                    v28 = (unsigned int)i + ((unsigned int)(((__int64)v29 - v27) >> 3) << 6);
                    if ( (unsigned int)v28 > v26 )
                      v28 = 0xFFFFFFFFLL;
                  }
                  else
                  {
LABEL_32:
                    v28 = 0xFFFFFFFFLL;
                  }
                  v7 = v28 - v25;
                  if ( (_DWORD)v28 == -1 )
                    v7 = -1;
                  if ( v7 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_14043B258, v7, 1u) )
                    goto LABEL_45;
                }
                MiFlushTbList(&v71, v28, v24, v27);
                v31 = v68;
                MiUnlockPageTableInternal(v68, v6);
                MiUnlockWorkingSetShared(v31, v50);
                --CurrentThread->SpecialApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043B260, 0LL);
                v7 = 0;
                MiLockWorkingSetShared(v31);
                LOBYTE(v32) = v50;
                MiMakeSystemAddressValid(v17, 0LL, (*(_DWORD *)(v64 + 48) >> 8) & 0x3F, v32, 0);
LABEL_45:
                v55 = qword_14043B250 + 8 * v7;
                ++v53;
                v23 = v51;
              }
              KeBlockEnclavePage();
            }
          }
          if ( v23 < 0 )
            goto LABEL_50;
        }
        else
        {
          do
          {
            ExAcquireSpinLockShared(&dword_14043B268);
            v33 = KeOutPageEnclavePage(v20, *(_QWORD *)(v59 + 88));
            ExReleaseSpinLockSharedFromDpcLevel(&dword_14043B268);
          }
          while ( v33 == -1073741802 );
          if ( v33 < 0 )
            KeBugCheckEx(0x1Au, 0x18011713uLL, v20, v33, 0LL);
        }
        MiDeleteEnclavePage(v17, 1LL);
      }
      else
      {
        v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
        ValidPte = MiMakeValidPte(v17, (v21 >> 12) & 0xFFFFFFFFFLL, -1073741820);
        MiWriteValidPteNewProtection(v17, ValidPte);
      }
LABEL_50:
      MiInsertTbFlushEntry((__int64)&v71, v20, 1LL, 0);
      v5 = v68;
LABEL_51:
      v17 += 8LL;
      v62 = v17;
      v16 = v57;
    }
    MiFlushTbList(&v71, v9, v10, v11);
    if ( v6 )
    {
      MiUnlockPageTableInternal(v5, v6);
      v6 = 0LL;
      v58 = 0LL;
    }
    v12 = v52 + 1;
    v8 = v53;
  }
  result = MiUnlockWorkingSetShared(v5, v50);
  if ( v55 )
  {
    if ( v7 )
    {
      v46 = 1;
      v47 = (volatile signed __int32 *)(*(_QWORD *)(qword_14043B258 + 8) + 4 * ((unsigned __int64)v7 >> 5));
      v48 = v7 & 0x1F;
      result = v48 + 1;
      if ( (unsigned __int64)(v48 + 1) > 0x20 )
      {
        v49 = v7 & 0x1F;
        if ( v49 )
        {
          result = (unsigned int)~(((1 << (32 - v49)) - 1) << v48);
          _InterlockedAnd(v47, result);
          v46 = 1 - (32 - v49);
          ++v47;
        }
        if ( v46 >= 0x20 )
        {
          result = (unsigned __int64)v46 >> 5;
          do
          {
            *v47++ = 0;
            v46 -= 32;
            --result;
          }
          while ( result );
        }
        if ( v46 )
          _InterlockedAnd(v47, -1 << v46);
      }
      else
      {
        _InterlockedAnd(v47, ~(1 << v48));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043B260, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043B260);
      v54 = 0;
      v35 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14043B260) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v35->ApcState.Process);
      else
        SessionId = -1;
      --v35->SpecialApcDisable;
      v38 = ++v35->AbAllocationRegionCount;
      v39 = 0LL;
      v40 = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v42 = !_BitScanReverse((unsigned int *)&v43, v40);
        v60 = v43;
        if ( v42 )
          break;
        v40 &= ~(1 << v43);
        v41 = v43;
        v36 = (__int64)&v35->LockEntries[v41];
        if ( (*(_BYTE *)(v36 + 26) & 1) != 0
          && (*(_DWORD *)(v36 + 32) & 1) == 0
          && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14043B260 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v36 + 40) == SessionId )
        {
          *(_BYTE *)(v36 + 26) &= ~1u;
          if ( *(_QWORD *)(v36 + 32) )
          {
            v39 = &v35->LockEntries[v41];
            break;
          }
        }
      }
      if ( v39 )
      {
        v39->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v39->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v39->TreeNode, v36);
        v54 = 0;
        v54 = v39->BoostBitmap.AllFields & 0x1FFFF;
        v39->BoostBitmap.AllFields &= 0xFFFE0000;
        v39->ThreadLocalFlags &= ~1u;
        v39->LockState.0 = 0LL;
        v44 = ((char *)v39 - (char *)v35 - 800) / 96;
        if ( v38 == 1 )
          v35->AbEntrySummary |= 1 << v44;
        else
          _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v44);
      }
      else if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)&qword_14043B260, SessionId, 0LL);
      }
      --v35->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v35, (__int64)&qword_14043B260, (__int64)&v54);
      v42 = v35->SpecialApcDisable++ == -1;
      if ( v42 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
        KiCheckForKernelApcDelivery(v45);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return result;
}
