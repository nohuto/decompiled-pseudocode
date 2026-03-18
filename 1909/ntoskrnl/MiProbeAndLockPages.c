/*
 * XREFs of MiProbeAndLockPages @ 0x1400CBF90
 * Callers:
 *     IopProbeAndLockPages @ 0x1400CBEF0 (IopProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x1400CBF50 (MmProbeAndLockPages.c)
 *     MmProbeAndLockPagesPrivate @ 0x1400FD81C (MmProbeAndLockPagesPrivate.c)
 *     CcZeroDataInCache @ 0x1400FEBC4 (CcZeroDataInCache.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     IopProbeAndLockPages_0 @ 0x140127E30 (IopProbeAndLockPages_0.c)
 *     CcPrepareMdlWrite @ 0x140136D70 (CcPrepareMdlWrite.c)
 *     CcLockSystemCacheBuffer @ 0x14027D2C4 (CcLockSystemCacheBuffer.c)
 *     VslpLockMdlForTransfer @ 0x140290A60 (VslpLockMdlForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140290AEC (VslpLockPagesForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x140291040 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1402916F0 (VslValidateDynamicCodePages.c)
 *     IopProbeAndLockPages_1 @ 0x14029AAD0 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x14029AB30 (IopProbeAndLockPages_2.c)
 *     KiTpWriteSecureBreakpoint @ 0x1402AD8C4 (KiTpWriteSecureBreakpoint.c)
 *     KiOpPatchCode @ 0x1402B3650 (KiOpPatchCode.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CF8F0 (MiPrepareImagePagesForHotPatch.c)
 *     MiGetWorkingSetInfo @ 0x1402D8390 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x140308B04 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x140326770 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1403290B0 (VmProbeAndLockPages.c)
 *     ExInitializeLeapSecondData @ 0x140A0EDE8 (ExInitializeLeapSecondData.c)
 *     MiLockRetpolineStubs @ 0x140A19CC4 (MiLockRetpolineStubs.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiProbePacketContended @ 0x1400CB040 (MiProbePacketContended.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiProbeLockFrame @ 0x1400CC670 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x1400CCA80 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1400CCDA0 (MiProbeLeafPteAccess.c)
 *     MiProbeAndLockPrepare @ 0x1400CD110 (MiProbeAndLockPrepare.c)
 *     MiFaultInProbeAddress @ 0x1400DE680 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x1400DE7AC (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400DE7F4 (MiUnlockProbePacketWorkingSet.c)
 *     MiGetPageTableLockBuffer @ 0x14010027C (MiGetPageTableLockBuffer.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140108A18 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiAddMdlTracker @ 0x1402BF5AC (MiAddMdlTracker.c)
 *     EtwTraceShouldYieldProcessor @ 0x14032DE0C (EtwTraceShouldYieldProcessor.c)
 *     MiReturnFullProcessCommitment @ 0x1405ECF80 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(_DWORD *a1, char a2, int a3)
{
  int v6; // r15d
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  __int64 *v9; // rdi
  unsigned __int64 v10; // rsi
  bool v11; // zf
  unsigned __int64 DpcRequestSummary; // rdx
  __int64 v13; // rdi
  LONG *v14; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // r14d
  int v18; // r8d
  _KTHREAD *NextThread; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rbx
  __int64 v26; // r9
  unsigned __int64 v27; // r9
  __int64 v28; // rcx
  signed __int64 v29; // rdx
  _QWORD *v30; // rcx
  signed __int64 v31; // r10
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rcx
  volatile signed __int64 *v35; // r9
  __int64 v36; // rcx
  char v37; // dl
  signed __int64 v38; // rdx
  signed __int64 v39; // rax
  struct _MDL *v40; // rdi
  char *v41; // rdi
  __int64 v42; // r14
  __int64 v43; // rcx
  unsigned int v44; // esi
  __int64 v45; // r9
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rdx
  int v49; // eax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v51; // rax
  __int64 v52; // r8
  unsigned __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r8
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // r8
  char v59; // dl
  struct _KPRCB *v60; // rax
  char v61; // cl
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  __int64 v63; // rcx
  int *v64; // rdx
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v66; // eax
  int v67; // edx
  signed __int32 v68; // ett
  unsigned __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // r8
  int v72; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v73; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v74[22]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+100h] [rbp+0h] BYREF
  __int64 v76; // [rsp+108h] [rbp+8h] BYREF
  int v77; // [rsp+150h] [rbp+50h]
  int v78; // [rsp+168h] [rbp+68h] BYREF

  memset(v74, 0, 0xA8uLL);
  v6 = 0;
  v77 = 0;
  v7 = MiProbeAndLockPrepare((unsigned int)v74, (_DWORD)a1, a1[8] + a1[11], a1[10], a2, a3, 1);
  v8 = v7;
  if ( v7 < 0 )
    RtlRaiseStatus(v7);
  v9 = (__int64 *)v74[2];
  v10 = v74[0];
  while ( 1 )
  {
    v11 = (v74[8] & 0x20) == 0;
    DpcRequestSummary = 0xFFFFF6FB7DBED7F8uLL;
    *(_QWORD *)v74[6] = -1LL;
    if ( v11 )
      break;
    v42 = v74[18];
    if ( v10 > v74[19] || v10 < v74[18] )
      break;
    if ( (v6 & 0x3F) != 0 || !MiProbePacketContended((__int64)v74) )
    {
      if ( v74[20] == -1LL )
      {
        v43 = *v9;
        if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v43 & 1) != 0
          && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v51 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v74[2] >> 3) & 0x1FFLL));
            v52 = v43 | 0x20;
            if ( (v51 & 0x20) == 0 )
              v52 = *v9;
            v43 = v52;
            if ( (v51 & 0x42) != 0 )
              v43 = v52 | 0x42;
          }
        }
        v75 = v43;
        v74[16] = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v75) >> 12) & 0xFFFFFFFFFLL;
      }
      else
      {
        v74[16] = v74[20] + ((v10 - v42) >> 12);
      }
LABEL_36:
      v8 = MiProbeLockFrame(v74);
      if ( v8 < 0 )
        goto LABEL_39;
      v34 = (_QWORD *)v74[6];
      v10 = v74[0] + 4096LL;
      v74[6] += 8LL;
      v9 = (__int64 *)(v74[2] + 8LL);
      v74[2] += 8LL;
      *v34 = v74[16];
      v74[0] = v10;
      goto LABEL_38;
    }
LABEL_74:
    MiUnlockProbePacketWorkingSet(v74);
    MiLockProbePacketWorkingSet(v74);
    v9 = (__int64 *)v74[2];
    v10 = v74[0];
LABEL_38:
    v77 = ++v6;
    if ( (unsigned __int64)v9 > v74[3] )
      goto LABEL_39;
  }
  if ( (v6 & 0xF) != 0 )
    goto LABEL_14;
  v13 = v74[12];
  if ( v74[4] && (unsigned int)MiPageTableLockIsContended(v74[12], v74[4]) )
    goto LABEL_74;
  v14 = (*(_BYTE *)(v13 + 184) & 7) == 2 ? &dword_140466F00 : (LONG *)(v13 + 192);
  if ( (*v14 & 0x40000000) != 0 )
    goto LABEL_74;
  CurrentPrcb = KeGetCurrentPrcb();
  DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v18 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_13;
    if ( !CurrentPrcb->QuantumEnd )
      goto LABEL_109;
    v44 = 1;
  }
  else
  {
    v18 = 0;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v44 = 2;
      goto LABEL_71;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v44 = 3;
      goto LABEL_71;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v44 = 4;
      goto LABEL_71;
    }
LABEL_13:
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_14;
    if ( !v18 )
    {
LABEL_83:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler(CurrentPrcb);
      _enable();
      v44 = 0;
      goto LABEL_71;
    }
LABEL_109:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v44 = 5;
    }
    else
    {
      if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
        goto LABEL_83;
      v44 = 6;
    }
  }
LABEL_71:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v44, DpcWatchdogCount, DpcTimeCount);
  if ( v44 )
    goto LABEL_74;
LABEL_14:
  for ( LODWORD(v20) = MiLockPageLeafPageTable(v74, DpcRequestSummary);
        v74[5] != ZeroPte;
        LODWORD(v20) = MiLockPageLeafPageTable(v74, v20) )
  {
    v21 = MiProbeLeafPteAccess(v74, &v78);
    v20 = (unsigned int)v21;
    if ( v21 < 0 )
      break;
    if ( !v78 )
    {
      v74[16] = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v74[5]) >> 12) & 0xFFFFFFFFFLL;
      if ( (v74[8] & 0xF) == 1 && LODWORD(v74[11]) != 3 )
      {
        v73 = v74[5];
        if ( (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v73) >> 12) & 0xFFFFFFFFFLL)
                        - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
        {
          v24 = 0LL;
          v25 = v23;
          v73 = v22 & 0xF0FF000000000FFFuLL;
          v26 = v74[2];
          while ( 1 )
          {
            v27 = v26 + 8;
            if ( (v27 & 0xFFF) == 0 || v27 > v74[3] )
              break;
            v28 = *(_QWORD *)v27;
            if ( v27 >= 0xFFFFF6FB7DBED000uLL
              && v27 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v28 & 1) != 0
              && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
            {
              v53 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              if ( v53 )
              {
                v54 = *(_QWORD *)(v53 + 8 * ((v27 >> 3) & 0x1FF));
                v55 = v28 | 0x20;
                if ( (v54 & 0x20) == 0 )
                  v55 = *(_QWORD *)v27;
                v28 = v55;
                if ( (v54 & 0x42) != 0 )
                  v28 = v55 | 0x42;
              }
            }
            v76 = v28;
            if ( (v28 & 0xF0FF000000000FFFuLL) != v73 )
              break;
            v29 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v76) >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(v29 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
              break;
            v30 = (_QWORD *)qword_1404658C8;
            v31 = v29 - 0x58000000000LL;
            if ( qword_1404658C8 )
            {
              if ( ((*(_QWORD *)(v31 + 40) >> 54) & 7) == 1 )
              {
                v56 = (__int64)((unsigned __int128)(v29 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
                v57 = (v56 >> 63) + v56;
                if ( qword_1404658C8 )
                {
                  do
                  {
                    v58 = v30[3];
                    if ( v57 < v58 )
                    {
                      v30 = (_QWORD *)*v30;
                    }
                    else
                    {
                      if ( v57 - v58 < v30[4] )
                        goto LABEL_34;
                      v30 = (_QWORD *)v30[1];
                    }
                  }
                  while ( v30 );
                }
              }
            }
            v32 = *(_QWORD *)(v31 + 40);
            if ( (v32 & 0x200000000000000LL) == 0 )
            {
              v33 = (__int64)(*(_QWORD *)(v31 + 8) << 25) >> 16;
              if ( v33 >= 0xFFFFF68000000000uLL
                && v33 <= 0xFFFFF6FFFFFFFFFFuLL
                && (v32 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
              {
                v59 = *(_BYTE *)(v31 + 34);
                if ( ((v59 & 0x20) == 0 || (*(_QWORD *)(v31 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v31 + 32))
                  && (v59 & 8) == 0
                  && ((*(_QWORD *)v31 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
                {
                  break;
                }
              }
            }
            if ( !v25
              && (((v32 >> 54) & 7) != 1 && *(__int64 *)(v31 + 8) >= 0
               || ((*(_QWORD *)(v31 + 40) >> 57) & 1LL) != 0 && (v74[8] & 0x10) != 0) )
            {
              break;
            }
            ++v24;
          }
LABEL_34:
          v6 = v77;
          if ( v24 )
          {
            v74[18] = (__int64)(v74[2] << 25) >> 16;
            v74[20] = -1LL;
            LODWORD(v74[8]) |= 0x20u;
            v74[19] = (v24 << 12) + v74[18] + 4095LL;
          }
        }
      }
      goto LABEL_36;
    }
    if ( v78 != 1 )
    {
      v49 = MiFaultInProbeAddress(v74, (unsigned int)v21);
      v20 = (unsigned int)v49;
      if ( v49 < 0 )
      {
        ++dword_140465FBC;
        break;
      }
    }
  }
  v8 = v20;
  if ( (int)v20 >= 0 )
    goto LABEL_36;
LABEL_39:
  v35 = (volatile signed __int64 *)v74[4];
  if ( !v74[4] )
    goto LABEL_46;
  if ( v74[4] == 0xFFFFF6FB7DBEDF68uLL )
  {
    v60 = KeGetCurrentPrcb();
    v61 = *(_BYTE *)(v74[12] + 184LL) & 7;
    if ( v61 )
    {
      if ( v61 == 7 )
      {
        SelfmapLockHandle = &v60->SelfmapLockHandle[1];
      }
      else
      {
        v11 = v61 == 5;
        SelfmapLockHandle = v60->SelfmapLockHandle;
        if ( !v11 )
          SelfmapLockHandle = &v60->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &v60->SelfmapLockHandle[2];
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(SelfmapLockHandle);
  }
  else
  {
    v36 = v74[12];
    v37 = *(_BYTE *)(v74[12] + 184LL) & 7;
    if ( !v37 && v74[4] >= 0xFFFFF6FB7DBED000uLL && v74[4] <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v63 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
      if ( v63 )
      {
        v64 = (int *)(v63 + 4 * ((v74[4] >> 3) & 0x1FFLL));
        if ( (*v64 & 0x3FFFFFFF) != 0 )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v63 + 4 * ((v74[4] >> 3) & 0x1FFLL)));
        }
        else
        {
          if ( *v64 >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v64, 0x100uLL, 0LL, 0LL);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v63 + 4 * ((v74[4] >> 3) & 0x1FFLL)));
        }
        goto LABEL_46;
      }
      v36 = v74[12];
      v35 = (volatile signed __int64 *)v74[4];
    }
    if ( v37 && (unsigned __int64)v35 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v35 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v36, v35, &v72);
      v66 = *PageTableLockBuffer;
      v67 = ~(3 << v72);
      do
      {
        v68 = v66;
        v66 = _InterlockedCompareExchange(PageTableLockBuffer, v66 & v67, v66);
      }
      while ( v68 != v66 );
    }
    else
    {
      v38 = *v35;
      if ( (unsigned __int64)v35 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v35 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
          || (v38 & 1) == 0
          || (v38 & 0x20) != 0 && (v38 & 0x42) != 0 )
        {
          v35 = (volatile signed __int64 *)v74[4];
        }
        else
        {
          v35 = (volatile signed __int64 *)v74[4];
          v69 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v69 )
          {
            v70 = *(_QWORD *)(v69 + 8 * ((v74[4] >> 3) & 0x1FFLL));
            v71 = v38 | 0x20;
            if ( (v70 & 0x20) == 0 )
              v71 = v38;
            v38 = v71;
            if ( (v70 & 0x42) != 0 )
              v38 = v71 | 0x42;
          }
        }
      }
      while ( 1 )
      {
        v39 = _InterlockedCompareExchange64(v35, v38 & 0xCFFFFFFFFFFFFFFFuLL, v38);
        v11 = v38 == v39;
        v38 = v39;
        if ( v11 )
          break;
        v35 = (volatile signed __int64 *)v74[4];
      }
    }
  }
LABEL_46:
  MiUnlockWorkingSetShared(v74[12], BYTE4(v74[8]));
  v40 = (struct _MDL *)v74[7];
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(v74[7]);
  if ( v8 < 0 )
  {
    MmUnlockPages(v40);
    ++dword_140465FE0;
  }
  v41 = (char *)v74[15];
  if ( v74[15] )
  {
    v45 = *(unsigned int *)(v74[15] + 52LL);
    LODWORD(v45) = v45 & 0x7FFFFFFF;
    v46 = v74[13] + (((unsigned __int64)*(unsigned __int8 *)(v74[15] + 34LL) << 31) | v45);
    v47 = v74[14];
    *(_DWORD *)(v74[15] + 52LL) ^= (*(_DWORD *)(v74[15] + 52LL) ^ v46) & 0x7FFFFFFF;
    v41[34] = v46 >> 31;
    v48 = v47 - v74[13];
    if ( v48 )
      MiReturnFullProcessCommitment(v74[10], v48);
    MiUnlockAndDereferenceVad(v41);
  }
  if ( v8 < 0 )
    RtlRaiseStatus(v8);
}
