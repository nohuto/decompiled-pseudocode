/*
 * XREFs of MiQueryAddressState @ 0x1400A6250
 * Callers:
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiAllowProtectionChange @ 0x1400E53B0 (MiAllowProtectionChange.c)
 *     MiQueryAddressSpan @ 0x140104A80 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x140117258 (MiComparePteProtections.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiVadPureReserve @ 0x140052AE0 (MiVadPureReserve.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x1400539B0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x1400A5DD0 (MiGetPageProtection.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x1400AB5F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x14010027C (MiGetPageTableLockBuffer.c)
 *     MiQueryStateMatches @ 0x140104A50 (MiQueryStateMatches.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140108A18 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiGetSharedProtos @ 0x14015CC6C (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFaultInPagedPool @ 0x1402BCA60 (MiFaultInPagedPool.c)
 *     MiGetValidAweProtection @ 0x1402D62F8 (MiGetValidAweProtection.c)
 *     MiSkipEntirePagefileRegions @ 0x1402D8968 (MiSkipEntirePagefileRegions.c)
 *     EtwTraceShouldYieldProcessor @ 0x14032DE0C (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        int *a6,
        _DWORD *a7,
        _QWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // r14
  unsigned __int16 *v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rdi
  BOOL v15; // esi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rcx
  unsigned __int16 *AnyMultiplexedVm; // rdi
  int v19; // eax
  unsigned int v20; // r8d
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  unsigned int ValidAweProtection; // r14d
  int v25; // r13d
  ULONG_PTR v26; // r10
  unsigned int v27; // ecx
  unsigned __int64 v28; // rbx
  ULONG_PTR v29; // rdi
  bool v30; // zf
  __int64 v31; // rsi
  ULONG_PTR v32; // r10
  _QWORD *v33; // rax
  int v34; // r8d
  unsigned __int64 v35; // r9
  __int64 *v36; // rbx
  ULONG_PTR v37; // rdx
  unsigned int v38; // ebx
  unsigned __int64 v39; // rax
  unsigned __int16 *v40; // r10
  char v41; // dl
  unsigned __int64 v42; // rcx
  int v43; // ecx
  LONG *v44; // rax
  struct _KPRCB *v45; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // esi
  int v49; // r8d
  _KTHREAD *NextThread; // rax
  __int64 v51; // rcx
  unsigned int v52; // r14d
  unsigned int PageProtection; // eax
  ULONG_PTR v54; // rdi
  int v55; // eax
  volatile signed __int64 *v56; // r9
  char v57; // dl
  signed __int64 v58; // rdx
  signed __int64 v59; // rax
  int v60; // eax
  unsigned int *v61; // rdx
  _DWORD *v62; // rcx
  int v64; // ecx
  unsigned int v65; // r11d
  ULONG_PTR v66; // r10
  __int64 v67; // rdx
  ULONG_PTR v68; // rcx
  unsigned __int64 v69; // r9
  __int64 v70; // rbx
  __int64 v71; // rdx
  unsigned __int64 v72; // r10
  unsigned int v73; // r11d
  unsigned __int64 v74; // rsi
  __int64 v75; // rcx
  __int16 v76; // ax
  int v77; // r9d
  __int64 v78; // rcx
  unsigned __int64 v79; // r12
  unsigned __int64 v80; // rsi
  unsigned int v81; // edi
  ULONG_PTR v82; // r10
  __int64 v83; // r12
  ULONG_PTR v84; // rcx
  unsigned __int64 v85; // r9
  __int64 v86; // rsi
  __int16 v87; // ax
  __int64 v88; // r10
  unsigned __int64 v89; // r11
  int v90; // r10d
  int v91; // r9d
  unsigned __int64 v92; // rcx
  unsigned __int64 DeepFreezeStartTime; // r9
  __int64 v94; // rax
  int IsPrototypePteVadLookup; // eax
  unsigned __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rsi
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v103; // r8
  __int64 v104; // rax
  __int64 v105; // r8
  unsigned __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // r8
  struct _KPRCB *v109; // rax
  _KLOCK_QUEUE_HANDLE *v110; // rax
  __int64 v111; // r8
  _DWORD *v112; // rax
  unsigned __int64 v113; // r8
  __int64 v114; // rax
  __int64 v115; // r8
  unsigned __int64 v116; // r8
  __int64 v117; // rax
  __int64 v118; // r8
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v121; // rcx
  __int64 v122; // r9
  int v123; // eax
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v125; // eax
  int v126; // edx
  signed __int32 v127; // ett
  unsigned __int64 v128; // r8
  __int64 v129; // rax
  __int64 v130; // r8
  __int64 v131; // rcx
  ULONG_PTR v132; // r13
  unsigned int v133; // ecx
  __int64 v134; // rax
  int v135; // eax
  unsigned __int64 LeafVa; // rax
  int v138; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v139; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h] BYREF
  int v141; // [rsp+48h] [rbp-B8h] BYREF
  int v142; // [rsp+4Ch] [rbp-B4h]
  int v143; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v144; // [rsp+58h] [rbp-A8h]
  __int64 v145; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v146; // [rsp+68h] [rbp-98h]
  ULONG_PTR v147; // [rsp+70h] [rbp-90h]
  unsigned int v148; // [rsp+78h] [rbp-88h]
  __int64 v149; // [rsp+80h] [rbp-80h] BYREF
  int v150; // [rsp+88h] [rbp-78h]
  __int64 v151; // [rsp+90h] [rbp-70h]
  int v152; // [rsp+9Ch] [rbp-64h] BYREF
  int v153; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v154; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v155; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v156; // [rsp+B8h] [rbp-48h]
  int *v157; // [rsp+C0h] [rbp-40h]
  __int64 v158; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v159; // [rsp+D0h] [rbp-30h]
  _DWORD *v160; // [rsp+D8h] [rbp-28h]
  _QWORD *v161; // [rsp+E0h] [rbp-20h]
  __int64 v162; // [rsp+E8h] [rbp-18h]
  _DWORD *v163; // [rsp+F0h] [rbp-10h]
  __int64 v164; // [rsp+F8h] [rbp-8h]
  __int64 v165; // [rsp+100h] [rbp+0h]
  _QWORD v166[22]; // [rsp+110h] [rbp+10h] BYREF

  v9 = a1;
  v157 = a6;
  v10 = a3;
  v160 = a7;
  v161 = a8;
  v163 = a9;
  v147 = a4;
  *a9 = 1;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v144 = v11;
  v165 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v165;
  v154 = v165;
  v150 = 0x2000;
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v148 = 0;
  v143 = 0;
  v146 = 0LL;
  v139 = 0LL;
  v156 = v13;
  v14 = 0LL;
  v151 = 0LL;
  v162 = v13 << 25 >> 16;
LABEL_2:
  v155 = v13;
  v142 = 0;
  v15 = 0;
  v145 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  memset((char *)v166 + 2, 0, 0xA6uLL);
  LOWORD(v166[0]) = 2145;
  v16 = (__int64)((v12 << 25) - v14) >> 16;
  v17 = v16;
  if ( v16 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v17 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v17 = (__int64)((v17 << 25) - v14) >> 16;
    }
    while ( v17 >= 0xFFFFF68000000000uLL );
    v11 = v144;
  }
  if ( v17 < 0xFFFF800000000000uLL || v17 >= qword_1404672B0 && v17 <= qword_140465BE0 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  else
    AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
  v19 = MiFastLockLeafPageTable(AnyMultiplexedVm, v16, 0LL);
  if ( v19 )
  {
    v20 = v19 - 1;
    LODWORD(v158) = v19 - 1;
    v21 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v159 = v21;
  }
  else
  {
    LOWORD(v166[0]) |= 4u;
    v166[20] = &v158;
    v166[1] = 0LL;
    v166[2] = AnyMultiplexedVm;
    BYTE2(v166[0]) = BYTE2(v166[0]) & 0xE3 | 4;
    v166[19] = MiGetNextPageTableTail;
    v166[4] = v162;
    BYTE6(v166[0]) = v10;
    v166[3] = v16;
    MiWalkPageTables((__int16 *)v166);
    v20 = v158;
    v21 = v159;
  }
  if ( !v21 )
  {
    v21 = v156 + 8;
    goto LABEL_13;
  }
  v22 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v146 = v22;
  if ( ((v156 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL != v22 )
  {
    v155 = (v21 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v11 = v144;
  }
  if ( !v20 )
  {
    if ( v12 == v21 )
    {
      v145 = MI_READ_PTE_LOCK_FREE(v12);
      v142 = 1;
      v21 = v12 + 8;
      v15 = v145 == 0;
    }
    else
    {
      MiUnlockPageTableInternal(v11);
      v146 = 0LL;
    }
LABEL_13:
    while ( 1 )
    {
      v23 = v145;
      ValidAweProtection = 0;
      v25 = 0;
      v138 = 0x2000;
      v141 = 0;
      if ( !v145 )
        break;
      if ( (unsigned __int64)&v145 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v145 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v145 & 1) != 0
        && ((v145 & 0x20) == 0 || (v145 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v94 = *(_QWORD *)(DeepFreezeStartTime + 8 * (((unsigned __int64)&v145 >> 3) & 0x1FF));
          if ( (v94 & 0x20) != 0 )
            v23 = v145 | 0x20;
          if ( (v94 & 0x42) != 0 )
            v23 |= 0x42uLL;
        }
        else
        {
          v23 = v145;
        }
      }
      if ( (v23 & 0x3E0) != 0x200
        || (v23 & 1) != 0
        || (v23 & 0x400) != 0 && (IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v23)) == 0 )
      {
        v138 = 4096;
        v52 = *(_DWORD *)(v147 + 48);
        if ( (v52 & 0x70) == 0x10 )
          goto LABEL_137;
        if ( (v52 & 0x70) != 0x30 || (v52 & 0x3100000) == 0x2100000 )
        {
          PageProtection = MiGetPageProtection(v147, v12, &BugCheckParameter2, &v141);
          v54 = BugCheckParameter2;
          ValidAweProtection = PageProtection;
          if ( BugCheckParameter2 )
          {
            v11 = v144;
            MiUnlockPageTableInternal(v144);
            v10 = a3;
            v146 = 0LL;
            MiUnlockWorkingSetShared(v11, a3);
            MiFaultInPagedPool(v54);
            MiLockWorkingSetShared((__int64)v11);
            v13 = v156;
            v14 = v151;
            goto LABEL_2;
          }
          if ( !PageProtection )
            v138 = 0x2000;
        }
        else
        {
          ValidAweProtection = MiGetValidAweProtection(v147, v145);
        }
      }
LABEL_36:
      v38 = v138;
      if ( v12 == v165 )
      {
        v150 = v138;
        v148 = ValidAweProtection;
        v143 = v141;
        if ( a5 )
        {
          if ( v138 != *(_DWORD *)(a5 + 32) )
            goto LABEL_87;
          v55 = ValidAweProtection ? v141 | MmProtectToValue[ValidAweProtection] : 0;
          if ( v55 != *(_DWORD *)(a5 + 36) )
            goto LABEL_87;
        }
        goto LABEL_60;
      }
      if ( ValidAweProtection != v148 || v138 != v150 || v141 != v143 )
      {
        v38 = v150;
        v141 = v143;
        ValidAweProtection = v148;
LABEL_87:
        v21 = v12;
LABEL_88:
        v56 = (volatile signed __int64 *)v146;
        if ( v146 )
        {
          v57 = v144[92] & 7;
          if ( v146 == 0xFFFFF6FB7DBEDF68uLL )
          {
            if ( v57 )
            {
              if ( v57 == 7 )
              {
                SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
              }
              else
              {
                CurrentPrcb = KeGetCurrentPrcb();
                if ( v57 == 5 )
                  SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
                else
                  SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
              }
            }
            else
            {
              SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(SelfmapLockHandle);
          }
          else
          {
            if ( !v57 )
            {
              if ( v146 >= 0xFFFFF6FB7DBED000uLL && v146 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                v121 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
                if ( v121 )
                {
                  v122 = (v146 >> 3) & 0x1FF;
                  v123 = *(_DWORD *)(v121 + 4 * v122);
                  if ( (v123 & 0x3FFFFFFF) != 0 )
                  {
                    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v121 + 4 * v122));
                  }
                  else
                  {
                    if ( v123 >= 0 )
                      KeBugCheckEx(0x10u, v121 + 4 * v122, 0x100uLL, 0LL, 0LL);
                    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v121 + 4 * v122));
                  }
                  goto LABEL_94;
                }
              }
LABEL_92:
              v58 = *(_QWORD *)v146;
              if ( v146 >= 0xFFFFF6FB7DBED000uLL
                && v146 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v58 & 1) != 0
                && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
              {
                v128 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                if ( v128 )
                {
                  v129 = *(_QWORD *)(v128 + 8 * ((v146 >> 3) & 0x1FF));
                  v130 = v58 | 0x20;
                  if ( (v129 & 0x20) == 0 )
                    v130 = *(_QWORD *)v146;
                  v58 = v130;
                  if ( (v129 & 0x42) != 0 )
                    v58 = v130 | 0x42;
                }
              }
              do
              {
                v59 = _InterlockedCompareExchange64(v56, v58 & 0xCFFFFFFFFFFFFFFFuLL, v58);
                v30 = v58 == v59;
                v58 = v59;
              }
              while ( !v30 );
              goto LABEL_94;
            }
            if ( v146 < 0xFFFFF6FB7DBED000uLL || v146 > 0xFFFFF6FB7DBEDFFFuLL )
              goto LABEL_92;
            PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v144, v146, &v153);
            v125 = *PageTableLockBuffer;
            v126 = ~(3 << v153);
            do
            {
              v127 = v125;
              v125 = _InterlockedCompareExchange(PageTableLockBuffer, v126 & v125, v125);
            }
            while ( v127 != v125 );
          }
        }
LABEL_94:
        v60 = v141;
        v61 = (unsigned int *)v157;
        *v161 = (__int64)((v21 << 25) - v151) >> 16;
        v62 = v160;
        *v61 = ValidAweProtection;
        *v62 = v60;
        return v38;
      }
      v39 = v139;
      if ( !v139 && v25 != 1 )
      {
        if ( (__int64)((v12 - v165) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
          goto LABEL_60;
        v40 = v144;
        if ( !v146 )
          goto LABEL_50;
        v41 = v144[92] & 7;
        if ( v146 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v109 = KeGetCurrentPrcb();
          if ( v41 )
          {
            if ( v41 == 7 )
            {
              v110 = &v109->SelfmapLockHandle[1];
            }
            else if ( v41 == 5 )
            {
              v110 = v109->SelfmapLockHandle;
            }
            else
            {
              v110 = &v109->SelfmapLockHandle[3];
            }
          }
          else
          {
            v110 = &v109->SelfmapLockHandle[2];
          }
          if ( v110->LockQueue.Next )
            goto LABEL_146;
          goto LABEL_50;
        }
        if ( v41 )
        {
          if ( v146 >= 0xFFFFF6FB7DBED000uLL && v146 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v112 = (_DWORD *)MiGetPageTableLockBuffer(v144, v146, &v152);
            if ( ((*v112 >> v152) & 2) != 0 )
              goto LABEL_146;
            goto LABEL_50;
          }
        }
        else if ( v146 >= 0xFFFFF6FB7DBED000uLL && v146 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v111 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
          if ( v111 )
          {
            v43 = (*(_DWORD *)(v111 + 4LL * (((unsigned int)v146 >> 3) & 0x1FF)) >> 30) & 1;
LABEL_49:
            if ( v43 )
              goto LABEL_146;
LABEL_50:
            if ( (v40[92] & 7) == 2 )
              v44 = &dword_140466F00;
            else
              v44 = (LONG *)(v40 + 96);
            if ( (*v44 & 0x40000000) != 0 )
              goto LABEL_146;
            if ( a3 < 2u )
            {
              v45 = KeGetCurrentPrcb();
              DpcRequestSummary = v45->DpcRequestSummary;
              DpcWatchdogCount = v45->DpcWatchdogCount;
              DpcTimeCount = v45->DpcTimeCount;
              if ( (DpcRequestSummary & 1) == 0 )
              {
                v49 = 0;
                if ( (DpcRequestSummary & 0x1E) != 0 )
                {
                  v81 = 2;
                }
                else
                {
                  if ( !v45->QuantumEnd )
                  {
                    NextThread = v45->NextThread;
                    if ( NextThread && NextThread != v45->CurrentThread )
                    {
                      v81 = 4;
                      goto LABEL_142;
                    }
LABEL_58:
                    if ( DpcWatchdogCount <= 7 )
                    {
LABEL_59:
                      v38 = v138;
                      goto LABEL_60;
                    }
                    if ( !v49 )
                    {
LABEL_187:
                      _disable();
                      v45->DpcWatchdogCount = 0;
                      v45->DpcTimeCount = 0;
                      KiResetGlobalDpcWatchdogProfiler(v45);
                      _enable();
                      v81 = 0;
                      goto LABEL_142;
                    }
LABEL_285:
                    if ( (DpcRequestSummary & 0x1E) != 0 )
                    {
                      v81 = 5;
                      goto LABEL_142;
                    }
                    if ( v45->CurrentThread != v45->IdleThread )
                    {
                      v81 = 6;
                      goto LABEL_142;
                    }
                    goto LABEL_187;
                  }
                  v81 = 3;
                }
LABEL_142:
                if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                  EtwTraceShouldYieldProcessor(v81, DpcWatchdogCount, DpcTimeCount);
                if ( v81 )
                {
                  v38 = v138;
LABEL_146:
                  v21 = v12 + 8;
                  goto LABEL_88;
                }
                goto LABEL_59;
              }
              v49 = 1;
              if ( DpcTimeCount <= 7 )
                goto LABEL_58;
              if ( v45->QuantumEnd )
              {
                v81 = 1;
                goto LABEL_142;
              }
              goto LABEL_285;
            }
LABEL_60:
            v39 = v139;
            goto LABEL_61;
          }
        }
        v42 = *(_QWORD *)v146;
        if ( v146 >= 0xFFFFF6FB7DBED000uLL
          && v146 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v42 & 1) != 0
          && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
        {
          v113 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v113 )
          {
            v114 = *(_QWORD *)(v113 + 8 * ((v146 >> 3) & 0x1FF));
            v115 = v42 | 0x20;
            if ( (v114 & 0x20) == 0 )
              v115 = *(_QWORD *)v146;
            v42 = v115;
            if ( (v114 & 0x42) != 0 )
              v42 = v115 | 0x42;
          }
        }
        v43 = (v42 >> 60) & 2;
        goto LABEL_49;
      }
LABEL_61:
      if ( v25 )
        goto LABEL_88;
      if ( v39 )
        goto LABEL_88;
      v12 += 8LL;
      v154 = v12;
      if ( v21 > v155 || v21 != v12 )
        goto LABEL_88;
      if ( v142 )
      {
        v51 = *(_QWORD *)v12;
        if ( v12 >= 0xFFFFF6FB7DBED000uLL
          && v12 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v51 & 1) != 0
          && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          v116 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v116 )
          {
            v117 = *(_QWORD *)(v116 + 8 * ((v12 >> 3) & 0x1FF));
            v118 = v51 | 0x20;
            if ( (v117 & 0x20) == 0 )
              v118 = *(_QWORD *)v12;
            v51 = v118;
            if ( (v117 & 0x42) != 0 )
              v51 = v118 | 0x42;
          }
        }
        v145 = v51;
      }
      v21 += 8LL;
      v9 = (__int64)((v12 << 25) - v151) >> 16;
      v15 = 0;
    }
    v26 = v147;
    *v163 = 0;
    v27 = *(_DWORD *)(v26 + 48);
    if ( (*(_BYTE *)(v26 + 48) & 0x70) == 0x30 || (v27 & 0x70) == 0x10 )
      goto LABEL_36;
    if ( (v27 & 0x100000) != 0 )
    {
      if ( *(int *)(v26 + 52) < 0 )
      {
        ValidAweProtection = (v27 >> 7) & 0x1F;
        v138 = 4096;
        v141 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v26);
      }
      goto LABEL_36;
    }
    v28 = v9 >> 12;
    BugCheckParameter2 = MiGetProtoPteAddress(v26, v28, 4LL, &v149);
    v29 = BugCheckParameter2;
    if ( !BugCheckParameter2 )
    {
      if ( !a5 || (unsigned int)MiQueryStateMatches(a5, 0x2000LL, 0LL, 0LL) )
      {
        if ( !(unsigned int)MiVadPureReserve(v147)
          || !v149
          || *(_QWORD *)(v149 + 8)
          || (v21 = MiSkipEntirePagefileRegions(v90, v28, v12, v21, v149), v21 == v12) )
        {
          v21 = v12 + 8;
        }
      }
      else
      {
        v25 = v91 + 1;
        v21 = v12;
      }
      goto LABEL_36;
    }
    v30 = !v15;
    v31 = v149;
    if ( v30 )
    {
      if ( v142 )
        goto LABEL_20;
      v82 = *(_QWORD *)(v149 + 8);
      v83 = (__int64)(v21 - v12) >> 3;
      v84 = v82 + 8 * (*(unsigned int *)(v149 + 44) - (unsigned __int64)(*(_DWORD *)(v149 + 52) & 0x3FFFFFFF));
      if ( (*(_BYTE *)(v149 + 34) & 2) != 0 || BugCheckParameter2 < v82 || BugCheckParameter2 >= v84 )
      {
        v83 = 1LL;
      }
      else if ( BugCheckParameter2 + 8 * v83 > v84 )
      {
        v83 = (__int64)(v84 - BugCheckParameter2) >> 3;
      }
      v21 = v12 + 8 * v83;
    }
    else
    {
      v64 = *(_DWORD *)(v149 + 52);
      v65 = *(_DWORD *)(v149 + 44);
      v66 = *(_QWORD *)(v149 + 8);
      v67 = ((__int64)(v155 - v12) >> 3) + 1;
      v164 = v65;
      if ( v67 > 32 )
        v67 = 32LL;
      v68 = v66 + 8 * (v65 - (unsigned __int64)(v64 & 0x3FFFFFFF));
      if ( (*(_BYTE *)(v149 + 34) & 2) != 0 || BugCheckParameter2 < v66 || BugCheckParameter2 >= v68 )
      {
        v67 = 0LL;
      }
      else if ( BugCheckParameter2 + 8 * v67 > v68 )
      {
        v67 = (__int64)(v68 - BugCheckParameter2) >> 3;
      }
      v69 = v12 + 8 * (v67 - 1);
      v21 = v12 + 8;
      if ( v12 + 8 <= v69 )
      {
        do
        {
          v78 = *(_QWORD *)v21;
          if ( v21 >= 0xFFFFF6FB7DBED000uLL
            && v21 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v78 & 1) != 0
            && ((v78 & 0x20) == 0 || (v78 & 0x42) == 0) )
          {
            v96 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v96 )
            {
              v97 = *(_QWORD *)(v96 + 8 * ((v21 >> 3) & 0x1FF));
              v98 = v78 | 0x20;
              if ( (v97 & 0x20) == 0 )
                v98 = *(_QWORD *)v21;
              v78 = v98;
              if ( (v97 & 0x42) != 0 )
                v78 = v98 | 0x42;
            }
          }
          if ( v78 )
            break;
          v21 += 8LL;
        }
        while ( v21 <= v69 );
        v29 = BugCheckParameter2;
        v31 = v149;
        v12 = v154;
      }
      if ( v142 )
      {
LABEL_20:
        v32 = v147;
        v33 = *(_QWORD **)(v147 + 120);
        if ( (__int64)v33 < 0 )
        {
          v34 = 1;
          v35 = (unsigned __int64)(*v33 - 1LL) >> 12;
        }
        else
        {
          v34 = 0;
          v35 = -1LL;
        }
        if ( v29 )
        {
          if ( (*(_DWORD *)(v147 + 48) & 0x70) == 0x20 )
          {
            v36 = *(__int64 **)(v147 + 72);
            v37 = 0LL;
            if ( v36 )
            {
              do
              {
                if ( (*((_BYTE *)v36 + 34) & 2) != 0 && (v100 = *v36, (*(_DWORD *)(*v36 + 56) & 0x4000000) != 0) )
                {
                  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                  SharedProtos = MiGetSharedProtos(v100, SessionId, v36);
                  v29 = BugCheckParameter2;
                  v37 = *(_QWORD *)(SharedProtos + 72);
                }
                else
                {
                  v37 = v36[1];
                }
                if ( v29 >= v37 && v29 < v37 + 8LL * *((unsigned int *)v36 + 11) )
                  break;
                v36 = (__int64 *)v36[2];
              }
              while ( v36 );
              v32 = v147;
            }
            if ( (__int64)(v29 - v37) >> 3 < (unsigned __int64)(*((_DWORD *)v36 + 11)
                                                              - (*((_DWORD *)v36 + 13) & 0x3FFFFFFFu)) )
            {
              ValidAweProtection = (*(_DWORD *)(v32 + 48) >> 7) & 0x1F;
              if ( ValidAweProtection == 7 )
                ValidAweProtection = (*((unsigned __int16 *)v36 + 16) >> 1) & 0x1F;
              if ( ValidAweProtection )
                v138 = 4096;
            }
          }
          else if ( *(_QWORD *)(*(_QWORD *)v31 + 64LL) || (*(_DWORD *)(*(_QWORD *)v31 + 56LL) & 0x2000) != 0 )
          {
            v79 = (__int64)(v21 - v12) >> 3;
            v80 = (__int64)(*(_QWORD *)(v31 + 8)
                          + 8 * (*(unsigned int *)(v31 + 44) - (unsigned __int64)(*(_DWORD *)(v31 + 52) & 0x3FFFFFFF))
                          - v29) >> 3;
            v139 = v80;
            if ( v80 > v79 )
            {
              v80 = v79;
              v139 = v79;
            }
            if ( v34 )
            {
              v92 = *(unsigned int *)(v147 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v147 + 32) << 32);
              if ( v28 - v92 <= v35 )
              {
                if ( v80 > v92 - v28 + v35 + 1 )
                {
                  v80 = v92 - v28 + v35 + 1;
                  v139 = v80;
                }
                v34 = 0;
              }
            }
            v21 = v12 + 8 * v80;
            if ( !v34 )
            {
              v52 = *(_DWORD *)(v147 + 48);
              v138 = 4096;
LABEL_137:
              ValidAweProtection = (v52 >> 7) & 0x1F;
              goto LABEL_36;
            }
          }
          else
          {
            v70 = (__int64)v144;
            if ( v146 )
            {
              MiUnlockPageTableInternal(v144);
              v146 = 0LL;
            }
            MiUnlockWorkingSetShared(v70, a3);
            if ( MiPteInShadowRange(v29) && (MiFlags & 0xC00000) != 0 )
            {
              if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
                || (v71 & 1) == 0
                || (v71 & 0x20) != 0 && (v71 & 0x42) != 0 )
              {
                v29 = BugCheckParameter2;
              }
              else
              {
                v29 = BugCheckParameter2;
                v103 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                if ( v103 )
                {
                  v104 = *(_QWORD *)(v103 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                  v105 = v71 | 0x20;
                  if ( (v104 & 0x20) == 0 )
                    v105 = v71;
                  v71 = v105;
                  if ( (v104 & 0x42) != 0 )
                    v71 = v105 | 0x42;
                }
              }
            }
            if ( v71 )
            {
              v73 = 4096;
              v138 = 4096;
              ValidAweProtection = (*(_DWORD *)(v147 + 48) >> 7) & 0x1F;
            }
            else
            {
              v73 = 0x2000;
            }
            if ( !a5 || (unsigned int)MiQueryStateMatches(a5, v73, ValidAweProtection, 0LL) )
            {
              v74 = v139;
              if ( v72 )
              {
                while ( 1 )
                {
LABEL_114:
                  v75 = *(_QWORD *)v29;
                  if ( v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
                      || (v75 & 1) == 0
                      || (v75 & 0x20) != 0 && (v75 & 0x42) != 0 )
                    {
                      v29 = BugCheckParameter2;
                    }
                    else
                    {
                      v29 = BugCheckParameter2;
                      v106 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                      if ( v106 )
                      {
                        v107 = *(_QWORD *)(v106 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                        v108 = v75 | 0x20;
                        if ( (v107 & 0x20) == 0 )
                          v108 = v75;
                        v75 = v108;
                        if ( (v107 & 0x42) != 0 )
                          v75 = v108 | 0x42;
                      }
                    }
                  }
                  if ( v75 )
                  {
                    if ( v73 != 4096 )
                      break;
                  }
                  else if ( v73 == 4096 )
                  {
                    break;
                  }
                  ++v74;
                  v29 += 8LL;
                  v139 = v74;
                  BugCheckParameter2 = v29;
                  if ( !--v72 )
                    break;
                  while ( (v29 & 0xFFF) == 0 )
                  {
                    v76 = MI_READ_PTE_LOCK_FREE(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                    if ( (v76 & 1) != 0 || (v76 & 0x3E0) != 0 )
                    {
                      if ( v73 == 4096 )
                        goto LABEL_114;
                      goto LABEL_121;
                    }
                    if ( v73 == 4096 )
                      goto LABEL_121;
                    if ( v72 <= 0x200 )
                    {
                      v74 += v72;
                      BugCheckParameter2 = v29 + 8 * v72;
                      goto LABEL_124;
                    }
                    v74 += 512LL;
                    v29 += 4096LL;
                    v139 = v74;
                    BugCheckParameter2 = v29;
                    v72 -= 512LL;
                    if ( !v72 )
                      goto LABEL_121;
                  }
                }
              }
            }
            else
            {
              v74 = 0LL;
              v25 = v77 + 1;
LABEL_124:
              v139 = v74;
            }
LABEL_121:
            v21 = v12 + 8 * v74;
            MiLockWorkingSetShared(v70);
          }
        }
        goto LABEL_36;
      }
    }
    if ( (unsigned int)MiVadPureReserve(v147) )
    {
      v85 = v29;
      v86 = v151;
      do
      {
        v87 = MI_READ_PTE_LOCK_FREE(((v85 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v87 & 0x3E0) != 0LL || (v87 & 1) != 0 )
          break;
        v85 = ((v88 << 25) - v86 + 0x10000000) >> 16;
      }
      while ( v85 < v89 );
      v31 = v149;
      v25 = 0;
      v12 = v154;
      if ( v85 > v89 )
        v85 = v89;
      if ( v85 != v29 )
      {
        v99 = (__int64)(v85 - v29) >> 3;
        v29 = 0LL;
        BugCheckParameter2 = 0LL;
        v21 = v154 + 8 * v99;
      }
    }
    goto LABEL_20;
  }
  if ( v20 > 1 )
  {
    v131 = v20 - 1;
    do
    {
      v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v131;
    }
    while ( v131 );
  }
  v132 = v147;
  v133 = *(_DWORD *)(v147 + 48);
  if ( (*(_BYTE *)(v147 + 48) & 0x70) == 0x30 || (v133 & 0x500000) == 0x500000 )
  {
    v134 = MI_READ_PTE_LOCK_FREE(v22);
    v135 = MiGetValidAweProtection(v132, v134);
    *v157 = v135;
  }
  else
  {
    *v157 = (v133 >> 7) & 0x1F;
  }
  MiUnlockPageTableInternal(v144);
  *v160 = 0;
  LeafVa = MiGetLeafVa(v22 + 8);
  *v161 = LeafVa;
  return 4096LL;
}
