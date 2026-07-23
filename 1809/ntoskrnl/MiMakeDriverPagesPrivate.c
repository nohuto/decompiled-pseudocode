/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x1400DB490
 * Callers:
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiLockHotPatchPageRange @ 0x1402B98A4 (MiLockHotPatchPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x14070E700 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x14084DAD8 (MiSplitDriverPage.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiSessionLookupImage @ 0x14009DB08 (MiSessionLookupImage.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiDriverPageMustStayResident @ 0x1400DB198 (MiDriverPageMustStayResident.c)
 *     MiUnlockLoaderEntry @ 0x1400DBBAC (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1400DBDE4 (MiLockLoaderEntry.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1400DBEB0 (MiUseSlabAllocatorForDriverPage.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiRemoveSystemImagePage @ 0x14012C18C (MiRemoveSystemImagePage.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiAllocateDriverPage @ 0x140654BD4 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  char v8; // r9
  __int64 v9; // r10
  unsigned __int16 *SessionVm; // r13
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rbx
  int v15; // ecx
  int v16; // eax
  unsigned __int64 v17; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // r15
  ULONG_PTR v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r11
  __int64 v25; // rbp
  unsigned int v26; // r15d
  struct _KTHREAD *v27; // rsi
  struct _KTHREAD *v28; // rdi
  ULONG_PTR SessionId; // r9
  BOOL v30; // ebp
  __int64 v31; // rdx
  bool v32; // zf
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  _KLOCK_ENTRY *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v40; // ebx
  __int64 v41; // r11
  int v42; // r8d
  __int64 v43; // r9
  int v44; // r10d
  ULONG_PTR v45; // r11
  int v46; // eax
  ULONG_PTR v47; // rbx
  __int64 v48; // rbp
  __int64 v49; // rbp
  int v50; // eax
  _KPROCESS *Process; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // r8
  char v61; // [rsp+30h] [rbp-B8h]
  __int64 DriverPage; // [rsp+38h] [rbp-B0h]
  __int64 v63; // [rsp+38h] [rbp-B0h]
  int v64; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+48h] [rbp-A0h]
  unsigned int v66; // [rsp+50h] [rbp-98h]
  int v67; // [rsp+54h] [rbp-94h]
  int v68; // [rsp+58h] [rbp-90h]
  int v69; // [rsp+5Ch] [rbp-8Ch] BYREF
  int v70; // [rsp+60h] [rbp-88h] BYREF
  int v71; // [rsp+64h] [rbp-84h] BYREF
  int v72; // [rsp+68h] [rbp-80h]
  unsigned __int64 v73; // [rsp+70h] [rbp-78h]
  __int64 v74; // [rsp+78h] [rbp-70h]
  _QWORD *v75; // [rsp+80h] [rbp-68h]
  __int64 v76; // [rsp+88h] [rbp-60h]
  ULONG_PTR v77; // [rsp+90h] [rbp-58h] BYREF
  __int64 v78; // [rsp+98h] [rbp-50h]
  unsigned __int8 v80; // [rsp+F8h] [rbp+10h]

  v5 = a2;
  v66 = 0;
  v75 = 0LL;
  v61 = 0;
  v74 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v73 = Process[1].ActiveProcessors.Bitmap[2];
    SessionVm = (unsigned __int16 *)MiGetSessionVm(Process);
  }
  else
  {
    v73 = v7;
    SessionVm = (unsigned __int16 *)&unk_14043C250;
  }
  v11 = SessionVm[87];
  v12 = v6 + 160;
  v13 = *(_QWORD *)(v6 + 48) >> 9;
  v65 = v6 + 160;
  v76 = *(_QWORD *)(qword_14043B808 + 8 * v11);
  v14 = v9 + (v13 & 0x7FFFFFFFF8LL);
  v15 = v7;
  if ( (v8 & 3) == 0 && (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    v15 = 2;
  v16 = v15 | 1;
  v67 = v8 & 4;
  v17 = v7;
  if ( (v8 & 4) == 0 )
    v16 = v15;
  DriverPage = -1LL;
  v68 = v16;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v19 = v6 + 264;
  ExAcquirePushLockExclusiveEx(v6 + 264, 0LL);
  v78 = *(_QWORD *)(v12 + 112);
  v80 = MiLockWorkingSetShared((__int64)SessionVm);
  if ( v5 > a3 )
  {
    v26 = v17;
    goto LABEL_22;
  }
  v20 = v5 - v14;
  while ( 1 )
  {
    if ( v17 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_11;
      MiUnlockPageTableInternal(SessionVm, v17);
    }
    v17 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)SessionVm, v17, 0);
LABEL_11:
    v21 = *(_QWORD *)v5;
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_12;
    if ( (MiFlags & 0xC00000) == 0 || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
    {
      v52 = v21;
    }
    else
    {
      v52 = v21;
      if ( (v21 & 1) != 0 && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v53 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( !v53 )
          goto LABEL_12;
        v52 = v21 | 0x20;
        v54 = *(_QWORD *)(v53 + 8 * ((v5 >> 3) & 0x1FF));
        if ( (v54 & 0x20) == 0 )
          v52 = v21;
        if ( (v54 & 0x42) != 0 )
          v52 |= 0x42uLL;
      }
    }
    v21 = v52;
LABEL_12:
    v77 = v21;
    if ( !v21 )
      goto LABEL_16;
    if ( (v21 & 1) == 0 )
    {
      if ( (v21 & 0x400) != 0 )
      {
        MiUnlockPageTableInternal(SessionVm, v17);
        MiUnlockWorkingSetShared((__int64)SessionVm, v80);
        MiUnlockLoaderEntry(v12, 0LL);
        v49 = (__int64)((v5 << 25) - v74) >> 16;
        v50 = MmAccessFault(0LL, v49, 0LL, 0LL);
        if ( v50 < 0 )
          KeBugCheckEx(0x1Au, 0x3000uLL, v49, v21, v50);
        v12 = v65;
        MiLockLoaderEntry(v65, 0LL);
        MiLockWorkingSetShared((__int64)SessionVm);
        MiLockPageTableInternal((__int64)SessionVm, v17, 0);
        goto LABEL_17;
      }
      goto LABEL_16;
    }
    v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v77);
    v25 = v24 + 48 * (v23 & (v22 >> 12));
    if ( (*(_QWORD *)(v25 + 40) & 0x200000000000000LL) == 0
      || *(__int64 *)(v25 + 8) >= 0
      || (a4 & 1) != 0 && ((v21 & 0x800) != 0 || (v21 & 0x200) == 0) )
    {
      goto LABEL_15;
    }
    v40 = (*(_DWORD *)(v25 + 16) >> 5) & 0x1F;
    if ( (MiFlags & 0x10000) != 0 && (v73 || (a4 & 2) != 0) && ((*(_DWORD *)(v25 + 16) >> 5) & 2) != 0 )
      break;
    if ( v67 && (*(_DWORD *)(v65 + 36) & 1) == 0 && (*(_BYTE *)(v25 + 35) & 8) != 0 )
      goto LABEL_15;
    if ( DriverPage != -1 )
    {
      MiUseSlabAllocatorForDriverPage(v76, v40);
      v63 = 48 * v41 - 0x58000000000LL;
      if ( MiIsPfnFromSlabAllocation(v63) )
        v46 = 0;
      else
        v46 = v44;
      if ( v42 == v46 )
      {
        v47 = (__int64)((v5 << 25) - v74) >> 16;
        MiCopyOnWrite(v47, v5, v45, v68);
        if ( v73 && !v75 && (v75 = MiSessionLookupImage(*(_QWORD *)(a1 + 48)), *((_BYTE *)v75 + 64)) )
        {
          v61 = 1;
        }
        else if ( !v61 )
        {
          goto LABEL_59;
        }
        if ( MiDriverPageMustStayResident(a1, v5) )
        {
          v69 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v69, v55, v56);
            while ( *(__int64 *)(v25 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v25);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v48 = v63;
          v70 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v70, v57, v58);
            while ( *(__int64 *)(v63 + 24) < 0 );
          }
          MiAddLockedPageCharge(v63, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_60:
          DriverPage = -1LL;
          if ( (MiFlags & 0x10000) != 0 && ((*(_QWORD *)(v48 + 40) >> 54) & 7) == 3 )
          {
            _bittestandset(*(signed __int32 **)(v78 + 8), v20 >> 3);
            if ( (MiGetWsleContents(v20 >> 3, v47) & 0xF) != 9 )
            {
              v71 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v71, v59, v60);
                while ( *(__int64 *)(v48 + 24) < 0 );
              }
              MiRemoveSystemImagePage(SessionVm, v5, v48);
              _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
LABEL_15:
          v12 = v65;
LABEL_16:
          v5 += 8LL;
          v20 += 8LL;
          goto LABEL_17;
        }
LABEL_59:
        v48 = v63;
        goto LABEL_60;
      }
      MiReleaseFreshPage(v43);
    }
    MiUnlockPageTableInternal(SessionVm, v17);
    MiUnlockWorkingSetShared((__int64)SessionVm, v80);
    v12 = v65;
    MiUnlockLoaderEntry(v65, 0LL);
    DriverPage = MiAllocateDriverPage(v76, v40);
    MiLockLoaderEntry(v65, 0LL);
    MiLockWorkingSetShared((__int64)SessionVm);
    MiLockPageTableInternal((__int64)SessionVm, v17, 0);
    if ( DriverPage == -1 )
    {
      v26 = -1073741801;
      goto LABEL_22;
    }
LABEL_17:
    if ( v5 > a3 )
    {
      v26 = v66;
      goto LABEL_22;
    }
  }
  v26 = -1073741755;
LABEL_22:
  MiUnlockPageTableInternal(SessionVm, v17);
  MiUnlockWorkingSetShared((__int64)SessionVm, v80);
  v27 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v19);
  v64 = 0;
  v28 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v19) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v28->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v28->SpecialApcDisable;
  v30 = ++v28->AbAllocationRegionCount == 1;
  LODWORD(v31) = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
  v32 = !_BitScanReverse((unsigned int *)&v33, v31);
  v72 = v33;
  if ( v32 )
    goto LABEL_45;
  while ( 1 )
  {
    v34 = 1 << v33;
    v35 = v33;
    v36 = &v28->LockEntries[v35];
    v31 = ~v34 & (unsigned int)v31;
    if ( (v36->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v36->LockState.0 & 1) == 0
      && (*(_QWORD *)&v36->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v19 & 0x7FFFFFFFFFFFFFFCLL)
      && v36->LockState.SessionId == (_DWORD)SessionId )
    {
      v36->AcquiredByte &= ~1u;
      if ( v36->LockState.0 )
        break;
    }
    v32 = !_BitScanReverse((unsigned int *)&v33, v31);
    v72 = v33;
    if ( v32 )
      goto LABEL_45;
  }
  if ( !v36 )
  {
LABEL_45:
    if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v28, v19, SessionId, 0LL);
  }
  else
  {
    v36->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v36->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v28->LockEntries[v35].TreeNode, v31);
    v64 = 0;
    v64 = v36->BoostBitmap.AllFields & 0x1FFFF;
    v36->BoostBitmap.AllFields &= 0xFFFE0000;
    v36->ThreadLocalFlags &= ~1u;
    v36->LockState.0 = 0LL;
    v37 = ((char *)v36 - (char *)v28 - 800) / 96;
    if ( v30 )
      v28->AbEntrySummary |= 1 << v37;
    else
      _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v37);
  }
  --v28->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v28, v19, (__int64)&v64);
  v32 = v28->SpecialApcDisable++ == -1;
  if ( v32 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
    KiCheckForKernelApcDelivery(v38);
  KiLeaveGuardedRegionUnsafe((__int64)v27);
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v26;
}
