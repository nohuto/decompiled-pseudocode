/*
 * XREFs of MmUnmapViewInSystemCache @ 0x140078700
 * Callers:
 *     CcUnmapVacb @ 0x1405F384C (CcUnmapVacb.c)
 * Callees:
 *     MiUnlockWsle @ 0x14001A18C (MiUnlockWsle.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14003D440 (MiDecrementAndInsertStandbyPages.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLogPageAccess @ 0x14006BDA0 (MiLogPageAccess.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiRemoveViewsFromSection @ 0x140079360 (MiRemoveViewsFromSection.c)
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiRebuildPageTableLeafAges @ 0x14007AE00 (MiRebuildPageTableLeafAges.c)
 *     MiRemoveWsleList @ 0x14007AF40 (MiRemoveWsleList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiManageSubsectionView @ 0x1400ADBC0 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x1400ADE90 (MiGetSystemCacheReverseMap.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x140113B10 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140121FC0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 */

struct _KTHREAD *__fastcall MmUnmapViewInSystemCache(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        char a3)
{
  ULONG_PTR v4; // r14
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  int v9; // r13d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  LIST_ENTRY *p_WaitListHead; // rbx
  ULONG_PTR SystemCacheReverseMap; // rcx
  ULONG_PTR v14; // rax
  unsigned int *MmInternal; // rbx
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  size_t v18; // r8
  size_t Process; // rcx
  __int64 v20; // rbx
  unsigned __int64 v21; // r11
  __int64 v22; // rdi
  ULONG_PTR v23; // rbp
  unsigned int v24; // r9d
  char v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  ULONG_PTR v30; // rbp
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rdx
  LIST_ENTRY *v34; // rbx
  __int64 v35; // rax
  char v36; // r12
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rsi
  __int64 v40; // r15
  int v41; // r13d
  __int64 v42; // r14
  __int64 v43; // rdi
  int v44; // r13d
  unsigned __int64 v45; // r8
  __int64 v46; // rbp
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rcx
  char WsleContents; // di
  __int64 v50; // r8
  __int64 v51; // rdx
  bool v52; // zf
  _BYTE *v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  unsigned __int8 v56; // cl
  __int64 v57; // rdx
  __int64 *v58; // rbp
  ULONG_PTR v59; // r14
  unsigned __int8 CurrentIrql; // cl
  __int64 v61; // rbx
  KIRQL v62; // r15
  __int64 v63; // rsi
  __int64 v64; // rdi
  unsigned __int64 v65; // rbx
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r11
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r11
  int v74; // ecx
  __int64 v75; // rcx
  __int64 v76; // r11
  struct _KTHREAD *result; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r11
  unsigned __int64 v81; // rbx
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // r8
  __int64 v84; // rbp
  signed __int8 v85; // al
  __int64 *v86; // r12
  __int64 v87; // r11
  __int64 v88; // rax
  unsigned __int64 v89; // r10
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  unsigned __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // r8
  __int64 v105; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  unsigned __int64 v111; // rax
  __int64 v112; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  char v114; // r9
  __int64 v115; // r10
  char v116; // r9
  __int64 v117; // r10
  signed __int32 v118[8]; // [rsp+0h] [rbp-118h] BYREF
  char v119; // [rsp+30h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-E0h]
  int v121; // [rsp+40h] [rbp-D8h]
  __int64 v122; // [rsp+48h] [rbp-D0h] BYREF
  int v123; // [rsp+50h] [rbp-C8h]
  unsigned int v124; // [rsp+54h] [rbp-C4h]
  int v125; // [rsp+58h] [rbp-C0h]
  LIST_ENTRY *v126; // [rsp+60h] [rbp-B8h]
  int v127; // [rsp+68h] [rbp-B0h] BYREF
  int v128; // [rsp+70h] [rbp-A8h] BYREF
  int v129; // [rsp+74h] [rbp-A4h] BYREF
  ULONG_PTR v130; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v131; // [rsp+80h] [rbp-98h]
  unsigned __int64 v132; // [rsp+88h] [rbp-90h]
  _BYTE *v133; // [rsp+90h] [rbp-88h]
  ULONG_PTR v134; // [rsp+98h] [rbp-80h]
  struct _KEVENT *v135; // [rsp+A0h] [rbp-78h]
  unsigned __int64 v136; // [rsp+A8h] [rbp-70h]
  __int64 v137; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v138; // [rsp+B8h] [rbp-60h]
  unsigned __int64 v139; // [rsp+C0h] [rbp-58h]
  ULONG_PTR BugCheckParameter3a; // [rsp+120h] [rbp+8h]
  KIRQL v143; // [rsp+138h] [rbp+20h]

