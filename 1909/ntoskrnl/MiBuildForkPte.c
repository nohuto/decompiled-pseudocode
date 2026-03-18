/*
 * XREFs of MiBuildForkPte @ 0x1402E1BC0
 * Callers:
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F890 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiGetWsleProtection @ 0x14005A670 (MiGetWsleProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiIsVadLargePrivate @ 0x1400731FC (MiIsVadLargePrivate.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073EB0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiTransferSoftwarePte @ 0x1400BB884 (MiTransferSoftwarePte.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BFAD4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiPrefetchVirtualMemory @ 0x1400C7FA0 (MiPrefetchVirtualMemory.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400CA9A0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     MiLockPageTablePage @ 0x1400CD620 (MiLockPageTablePage.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14014280C (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1401428B8 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiSetWsleProtection @ 0x1401429F4 (MiSetWsleProtection.c)
 *     MiLockAndInsertPageInFreeList @ 0x140193C2C (MiLockAndInsertPageInFreeList.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3A90 (MiDuplicateCloneLeaf.c)
 *     MiFindZeroCloneBlock @ 0x1402E3E54 (MiFindZeroCloneBlock.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402E414C (MiGetCrossPartitionCloneCharges.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiMakePerSessionProtoPte @ 0x1402E4B34 (MiMakePerSessionProtoPte.c)
 *     MiReferenceCloneProto @ 0x1402E4C2C (MiReferenceCloneProto.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402E4D74 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteSharedDemandZeroPte @ 0x1402E50F4 (MiWriteSharedDemandZeroPte.c)
 *     MiWriteUselessChildPte @ 0x1402E5284 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 *     MiIncrementCombinedPte @ 0x1402E6334 (MiIncrementCombinedPte.c)
 */

