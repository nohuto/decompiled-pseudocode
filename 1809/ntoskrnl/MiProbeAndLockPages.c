/*
 * XREFs of MiProbeAndLockPages @ 0x140040CF0
 * Callers:
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     CcZeroDataInCache @ 0x1400E0844 (CcZeroDataInCache.c)
 *     IopProbeAndLockPages @ 0x1400E10EC (IopProbeAndLockPages.c)
 *     CcPrepareMdlWrite @ 0x1400E1AC0 (CcPrepareMdlWrite.c)
 *     MmProbeAndLockPagesPrivate @ 0x14010CE14 (MmProbeAndLockPagesPrivate.c)
 *     CcLockSystemCacheBuffer @ 0x140269D14 (CcLockSystemCacheBuffer.c)
 *     VslpLockMdlForTransfer @ 0x14027C678 (VslpLockMdlForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x14027CC00 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x14027D180 (VslValidateDynamicCodePages.c)
 *     IopProbeAndLockPages_0 @ 0x14027F4D0 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x140285C28 (IopProbeAndLockPages_1.c)
 *     KiOpPatchCode @ 0x14029C7D8 (KiOpPatchCode.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 *     MiGetWorkingSetInfo @ 0x1402BEEB4 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x1402EB6F8 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x1403094CC (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x14030BB70 (VmProbeAndLockPages.c)
 *     MiLockRetpolineStubs @ 0x1409F8180 (MiLockRetpolineStubs.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x140041DD0 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiFaultInProbeAddress @ 0x14009363C (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x14009374C (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140093794 (MiUnlockProbePacketWorkingSet.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiProbePacketContended @ 0x1400964DC (MiProbePacketContended.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiAddMdlTracker @ 0x1402A81CC (MiAddMdlTracker.c)
 *     EtwTraceShouldYieldProcessor @ 0x1403106FC (EtwTraceShouldYieldProcessor.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(__int64 a1, char a2, int a3)
{
  int v3; // r15d
  NTSTATUS v4; // eax
  __int64 i; // rdx
  __int64 v6; // r8
  NTSTATUS v7; // r14d
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 *v10; // rdi
  bool v11; // zf
  unsigned __int64 v12; // rsi
  __int64 *v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rbx
  LONG *v22; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 DpcRequestSummary; // r8
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  unsigned int v27; // ebx
  _KTHREAD *NextThread; // rax
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // rbx
  struct _KPRCB *v33; // rax
  char v34; // cl
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r11
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  __int64 v52; // r9
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rdx
  __int64 v57; // r8
  unsigned __int64 v58; // rcx
  char v59; // cl
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  char v61; // di
  __int64 v62; // rax
  volatile signed __int32 *PageTableLockBuffer; // r8
  int v64; // r9d
  signed __int32 v65; // eax
  volatile signed __int32 v66; // ett
  signed __int32 v67; // edx
  signed __int64 v68; // rdx
  unsigned __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // r8
  signed __int64 v72; // rax
  signed __int64 v73; // rdx
  struct _MDL *v74; // rbx
  _BYTE *v75; // rbx
  __int64 v76; // r9
  unsigned __int64 v77; // r9
  __int64 v78; // rdx
  unsigned __int64 v79; // [rsp+40h] [rbp-C0h] BYREF
  int v80; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v81; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v82; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v83[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v84; // [rsp+70h] [rbp-90h]
  unsigned __int64 v85; // [rsp+78h] [rbp-88h]
  unsigned __int64 v86; // [rsp+80h] [rbp-80h]
  unsigned __int64 v87; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v88; // [rsp+90h] [rbp-70h]
  PMDL MemoryDescriptorList; // [rsp+98h] [rbp-68h]
  int v90; // [rsp+A0h] [rbp-60h]
  unsigned __int8 v91; // [rsp+A4h] [rbp-5Ch]
  __int64 v92; // [rsp+B0h] [rbp-50h]
  int v93; // [rsp+B8h] [rbp-48h]
  __int64 v94; // [rsp+C0h] [rbp-40h]
  __int64 v95; // [rsp+C8h] [rbp-38h]
  __int64 v96; // [rsp+D0h] [rbp-30h]
  PVOID P; // [rsp+D8h] [rbp-28h]
  __int64 v98; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v99; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v100; // [rsp+F8h] [rbp-8h]
  __int64 v101; // [rsp+100h] [rbp+0h]
  int v102; // [rsp+150h] [rbp+50h]
  int v103; // [rsp+168h] [rbp+68h] BYREF

  v3 = 0;
  v102 = 0;
  v4 = MiProbeAndLockPrepare(
         (__int64)v83,
         a1,
         *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44),
         *(_DWORD *)(a1 + 40),
         a2,
         a3,
         1);
  v7 = v4;
  if ( v4 < 0 )
    RtlRaiseStatus(v4);
  v8 = 0xFFFFFFFFFLL;
  v9 = v83[0];
  v10 = (unsigned __int64 *)v84;
  while ( 1 )
  {
    v11 = (v90 & 0x20) == 0;
    *v88 = -1LL;
    if ( v11 )
      break;
    v12 = v99;
    if ( v9 < v99 || v9 > v100 )
      break;
    if ( (v3 & 0x3F) != 0 || !(unsigned int)MiProbePacketContended(v83, i, v6, 0xFFFFFFFFFLL) )
    {
      if ( v101 == -1 )
      {
        v14 = *v10;
        if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v14 & 1) != 0
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 8 * ((v84 >> 3) & 0x1FF));
            v17 = v14 | 0x20;
            if ( (v16 & 0x20) == 0 )
              v17 = *v10;
            v14 = v17;
            if ( (v16 & 0x42) != 0 )
              v14 = v17 | 0x42;
          }
        }
        v81 = v14;
        if ( (unsigned __int64)&v81 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v81 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v14 & 1) != 0
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)&v81 >> 3) & 0x1FF));
            v20 = v14 | 0x20;
            if ( (v19 & 0x20) == 0 )
              v20 = v14;
            v14 = v20;
            if ( (v19 & 0x42) != 0 )
              v14 = v20 | 0x42;
          }
        }
        v98 = (v14 >> 12) & 0xFFFFFFFFFLL;
      }
      else
      {
        v98 = v101 + ((v9 - v12) >> 12);
      }
LABEL_71:
      v7 = MiProbeLockFrame(v83);
      if ( v7 < 0 )
        goto LABEL_74;
      v13 = v88;
      v9 = v83[0] + 4096LL;
      ++v88;
      v10 = (unsigned __int64 *)(v84 + 8);
      v84 += 8LL;
      *v13 = v98;
      v83[0] = v9;
      goto LABEL_73;
    }
LABEL_8:
    MiUnlockProbePacketWorkingSet(v83);
    MiLockProbePacketWorkingSet(v83);
    v10 = (unsigned __int64 *)v84;
    v9 = v83[0];
LABEL_73:
    ++v3;
    v8 = 0xFFFFFFFFFLL;
    v102 = v3;
    if ( (unsigned __int64)v10 > v85 )
      goto LABEL_74;
  }
  if ( (v3 & 0xF) != 0 )
    goto LABEL_64;
  v21 = v94;
  if ( v86 && (unsigned int)MiPageTableLockIsContended(v94, v86) )
    goto LABEL_8;
  v22 = (*(_BYTE *)(v21 + 184) & 7) == 2 ? &dword_14043C7C0 : (LONG *)(v21 + 192);
  if ( (*v22 & 0x40000000) != 0 )
    goto LABEL_8;
  CurrentPrcb = KeGetCurrentPrcb();
  DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) == 0 )
  {
    i = 0LL;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v27 = 2;
      goto LABEL_61;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v27 = 3;
      goto LABEL_61;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v27 = 4;
      goto LABEL_61;
    }
    goto LABEL_54;
  }
  i = 1LL;
  if ( DpcTimeCount <= 7 )
  {
LABEL_54:
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_64;
    if ( (_DWORD)i )
      goto LABEL_56;
    goto LABEL_60;
  }
  if ( CurrentPrcb->QuantumEnd )
  {
    v27 = 1;
    goto LABEL_61;
  }
LABEL_56:
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v27 = 5;
    goto LABEL_61;
  }
  if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
  {
    v27 = 6;
    goto LABEL_61;
  }
LABEL_60:
  _disable();
  v27 = 0;
  CurrentPrcb->DpcWatchdogCount = 0;
  CurrentPrcb->DpcTimeCount = 0;
  KiResetGlobalDpcWatchdogProfiler(CurrentPrcb, i, DpcRequestSummary, v8);
  _enable();
LABEL_61:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v27, DpcWatchdogCount, DpcTimeCount);
  if ( v27 )
    goto LABEL_8;
LABEL_64:
  v29 = MiLockPageLeafPageTable(v83, i);
  v13 = (__int64 *)ZeroPte;
  for ( i = v29; v87 != ZeroPte; i = (unsigned int)MiLockPageLeafPageTable(v83, i) )
  {
    v30 = MiProbeLeafPteAccess(v83, &v103);
    i = (unsigned int)v30;
    if ( v30 < 0 )
      break;
    if ( !v103 )
    {
      v35 = v87;
      if ( (unsigned __int64)&v87 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v87 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v87 & 1) != 0
        && ((v87 & 0x20) == 0 || (v87 & 0x42) == 0) )
      {
        v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 8 * (((unsigned __int64)&v87 >> 3) & 0x1FF));
          if ( (v37 & 0x20) != 0 )
            v35 = v87 | 0x20;
          if ( (v37 & 0x42) != 0 )
            v35 |= 0x42uLL;
        }
        else
        {
          v35 = v87;
        }
      }
      v98 = (v35 >> 12) & 0xFFFFFFFFFLL;
      if ( (v90 & 0xF) == 1 && v93 != 3 )
      {
        v38 = v87;
        v79 = v87;
        if ( (unsigned __int64)&v79 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v79 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v87 & 1) != 0
          && ((v87 & 0x20) == 0 || (v87 & 0x42) == 0) )
        {
          v39 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 8 * (((unsigned __int64)&v79 >> 3) & 0x1FF));
            if ( (v40 & 0x20) != 0 )
              v38 = v87 | 0x20;
            if ( (v40 & 0x42) != 0 )
              v38 |= 0x42uLL;
          }
          else
          {
            v38 = v87;
          }
        }
        if ( (*(_QWORD *)(48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
        {
          v41 = 0LL;
          v42 = v84;
          v79 = v87 & 0xF0FF000000000FFFuLL;
          while ( 1 )
          {
            v42 += 8LL;
            if ( (v42 & 0xFFF) == 0 || v42 > v85 )
              break;
            v43 = *(_QWORD *)v42;
            if ( v42 >= 0xFFFFF6FB7DBED000uLL
              && v42 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v43 & 1) != 0
              && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
            {
              v44 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v44 )
              {
                v45 = *(_QWORD *)(v44 + 8 * ((v42 >> 3) & 0x1FF));
                v46 = v43 | 0x20;
                if ( (v45 & 0x20) == 0 )
                  v46 = *(_QWORD *)v42;
                v43 = v46;
                if ( (v45 & 0x42) != 0 )
                  v43 = v46 | 0x42;
              }
            }
            v82 = v43;
            if ( (v43 & 0xF0FF000000000FFFuLL) != v79 )
              break;
            if ( (unsigned __int64)&v82 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v82 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v43 & 1) != 0
              && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
            {
              v47 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v47 )
              {
                v48 = *(_QWORD *)(v47 + 8 * (((unsigned __int64)&v82 >> 3) & 0x1FF));
                v49 = v43 | 0x20;
                if ( (v48 & 0x20) == 0 )
                  v49 = v43;
                v43 = v49;
                if ( (v48 & 0x42) != 0 )
                  v43 = v49 | 0x42;
              }
            }
            v50 = 48 * ((v43 >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(v50 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
              break;
            v51 = (_QWORD *)qword_14043B248;
            v52 = v50 - 0x58000000000LL;
            if ( qword_14043B248 )
            {
              if ( ((*(_QWORD *)(v52 + 40) >> 54) & 7) == 1 )
              {
                v53 = (__int64)((unsigned __int128)(v50 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
                v54 = (v53 >> 63) + v53;
                if ( qword_14043B248 )
                {
                  do
                  {
                    v55 = v51[3];
                    if ( v54 < v55 )
                    {
                      v51 = (_QWORD *)*v51;
                    }
                    else
                    {
                      if ( v54 - v55 < v51[4] )
                        goto LABEL_159;
                      v51 = (_QWORD *)v51[1];
                    }
                  }
                  while ( v51 );
                }
              }
            }
            v56 = *(_QWORD *)(v52 + 40);
            v57 = (v56 >> 57) & 1;
            if ( (v56 & 0x200000000000000LL) == 0 )
            {
              v58 = (__int64)(*(_QWORD *)(v52 + 8) << 25) >> 16;
              if ( v58 >= 0xFFFFF68000000000uLL && v58 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                v59 = *(_BYTE *)(v52 + 34);
                if ( ((v59 & 0x20) == 0
                   || (*(_QWORD *)(v52 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
                   || *(_WORD *)(v52 + 32) == (_WORD)v57)
                  && (v59 & 8) == 0
                  && ((*(_QWORD *)v52 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
                {
                  break;
                }
              }
            }
            if ( !v93 && (((v56 >> 54) & 7) != 1 && *(_QWORD *)(v52 + 8) >= v93 || v57 && (v90 & 0x10) != 0) )
              break;
            ++v41;
          }
LABEL_159:
          v3 = v102;
          if ( v41 )
          {
            v99 = (__int64)(v84 << 25) >> 16;
            v101 = -1LL;
            v90 |= 0x20u;
            v100 = (v41 << 12) + v99 + 4095;
          }
        }
      }
      goto LABEL_71;
    }
    if ( v103 != 1 )
    {
      v31 = MiFaultInProbeAddress(v83, (unsigned int)v30);
      i = (unsigned int)v31;
      if ( v31 < 0 )
      {
        ++dword_14043B8DC;
        break;
      }
    }
  }
  v7 = i;
  if ( (int)i >= 0 )
    goto LABEL_71;
LABEL_74:
  v32 = v86;
  if ( v86 )
  {
    if ( v86 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v33 = KeGetCurrentPrcb();
      v34 = *(_BYTE *)(v94 + 184) & 7;
      if ( v34 )
      {
        if ( v34 == 7 )
        {
          KxReleaseQueuedSpinLock(&v33->SelfmapLockHandle[1]);
        }
        else
        {
          v11 = v34 == 5;
          SelfmapLockHandle = v33->SelfmapLockHandle;
          if ( !v11 )
            SelfmapLockHandle = &v33->SelfmapLockHandle[3];
          KxReleaseQueuedSpinLock(SelfmapLockHandle);
        }
      }
      else
      {
        KxReleaseQueuedSpinLock(&v33->SelfmapLockHandle[2]);
      }
    }
    else
    {
      v61 = *(_BYTE *)(v94 + 184) & 7;
      if ( v61
        || v86 < 0xFFFFF6FB7DBED000uLL
        || v86 > 0xFFFFF6FB7DBEDFFFuLL
        || (v13 = *(__int64 **)(PsGetCurrentProcess(v13, i) + 1296), (v62 = v13[69]) == 0) )
      {
        if ( v61 && v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v94, v32, &v80);
          v64 = ~(3 << v80);
          v66 = *PageTableLockBuffer;
          v65 = _InterlockedCompareExchange(PageTableLockBuffer, v64 & *PageTableLockBuffer, *PageTableLockBuffer);
          if ( v66 != v65 )
          {
            do
            {
              v67 = v65;
              v65 = _InterlockedCompareExchange(PageTableLockBuffer, v64 & v65, v65);
            }
            while ( v65 != v67 );
          }
        }
        else
        {
          v68 = *(_QWORD *)v32;
          if ( v32 >= 0xFFFFF6FB7DBED000uLL
            && v32 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v13, v68)
            && (v68 & 1) != 0
            && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
          {
            v32 = v86;
            v69 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v69 )
            {
              v70 = *(_QWORD *)(v69 + 8 * ((v86 >> 3) & 0x1FF));
              v71 = v68 | 0x20;
              if ( (v70 & 0x20) == 0 )
                v71 = v68;
              v68 = v71;
              if ( (v70 & 0x42) != 0 )
                v68 = v71 | 0x42;
            }
          }
          v72 = _InterlockedCompareExchange64((volatile signed __int64 *)v32, v68 & 0xCFFFFFFFFFFFFFFFuLL, v68);
          if ( v68 != v72 )
          {
            do
            {
              v73 = v72;
              v72 = _InterlockedCompareExchange64((volatile signed __int64 *)v86, v72 & 0xCFFFFFFFFFFFFFFFuLL, v72);
            }
            while ( v72 != v73 );
          }
        }
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(v62 + 4 * ((v32 >> 3) & 0x1FF));
      }
    }
  }
  MiUnlockWorkingSetShared(v94, v91);
  v74 = MemoryDescriptorList;
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)MemoryDescriptorList);
  if ( v7 < 0 )
  {
    MmUnlockPages(v74);
    ++dword_14043B900;
  }
  v75 = P;
  if ( P )
  {
    v76 = *((unsigned int *)P + 13);
    LODWORD(v76) = v76 & 0x7FFFFFFF;
    v77 = v95 + (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v76);
    v78 = v96;
    *((_DWORD *)P + 13) ^= (v77 ^ *((_DWORD *)P + 13)) & 0x7FFFFFFF;
    v75[34] = v77 >> 31;
    if ( v78 != v95 )
      MiReturnFullProcessCommitment(v92);
    MiUnlockAndDereferenceVad(v75);
  }
  if ( v7 < 0 )
    RtlRaiseStatus(v7);
}