  BugCheckParameter3a = BugCheckParameter3;
  v4 = BugCheckParameter3;
  v5 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v139 = v5;
  v6 = v5 + 512;
  v137 = 48 * MiGetContainingPageTable(v5) - 0x58000000000LL;
  v7 = 0LL;
  v8 = MiSectionControlArea(BugCheckParameter4);
  v138 = v8;
  v9 = 0;
  v123 = 0;
  v10 = *(_QWORD *)(v8 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v121 = 0;
  v11 = *(_WORD *)(v8 + 60) & 0x3FF;
  v131 = v10;
  v125 = 0;
  v132 = 0LL;
  v124 = 2;
  v135 = *(struct _KEVENT **)(qword_14043B808 + 8 * v11);
  p_WaitListHead = &v135[309].Header.WaitListHead;
  v126 = &v135[309].Header.WaitListHead;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v4);
  v134 = SystemCacheReverseMap;
  v14 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v130 = v14;
  if ( v14 )
  {
    if ( (v14 & 1) != 0 )
    {
      v14 &= ~1uLL;
      v124 = 4;
      v130 = v14;
      *(_QWORD *)(SystemCacheReverseMap + 24) = v14;
    }
    if ( *(_QWORD *)v14 != v8 )
      KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, v4, BugCheckParameter4);
  }
  v136 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v143 = MiLockWorkingSetShared((__int64)p_WaitListHead);
  MiLockPageTableInternal((__int64)p_WaitListHead, v136, 0);
  MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
  v16 = *(_QWORD *)MmInternal;
  *(_DWORD *)(v16 + 8) = MmInternal[6];
  *(_DWORD *)(v16 + 12) = 0;
  *(_DWORD *)v16 = 0;
  *(_WORD *)(v16 + 4) = 0;
  *(_QWORD *)(v16 + 16) = 0LL;
  *(_QWORD *)(v16 + 24) = 0LL;
  v17 = (_BYTE *)*((_QWORD *)MmInternal + 2);
  v18 = 8LL * MmInternal[6];
  BugCheckParameter2 = *((_QWORD *)MmInternal + 1);
  v133 = v17;
  memset(v17, 0, v18);
  v20 = *(_QWORD *)MmInternal;
  v21 = 0xFFFFF6FB7DBED7F8uLL;
  *(_BYTE *)(v20 + 4) |= 4u;
  while ( 1 )
  {
    v22 = 1LL;
    v23 = v4;
    if ( *(_DWORD *)v20 != 1 )
    {
      Process = *(unsigned __int8 *)(v20 + 4);
      if ( (Process & 8) == 0 && v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        LOBYTE(Process) = Process | 8;
        *(_BYTE *)(v20 + 4) = Process;
      }
    }
    v24 = *(_DWORD *)(v20 + 12);
    if ( v24 )
    {
      v25 = *(_BYTE *)(v20 + 4) & 4;
      if ( !v25 )
      {
        v87 = v20 + 8LL * (v24 - 1);
        Process = v24 - 1;
        v88 = *(_QWORD *)(v87 + 24);
        if ( (v88 & 0xC00) == 0 )
        {
          v89 = *(_QWORD *)(v87 + 24) & 0x3FFLL;
          Process = v88 & 0xFFFFFFFFFFFFF000uLL;
          if ( (v88 & 0xFFFFFFFFFFFFF000uLL) + ((v89 + 1) << 12) == v4 )
          {
            Process = v89 + 1;
            if ( v89 + 1 >= v89 && Process <= 0x3FF )
            {
              Process = ((unsigned __int16)v88 ^ (unsigned __int16)(v88 + 1)) & 0x3FF;
              ++*(_QWORD *)(v20 + 16);
              *(_QWORD *)(v87 + 24) = Process ^ v88;
LABEL_17:
              v21 = 0xFFFFF6FB7DBED7F8uLL;
              goto LABEL_18;
            }
          }
        }
        v21 = 0xFFFFF6FB7DBED7F8uLL;
      }
      if ( !v25 )
      {
        v90 = v20 + 8LL * (v24 - 1);
        Process = v24 - 1;
        v91 = *(_QWORD *)(v90 + 24);
        if ( (v91 & 0xC00) == 0 )
        {
          Process = v4 + 4096;
          if ( (v91 & 0xFFFFFFFFFFFFF000uLL) == v4 + 4096 )
          {
            Process = *(_QWORD *)(v90 + 24) & 0x3FFLL;
            if ( Process + 1 >= Process && Process + 1 <= 0x3FF )
            {
              v92 = v91 - 4096;
              Process = ((unsigned __int16)v92 ^ (unsigned __int16)(v92 + 1)) & 0x3FF;
              ++*(_QWORD *)(v20 + 16);
              *(_QWORD *)(v90 + 24) = Process ^ v92;
              goto LABEL_18;
            }
          }
        }
      }
    }
    if ( v24 < *(_DWORD *)(v20 + 8) )
    {
      while ( 1 )
      {
        v26 = (unsigned __int64)(v22 - 1) > 0x3FF ? 1024LL : v22;
        v27 = v23 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v26 - 1) & 0x3FF;
        v22 -= v26;
        v23 += v26 << 12;
        *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)(v20 + 12))++ + 24) = v27;
        Process = *(unsigned int *)(v20 + 12);
        *(_QWORD *)(v20 + 16) += v26;
        if ( (_DWORD)Process == *(_DWORD *)(v20 + 8) && (*(_BYTE *)(v20 + 4) & 4) == 0 )
        {
          qsort((void *)(v20 + 24), Process, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(v20);
          v93 = *(unsigned int *)(v20 + 12);
          if ( (_DWORD)v93 == *(_DWORD *)(v20 + 8) )
            break;
        }
        if ( !v22 )
          goto LABEL_17;
      }
      if ( v22 )
      {
        *(_BYTE *)(v20 + 5) = 1;
        *(_QWORD *)(v20 + 16) = v93;
      }
      goto LABEL_17;
    }
    *(_BYTE *)(v20 + 5) = 1;
