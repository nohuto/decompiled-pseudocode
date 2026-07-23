/*
 * XREFs of MiBuildForkPte @ 0x1402C7DE0
 * Callers:
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTablePage @ 0x1400403C0 (MiLockPageTablePage.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiGetWsleProtection @ 0x1400B5B60 (MiGetWsleProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiSetWsleProtection @ 0x1400DB1E4 (MiSetWsleProtection.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA1C0 (MiPrefetchVirtualMemory.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401257AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140126C70 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128D60 (MI_PROTO_FORMAT_COMBINED.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14012A2E0 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiLockAndInsertPageInFreeList @ 0x140188D5C (MiLockAndInsertPageInFreeList.c)
 *     MiDuplicateCloneLeaf @ 0x1402C9BC8 (MiDuplicateCloneLeaf.c)
 *     MiFindZeroCloneBlock @ 0x1402C9FA4 (MiFindZeroCloneBlock.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402CA29C (MiGetCrossPartitionCloneCharges.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402CAC60 (MiReferenceCloneProto.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402CADA8 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteSharedDemandZeroPte @ 0x1402CB098 (MiWriteSharedDemandZeroPte.c)
 *     MiWriteUselessChildPte @ 0x1402CB228 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 *     MiIncrementCombinedPte @ 0x1402CC1DC (MiIncrementCombinedPte.c)
 */

