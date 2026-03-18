/*
 * XREFs of MiFlushTbList @ 0x14004FFE0
 * Callers:
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiFlushTbAsNeeded @ 0x140021F90 (MiFlushTbAsNeeded.c)
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x140024E30 (MiWsleFlush.c)
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 *     MiZeroPage @ 0x140029010 (MiZeroPage.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002E6A0 (MiSetReadOnlyOnSectionView.c)
 *     MiGetNextPageTablePte @ 0x14004A9F0 (MiGetNextPageTablePte.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x14004CF70 (MiAgePteWorker.c)
 *     MiTerminateWsleCluster @ 0x14004E000 (MiTerminateWsleCluster.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MmMapViewInSystemCache @ 0x140074B60 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140076500 (MiObtainSystemCacheView.c)
 *     MiCreateSystemPageTable @ 0x1400A3390 (MiCreateSystemPageTable.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MmOutPageKernelStack @ 0x1400E3478 (MmOutPageKernelStack.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400EC148 (MiFlushDirtyBitsToPfn.c)
 *     MiReplenishBitMap @ 0x1400F29A0 (MiReplenishBitMap.c)
 *     MiFlushTbListEarly @ 0x1400F31E0 (MiFlushTbListEarly.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400F661C (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiReplaceRotateWithDemandZero @ 0x140116764 (MiReplaceRotateWithDemandZero.c)
 *     MmUnmapIoSpace @ 0x140117010 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x140117198 (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x140119504 (MiZeroPageWorkMapping.c)
 *     MiReplacePageTablePage @ 0x140121430 (MiReplacePageTablePage.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiDeleteSystemPageTableTail @ 0x1401254A0 (MiDeleteSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x140126F50 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x14012D3B0 (MiCreateSystemPageTableTail.c)
 *     MmSetPageProtection @ 0x14012E5D0 (MmSetPageProtection.c)
 *     MiDeleteNonPagedPoolTail @ 0x140130BC0 (MiDeleteNonPagedPoolTail.c)
 *     MiGetPteFromCopyList @ 0x1401379BC (MiGetPteFromCopyList.c)
 *     MmRemoveExecuteGrants @ 0x14013B904 (MmRemoveExecuteGrants.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiDecommitLargePoolVa @ 0x1401464F0 (MiDecommitLargePoolVa.c)
 *     MmMapMemoryDumpMdlEx @ 0x14015F264 (MmMapMemoryDumpMdlEx.c)
 *     MiFlushValidPteFromTb @ 0x140173EF4 (MiFlushValidPteFromTb.c)
 *     MiResetAccessBitPte @ 0x140177CF0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x1401791A0 (MiResetAccessBitsTail.c)
 *     MiFlushHyperSpace @ 0x14017E198 (MiFlushHyperSpace.c)
 *     MiUnmapRetpolineStubs @ 0x14017FF6C (MiUnmapRetpolineStubs.c)
 *     MiReplacePfnWithGapMapping @ 0x140186434 (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x140186864 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186948 (MiDemoteValidLargePageOneLevel.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 *     MiReplicatePfnDatabaseMappings @ 0x1402BE6B0 (MiReplicatePfnDatabaseMappings.c)
 *     MiUnmapMdlCommon @ 0x1402C0C64 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402C15B0 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     MiSimpleAgeWorkingSetTail @ 0x1402C8F80 (MiSimpleAgeWorkingSetTail.c)
 *     MiLargePageFault @ 0x1402D2D08 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1402D46A0 (MiFlushEnclaveTb.c)
 *     MiDeleteAwePageTable @ 0x1402D5948 (MiDeleteAwePageTable.c)
 *     MiFreePhysicalPages @ 0x1402D6018 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiFlushKernelCfgBitmap @ 0x1402DD670 (MiFlushKernelCfgBitmap.c)
 *     MiReleaseLargePteMappings @ 0x1402DDC3C (MiReleaseLargePteMappings.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x1402EC568 (MiScrubLargeMappedPage.c)
 *     MiClearDriverHotPatchPtes @ 0x14088DD78 (MiClearDriverHotPatchPtes.c)
 *     MmDeleteShadowMapping @ 0x140892B78 (MmDeleteShadowMapping.c)
 *     MiMarkBootKernelStack @ 0x1409EE278 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x1409EF614 (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x1409EF93C (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x1409EFB3C (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x1409FD9F8 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140A0F138 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A228C0 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     KiIpiSendRequest @ 0x1400B9DD0 (KiIpiSendRequest.c)
 *     KiFlushRangeWorker @ 0x1400FE570 (KiFlushRangeWorker.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1401251F8 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KeFlushCurrentTbOnly @ 0x14017A1B0 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A27C (KeFlushMultipleRangeCurrentTb.c)
 *     KiFlushRangeTb @ 0x14017A358 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     HvlFlushRangeListTb @ 0x14028D990 (HvlFlushRangeListTb.c)
 *     KiFlushAffinity @ 0x1402AA7B8 (KiFlushAffinity.c)
 *     KiPrepareFlushParameters @ 0x1402AA888 (KiPrepareFlushParameters.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     VmFlushTb @ 0x1403293DC (VmFlushTb.c)
 *     ExFlushTb @ 0x14033C588 (ExFlushTb.c)
 */