LABEL_18:
    v28 = *(_QWORD *)v5;
    v29 = 0xFFFFF6FB7DBED000uLL;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (size_t)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 640) != 1 && (v28 & 1) != 0 && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        Process = (size_t)KeGetCurrentThread()->ApcState.Process;
        v94 = *(_QWORD *)(Process + 1544);
        if ( v94 )
        {
          v95 = *(_QWORD *)(v94 + 8 * ((v5 >> 3) & 0x1FF));
          v96 = v28 | 0x20;
          Process = (unsigned __int8)v95;
          LOBYTE(Process) = v95 & 0x20;
          if ( (v95 & 0x20) == 0 )
            v96 = *(_QWORD *)v5;
          v28 = v96;
          if ( (v95 & 0x42) != 0 )
            v28 = v96 | 0x42;
        }
      }
    }
    v30 = BugCheckParameter2;
    v122 = v28;
    *(_QWORD *)(BugCheckParameter2 + 8 * v7) = v28;
    if ( (v28 & 1) != 0 )
    {
      if ( (unsigned __int64)&v122 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v122 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        v97 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v97 )
        {
          v98 = *(_QWORD *)(v97 + 8 * (((unsigned __int64)&v122 >> 3) & 0x1FF));
          v99 = v28 | 0x20;
          if ( (v98 & 0x20) == 0 )
            v99 = v28;
          v28 = v99;
          if ( (v98 & 0x42) != 0 )
            v28 = v99 | 0x42;
        }
      }
      v45 = (v28 >> 12) & 0xFFFFFFFFFLL;
      v46 = 48 * v45 - 0x58000000000LL;
      if ( dword_14043B9A8 )
      {
        v54 = (__int64)(v5 << 25) >> 16;
        if ( v54 >= 0xFFFFF68000000000uLL && v54 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_131;
        v45 = ((v54 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v55 = *(_QWORD *)v45;
        if ( v45 >= 0xFFFFF6FB7DBED000uLL
          && v45 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v55 & 1) != 0
          && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
        {
          v100 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v100 )
          {
            v101 = *(_QWORD *)(v100 + 8 * ((v45 >> 3) & 0x1FF));
            v45 = v55 | 0x20;
            if ( (v101 & 0x20) == 0 )
              v45 = v55;
            HIBYTE(v55) = HIBYTE(v45);
            if ( (v101 & 0x42) != 0 )
              HIBYTE(v55) = HIBYTE(v45);
          }
        }
        if ( (HIBYTE(v55) & 0xF) != 7 )
        {
LABEL_131:
          if ( (*(_BYTE *)v5 & 0x20) != 0 )
          {
            MiLogPageAccess((__int64)v126, v5);
            v29 = 0xFFFFF6FB7DBED000uLL;
            v21 = 0xFFFFF6FB7DBED7F8uLL;
          }
        }
      }
      if ( (a3 & 1) != 0 && (*(_QWORD *)(v46 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v56 = *(_BYTE *)(v46 + 35);
        v57 = v56;
        if ( (v56 & 8) != 0 || (v56 & 7u) > 2 && ((v56 & 8) != 0 || (v57 = v56 & 7, (unsigned int)v57 <= 5)) )
        {
          v127 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v127, v57, v45);
              while ( *(__int64 *)(v46 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) );
            v29 = 0xFFFFF6FB7DBED000uLL;
            v21 = 0xFFFFF6FB7DBED7F8uLL;
          }
          *(_BYTE *)(v46 + 35) = *(_BYTE *)(v46 + 35) & 0xF8 | 2;
          _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      v47 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v48 = *(_QWORD *)v47;
      if ( v47 >= 0xFFFFF6FB7DBED000uLL
        && v47 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v48 & 1) != 0
        && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
      {
        v102 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v102 )
        {
          v103 = *(_QWORD *)(v102 + 8 * ((v47 >> 3) & 0x1FF));
          v104 = v48 | 0x20;
          if ( (v103 & 0x20) == 0 )
            v104 = v48;
          v48 = v104;
          if ( (v103 & 0x42) != 0 )
            v48 = v104 | 0x42;
        }
      }
      WsleContents = HIBYTE(v48) & 0xF | (16 * ((v48 >> 60) & 7));
      if ( (HIBYTE(v48) & 0xF) == 8 )
      {
        MiUnlockWsle((__int64)v126, v4, v46);
        WsleContents = MiGetWsleContents(v105, v4);
        v29 = 0xFFFFF6FB7DBED000uLL;
        v21 = 0xFFFFF6FB7DBED7F8uLL;
      }
      v50 = ZeroPte;
      v51 = *(_QWORD *)v5;
      Process = 0xFFFFF6FB7DBED000uLL;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL )
      {
        Process = 0xFFFFF6FB7DBED7F8uLL;
        if ( v5 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v51) )
            v51 |= 0x20uLL;
        }
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        v51 = 32LL;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v51 & 0x20) != 0 )
      {
        if ( v5 >= v29 && v5 <= v21 )
        {
          if ( (unsigned int)MiPteHasShadow(Process, v51) )
          {
            if ( !HIBYTE(word_14043B26C) && (v50 & 1) != 0 )
              v50 |= 0x8000000000000000uLL;
            *(_QWORD *)v5 = v50;
            MiWritePteShadow(v5);
LABEL_56:
            v125 = 1;
LABEL_57:
            v52 = v131 == 0;
            v53 = v133;
            v133[8 * v7] = WsleContents;
            v53[8 * v7 + 1] = 1;
            if ( !v52 )
            {
              v132 = *(_QWORD *)(v46 + 8) | 0x8000000000000000uLL;
              v4 = BugCheckParameter3a;
            }
            v30 = BugCheckParameter2;
            v121 = v9 + 1;
            goto LABEL_28;
          }
          Process = (size_t)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(Process + 1740) & 0x1000) != 0 && (v50 & 1) != 0 )
            v50 |= 0x8000000000000000uLL;
        }
        *(_QWORD *)v5 = v50;
        goto LABEL_56;
      }
      if ( (MI_INTERLOCKED_EXCHANGE_PTE(v5, v50) & 0x20) != 0 )
        goto LABEL_56;
      goto LABEL_57;
    }
    if ( (v28 & 0x400) == 0 )
      break;
    if ( v131 )
    {
      v31 = v28;
      if ( qword_14043B180 && (v28 & 0x10) == 0 )
        v31 = v28 & ~qword_14043B180;
      v132 = v31 >> 16;
      v4 = BugCheckParameter3a;
    }
    v32 = ZeroPte;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(Process, ZeroPte) )
      {
        if ( !HIBYTE(word_14043B26C) && (v32 & 1) != 0 )
          v32 |= 0x8000000000000000uLL;
        *(_QWORD *)v5 = v32;
        MiWritePteShadow(v5);
        goto LABEL_28;
      }
      Process = (size_t)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)(Process + 1740) & 0x1000) != 0 && (v32 & 1) != 0 )
        v32 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v5 = v32;