_BOOL8 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7,
        __int64 a8,
        int *a9,
        __int64 a10,
        __int64 a11,
        int a12,
        char a13,
        _QWORD *a14,
        _DWORD *a15)
{
  ULONG_PTR v17; // rdi
  __int64 v18; // r13
  unsigned __int64 v19; // rbx
  __int64 ZeroCloneBlock; // rax
  int v21; // ebx
  int v22; // edx
  int v24; // r8d
  __int64 v25; // rax
  _DWORD *v26; // rsi
  int v27; // ecx
  KIRQL v28; // al
  __int64 v29; // r11
  __int64 v30; // rax
  __int64 v31; // r13
  int v32; // r10d
  unsigned __int8 WsleContents; // di
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rsi
  unsigned __int64 v38; // r10
  __int64 v39; // r10
  __int64 v40; // rdi
  signed __int32 v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  LONG *SharedVm; // rbx
  int v50; // eax
  BOOL v51; // edi
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r11
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  LONG *v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rax
  unsigned __int64 *v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rdi
  unsigned __int64 v70; // rbx
  int v71; // edx
  _KPROCESS *Process; // rcx
  unsigned __int64 v73; // rbx
  __int64 v74; // r8
  bool v75; // zf
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  int v78; // r9d
  char v79; // r8
  int WsleProtection; // eax
  __int64 v81; // r10
  __int64 v82; // rbx
  __int64 v83; // r9
  __int64 v84; // r10
  int v85; // r11d
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 PerSessionProtoPte; // rax
  unsigned __int64 v89; // rdx
  int v90; // r9d
  char v91; // r8
  int v92; // ebx
  int v93; // r9d
  int v94; // ebx
  __int64 v95; // r13
  __int64 v96; // rbx
  int v97; // edx
  char v98; // r11
  __int64 v99; // rdx
  int v100; // r9d
  _QWORD *v101; // r10
  __int64 v102; // r11
  char v103; // r8
  unsigned int v104; // edx
  __int64 v105; // rcx
  unsigned __int64 v106; // rdx
  int v107; // r8d
  char v108; // r11
  int v109; // edx
  __int64 v110; // rax
  __int64 v111; // rcx
  int v112; // r8d
  __int64 v113; // r9
  __int64 v114; // r10
  int v115; // r11d
  __int64 v116; // rcx
  __int64 v117; // rax
  char v118; // r8
  __int64 v119; // [rsp+68h] [rbp-89h] BYREF
  int v120; // [rsp+70h] [rbp-81h]
  int i; // [rsp+74h] [rbp-7Dh]
  unsigned int v122; // [rsp+78h] [rbp-79h]
  __int64 v123; // [rsp+80h] [rbp-71h]
  __int64 v124; // [rsp+88h] [rbp-69h]
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
  __int64 v135; // [rsp+D8h] [rbp-19h]
  __int64 v136; // [rsp+E0h] [rbp-11h] BYREF
  __int64 v137; // [rsp+E8h] [rbp-9h]

  v134 = 0LL;
  v135 = 0LL;
  v17 = a3;
  v18 = a2;
  v119 = MI_READ_PTE_LOCK_FREE(a3);
  v19 = v119;
  if ( !v119 )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 7) & 0x1F);
      v21 = ZeroCloneBlock;
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1u);
        MiWriteSharedDemandZeroPte(v18, v22, v21, (_DWORD)a4, (__int64)a14);
      }
    }
    return 0LL;
  }
  MiIncreaseUsedPtesCount(a8, 1u);
  v24 = a12;
  v25 = a1 + 1280;
  v26 = a15;
  v27 = 0;
  v128 = v25;
  v28 = a13;
  Page = -1LL;
  v123 = v18 + 1280;
  v120 = 0;
  for ( i = a12; ; v24 = i )
  {
    v29 = (__int64)a14;
    if ( v27 == 1 )
    {
      MiMakeSystemAddressValid(v17, 0LL, 0, v28, 1);
      v30 = MI_READ_PTE_LOCK_FREE(v17);
      v24 = i;
      v19 = v30;
      v29 = (__int64)a14;
      v119 = v30;
    }
    if ( (v19 & 1) == 0 )
      break;
    v31 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v119) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( v32 == 1 || *(_WORD *)(v31 + 32) > 1u && (*(_QWORD *)(v31 + 40) & 0x200000000000000LL) == 0 )
    {
      MiInitializePageColorBase(v128, 0, (__int64)&v134);
      v41 = _InterlockedExchangeAdd(v134, 1u);
      v42 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(v123 + 174));
      v124 = v42;
      if ( Page != -1 || (Page = MiGetPage(v42, HIDWORD(v135) | v41 & (unsigned int)v135, 0LL), Page != -1) )
      {
        v92 = Page;
        MiFinalizePageAttribute(48 * Page - 0x58000000000LL, *(unsigned __int8 *)(v31 + 34) >> 6, 0);
        LOBYTE(v93) = a13;
        MiDuplicateCloneLeaf(v17, (_DWORD)a4, v92, v93, 17);
        ++*a7;
        return 0LL;
      }
      MiFlushTbList(a9, v43, v44, v45);
      LOBYTE(v46) = a13;
      MiUnlockWorkingSetExclusive(v128, v46, v47, v48);
      MiWaitForFreePage(v124);
      SharedVm = MiGetSharedVm(v128);
      v28 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v19 = v119;
      v18 = a2;
      goto LABEL_31;
    }
    v129 = (__int64)(v17 << 25) >> 16;
    WsleContents = MiGetWsleContents(v129, v129);
    if ( (*(_QWORD *)(v31 + 40) & 0x200000000000000LL) != 0 )
    {
      WsleProtection = MiGetWsleProtection(v129, WsleContents);
      if ( WsleProtection )
      {
        v82 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
        v119 = v82;
        goto LABEL_98;
      }
      v86 = MiSwizzleInvalidPte((v81 << 16) | 0x400);
      v119 = v86;
      v82 = v86;
      if ( v83 >= 0 )
      {
        v82 = v86 | 0x800;
        v119 = v86 | 0x800;
LABEL_98:
        if ( v83 >= 0 )
        {
          if ( (unsigned int)MiIncrementCombinedPte(v123, v84) )
            goto LABEL_109;
LABEL_41:
          MiWriteUselessChildPte(a4);
          *a15 = 1;
LABEL_207:
          v51 = 0;
          goto LABEL_208;
        }
      }
      if ( !(unsigned int)MiReferenceCloneProto(v123, v84, i, v85, (__int64)&v126) )
        goto LABEL_41;
      if ( v126 )
      {
        v119 = v82 | 8;
      }
      else if ( !MiIsPrototypePteVadLookup(*(_QWORD *)(v31 + 16))
             && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20
             && !MiIsVadLargePrivate(a10) )
      {
        PerSessionProtoPte = MiMakePerSessionProtoPte(a1, a2, a3, v87);
        if ( PerSessionProtoPte )
          v119 = PerSessionProtoPte;
      }
LABEL_109:
      if ( MiPteInShadowRange((unsigned __int64)a4) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v90 = 1;
          if ( !HIBYTE(word_1404658EC) )
          {
LABEL_114:
            if ( (v91 & 1) != 0 )
LABEL_204:
              v89 |= 0x8000000000000000uLL;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          goto LABEL_114;
        }
      }
      goto LABEL_205;
    }
    v133 = MI_READ_PTE_LOCK_FREE(((a6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v34 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v133) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v36 = *(unsigned __int16 *)(v35 + 174);
    v122 = 0;
    v120 = 0;
    v37 = ZeroPte;
    v124 = v34;
    v39 = *(_QWORD *)(qword_140465E88 + 8 * ((v38 >> 40) & 0x3FF));
    v125 = v39;
    if ( *(_QWORD *)(qword_140465E88 + 8 * v36) != v39 )
    {
      if ( (i & 1) != 0 )
      {
        if ( !(unsigned int)MiChargeCommit(v39, 1uLL, 0) )
          goto LABEL_41;
        v39 = v125;
        v120 = 1;
      }
      if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v39) )
      {
        MiWriteUselessChildPte(a4);
        v51 = 0;
        *a15 = 1;
        if ( !v120 )
          goto LABEL_208;
        v61 = v125;
        goto LABEL_44;
      }
      v34 = v124;
      v122 = 1;
    }
    if ( (WsleContents & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v34, 3) )
    {
      v130 = 0;
      v62 = v124;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v130);
        while ( *(__int64 *)(v62 + 24) < 0 );
      }
      *(_QWORD *)(v62 + 24) ^= (*(_QWORD *)(v62 + 24) ^ (*(_QWORD *)(v62 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v119 & 0x42) != 0 )
      {
        if ( (*(_DWORD *)(a10 + 48) & 0x300000) == 0x300000 && (*(_QWORD *)(v31 + 40) & 0x200000000000000LL) == 0 )
          MiCaptureWriteWatchDirtyBit(a1, v129, a10);
        v131 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v131);
          while ( *(__int64 *)(v31 + 24) < 0 );
        }
        v63 = MiCaptureDirtyBitToPfn(v31);
        v119 &= 0xFFFFFFFFFFFFFFBDuLL;
        v37 = v63;
      }
      else
      {
        v132 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v132);
          while ( *(__int64 *)(v31 + 24) < 0 );
        }
      }
      v64 = (unsigned __int64 *)(v31 + 16);
      v65 = *(_QWORD *)(v31 + 16);
      if ( (v65 & 2) != 0 )
      {
        v66 = *(_QWORD *)(v31 + 16);
        if ( qword_140465800 && (v65 & 0x10) == 0 )
          v66 = ~qword_140465800 & v65;
        v37 = MiTransferSoftwarePte(
                *(_QWORD *)(v31 + 16),
                *(_QWORD *)(v125 + 8LL * ((unsigned __int16)v65 >> 12) + 7904),
                HIDWORD(v66));
        *v64 = v65 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *(_QWORD *)(v31 + 8) = a6;
      *(_QWORD *)(v31 + 40) |= 0x200000000000000uLL;
      v67 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v133);
      *(_QWORD *)(v31 + 40) = v68 ^ (v68 ^ (v67 >> 12)) & 0xFFFFFFFFFLL;
      MI_MAKE_PROTECT_WRITE_COPY(v31 + 16);
      v124 = *v64 >> 5;
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v69 = v125;
      if ( v37 )
        MiReleasePageFileInfo(v125, v37, 1);
      v70 = v119;
      if ( (v119 & 0x800) != 0 )
      {
        v70 = v119 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
        v119 = v70;
      }
      MiWriteValidPteNewProtection(a3);
      MiInsertTbFlushEntry((__int64)a9, v129, 1LL, 0);
      *(_QWORD *)a6 = 0LL;
      if ( MiPteInShadowRange(a6) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v71 = 1;
          if ( !HIBYTE(word_1404658EC) )
            goto LABEL_73;
        }
        else
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
LABEL_73:
            if ( (v70 & 1) != 0 )
              v70 |= 0x8000000000000000uLL;
          }
        }
      }
      *(_QWORD *)a6 = v70;
      if ( v71 )
        MiWritePteShadow(a6);
      v73 = v129;
      *(_QWORD *)(a6 + 8) = v122;
      *(_QWORD *)(a6 + 24) = 2LL;
      MiSetWsleProtection((__int64)Process, v73);
      v74 = MiSwizzleInvalidPte((*(_QWORD *)(v31 + 8) << 16) | 0x400LL);
      v119 = v74;
      if ( (i & 1) != 0 )
      {
        v75 = v120 == 0;
        *(_QWORD *)(a6 + 16) = 1LL;
        v119 = v74 | 8;
        if ( v75 )
          ++a14[1];
        else
          ++*a14;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 8584), 1uLL);
        v76 = *(_QWORD *)(a6 + 16);
      }
      else
      {
        v76 = 0LL;
      }
      *(_QWORD *)(a6 + 16) = v76 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v124 << 59);
      if ( MiPteInShadowRange((unsigned __int64)a4) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v78 = 1;
          if ( !HIBYTE(word_1404658EC) )
            goto LABEL_88;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
LABEL_88:
          if ( (v79 & 1) != 0 )
            v77 |= 0x8000000000000000uLL;
        }
      }
      *a4 = v77;
      if ( v78 )
        MiWritePteShadow((__int64)a4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 928), 0xFFFFFFFFFFFFFFFFuLL);
      MiUpdateWorkingSetPrivateSize(v128, v73, -1LL, 0);
