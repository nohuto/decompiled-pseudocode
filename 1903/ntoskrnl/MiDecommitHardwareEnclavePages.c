/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x1402D3B20
 * Callers:
 *     MiDecommitEnclavePages @ 0x140893FA4 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140894E2C (MiTerminateHardwareEnclave.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlInterlockedSetClearRun @ 0x14008A1F0 (RtlInterlockedSetClearRun.c)
 *     MiPageTableLockIsContended @ 0x14008DE78 (MiPageTableLockIsContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeBlockEnclavePage @ 0x1402A632C (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x1402A654C (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1402A658C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x1402A6650 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1402A6694 (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x1402C3364 (MiGetExceptionInfo.c)
 *     MiDeleteEnclavePage @ 0x1402D44E8 (MiDeleteEnclavePage.c)
 */

__int64 __fastcall MiDecommitHardwareEnclavePages(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4, int a5)
{
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // r13
  int v20; // ebx
  unsigned __int8 v21; // bl
  __int64 v22; // r14
  unsigned __int64 v23; // rax
  int v24; // eax
  int v25; // ebx
  unsigned __int64 v26; // r8
  unsigned int v27; // r10d
  unsigned int v28; // r11d
  __int64 i; // rdx
  __int64 v30; // r9
  unsigned int v31; // ecx
  __int64 *v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // ebx
  __int64 result; // rax
  signed __int64 v37; // rax
  struct _KTHREAD *v38; // rbx
  unsigned int SessionId; // r10d
  unsigned __int8 v40; // r15
  _KLOCK_ENTRY *v41; // r14
  unsigned int v42; // r8d
  __int64 v43; // rcx
  _KLOCK_ENTRY *v44; // rdx
  bool v45; // zf
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // ecx
  volatile signed __int32 *v50; // r9
  __int64 v51; // r10
  int v52; // r15d
  unsigned __int8 v53; // [rsp+30h] [rbp-1B8h]
  int v54; // [rsp+34h] [rbp-1B4h]
  unsigned int v55; // [rsp+3Ch] [rbp-1ACh]
  int v56; // [rsp+40h] [rbp-1A8h]
  ULONG_PTR v57; // [rsp+48h] [rbp-1A0h]
  int v58; // [rsp+58h] [rbp-190h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-188h]
  unsigned __int64 v60; // [rsp+68h] [rbp-180h]
  __int64 v61; // [rsp+70h] [rbp-178h]
  int v62; // [rsp+78h] [rbp-170h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-168h]
  ULONG_PTR v64; // [rsp+88h] [rbp-160h]
  unsigned __int64 ValidPte; // [rsp+90h] [rbp-158h] BYREF
  __int64 v66; // [rsp+98h] [rbp-150h]
  __int64 v67; // [rsp+A0h] [rbp-148h]
  __int64 v68; // [rsp+A8h] [rbp-140h]
  ULONG_PTR v69; // [rsp+B0h] [rbp-138h]
  __int64 v70; // [rsp+B8h] [rbp-130h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-128h]
  int v72; // [rsp+C8h] [rbp-120h]
  signed __int64 v73; // [rsp+D8h] [rbp-110h]
  _QWORD v74[24]; // [rsp+E0h] [rbp-108h] BYREF

  BugCheckParameter4 = a3;
  v61 = a2;
  v68 = a2;
  v69 = a3;
  memset(v74, 0, 0xB8uLL);
  v66 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = a1 + 1280;
  v70 = v7;
  v8 = 0LL;
  v60 = 0LL;
  v9 = 0;
  v10 = 0;
  v57 = 0LL;
  v67 = 0LL;
  LODWORD(v74[0]) = 1;
  WORD2(v74[0]) = 0;
  v74[2] = 0LL;
  LODWORD(v74[1]) = 20;
  v74[3] = 0LL;
  v11 = 2;
  v56 = 2;
  v53 = MiLockWorkingSetShared(v7);
  while ( 1 )
  {
    v14 = 0xFFFFF68000000000uLL;
    v55 = v10;
    if ( v10 >= v11 )
      break;
    if ( v10 == 2 )
    {
      KeTrackEnclaveTbFlush();
      MiInsertTbFlushEntry((__int64)v74, (__int64)(BugCheckParameter4 << 25) >> 16, 1LL, 0);
      MiFlushTbList((int *)v74, v15, v16, v17);
    }
    v18 = BugCheckParameter4;
    v19 = BugCheckParameter4;
    v64 = BugCheckParameter4;
    while ( v19 <= a4 )
    {
      if ( (v19 & 0x78) != 0 || v19 == v18 )
        goto LABEL_18;
      v20 = 0;
      if ( MiWorkingSetIsContended(v7)
        || KeShouldYieldProcessor()
        || v8 && (unsigned int)MiPageTableLockIsContended(v7, v8) )
      {
        v20 = 1;
      }
      if ( v20 != 1 )
      {
LABEL_18:
        v21 = v53;
      }
      else
      {
        if ( v8 )
        {
          MiFlushTbList((int *)v74, v14, v12, v13);
          MiUnlockPageTableInternal(v7, v8);
          v8 = 0LL;
          v60 = 0LL;
        }
        v21 = v53;
        MiUnlockWorkingSetShared(v7, v53);
        MiLockWorkingSetShared(v7);
      }
      if ( v8 )
      {
        if ( (v19 & 0xFFF) != 0 )
          goto LABEL_23;
        MiFlushTbList((int *)v74, v14, v12, v13);
        MiUnlockPageTableInternal(v7, v8);
      }
      v8 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v60 = v8;
      MiMakeSystemAddressValid(v19, 0LL, (*(_DWORD *)(v66 + 48) >> 12) & 0x3F, v21, 0);
LABEL_23:
      ValidPte = MI_READ_PTE_LOCK_FREE(v19);
      if ( !ValidPte )
        goto LABEL_51;
      v22 = (__int64)(v19 << 25) >> 16;
      BugCheckParameter2 = v22;
      if ( v55 )
      {
        if ( v55 == 1 )
        {
          v24 = KeRemoveEnclavePage();
          v25 = v24;
          v54 = v24;
          if ( v24 < 0 )
          {
            if ( v24 != -1073741757 || a5 )
            {
              v25 = 0;
            }
            else
            {
              if ( !v57 )
              {
                while ( 1 )
                {
                  v26 = *(unsigned int *)qword_140465BD8;
                  v27 = (*(_DWORD *)(qword_140465BD8 + 8) & 4) != 0LL ? 0x20 : 0;
                  v28 = v27 + v26 - 1;
                  i = -(*(_QWORD *)(qword_140465BD8 + 8) & 4LL);
                  v30 = *(_QWORD *)(qword_140465BD8 + 8) - ((*(_QWORD *)(qword_140465BD8 + 8) & 4LL) != 0 ? 4 : 0);
                  if ( (_DWORD)v26 )
                  {
                    v26 = v30 + 8 * ((unsigned __int64)v28 >> 6);
                    v32 = (__int64 *)(v30 + 8 * ((unsigned __int64)v27 >> 6));
                    for ( i = ((1LL << v27) - 1) | *v32; i == -1; i = *v32 )
                    {
                      if ( (unsigned __int64)++v32 > v26 )
                        goto LABEL_32;
                    }
                    i = ~i;
                    _BitScanForward64(&v33, i);
                    v72 = v33;
                    v31 = v33 + ((unsigned int)(((__int64)v32 - v30) >> 3) << 6);
                    if ( v31 > v28 )
                      v31 = -1;
                  }
                  else
                  {
LABEL_32:
                    v31 = -1;
                  }
                  v9 = v31 - v27;
                  if ( v31 == -1 )
                    v9 = -1;
                  if ( v9 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140465BD8, v9, 1u) )
                    goto LABEL_45;
                }
                MiFlushTbList((int *)v74, i, v26, v30);
                v34 = v70;
                MiUnlockPageTableInternal(v70, v8);
                MiUnlockWorkingSetShared(v34, v53);
                --CurrentThread->SpecialApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140465BE0, 0LL);
                v9 = 0;
                MiLockWorkingSetShared(v34);
                MiMakeSystemAddressValid(v19, 0LL, (*(_DWORD *)(v66 + 48) >> 12) & 0x3F, v53, 0);
LABEL_45:
                v57 = qword_140465BD0 + 8 * v9;
                ++v56;
                v25 = v54;
              }
              KeBlockEnclavePage();
            }
          }
          if ( v25 < 0 )
            goto LABEL_50;
        }
        else
        {
          do
          {
            ExAcquireSpinLockShared(&dword_140465BE8);
            v35 = KeOutPageEnclavePage(v22, *(_QWORD *)(v61 + 88));
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140465BE8);
          }
          while ( v35 == -1073741802 );
          if ( v35 < 0 )
            KeBugCheckEx(0x1Au, 0x18011713uLL, v22, v35, 0LL);
        }
        MiDeleteEnclavePage(v19, 1LL);
      }
      else
      {
        v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
        ValidPte = MiMakeValidPte(v19, (v23 >> 12) & 0xFFFFFFFFFLL, -1073741820);
        MiWriteValidPteNewProtection(v19);
      }
LABEL_50:
      MiInsertTbFlushEntry((__int64)v74, v22, 1LL, 0);
      v7 = v70;
LABEL_51:
      v19 += 8LL;
      v64 = v19;
      v18 = BugCheckParameter4;
    }
    MiFlushTbList((int *)v74, v14, v12, v13);
    if ( v8 )
    {
      MiUnlockPageTableInternal(v7, v8);
      v8 = 0LL;
      v60 = 0LL;
    }
    v10 = v55 + 1;
    v11 = v56;
  }
  result = MiUnlockWorkingSetShared(v7, v53);
  if ( v57 )
  {
    if ( v9 )
    {
      v49 = 1;
      v50 = (volatile signed __int32 *)(*(_QWORD *)(qword_140465BD8 + 8) + 4 * ((unsigned __int64)v9 >> 5));
      v51 = v9 & 0x1F;
      result = v51 + 1;
      if ( (unsigned __int64)(v51 + 1) > 0x20 )
      {
        v52 = v9 & 0x1F;
        if ( v52 )
        {
          result = (unsigned int)~(((1 << (32 - v52)) - 1) << v51);
          _InterlockedAnd(v50, result);
          v49 = 1 - (32 - v52);
          ++v50;
        }
        if ( v49 >= 0x20 )
        {
          result = (unsigned __int64)v49 >> 5;
          do
          {
            *v50++ = 0;
            v49 -= 32;
            --result;
          }
          while ( result );
        }
        if ( v49 )
          _InterlockedAnd(v50, -1 << v49);
      }
      else
      {
        _InterlockedAnd(v50, ~(1 << v51));
      }
    }
    else
    {
      v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140465BE0, 0xFFFFFFFFFFFFFFFFuLL);
      v73 = v37;
      if ( (v37 & 2) != 0 && (v37 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140465BE0);
      v58 = 0;
      v38 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140465BE0) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v38->ApcState.Process);
      else
        SessionId = -1;
      --v38->SpecialApcDisable;
      v40 = ++v38->AbAllocationRegionCount;
      v41 = 0LL;
      v42 = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v45 = !_BitScanReverse((unsigned int *)&v46, v42);
        v62 = v46;
        if ( v45 )
          break;
        v42 &= ~(1 << v46);
        v43 = v46;
        v44 = &v38->LockEntries[v43];
        if ( (v44->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v44->LockState.0 & 1) == 0
          && (*(_QWORD *)&v44->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140465BE0 & 0x7FFFFFFFFFFFFFFCLL)
          && v44->LockState.SessionId == SessionId )
        {
          v44->AcquiredByte &= ~1u;
          if ( v44->LockState.0 )
          {
            v41 = &v38->LockEntries[v43];
            break;
          }
        }
      }
      if ( v41 )
      {
        v41->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v41->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v41->TreeNode);
        v58 = v41->BoostBitmap.AllFields & 0x1FFFF;
        v41->BoostBitmap.AllFields &= 0xFFFE0000;
        v41->ThreadLocalFlags &= ~1u;
        v41->LockState.0 = 0LL;
        v47 = ((char *)v41 - (char *)v38 - 800) / 96;
        if ( v40 == 1 )
          v38->AbEntrySummary |= 1 << v47;
        else
          _InterlockedOr8((volatile signed __int8 *)&v38->AbOrphanedEntrySummary, 1 << v47);
      }
      else if ( (*((_DWORD *)&v38->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v38, (ULONG_PTR)&qword_140465BE0, SessionId, 0LL);
      }
      --v38->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v38, (__int64)&qword_140465BE0, &v58);
      v45 = v38->SpecialApcDisable++ == -1;
      if ( v45 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
        KiCheckForKernelApcDelivery(v48);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return result;
}