LABEL_28:
    ++v9;
    v21 = 0xFFFFF6FB7DBED7F8uLL;
    v4 += 4096LL;
    v123 = v9;
    ++v7;
    BugCheckParameter3a = v4;
    v5 += 8LL;
    if ( v5 >= v6 )
      goto LABEL_29;
  }
  if ( !MiPteInShadowRange(v5) )
  {
LABEL_246:
    *(_QWORD *)v5 = v109;
    goto LABEL_29;
  }
  if ( !(unsigned int)MiPteHasShadow(v110, v109) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v109 & 1) != 0 )
    {
      v109 |= 0x8000000000000000uLL;
    }
    goto LABEL_246;
  }
  if ( !HIBYTE(word_14043B26C) && (v109 & 1) != 0 )
    v109 |= 0x8000000000000000uLL;
  *(_QWORD *)v5 = v109;
  MiWritePteShadow(v5);
LABEL_29:
  if ( v121 )
  {
    v33 = v20;
    v34 = v126;
    v35 = MiRemoveWsleList(v126, v33, v133, v121);
    if ( v35 )
      MiRebuildPageTableLeafAges(0LL, v35 << 25 >> 16 << 25 >> 16);
  }
  else
  {
    v34 = v126;
  }
  if ( *(_QWORD *)(v134 + 16) )
  {
    *(_QWORD *)(v134 + 16) = 0LL;
    v36 = 1;
  }
  else
  {
    v36 = 0;
  }
  v119 = v36;
  MiUnlockPageTableInternal(v34, v136);
  MiUnlockWorkingSetShared((__int64)v34, 2u);
  _InterlockedOr(v118, 0);
  v39 = v123;
  v40 = 0LL;
  v41 = KiTbFlushTimeStamp;
  v42 = 0LL;
  v43 = 0LL;
  v121 = KiTbFlushTimeStamp;
  if ( v123 <= 0 )
  {
    v58 = (__int64 *)BugCheckParameter2;
    goto LABEL_83;
  }
  v44 = 0;
  while ( 2 )
  {
    if ( (*(_BYTE *)(v30 + 8 * v43) & 1) == 0 )
    {
      v58 = (__int64 *)BugCheckParameter2;
      goto LABEL_80;
    }
    ++v40;
    v81 = 0LL;
    v82 = v30 + 8LL * v44;
    v83 = *(_QWORD *)v82;
    if ( v82 >= 0xFFFFF6FB7DBED000uLL
      && v82 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v83 & 1) != 0
      && ((v83 & 0x20) == 0 || (v83 & 0x42) == 0) )
    {
      v111 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v111 )
      {
        v112 = *(_QWORD *)(v111 + 8 * ((v82 >> 3) & 0x1FF));
        v82 = v83 | 0x20;
        if ( (v112 & 0x20) == 0 )
          v82 = v83;
        v83 = v82;
        if ( (v112 & 0x42) != 0 )
          v83 = v82 | 0x42;
      }
    }
    v38 = (v83 >> 12) & 0xFFFFFFFFFLL;
    v84 = 48 * v38 - 0x58000000000LL;
    v85 = _interlockedbittestandset64((volatile signed __int32 *)(v84 + 24), 0x3FuLL);
    if ( !(_DWORD)v42 )
    {
      v128 = 0;
      if ( v85 )
      {
        do
        {
          do
            KeYieldProcessorEx(&v128, v82, v38);
          while ( *(__int64 *)(v84 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v84 + 24), 0x3FuLL) );
      }
LABEL_116:
      v86 = (__int64 *)BugCheckParameter2;
      if ( (*(_BYTE *)(BugCheckParameter2 + 8 * v43) & 0x42) != 0 )
      {
        v81 = MiCaptureDirtyBitToPfn(v84);
      }
      else
      {
        v37 = 0x3FFFFFFFFFFFFFFFLL;
        if ( (*(_QWORD *)(v84 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
          && *(_WORD *)(v84 + 32) == 1
          && (*(_QWORD *)(v84 + 24) & 0x4000000000000000LL) == 0
          && (*(_BYTE *)(v84 + 35) & 0x40) == 0
          && (*(_BYTE *)(v84 + 34) & 0x10) == 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 8 * v42) = v84;
          v42 = (unsigned int)(v42 + 1);
LABEL_123:
          v58 = v86;
          goto LABEL_80;
        }
      }
      if ( (_DWORD)v42 )
      {
        LOBYTE(v38) = 17;
        MiDecrementAndInsertStandbyPages(v86, v42, v38);
        v42 = 0LL;
      }
      MiDecrementShareCount(v84);
      _InterlockedAnd64((volatile signed __int64 *)(v84 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v81 )
        MiReleasePageFileInfo(v135, v81, 0);
      goto LABEL_123;
    }
    if ( !v85 )
      goto LABEL_116;
    v58 = (__int64 *)BugCheckParameter2;
    LOBYTE(v38) = 2;
    MiDecrementAndInsertStandbyPages((__int64 *)BugCheckParameter2, v42, v38);
    v42 = 0LL;
    --v44;
    --v43;
    --v40;
LABEL_80:
    ++v44;
    if ( ++v43 < v39 )
    {
      v30 = BugCheckParameter2;
      continue;
    }
    break;
  }
  v36 = v119;
  v41 = v121;
  if ( (_DWORD)v42 )
  {
    LOBYTE(v38) = 2;
    MiDecrementAndInsertStandbyPages(v58, v42, v38);
  }
LABEL_83:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v143 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v143);
  v59 = v130;
  if ( v36 == 1 )
    MiManageSubsectionView(v130, v134, v124);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( v40 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v61 = v137;
    v129 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v129, v37, v38);
      while ( *(__int64 *)(v61 + 24) < 0 );
    }
    *(_QWORD *)(v61 + 24) ^= (*(_QWORD *)(v61 + 24) ^ (*(_QWORD *)(v61 + 24) - v40)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v62 = v143;
  }
  else
  {
    v62 = CurrentIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  if ( !v131 )
    v59 = 0LL;
  v63 = v138;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v138 + 72));
  v64 = 0LL;
  if ( v59 )
  {
    v65 = v132;
    while ( 1 )
    {
      v66 = MiRemoveViewsFromSection(v59);
      v67 = *(_QWORD *)(v59 + 8);
      v64 += v66;
      if ( v65 >= v67 && v65 < v67 + 8LL * *(unsigned int *)(v59 + 44) )
        break;
      v59 = *(_QWORD *)(v59 + 16);
      if ( !v59 )
        KeBugCheckEx(0x1Au, 0x783uLL, (ULONG_PTR)v58, BugCheckParameter3a, BugCheckParameter4);
    }
  }
  --*(_QWORD *)(v63 + 40);
  --*(_DWORD *)(v63 + 88);
  MiCheckControlArea(v63, v62);
  if ( v64 )
    MiReturnCrossPartitionSectionCharges(v135, 1LL, v64);
  v122 = MiSwizzleInvalidPte((unsigned __int64)(v41 & 0xFFFFF) << 28);
  if ( MiPteInShadowRange(v139 + 16) )
  {
    if ( !(unsigned int)MiPteHasShadow(v69, v68) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v114 & 1) != 0 )
      {
        v68 |= 0x8000000000000000uLL;
      }
      goto LABEL_99;
    }
    if ( !HIBYTE(word_14043B26C) && (v114 & 1) != 0 )
      v68 |= 0x8000000000000000uLL;
    *(_QWORD *)(v70 + 16) = v68;
    MiWritePteShadow(v70 + 16);
  }
  else
  {
LABEL_99:
    *(_QWORD *)(v70 + 16) = v68;
  }
  if ( MiPteInShadowRange(v70 + 8) )
  {
    if ( !(unsigned int)MiPteHasShadow(v72, v71) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v71 & 1) != 0 )
      {
        v71 |= v115;
      }
      goto LABEL_101;
    }
    if ( !HIBYTE(word_14043B26C) && (v71 & 1) != 0 )
      v71 |= v115;
    *(_QWORD *)(v73 + 8) = v71;
    MiWritePteShadow(v73 + 8);
  }
  else
  {
LABEL_101:
    *(_QWORD *)(v73 + 8) = v71;
  }
  v74 = v122;
  if ( v125 == 1 )
  {
    if ( qword_14043B180 )
    {
      if ( (v122 & 0x10) != 0 )
        v74 = v122 & 0xFFFFFFEF;
      else
        v74 = v122 & ~(_DWORD)qword_14043B180;
    }
    v75 = v74 & 0xFFFFFFF | 0x20000000LL;
  }
  else
  {
    if ( qword_14043B180 )
    {
      if ( (v122 & 0x10) != 0 )
        v74 = v122 & 0xFFFFFFEF;
      else
        v74 = v122 & ~(_DWORD)qword_14043B180;
    }
    v75 = v74 & 0xFFFFFFF;
  }
  v122 = MiSwizzleInvalidPte(v75);
  result = (struct _KTHREAD *)MiPteInShadowRange(v76 + 24);
  if ( (_DWORD)result )
  {
    if ( !(unsigned int)MiPteHasShadow(v79, v78) )
    {
      result = KeGetCurrentThread();
      if ( (result->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (v116 & 1) != 0 )
        v78 |= v117;
      goto LABEL_108;
    }
    if ( !HIBYTE(word_14043B26C) && (v116 & 1) != 0 )
      v78 |= v117;
    *(_QWORD *)(v80 + 24) = v78;
    result = (struct _KTHREAD *)MiWritePteShadow(v80 + 24);
  }
  else
  {
LABEL_108:
    *(_QWORD *)(v80 + 24) = v78;
  }
  if ( (a3 & 2) == 0 )
    return (struct _KTHREAD *)MiReleaseSystemCacheView(v80);
  return result;
}