LABEL_93:
      v51 = 1;
      goto LABEL_208;
    }
    v40 = v125;
    if ( v122 == 1 )
      MiReturnCrossPartitionCloneCharges(v125);
    if ( v120 )
      MiReturnCommit(v40, 1uLL);
    v26 = a15;
    v18 = a2;
    v17 = a3;
    v28 = a13;
    v120 = 1;
LABEL_32:
    v27 = 1;
  }
  if ( (v19 & 0x400) != 0 )
  {
    if ( MI_PROTO_FORMAT_COMBINED(v19) )
    {
      if ( !(unsigned int)MiIncrementCombinedPte(v113, v114) )
      {
LABEL_187:
        MiWriteUselessChildPte(a4);
        *v26 = 1;
        goto LABEL_207;
      }
    }
    else
    {
      if ( !(unsigned int)MiReferenceCloneProto(v123, v114, v112, v115, (__int64)&v126) )
        goto LABEL_187;
      if ( v126 )
      {
        if ( *(_QWORD *)(v126 + 16) >> 59 != 24 )
          v119 = v19 | 8;
      }
      else if ( !MiIsPrototypePteVadLookup(v19) && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20 && !MiIsVadLargePrivate(a10) )
      {
        v117 = MiMakePerSessionProtoPte(a1, v18, a3, v116);
        if ( v117 )
          v119 = v117;
      }
    }
    if ( !MiPteInShadowRange((unsigned __int64)a4) )
      goto LABEL_205;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v90 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_205;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_205;
    }
    if ( (v118 & 1) != 0 )
      goto LABEL_204;