_BOOL8 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7,
        __int64 a8,
        int *a9,
        __int64 a10,
        __int64 a11,
        int a12,
        KIRQL a13,
        _QWORD *a14,
        _DWORD *a15)
{
  ULONG_PTR v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  __int64 ZeroCloneBlock; // rax
  __int64 v22; // r8
  int v23; // ebx
  int v24; // edx
  int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // r9
  _DWORD *v29; // rsi
  int v30; // ecx
  KIRQL v31; // al
  __int64 v32; // r11
  __int64 v33; // rax
  __int64 v34; // r13
  int v35; // r10d
  unsigned __int8 WsleContents; // di
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rsi
  unsigned __int64 v42; // r10
  struct _KEVENT *v43; // r10
  struct _KEVENT *v44; // rdi
  __int16 v45; // r9
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r9
  LONG *SharedVm; // rbx
  int v53; // eax
  BOOL v54; // edi
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r11
  __int64 v59; // rdi
  __int64 v60; // r8
  __int64 v61; // r9
  LONG *v62; // rdi
  struct _KEVENT *v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rax
  unsigned __int64 *v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // r9
  struct _KEVENT *v73; // rdi
  unsigned __int64 v74; // rbx
  int v75; // edx
  _KPROCESS *Process; // rcx
  unsigned __int64 v77; // rbx
  __int64 v78; // r8
  bool v79; // zf
  __int64 v80; // rcx
  __int64 v81; // rdx
  int v82; // r9d
  char v83; // r8
  int WsleProtection; // eax
  __int64 v85; // r10
  __int64 v86; // rbx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r10
  int v90; // r11d
  __int64 v91; // rax
  __int64 v92; // rdx
  int v93; // r8d
  int v94; // ebx
  int v95; // r9d
  int v96; // ebx
  __int64 v97; // r13
  __int64 v98; // rbx
  int v99; // edx
  char v100; // r11
  __int64 v101; // rdx
  int v102; // r9d
  __int64 *v103; // r10
  __int64 v104; // r11
  char v105; // r8
  unsigned int v106; // ecx
  __int64 v107; // rdx
  __int64 v108; // rdx
  int v109; // r8d
  char v110; // r11
  int v111; // edx
  __int64 v112; // rax
  __int64 v113; // rcx
  char v114; // di
  int v115; // r8d
  __int64 v116; // r9
  __int64 v117; // r10
  int v118; // r11d
  __int64 v119; // [rsp+68h] [rbp-89h] BYREF
  int v120; // [rsp+70h] [rbp-81h]
  int i; // [rsp+74h] [rbp-7Dh]
  unsigned int v122; // [rsp+78h] [rbp-79h]
  __int64 v123; // [rsp+80h] [rbp-71h]
  struct _KEVENT *v124; // [rsp+88h] [rbp-69h]
  __int64 v125; // [rsp+90h] [rbp-61h]
  __int64 v126; // [rsp+98h] [rbp-59h] BYREF
  __int64 Page; // [rsp+A0h] [rbp-51h] BYREF
  __int64 v128; // [rsp+A8h] [rbp-49h]
  __int64 v129; // [rsp+B0h] [rbp-41h]
  int v130; // [rsp+B8h] [rbp-39h] BYREF
  int v131; // [rsp+BCh] [rbp-35h] BYREF
  int v132; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v133; // [rsp+C8h] [rbp-29h] BYREF
  volatile signed __int32 *v134; // [rsp+D0h] [rbp-21h] BYREF
  __int16 v135; // [rsp+D8h] [rbp-19h]
  unsigned __int16 v136; // [rsp+DAh] [rbp-17h]
  _QWORD v137[9]; // [rsp+E0h] [rbp-11h] BYREF
  int v139; // [rsp+140h] [rbp+4Fh]

  v139 = a2;
  v17 = a3;
  v18 = a2;
  v119 = MI_READ_PTE_LOCK_FREE(a3);
  v20 = v119;
  if ( !v119 )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 3) & 0x1F);
      v23 = ZeroCloneBlock;
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1LL, v22);
        MiWriteSharedDemandZeroPte(v18, v24, v23, (_DWORD)a4, (__int64)a14);
      }
    }
    return 0LL;
  }
  MiIncreaseUsedPtesCount(a8, 1LL, v19);
  v26 = a12;
  v27 = a1 + 1280;
  v28 = v18 + 1280;
  v29 = a15;
  v30 = 0;
  v128 = v27;
  v31 = a13;
  Page = -1LL;
  v123 = v18 + 1280;
  v120 = 0;
  for ( i = a12; ; v26 = i )
  {
    v32 = (__int64)a14;
    if ( v30 == 1 )
    {
      LOBYTE(v28) = v31;
      MiMakeSystemAddressValid(v17, 0LL, 0, v28, 1);
      v33 = MI_READ_PTE_LOCK_FREE(v17);
      v26 = i;
      v20 = v33;
      v32 = (__int64)a14;
      v119 = v33;
    }
    if ( (v20 & 1) == 0 )
      break;
    v34 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v119) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( v35 == 1 || *(_WORD *)(v34 + 32) > 1u && (*(_QWORD *)(v34 + 40) & 0x200000000000000LL) == 0 )
    {
      MiInitializePageColorBase(v128, 0, (__int64)&v134);
      v45 = _InterlockedExchangeAdd(v134, 1u);
      v46 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v123 + 174));
      if ( Page != -1 || (Page = MiGetPage(v46, v136 | (unsigned int)(unsigned __int16)(v45 & v135), 0), Page != -1) )
      {
        v94 = Page;
        MiFinalizePageAttribute(48 * Page - 0x58000000000LL, *(unsigned __int8 *)(v34 + 34) >> 6, 0);
        LOBYTE(v95) = a13;
        MiDuplicateCloneLeaf(a3, (_DWORD)a4, v94, v95, 17);
        ++*a7;
        return 0LL;
      }
      MiFlushTbList(a9, v47, v48, v49);
      MiUnlockWorkingSetExclusive(v128, a13, v50, v51);
      MiWaitForFreePage(v46);
      SharedVm = MiGetSharedVm(v128);
      v31 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v20 = v119;
      LODWORD(v18) = v139;
      goto LABEL_31;
    }
    v129 = (__int64)(v17 << 25) >> 16;
    WsleContents = MiGetWsleContents(v129, v129);
    if ( (*(_QWORD *)(v34 + 40) & 0x200000000000000LL) != 0 )
    {
      WsleProtection = MiGetWsleProtection(v129, WsleContents);
      if ( WsleProtection )
      {
        v86 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
        v119 = v86;
        goto LABEL_97;
      }
      v91 = MiSwizzleInvalidPte((v85 << 16) | 0x400);
      v119 = v91;
      v86 = v91;
      if ( v87 >= 0 )
      {
        v86 = v91 | 0x800;
        v119 = v91 | 0x800;
LABEL_97:
        if ( v87 >= 0 )
        {
          if ( !(unsigned int)MiIncrementCombinedPte(v88, v89) )
            goto LABEL_99;
LABEL_103:
          if ( MiPteInShadowRange((unsigned __int64)a4) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v93 = 1;
              if ( !HIBYTE(word_14043B26C) )
              {
LABEL_108:
                if ( (v86 & 1) != 0 )
LABEL_192:
                  v92 |= 0x8000000000000000uLL;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
            {
              goto LABEL_108;
            }
          }
          goto LABEL_193;
        }
      }
      if ( (unsigned int)MiReferenceCloneProto(v123, v89, i, v90, (__int64)&v126) )
      {
        if ( v126 )
        {
          v86 |= 8uLL;
          v119 = v86;
        }
        goto LABEL_103;
      }
LABEL_99:
      MiWriteUselessChildPte(a4);
      *a15 = 1;
LABEL_195:
      v54 = 0;
      goto LABEL_196;
    }
    v133 = MI_READ_PTE_LOCK_FREE(((a6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v38 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v133) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v40 = *(unsigned __int16 *)(v39 + 174);
    v122 = 0;
    v120 = 0;
    v41 = ZeroPte;
    v125 = v38;
    v43 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((v42 >> 40) & 0x3FF));
    v124 = v43;
    if ( *(struct _KEVENT **)(qword_14043B808 + 8 * v40) != v43 )
    {
      if ( (i & 1) != 0 )
      {
        if ( !(unsigned int)MiChargeCommit((__int64)v43, 1uLL, 0) )
          goto LABEL_99;
        v43 = v124;
        v120 = 1;
      }
      if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v43) )
      {
        MiWriteUselessChildPte(a4);
        v54 = 0;
        *a15 = 1;
        if ( !v120 )
          goto LABEL_196;
        v63 = v124;
        goto LABEL_43;
      }
      v38 = v125;
      v122 = 1;
    }
    if ( (WsleContents & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v38, 3) )
    {
      v130 = 0;
      v64 = v125;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v130, v37, v38);
        while ( *(__int64 *)(v64 + 24) < 0 );
      }
      v65 = 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v64 + 24) ^= (*(_QWORD *)(v64 + 24) ^ (*(_QWORD *)(v64 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v119 & 0x42) != 0 )
      {
        v66 = a10;
        if ( (*(_DWORD *)(a10 + 48) & 7) == 4 && (*(_QWORD *)(v34 + 40) & 0x200000000000000LL) == 0 )
          MiCaptureWriteWatchDirtyBit(a1, v129, a10);
        v131 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v131, v65, v66);
          while ( *(__int64 *)(v34 + 24) < 0 );
        }
        v67 = MiCaptureDirtyBitToPfn(v34);
        v119 &= 0xFFFFFFFFFFFFFFBDuLL;
        v41 = v67;
      }
      else
      {
        v132 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v132, v65, v38);
          while ( *(__int64 *)(v34 + 24) < 0 );
        }
      }
      v68 = (unsigned __int64 *)(v34 + 16);
      v69 = *(_QWORD *)(v34 + 16);
      if ( (v69 & 2) != 0 )
      {
        v70 = *(_QWORD *)(v34 + 16);
        if ( qword_14043B180 && (v69 & 0x10) == 0 )
          v70 = ~qword_14043B180 & v69;
        v41 = MiTransferSoftwarePte(
                *(_QWORD *)(v34 + 16),
                *((_QWORD *)&v124[297].Header.WaitListHead.Flink + ((unsigned __int16)v69 >> 12)),
                HIDWORD(v70));
        *v68 = v69 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *(_QWORD *)(v34 + 8) = a6;
      *(_QWORD *)(v34 + 40) |= 0x200000000000000uLL;
      v71 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v133);
      *(_QWORD *)(v34 + 40) = v72 ^ (v72 ^ (v71 >> 12)) & 0xFFFFFFFFFLL;
      MI_MAKE_PROTECT_WRITE_COPY(v34 + 16);
      v125 = *v68 >> 5;
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v73 = v124;
      if ( v41 )
        MiReleasePageFileInfo(v124, v41, 1);
      v74 = v119;
      if ( (v119 & 0x800) != 0 )
      {
        v74 = v119 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
        v119 = v74;
      }
      MiWriteValidPteNewProtection(a3, v74);
      MiInsertTbFlushEntry((__int64)a9, v129, 1LL, 0);
      *(_QWORD *)a6 = 0LL;
      if ( MiPteInShadowRange(a6) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v75 = 1;
          if ( !HIBYTE(word_14043B26C) )
            goto LABEL_72;
        }
        else
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
LABEL_72:
            if ( (v74 & 1) != 0 )
              v74 |= 0x8000000000000000uLL;
          }
        }
      }
      *(_QWORD *)a6 = v74;
      if ( v75 )
        MiWritePteShadow(a6, v74);
      v77 = v129;
      *(_QWORD *)(a6 + 8) = v122;
      *(_QWORD *)(a6 + 24) = 2LL;
      MiSetWsleProtection((__int64)Process, v77);
      v78 = MiSwizzleInvalidPte((*(_QWORD *)(v34 + 8) << 16) | 0x400LL);
      v119 = v78;
      if ( (i & 1) != 0 )
      {
        v79 = v120 == 0;
        *(_QWORD *)(a6 + 16) = 1LL;
        v119 = v78 | 8;
        if ( v79 )
          ++a14[1];
        else
          ++*a14;
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v73[325].Header.WaitListHead.Blink, 1uLL);
        v80 = *(_QWORD *)(a6 + 16);
      }
      else
      {
        *(_QWORD *)(a6 + 16) = 0LL;
        v80 = 0LL;
      }
      *(_QWORD *)(a6 + 16) = v80 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v125 << 59);
      if ( MiPteInShadowRange((unsigned __int64)a4) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v82 = 1;
          if ( !HIBYTE(word_14043B26C) )
            goto LABEL_87;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
LABEL_87:
          if ( (v83 & 1) != 0 )
            v81 |= 0x8000000000000000uLL;
        }
      }
      *a4 = v81;
      if ( v82 )
        MiWritePteShadow((__int64)a4, v81);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      MiUpdateWorkingSetPrivateSize(v128, v77, -1LL, 0);