void __fastcall MiFlushTbList(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  char v6; // cl
  unsigned __int64 v7; // rdx
  unsigned int v8; // r12d
  _KPROCESS *Process; // rax
  unsigned __int64 SecureHandle; // rax
  unsigned int v11; // r13d
  _QWORD *v12; // r14
  char v13; // bp
  char v14; // bl
  unsigned __int8 v15; // r14
  struct _KPRCB *v16; // rbp
  _KTHREAD *CurrentThread; // rax
  _KPROCESS *v18; // rdx
  unsigned __int16 Count; // r8
  _QWORD *v20; // r11
  __int64 v21; // rcx
  __int64 *v22; // rdx
  __int64 v23; // rcx
  int v24; // r10d
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // ebx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v32; // rcx
  __int64 v33; // rbp
  _QWORD *v34; // r15
  struct _KPRCB *v35; // rcx
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned __int8 v38; // r10
  struct _KPRCB *v39; // rcx
  unsigned __int8 v40; // bl
  struct _KPRCB *v41; // rcx
  signed __int32 v42[8]; // [rsp+0h] [rbp-148h] BYREF
  char v43[4]; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-104h]
  _QWORD *v45; // [rsp+48h] [rbp-100h] BYREF
  unsigned int v46; // [rsp+50h] [rbp-F8h]
  unsigned int v47; // [rsp+54h] [rbp-F4h]
  __int64 v48; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD v49[22]; // [rsp+60h] [rbp-E8h] BYREF

  v4 = a1[3];
  v44 = v4;
  if ( v4 )
  {
    v6 = *((_BYTE *)a1 + 4);
    v7 = qword_140465B50;
    if ( (v6 & 2) == 0 )
    {
      v8 = *a1;
      if ( *a1 != 1 )
        goto LABEL_52;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors.Bitmap[19] )
        goto LABEL_57;
      SecureHandle = Process->SecureState.SecureHandle;
      if ( SecureHandle )
        LOBYTE(SecureHandle) = 1;
      if ( (_BYTE)SecureHandle )
LABEL_57:
        v7 = -1LL;
    }
    v8 = *a1;
    if ( *a1 == 1 )
    {
      v11 = 0;
LABEL_10:
      if ( *((_BYTE *)a1 + 5) || *((_QWORD *)a1 + 2) > v7 )
      {
        if ( (v6 & 1) != 0 )
          KeFlushCurrentTbOnly(v8, v7, a3, a4);
        else
          KeFlushTb(v8, v11);
        *((_BYTE *)a1 + 5) = 0;
      }
      else
      {
        v12 = a1 + 6;
        if ( (v6 & 1) == 0 )
        {
          v13 = 0;
          if ( (HvlEnlightenments & 4) != 0 )
          {
            if ( (HvlEnlightenments & 2) != 0 )
            {
              v14 = 1;
            }
            else if ( (KiFlushPcid & 3) == 1 )
            {
              v14 = 1;
            }
            else if ( (_DWORD)KeNumberProcessors_0 == 1 )
            {
              v14 = 0;
            }
            else if ( v11 )
            {
              v14 = 1;
            }
            else
            {
              _InterlockedOr(v42, 0);
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(0xCuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
                _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
              CurrentPrcb = KeGetCurrentPrcb();
              if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                                   CurrentPrcb,
                                   &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors) )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                {
                  v32 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v32);
                }
                v14 = 1;
              }
              else
              {
                v14 = 0;
                v33 = v44;
                v34 = a1 + 6;
                do
                {
                  KiFlushRangeTb(*v34++, v8);
                  --v33;
                }
                while ( v33 );
                v4 = v44;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                {
                  v35 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v35);
                }
                v13 = 1;
              }
              v36 = CurrentIrql;
              v12 = a1 + 6;
              __writecr8(v36);
            }
          }
          else
          {
            v14 = 0;
          }
          if ( v8 == 1 && *v12 <= 0x7FFFFFFEFFFFuLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle
            || v14 )
          {
            KiPrepareFlushParameters(v8, &v48, v43);
            v37 = KiFlushAffinity(v11);
            v13 |= HvlFlushRangeListTb(v48, v37, (unsigned __int8)v43[0], v38, v14, v4, (__int64)v12);
          }
          if ( v13 )
            goto LABEL_32;
          memset(v49, 0, 0xA8uLL);
          v45 = v12;
          v46 = v4;
          v47 = v8;
          v15 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v16 = KeGetCurrentPrcb();
          if ( v11 )
          {
            v24 = 1;
            LODWORD(v20) = 0;
            if ( (unsigned int)KeNumberProcessors_0 > 1 )
            {
LABEL_45:
              v27 = 2147483652LL;
              if ( v11 != 1 )
                v27 = 4LL;
              KiIpiSendRequest((_DWORD)v16, v24, (_DWORD)v20, (unsigned int)&v45, v27);
              KiFlushRangeWorker(&v45);
              v29 = 0;
              while ( v16->PacketBarrier )
              {
                if ( (++v29 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28) )
                {
                  HvlNotifyLongSpinWait(v29);
                }
                else
                {
                  _mm_pause();
                }
              }
              goto LABEL_30;
            }
          }
          else
          {
            _InterlockedOr(v42, 0);
            CurrentThread = v16->CurrentThread;
            HIDWORD(v49[0]) = 0;
            v18 = CurrentThread->ApcState.Process;
            Count = v18->ActiveProcessors.Count;
            LOWORD(CurrentThread) = v18->ActiveProcessors.Size;
            LOWORD(v49[0]) = Count;
            WORD1(v49[0]) = (_WORD)CurrentThread;
            if ( Count )
            {
              memmove(&v49[1], v18->ActiveProcessors.Bitmap, 8LL * Count);
              Count = v49[0];
            }
            v20 = v49;
            v21 = (unsigned int)KiProcessorIndexToNumberMappingTable[v16->Number] >> 6;
            if ( Count > (unsigned int)v21 )
            {
              v22 = &v49[v21 + 1];
              v23 = *v22;
              _bittestandreset64(&v23, KiProcessorIndexToNumberMappingTable[v16->Number] & 0x3F);
              *v22 = v23;
              Count = v49[0];
            }
            v24 = 0;
            v25 = 0;
            if ( Count )
            {
              do
              {
                v26 = v49[v25 + 1];
                if ( v26 )
                {
                  if ( v25 != v16->Group || v26 != v16->GroupSetMember )
                    goto LABEL_45;
                }
              }
              while ( ++v25 < LOWORD(v49[0]) );
            }
          }
          KiFlushRangeWorker(&v45);
LABEL_30:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
          {
            v39 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v39);
          }
          __writecr8(v15);
          v12 = a1 + 6;
LABEL_32:
          if ( VmTbFlushEnabled )
            VmFlushTb(v4, v12, v8);
          if ( ExTbFlushActive )
          {
            v40 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            ExFlushTb(v4, v12, v8);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v40 < 2u )
            {
              v41 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v41);
            }
            __writecr8(v40);
          }
          goto LABEL_35;
        }
        KeFlushMultipleRangeCurrentTb(v4, a1 + 6, v8, a4);
      }
LABEL_35:
      *((_BYTE *)a1 + 4) &= ~8u;
      a1[3] = 0;
      *((_QWORD *)a1 + 2) = 0LL;
      return;
    }
LABEL_52:
    v11 = ((v6 & 8) != 0) + 1;
    goto LABEL_10;
  }
}
