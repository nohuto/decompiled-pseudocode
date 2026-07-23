/*
 * XREFs of MiLockCode @ 0x1400974E0
 * Callers:
 *     MiLockImageSection @ 0x14062025C (MiLockImageSection.c)
 *     MmResetDriverPaging @ 0x1406550E0 (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x14065694C (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x1406CC9F0 (MiDisablePagingOfDriver.c)
 *     MmLockPreChargedPagedPool @ 0x1406E02E0 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x140085F90 (MiWriteValidPteVolatile.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUnlockCodePage @ 0x14009C6B0 (MiUnlockCodePage.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiRemoveSystemImagePage @ 0x14012C18C (MiRemoveSystemImagePage.c)
 *     MiTradeActivePage @ 0x14012DFF4 (MiTradeActivePage.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 *     MiPrefetchDriverPages @ 0x140620120 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x140654BD4 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r15
  unsigned __int64 v6; // rsi
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  char v10; // r14
  int v11; // ebp
  int SystemRegionType; // eax
  unsigned __int64 v13; // rdx
  char *v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  ULONG_PTR v17; // rbx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  struct _KEVENT *v24; // r13
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // r9
  char v28; // bp
  unsigned __int64 v29; // rcx
  char WsleContents; // bp
  __int64 v31; // rax
  __int16 v32; // cx
  ULONG_PTR v33; // rcx
  __int64 v34; // rdi
  unsigned __int64 v36; // r10
  __int64 v37; // r11
  __int64 v38; // r15
  unsigned __int64 v39; // r14
  int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // r9
  unsigned __int8 v43; // al
  _KPROCESS *Process; // rcx
  char *SessionVm; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  int v51; // ebx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  char v56; // [rsp+30h] [rbp-178h]
  unsigned __int8 v57; // [rsp+31h] [rbp-177h]
  __int64 DriverPage; // [rsp+38h] [rbp-170h]
  char *v59; // [rsp+40h] [rbp-168h]
  unsigned __int64 v60; // [rsp+48h] [rbp-160h]
  bool v61; // [rsp+50h] [rbp-158h]
  int v63; // [rsp+58h] [rbp-150h]
  int v64; // [rsp+5Ch] [rbp-14Ch] BYREF
  int v65; // [rsp+60h] [rbp-148h] BYREF
  ULONG_PTR v66; // [rsp+68h] [rbp-140h] BYREF
  unsigned __int64 v67; // [rsp+70h] [rbp-138h]
  unsigned __int64 v68; // [rsp+78h] [rbp-130h]
  __int64 v69; // [rsp+80h] [rbp-128h]
  __int64 v70; // [rsp+88h] [rbp-120h]
  unsigned __int64 v71; // [rsp+90h] [rbp-118h]
  int v72; // [rsp+A0h] [rbp-108h] BYREF
  __int16 v73; // [rsp+A4h] [rbp-104h]
  __int64 v74; // [rsp+A8h] [rbp-100h]
  __int64 v75; // [rsp+B0h] [rbp-F8h]
  __int64 v76; // [rsp+B8h] [rbp-F0h]

  v4 = a4;
  v68 = a3;
  v6 = a2;
  v71 = a2;
  v69 = a1;
  v8 = 0LL;
  v70 = 0LL;
  v9 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v9) )
    return 0LL;
  v10 = 1;
  v56 = 1;
  v11 = 0;
  v63 = 0;
  SystemRegionType = MiGetSystemRegionType(v9);
  if ( SystemRegionType == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v67 = Process[1].ActiveProcessors.Bitmap[2];
    SessionVm = (char *)MiGetSessionVm(Process);
    v11 = 2;
    v63 = 2;
  }
  else
  {
    v67 = v13;
    if ( (unsigned int)(SystemRegionType - 6) > 1 )
    {
      v14 = (char *)&unk_14043C250;
      v59 = (char *)&unk_14043C250;
      goto LABEL_5;
    }
    SessionVm = MiGetAnyMultiplexedVm(2);
  }
  v59 = SessionVm;
  v14 = SessionVm;
LABEL_5:
  v61 = 0;
  if ( a1 && v11 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    v61 = (dword_140541174 & 1) != 0;
  MiPrefetchDriverPages(v6, a3);
  v72 = v11;
  v73 = 0;
  v75 = 0LL;
  v15 = 0LL;
  v76 = 0LL;
  v60 = 0LL;
  DriverPage = -1LL;
  v74 = 20LL;
  v57 = MiLockWorkingSetShared((__int64)v14);
  while ( 1 )
  {
    v16 = 0xFFFFF6FB7DBED000uLL;
    if ( !v15 )
      goto LABEL_51;
    if ( (v6 & 0xFFF) == 0 )
    {
      MiFlushTbList(&v72, 0xFFFFF6FB7DBED000uLL, 0xFFFFFFFFFLL, 0xFFFFF6FB7DBED7F8uLL);
      MiUnlockPageTableInternal(v14, v15);
LABEL_51:
      v15 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v60 = v15;
      MiLockPageTableInternal((__int64)v14, v15, 0);
      v16 = 0xFFFFF6FB7DBED000uLL;
    }
    v17 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) == 0 || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
      {
        v46 = *(_QWORD *)v6;
      }
      else
      {
        v46 = *(_QWORD *)v6;
        if ( (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v47 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( !v47 )
          {
            v16 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_12;
          }
          v46 = v17 | 0x20;
          v48 = *(_QWORD *)(v47 + 8 * ((v6 >> 3) & 0x1FF));
          v16 = 0xFFFFF6FB7DBED000uLL;
          if ( (v48 & 0x20) == 0 )
            v46 = *(_QWORD *)v6;
          if ( (v48 & 0x42) != 0 )
            v46 |= 0x42uLL;
        }
      }
      v17 = v46;
    }
LABEL_12:
    v66 = v17;
    v18 = (__int64)((v6 << 25) - v8) >> 16;
    if ( (v17 & 1) == 0 )
    {
      MiFlushTbList(&v72, 0xFFFFF6FB7DBED000uLL, 0xFFFFFFFFFLL, 0xFFFFF6FB7DBED7F8uLL);
      MiUnlockPageTableInternal(v59, v15);
      MiUnlockWorkingSetShared((__int64)v59, v57);
      v40 = MmAccessFault(0LL, (__int64)((v6 << 25) - v8) >> 16, 0LL, 0LL);
      if ( v40 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)((v6 << 25) - v8) >> 16, v17, v40);
      v15 = 0LL;
      v60 = 0LL;
      MiLockWorkingSetShared((__int64)v59);
      goto LABEL_44;
    }
    if ( (unsigned __int64)&v66 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v66 > 0xFFFFF6FB7DBED7F8uLL )
    {
      v19 = v17;
    }
    else
    {
      v19 = v17;
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v49 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v49 )
        {
          v19 = v17 | 0x20;
          v50 = *(_QWORD *)(v49 + 8 * (((unsigned __int64)&v66 >> 3) & 0x1FF));
          v16 = 0xFFFFF6FB7DBED000uLL;
          if ( (v50 & 0x20) == 0 )
            v19 = v17;
          if ( (v50 & 0x42) != 0 )
            v19 |= 0x42uLL;
        }
        else
        {
          v16 = 0xFFFFF6FB7DBED000uLL;
        }
      }
    }
    v20 = (v19 >> 12) & 0xFFFFFFFFFLL;
    v21 = 48 * v20 - 0x58000000000LL;
    if ( *(__int64 *)(v21 + 8) >= 0 )
    {
      MiFlushTbList(&v72, 0xFFFFF6FB7DBED000uLL, 0xFFFFFFFFFLL, 0xFFFFF6FB7DBED7F8uLL);
      v51 = MiCopyOnWrite((__int64)((v6 << 25) - v8) >> 16);
      if ( v51 < 0 )
      {
        MiUnlockPageTableInternal(v59, v15);
        MiUnlockWorkingSetShared((__int64)v59, v57);
        MiCopyOnWriteCheckConditions(v59, (unsigned int)v51);
        v15 = 0LL;
        v60 = 0LL;
        MiLockWorkingSetShared((__int64)v59);
      }
      goto LABEL_43;
    }
    v22 = *(_QWORD *)(v21 + 40);
    if ( (v22 & 0x200000000000000LL) == 0 || v67 && !v61 || (v4 & 1) == 0 )
    {
      if ( (v17 & 0x800) == 0 && (v17 & 0x200) != 0 )
      {
        MiFlushTbList(&v72, 0xFFFFF6FB7DBED000uLL, 0xFFFFFFFFFLL, 0xFFFFF6FB7DBED7F8uLL);
        v41 = (__int64)v59;
        MiUnlockPageTableInternal(v59, v15);
        MiUnlockWorkingSetShared((__int64)v59, v57);
        v42 = 1LL;
        goto LABEL_99;
      }
      v23 = 0LL;
      v24 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((v22 >> 40) & 0x3FF));
      v25 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v26 = *(_QWORD *)v25;
      if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        v16 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(v16 + 640) != 1 && (v26 & 1) != 0 && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          v16 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v52 = *(_QWORD *)(v16 + 1544);
          if ( v52 )
          {
            v53 = *(_QWORD *)(v52 + 8 * ((v25 >> 3) & 0x1FF));
            v25 = v26 | 0x20;
            v16 = (unsigned __int8)v53;
            LOBYTE(v16) = v53 & 0x20;
            if ( (v53 & 0x20) == 0 )
              v25 = v26;
            v26 = v25;
            if ( (v53 & 0x42) != 0 )
              v26 = v25 | 0x42;
          }
        }
      }
      v27 = DriverPage;
      v28 = (v26 >> 60) & 7;
      v29 = HIBYTE(v26);
      LOBYTE(v29) = v29 & 0xF;
      WsleContents = v29 | (16 * v28);
      if ( DriverPage != -1 )
      {
        v29 = 48 * DriverPage - 0x58000000000LL;
        v16 = (*(_QWORD *)(v29 + 40) >> 40) & 0x3FFLL;
        if ( v24 == *(struct _KEVENT **)(qword_14043B808 + 8 * v16) )
          goto LABEL_25;
        MiReleaseFreshPage(v29);
        v27 = -1LL;
        DriverPage = -1LL;
      }
      if ( (v4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) != 9 )
          goto LABEL_24;
      }
      else if ( *(_WORD *)(v21 + 32) == 1 )
      {
LABEL_24:
        v29 = qword_140439F90 & 0x1FF;
        if ( ((unsigned __int16)v20 & 0x1FFu) < v29 && !MiIsPfnFromSlabAllocation(48 * v20 - 0x58000000000LL) )
        {
          MiFlushTbList(&v72, v16, v25, v27);
          MiUnlockPageTableInternal(v59, v60);
          MiUnlockWorkingSetShared((__int64)v59, v57);
          v15 = 0LL;
          DriverPage = MiAllocateDriverPage(v24, 0LL);
          v60 = 0LL;
          v34 = DriverPage;
          v43 = MiLockWorkingSetShared((__int64)v59);
          v10 = v56;
          v8 = v70;
          v57 = v43;
          goto LABEL_45;
        }
      }
LABEL_25:
      v64 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v64, v16, v25);
          while ( *(__int64 *)(v21 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
        v27 = DriverPage;
      }
      if ( v27 == -1 )
        goto LABEL_27;
      if ( (v4 & 2) == 0 )
        goto LABEL_28;
      WsleContents = MiGetWsleContents(v29, v18);
      if ( (WsleContents & 0xF) == 9
        || (unsigned int)MiIsPfnFileOnly(48 * v20 - 0x58000000000LL)
        || MiIsPfnFromSlabAllocation(48 * v20 - 0x58000000000LL)
        || ((unsigned __int16)v20 & 0x1FFu) >= (unsigned __int64)(v27 & 0x1FF) )
      {
LABEL_27:
        if ( (v4 & 2) != 0 )
        {
          if ( (WsleContents & 0xF) != 9 )
            MiRemoveSystemImagePage(v59, v6, v21);
          goto LABEL_35;
        }
LABEL_28:
        if ( v63 == 2 )
        {
          if ( !(unsigned int)MiAddLockedPageCharge(v21, 0) )
            v56 = 0;
          goto LABEL_35;
        }
        if ( (*(_QWORD *)(v21 + 40) & 0x10000000000000LL) != 0 )
        {
          v32 = *(_WORD *)(v21 + 32);
        }
        else
        {
          v16 = *(unsigned __int16 *)(v21 + 32);
          v31 = *(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (_WORD)v16 )
          {
            if ( (_WORD)v16 == 1 )
            {
              if ( !v31 )
              {
                v32 = 1;
                if ( (*(_BYTE *)(v21 + 34) & 8) == 0 )
                  goto LABEL_34;
              }
            }
            else
            {
              v32 = *(_WORD *)(v21 + 32);
              if ( (_WORD)v16 != 2 || !v31 || (*(_BYTE *)(v21 + 34) & 8) == 0 )
                goto LABEL_34;
            }
          }
          *(_BYTE *)(v21 + 35) |= 0x20u;
          v32 = v16;
        }
LABEL_34:
        *(_WORD *)(v21 + 32) = v32 + 1;
LABEL_35:
        if ( (*(_QWORD *)(v21 + 16) & 0x400) == 0 )
        {
          v25 = *(unsigned __int8 *)(v21 + 34);
          if ( (v25 & 0x10) == 0 )
          {
            v16 = (unsigned __int8)v25;
            LOBYTE(v16) = ((*(_QWORD *)(v21 + 16) & 0x400LL) == 0) & ~((unsigned __int8)v25 >> 3);
            if ( (_BYTE)v16 )
            {
              v54 = MiCapturePageFileInfoInline(v21 + 16, 1LL);
              v25 = *(unsigned __int8 *)(v21 + 34);
              v23 = v54;
            }
            LOBYTE(v25) = v25 | 0x10;
            *(_BYTE *)(v21 + 34) = v25;
          }
        }
        v33 = *(_QWORD *)v6;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          v16 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(v16 + 640) != 1 && (v33 & 1) != 0 && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
          {
            v16 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v25 = *(_QWORD *)(v16 + 1544);
            if ( v25 )
            {
              v55 = *(_QWORD *)(v25 + 8 * ((v6 >> 3) & 0x1FF));
              v25 = v33 | 0x20;
              v16 = (unsigned __int8)v55;
              LOBYTE(v16) = v55 & 0x20;
              if ( (v55 & 0x20) == 0 )
                v25 = *(_QWORD *)v6;
              LOWORD(v33) = v25;
              if ( (v55 & 0x42) != 0 )
                LOWORD(v33) = v25 | 0x42;
            }
          }
        }
        if ( (v33 & 0x800) != 0 && (v33 & 0x42) == 0 )
        {
          MiWriteValidPteVolatile((volatile signed __int64 *)v6, 2, 0);
          MiInsertTbFlushEntry(&v72, v18, 1LL);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v23 )
          MiReleasePageFileInfo(v24, v23, 1);
        v15 = v60;
        v6 += 8LL;
        v8 = v70;
        goto LABEL_43;
      }
      v38 = 48 * v27 - 0x58000000000LL;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), v36);
      if ( (v37 & *(_QWORD *)(v21 + 40)) != 0 && (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 )
      {
        v39 = MiLockProtoPoolPage(*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL, 0LL);
        if ( !v39 )
        {
LABEL_76:
          if ( v39 > 1 )
            MiUnlockProtoPoolPage(v39, 0x11u);
          v65 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v65, v16, v25);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          v4 = a4;
          goto LABEL_27;
        }
      }
      else
      {
        v39 = 1LL;
      }
      if ( (unsigned int)MiTradeActivePage(v21, 2) == 1 )
      {
        *(_QWORD *)(v21 + 16) = ZeroPte;
        MiSetOriginalPtePfnFromFreeList(v21 + 16, v16, v25, v27);
        MiReleaseFreshPage(v21);
        v21 = v38;
        DriverPage = -1LL;
      }
      goto LABEL_76;
    }
    MiFlushTbList(&v72, 0xFFFFF6FB7DBED000uLL, 0xFFFFFFFFFLL, 0xFFFFF6FB7DBED7F8uLL);
    v41 = (__int64)v59;
    MiUnlockPageTableInternal(v59, v15);
    MiUnlockWorkingSetShared((__int64)v59, v57);
    v42 = 0LL;
LABEL_99:
    MiMakeDriverPagesPrivate(v69, v6, v68, v42);
    v15 = 0LL;
    v60 = 0LL;
    MiLockWorkingSetShared(v41);
LABEL_43:
    v10 = v56;
LABEL_44:
    v34 = DriverPage;
LABEL_45:
    if ( v6 > v68 || v10 != 1 )
      break;
    v14 = v59;
  }
  if ( v57 != 17 )
  {
    MiFlushTbList(&v72, v16, v25, v27);
    if ( v15 )
      MiUnlockPageTableInternal(v59, v15);
    MiUnlockWorkingSetShared((__int64)v59, v57);
  }
  if ( v34 != -1 )
    MiReleaseFreshPage(48 * v34 - 0x58000000000LL);
  if ( v10 )
    return 0LL;
  MiUnlockCodePage(v71, v6 - 16);
  return 3221225626LL;
}