LABEL_92:
      v54 = 1;
      goto LABEL_196;
    }
    v44 = v124;
    if ( v122 == 1 )
      MiReturnCrossPartitionCloneCharges(v124);
    if ( v120 )
      MiReturnCommit((__int64)v44, 1uLL);
    v29 = a15;
    LODWORD(v18) = v139;
    v31 = a13;
    v17 = a3;
    v120 = 1;
LABEL_32:
    v28 = v123;
    v30 = 1;
  }
  if ( (v20 & 0x400) != 0 )
  {
    v114 = v20;
    if ( MI_PROTO_FORMAT_COMBINED(v20) )
    {
      if ( !(unsigned int)MiIncrementCombinedPte(v116, v117) )
      {
LABEL_181:
        MiWriteUselessChildPte(a4);
        *v29 = 1;
        goto LABEL_195;
      }
    }
    else
    {
      if ( !(unsigned int)MiReferenceCloneProto(v123, v117, v115, v118, (__int64)&v126) )
        goto LABEL_181;
      if ( v126 && *(_QWORD *)(v126 + 16) >> 59 != 24 )
      {
        v114 = v20 | 8;
        v119 = v20 | 8;
      }
    }
    if ( MiPteInShadowRange((unsigned __int64)a4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v93 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_193;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
      {
        goto LABEL_193;
      }
      if ( (v114 & 1) != 0 )
        goto LABEL_192;
    }
LABEL_193:
    *a4 = v92;
    if ( v93 )
      MiWritePteShadow((__int64)a4, v92);
    goto LABEL_195;
  }
  if ( (v20 & 0x800) != 0 )
  {
    v53 = MiHandleForkTransitionPte(
            a1,
            v18,
            v17,
            (_DWORD)a4,
            a6,
            (__int64)a7,
            (__int64)a9,
            (__int64)&Page,
            v26,
            a13,
            v32,
            (__int64)v29);
    if ( v53 )
    {
      v54 = v53 != 1;
      goto LABEL_196;
    }
    v31 = a13;
    goto LABEL_32;
  }
  v54 = 0;
  v125 = (v20 >> 5) & 0x1F;
  if ( !IS_PTE_NOT_DEMAND_ZERO(v20) )
  {
    if ( (v20 & 2) != 0 )
    {
      v20 &= ~2uLL;
      v119 = v20;
    }
    if ( a5 )
    {
      v112 = ((__int64 (*)(void))MiFindZeroCloneBlock)();
      v113 = v112;
    }
    else
    {
      v112 = 0LL;
      v113 = 0LL;
    }
    v126 = v112;
    if ( v113 )
    {
      MiWriteSharedDemandZeroPte(v18, v55, v112, (_DWORD)a4, v58);
      goto LABEL_196;
    }
LABEL_163:
    if ( MiPteInShadowRange((unsigned __int64)a4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v111 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
LABEL_168:
          if ( (v20 & 1) != 0 )
            v20 |= 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        goto LABEL_168;
      }
    }
    *a4 = v20;
    if ( v111 )
      MiWritePteShadow((__int64)a4, v20);
    goto LABEL_196;
  }
  if ( (_DWORD)v55 == 16 )
  {
    if ( (v20 & 2) != 0 )
    {
      v20 &= ~2uLL;
      v119 = v20;
    }
    goto LABEL_163;
  }
  if ( (v55 & 0xFFFFFFF8) == 0x10 )
  {
    MiFlushTbList(a9, v55, v56, v57);
    v59 = v128;
    MiUnlockWorkingSetExclusive(v128, a13, v60, v61);
    v137[1] = 4096LL;
    v137[0] = (__int64)(a3 << 25) >> 16;
    MiPrefetchVirtualMemory(1uLL, (__int64)v137, v59, 45);
    v62 = MiGetSharedVm(v59);
    v31 = ExAcquireSpinLockExclusive(v62);
    v62[1] = 0;
LABEL_31:
    v17 = a3;
    a13 = v31;
    goto LABEL_32;
  }
  v96 = 0;
  v122 = 0;
  v97 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  if ( *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v57 + 174)) == v97 )
  {
LABEL_121:
    MI_MAKE_PROTECT_WRITE_COPY((unsigned __int64)&v119);
    v98 = v119;
    if ( (v119 & 2) != 0 )
    {
      MiReleasePageFileInfo((struct _KEVENT *)v97, v119 & 0xFFFFFFFFFFFFFFFBuLL, 1);
      v98 &= ~2uLL;
      v119 = v98;
    }
    *(_QWORD *)a6 = 0LL;
    if ( MiPteInShadowRange(a6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v99 = 1;
        if ( HIBYTE(word_14043B26C) != v100 )
          goto LABEL_130;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
      {
        goto LABEL_130;
      }
      if ( (v98 & 1) != 0 )
        v98 |= 0x8000000000000000uLL;
    }
LABEL_130:
    *(_QWORD *)a6 = v98;
    if ( v99 )
      MiWritePteShadow(a6, v98);
    *(_QWORD *)(a6 + 8) = v54;
    *(_QWORD *)(a6 + 24) = 2LL;
    v119 = MiSwizzleInvalidPte((a6 << 16) | 0x400);
    if ( MiPteInShadowRange(a3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v102 = 1;
        if ( HIBYTE(word_14043B26C) != (_BYTE)v104 )
          goto LABEL_139;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
      {
        goto LABEL_139;
      }
      if ( (v105 & 1) != 0 )
        v101 |= 0x8000000000000000uLL;
    }
LABEL_139:
    *v103 = v101;
    if ( v102 )
      MiWritePteShadow((__int64)v103, v101);
    if ( (i & 1) != 0 )
    {
      v106 = v125;
      if ( (_DWORD)v125 != 24 )
        v119 |= 8uLL;
      *(_QWORD *)(a6 + 16) = 1LL;
      if ( v122 == (_DWORD)v104 )
        ++a14[1];
      else
        ++*a14;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v97 + 7816), 1uLL);
      v107 = *(_QWORD *)(a6 + 16);
    }
    else
    {
      if ( v54 )
        *(_QWORD *)(a6 + 8) = 1LL;
      v106 = v125;
      v107 = v104;
      *(_QWORD *)(a6 + 16) = v104;
    }
    *(_QWORD *)(a6 + 16) = v107 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v106 << 59);
    if ( !MiPteInShadowRange((unsigned __int64)a4) )
      goto LABEL_158;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v109 = 1;
      if ( HIBYTE(word_14043B26C) == v110 )
      {
LABEL_156:
        if ( (v108 & 1) != 0 )
          v108 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      goto LABEL_156;
    }
LABEL_158:
    *a4 = v108;
    if ( v109 )
      MiWritePteShadow((__int64)a4, v108);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
    goto LABEL_92;
  }
  if ( (v56 & 1) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 1454)), 1uLL, 0) )
    {
      MiWriteUselessChildPte(a4);
      *v29 = 1;
      goto LABEL_196;
    }
    v96 = 1;
    v122 = 1;
  }
  if ( (unsigned int)MiGetCrossPartitionCloneCharges(v97) )
  {
    v54 = 1;
    goto LABEL_121;
  }
  MiWriteUselessChildPte(a4);
  *v29 = 1;
  if ( v96 )
  {
    v63 = (struct _KEVENT *)v97;
LABEL_43:
    MiReturnCommit((__int64)v63, 1uLL);
  }
LABEL_196:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x58000000000LL);
  return v54;
}
