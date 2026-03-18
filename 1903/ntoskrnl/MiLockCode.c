/*
 * XREFs of MiLockCode @ 0x1400F5930
 * Callers:
 *     MmResetDriverPaging @ 0x1406A5AA0 (MmResetDriverPaging.c)
 *     MiLockImageSection @ 0x1406A5BC8 (MiLockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x14070E784 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140710D4C (MiDisablePagingOfDriver.c)
 *     MmLockPreChargedPagedPool @ 0x140729B60 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiUnlockCodePage @ 0x1400D9D20 (MiUnlockCodePage.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiRemoveSystemImagePage @ 0x1400F6224 (MiRemoveSystemImagePage.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x1400F6324 (MiTradeActivePage.c)
 *     MiWriteValidPteVolatile @ 0x1400F69C0 (MiWriteValidPteVolatile.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateDriverPage @ 0x14066D148 (MiAllocateDriverPage.c)
 *     MiPrefetchDriverPages @ 0x1406A5C90 (MiPrefetchDriverPages.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // rsi
  char v7; // bp
  __int64 v8; // r13
  char v9; // r14
  int v10; // r15d
  int SystemRegionType; // eax
  unsigned __int64 v12; // rdx
  char *AnyMultiplexedVm; // rbx
  unsigned __int64 v14; // r15
  __int64 DeepFreezeStartTime; // rdx
  unsigned __int64 v16; // r8
  ULONG_PTR v17; // rbx
  unsigned __int64 v18; // r12
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  __int64 v26; // r13
  unsigned __int64 v27; // rcx
  __int64 v28; // r9
  char v29; // bp
  unsigned __int64 v30; // rcx
  char WsleContents; // bp
  char v32; // al
  __int64 v33; // rax
  __int16 v34; // cx
  ULONG_PTR v35; // rcx
  __int64 v36; // rdi
  __int64 v38; // r10
  unsigned __int64 v39; // r11
  __int64 v40; // r15
  ULONG_PTR v41; // r14
  int v42; // eax
  __int64 v43; // rbx
  __int64 v44; // r9
  unsigned __int8 v45; // al
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  char v52; // [rsp+30h] [rbp-168h]
  unsigned __int8 v53; // [rsp+31h] [rbp-167h]
  __int64 DriverPage; // [rsp+38h] [rbp-160h]
  char *SessionVm; // [rsp+40h] [rbp-158h]
  unsigned __int64 v57; // [rsp+48h] [rbp-150h]
  bool v58; // [rsp+50h] [rbp-148h]
  int v59; // [rsp+54h] [rbp-144h]
  int v60; // [rsp+58h] [rbp-140h] BYREF
  int v61; // [rsp+5Ch] [rbp-13Ch] BYREF
  unsigned __int64 v62; // [rsp+60h] [rbp-138h]
  unsigned __int64 v63; // [rsp+68h] [rbp-130h]
  __int64 v64; // [rsp+70h] [rbp-128h]
  __int64 v65; // [rsp+78h] [rbp-120h]
  ULONG_PTR v66; // [rsp+80h] [rbp-118h] BYREF
  unsigned __int64 v67; // [rsp+88h] [rbp-110h]
  int v68; // [rsp+90h] [rbp-108h] BYREF
  __int16 v69; // [rsp+94h] [rbp-104h]
  __int16 v70; // [rsp+96h] [rbp-102h]
  __int64 v71; // [rsp+98h] [rbp-100h]
  __int64 v72; // [rsp+A0h] [rbp-F8h]
  __int64 v73; // [rsp+A8h] [rbp-F0h]
  _BYTE v74[152]; // [rsp+B0h] [rbp-E8h] BYREF

  v63 = a3;
  v5 = a2;
  v67 = a2;
  v64 = a1;
  v70 = 0;
  v7 = a4;
  memset(v74, 0, sizeof(v74));
  v8 = 0LL;
  v65 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(v5 << 25) >> 16) )
    return 0LL;
  v9 = 1;
  v52 = 1;
  v10 = 0;
  v59 = 0;
  SystemRegionType = MiGetSystemRegionType((__int64)(v5 << 25) >> 16);
  if ( SystemRegionType == 1 )
  {
    v62 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
    v10 = 2;
    SessionVm = (char *)MiGetSessionVm();
    v59 = 2;
    AnyMultiplexedVm = SessionVm;
  }
  else
  {
    v62 = v12;
    if ( SystemRegionType == 6 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      SessionVm = AnyMultiplexedVm;
    }
    else
    {
      AnyMultiplexedVm = (char *)&unk_140466BC0;
      SessionVm = (char *)&unk_140466BC0;
    }
  }
  v58 = 0;
  if ( a1 && v10 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    v58 = (dword_140571184 & 1) != 0;
  MiPrefetchDriverPages(v5, a3);
  v68 = v10;
  v69 = 0;
  v72 = 0LL;
  v14 = 0LL;
  v73 = 0LL;
  v57 = 0LL;
  DriverPage = -1LL;
  v71 = 20LL;
  v53 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  while ( 1 )
  {
    if ( v14 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_10;
      MiFlushTbList(&v68, DeepFreezeStartTime, v16, 0xFFFFF6FB7DBED7F8uLL);
      MiUnlockPageTableInternal(AnyMultiplexedVm);
    }
    v14 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v57 = v14;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v14, 0LL);
LABEL_10:
    v17 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v46 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v5 >> 3) & 0x1FF));
        DeepFreezeStartTime = v17 | 0x20;
        if ( (v46 & 0x20) == 0 )
          DeepFreezeStartTime = *(_QWORD *)v5;
        v17 = DeepFreezeStartTime;
        if ( (v46 & 0x42) != 0 )
          v17 = DeepFreezeStartTime | 0x42;
      }
    }
    v66 = v17;
    v18 = (__int64)((v5 << 25) - v8) >> 16;
    if ( (v17 & 1) == 0 )
    {
      MiFlushTbList(&v68, DeepFreezeStartTime, v16, 0xFFFFF6FB7DBED7F8uLL);
      MiUnlockPageTableInternal(SessionVm);
      MiUnlockWorkingSetShared((__int64)SessionVm, v53);
      v42 = MmAccessFault(0LL, (__int64)((v5 << 25) - v8) >> 16, 0, 0LL);
      if ( v42 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)((v5 << 25) - v8) >> 16, v17, v42);
      v14 = 0LL;
      v57 = 0LL;
      MiLockWorkingSetShared((__int64)SessionVm);
      goto LABEL_43;
    }
    v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v66) >> 12) & 0xFFFFFFFFFLL;
    DeepFreezeStartTime = 0xFFFFFA8000000000uLL;
    v23 = 48 * v22 - 0x58000000000LL;
    if ( *(__int64 *)(v23 + 8) >= 0 )
    {
      MiFlushTbList(&v68, 0xFFFFFA8000000000uLL, v19, v20);
      v47 = MiCopyOnWrite((__int64)((v5 << 25) - v8) >> 16, v5, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v47 < 0 )
      {
        MiUnlockPageTableInternal(SessionVm);
        MiUnlockWorkingSetShared((__int64)SessionVm, v53);
        MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v47);
        v14 = 0LL;
        v57 = 0LL;
        MiLockWorkingSetShared((__int64)SessionVm);
      }
      goto LABEL_42;
    }
    v24 = *(_QWORD *)(v23 + 40);
    if ( (v24 & 0x200000000000000LL) == 0 || v62 && !v58 || (v7 & 1) == 0 )
    {
      if ( (v17 & 0x800) == 0 && (v17 & 0x200) != 0 )
      {
        MiFlushTbList(&v68, 0xFFFFFA8000000000uLL, v19, v20);
        v43 = (__int64)SessionVm;
        MiUnlockPageTableInternal(SessionVm);
        MiUnlockWorkingSetShared((__int64)SessionVm, v53);
        v44 = 1LL;
        goto LABEL_96;
      }
      v25 = 0LL;
      v26 = *(_QWORD *)(qword_140466188 + 8 * ((v24 >> 40) & 0x3FF));
      v16 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v27 = *(_QWORD *)v16;
      if ( v16 >= v21 && v16 <= v20 && (MiFlags & 0xC00000) != 0 )
      {
        DeepFreezeStartTime = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(DeepFreezeStartTime + 648) != 1 && (v27 & 1) != 0 && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          DeepFreezeStartTime = (__int64)KeGetCurrentThread()->ApcState.Process;
          v48 = *(_QWORD *)(DeepFreezeStartTime + 1544);
          if ( v48 )
          {
            v49 = *(_QWORD *)(v48 + 8 * ((v16 >> 3) & 0x1FF));
            v16 = v27 | 0x20;
            DeepFreezeStartTime = (unsigned __int8)v49;
            LOBYTE(DeepFreezeStartTime) = v49 & 0x20;
            if ( (v49 & 0x20) == 0 )
              v16 = v27;
            v27 = v16;
            if ( (v49 & 0x42) != 0 )
              v27 = v16 | 0x42;
          }
        }
      }
      v28 = DriverPage;
      v29 = (v27 >> 60) & 7;
      v30 = HIBYTE(v27);
      LOBYTE(v30) = v30 & 0xF;
      WsleContents = v30 | (16 * v29);
      if ( DriverPage != -1 )
      {
        v30 = 48 * DriverPage - 0x58000000000LL;
        DeepFreezeStartTime = (*(_QWORD *)(v30 + 40) >> 40) & 0x3FFLL;
        if ( v26 == *(_QWORD *)(qword_140466188 + 8 * DeepFreezeStartTime) )
        {
          v32 = a4;
LABEL_24:
          v60 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v60);
              while ( *(__int64 *)(v23 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) );
            v32 = a4;
            v28 = DriverPage;
          }
          if ( v28 == -1
            || (v32 & 2) == 0
            || (WsleContents = MiGetWsleContents(v30, v18), (WsleContents & 0xF) == 9)
            || MiIsPfnFileOnly(48 * v22 - 0x58000000000LL)
            || MiIsPfnFromSlabAllocation(48 * v22 - 0x58000000000LL)
            || (v22 & 0x1FF) >= ((unsigned __int16)v28 & 0x1FFu) )
          {
LABEL_26:
            if ( (a4 & 2) != 0 )
            {
              if ( (WsleContents & 0xF) != 9 )
                MiRemoveSystemImagePage(SessionVm, v5, v23);
              goto LABEL_34;
            }
            if ( v59 == 2 )
            {
              if ( !(unsigned int)MiAddLockedPageCharge(v23, 0) )
                v52 = 0;
              goto LABEL_34;
            }
            if ( (*(_QWORD *)(v23 + 40) & 0x10000000000000LL) != 0 )
            {
              v34 = *(_WORD *)(v23 + 32);
            }
            else
            {
              DeepFreezeStartTime = *(unsigned __int16 *)(v23 + 32);
              v33 = *(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              if ( (_WORD)DeepFreezeStartTime )
              {
                if ( (_WORD)DeepFreezeStartTime == 1 )
                {
                  if ( !v33 )
                  {
                    v34 = 1;
                    if ( (*(_BYTE *)(v23 + 34) & 8) == 0 )
                      goto LABEL_33;
                  }
                }
                else
                {
                  v34 = *(_WORD *)(v23 + 32);
                  if ( (_WORD)DeepFreezeStartTime != 2 || !v33 || (*(_BYTE *)(v23 + 34) & 8) == 0 )
                    goto LABEL_33;
                }
              }
              *(_BYTE *)(v23 + 35) |= 0x20u;
              v34 = DeepFreezeStartTime;
            }
LABEL_33:
            *(_WORD *)(v23 + 32) = v34 + 1;
LABEL_34:
            if ( (*(_QWORD *)(v23 + 16) & 0x400) == 0 )
            {
              v16 = *(unsigned __int8 *)(v23 + 34);
              if ( (v16 & 0x10) == 0 )
              {
                DeepFreezeStartTime = (unsigned __int8)v16;
                LOBYTE(DeepFreezeStartTime) = ((*(_QWORD *)(v23 + 16) & 0x400LL) == 0) & ~((unsigned __int8)v16 >> 3);
                if ( (_BYTE)DeepFreezeStartTime )
                {
                  v50 = MiCapturePageFileInfoInline(v23 + 16, 1LL);
                  v16 = *(unsigned __int8 *)(v23 + 34);
                  v25 = v50;
                }
                LOBYTE(v16) = v16 | 0x10;
                *(_BYTE *)(v23 + 34) = v16;
              }
            }
            v35 = *(_QWORD *)v5;
            if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
            {
              DeepFreezeStartTime = (__int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(DeepFreezeStartTime + 648) != 1
                && (v35 & 1) != 0
                && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
              {
                DeepFreezeStartTime = (__int64)KeGetCurrentThread()->ApcState.Process;
                v16 = *(_QWORD *)(DeepFreezeStartTime + 1544);
                if ( v16 )
                {
                  v51 = *(_QWORD *)(v16 + 8 * ((v5 >> 3) & 0x1FF));
                  v16 = v35 | 0x20;
                  DeepFreezeStartTime = (unsigned __int8)v51;
                  LOBYTE(DeepFreezeStartTime) = v51 & 0x20;
                  if ( (v51 & 0x20) == 0 )
                    v16 = *(_QWORD *)v5;
                  LOWORD(v35) = v16;
                  if ( (v51 & 0x42) != 0 )
                    LOWORD(v35) = v16 | 0x42;
                }
              }
            }
            if ( (v35 & 0x800) != 0 && (v35 & 0x42) == 0 )
            {
              MiWriteValidPteVolatile(v5, 2LL, 0LL);
              MiInsertTbFlushEntry((__int64)&v68, v18, 1LL, 0);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v25 )
              MiReleasePageFileInfo(v26, v25, 1);
            v14 = v57;
            v5 += 8LL;
            v7 = a4;
            v8 = v65;
            goto LABEL_42;
          }
          v40 = v38 + 48 * v28;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), v39);
          if ( (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
          {
            v41 = MiLockProtoPoolPage(*(_QWORD *)(v23 + 8) | 0x8000000000000000uLL, 0LL);
            if ( !v41 )
            {
LABEL_69:
              if ( v41 > 1 )
                MiUnlockProtoPoolPage(v41, 0x11u);
              v61 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v61);
                while ( *(__int64 *)(v23 + 24) < 0 );
              }
              goto LABEL_26;
            }
          }
          else
          {
            v41 = 1LL;
          }
          if ( (unsigned int)MiTradeActivePage(v23, 2) == 1 )
          {
            *(_QWORD *)(v23 + 16) = ZeroPte;
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v23 + 16));
            MiReleaseFreshPage(v23);
            v23 = v40;
            DriverPage = -1LL;
          }
          goto LABEL_69;
        }
        MiReleaseFreshPage(v30);
        v28 = -1LL;
        DriverPage = -1LL;
      }
      v32 = a4;
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) == 9 )
        {
LABEL_23:
          v32 = a4;
          goto LABEL_24;
        }
      }
      else if ( *(_WORD *)(v23 + 32) != 1 )
      {
        goto LABEL_24;
      }
      v30 = qword_1404648F0 & 0x1FF;
      if ( (v22 & 0x1FF) < v30 && !MiIsPfnFromSlabAllocation(48 * v22 - 0x58000000000LL) )
      {
        MiFlushTbList(&v68, DeepFreezeStartTime, v16, v28);
        MiUnlockPageTableInternal(SessionVm);
        MiUnlockWorkingSetShared((__int64)SessionVm, v53);
        v14 = 0LL;
        DriverPage = MiAllocateDriverPage(v26, 0LL);
        v57 = 0LL;
        v36 = DriverPage;
        v45 = MiLockWorkingSetShared((__int64)SessionVm);
        v7 = a4;
        v9 = v52;
        v8 = v65;
        v53 = v45;
        goto LABEL_44;
      }
      goto LABEL_23;
    }
    MiFlushTbList(&v68, 0xFFFFFA8000000000uLL, v19, v20);
    v43 = (__int64)SessionVm;
    MiUnlockPageTableInternal(SessionVm);
    MiUnlockWorkingSetShared((__int64)SessionVm, v53);
    v44 = 0LL;
LABEL_96:
    MiMakeDriverPagesPrivate(v64, v5, v63, v44);
    v14 = 0LL;
    v57 = 0LL;
    MiLockWorkingSetShared(v43);
LABEL_42:
    v9 = v52;
LABEL_43:
    v36 = DriverPage;
LABEL_44:
    if ( v5 > v63 || v9 != 1 )
      break;
    AnyMultiplexedVm = SessionVm;
  }
  if ( v53 != 17 )
  {
    MiFlushTbList(&v68, DeepFreezeStartTime, v16, v28);
    if ( v14 )
      MiUnlockPageTableInternal(SessionVm);
    MiUnlockWorkingSetShared((__int64)SessionVm, v53);
  }
  if ( v36 != -1 )
    MiReleaseFreshPage(48 * v36 - 0x58000000000LL);
  if ( v9 )
    return 0LL;
  MiUnlockCodePage(v67, v5 - 16);
  return 3221225626LL;
}