LABEL_205:
    *a4 = v89;
    if ( v90 )
      MiWritePteShadow((__int64)a4);
    goto LABEL_207;
  }
  if ( (v19 & 0x800) != 0 )
  {
    v50 = MiHandleForkTransitionPte(
            a1,
            v18,
            v17,
            (_DWORD)a4,
            a6,
            (__int64)a7,
            (__int64)a9,
            (__int64)&Page,
            v24,
            a13,
            v29,
            (__int64)v26);
    if ( v50 )
    {
      v51 = v50 != 1;
      goto LABEL_208;
    }
    v28 = a13;
    goto LABEL_32;
  }
  v51 = 0;
  v124 = (v19 >> 5) & 0x1F;
  if ( !IS_PTE_NOT_DEMAND_ZERO(v19) )
  {
    if ( (v19 & 2) != 0 )
    {
      v19 &= ~2uLL;
      v119 = v19;
    }
    if ( a5 )
    {
      v110 = ((__int64 (*)(void))MiFindZeroCloneBlock)();
      v111 = v110;
    }
    else
    {
      v110 = 0LL;
      v111 = 0LL;
    }
    v126 = v110;
    if ( v111 )
    {
      MiWriteSharedDemandZeroPte(v18, v52, v110, (_DWORD)a4, v55);
      goto LABEL_208;
    }
LABEL_169:
    if ( MiPteInShadowRange((unsigned __int64)a4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v109 = 1;
        if ( !HIBYTE(word_1404658EC) )
        {
LABEL_174:
          if ( (v19 & 1) != 0 )
            v19 |= 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        goto LABEL_174;
      }
    }
    *a4 = v19;
    if ( v109 )
      MiWritePteShadow((__int64)a4);
    goto LABEL_208;
  }
  if ( (_DWORD)v52 == 16 )
  {
    if ( (v19 & 2) != 0 )
    {
      v19 &= ~2uLL;
      v119 = v19;
    }
    goto LABEL_169;
  }
  if ( (v52 & 0xFFFFFFF8) == 0x10 )
  {
    v136 = 0LL;
    v137 = 0LL;
    MiFlushTbList(a9, v52, v53, v54);
    v56 = v128;
    LOBYTE(v57) = a13;
    MiUnlockWorkingSetExclusive(v128, v57, v58, v59);
    v137 = 4096LL;
    v136 = (__int64)(a3 << 25) >> 16;
    MiPrefetchVirtualMemory(1uLL, (__int64)&v136, v56, 45);
    v60 = MiGetSharedVm(v56);
    v28 = ExAcquireSpinLockExclusive(v60);
    v60[1] = 0;
    v17 = a3;
LABEL_31:
    a13 = v28;
    goto LABEL_32;
  }
  v94 = 0;
  v122 = 0;
  v95 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  if ( *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(v54 + 174)) == v95 )
  {
LABEL_127:
    MI_MAKE_PROTECT_WRITE_COPY((unsigned __int64)&v119);
    v96 = v119;
    if ( (v119 & 2) != 0 )
    {
      MiReleasePageFileInfo(v95, v119 & 0xFFFFFFFFFFFFFFFBuLL, 1);
      v96 &= ~2uLL;
      v119 = v96;
    }
    *(_QWORD *)a6 = 0LL;
    if ( MiPteInShadowRange(a6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v97 = 1;
        if ( HIBYTE(word_1404658EC) != v98 )
          goto LABEL_136;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      {
        goto LABEL_136;
      }
      if ( (v96 & 1) != 0 )
        v96 |= 0x8000000000000000uLL;
    }
LABEL_136:
    *(_QWORD *)a6 = v96;
    if ( v97 )
      MiWritePteShadow(a6);
    *(_QWORD *)(a6 + 8) = v51;
    *(_QWORD *)(a6 + 24) = 2LL;
    v119 = MiSwizzleInvalidPte((a6 << 16) | 0x400);
    if ( MiPteInShadowRange(a3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v100 = 1;
        if ( HIBYTE(word_1404658EC) != (_BYTE)v102 )
          goto LABEL_145;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      {
        goto LABEL_145;
      }
      if ( (v103 & 1) != 0 )
        v99 |= 0x8000000000000000uLL;
    }
LABEL_145:
    *v101 = v99;
    if ( v100 )
      MiWritePteShadow((__int64)v101);
    if ( (i & 1) != 0 )
    {
      v104 = v124;
      if ( (_DWORD)v124 != 24 )
        v119 |= 8uLL;
      *(_QWORD *)(a6 + 16) = 1LL;
      if ( v122 == (_DWORD)v102 )
        ++a14[1];
      else
        ++*a14;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v95 + 8584), 1uLL);
      v105 = *(_QWORD *)(a6 + 16);
    }
    else
    {
      if ( v51 )
        *(_QWORD *)(a6 + 8) = 1LL;
      v104 = v124;
      v105 = v102;
      *(_QWORD *)(a6 + 16) = v102;
    }
    *(_QWORD *)(a6 + 16) = v105 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v104 << 59);
    if ( !MiPteInShadowRange((unsigned __int64)a4) )
      goto LABEL_164;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v107 = 1;
      if ( HIBYTE(word_1404658EC) == v108 )
      {
LABEL_162:
        if ( (v106 & 1) != 0 )
          v106 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      goto LABEL_162;
    }
LABEL_164:
    *a4 = v106;
    if ( v107 )
      MiWritePteShadow((__int64)a4);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 928), 0xFFFFFFFFFFFFFFFFuLL);
    goto LABEL_93;
  }
  if ( (v53 & 1) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 1454)), 1uLL, 0) )
    {
      MiWriteUselessChildPte(a4);
      *v26 = 1;
      goto LABEL_208;
    }
    v94 = 1;
    v122 = 1;
  }
  if ( (unsigned int)MiGetCrossPartitionCloneCharges(v95) )
  {
    v51 = 1;
    goto LABEL_127;
  }
  MiWriteUselessChildPte(a4);
  *v26 = 1;
  if ( v94 )
  {
    v61 = v95;
LABEL_44:
    MiReturnCommit(v61, 1uLL);
  }
LABEL_208:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x58000000000LL);
  return v51;
}
