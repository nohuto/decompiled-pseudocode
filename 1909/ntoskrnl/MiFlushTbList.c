/*
 * XREFs of MiFlushTbList @ 0x140050080
 * Callers:
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiFlushTbAsNeeded @ 0x140022380 (MiFlushTbAsNeeded.c)
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x140025220 (MiWsleFlush.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002EA90 (MiSetReadOnlyOnSectionView.c)
 *     MiGetNextPageTablePte @ 0x14004AA90 (MiGetNextPageTablePte.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x14004D010 (MiAgePteWorker.c)
 *     MiTerminateWsleCluster @ 0x14004E0A0 (MiTerminateWsleCluster.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E570 (MmSetAddressRangeModifiedEx.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MmMapViewInSystemCache @ 0x140074DD0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140076770 (MiObtainSystemCacheView.c)
 *     MiFlushDirtyBitsToPfn @ 0x140088BA8 (MiFlushDirtyBitsToPfn.c)
 *     MmOutPageKernelStack @ 0x14008F6F8 (MmOutPageKernelStack.c)
 *     MiCreateSystemPageTable @ 0x1400961C0 (MiCreateSystemPageTable.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiReplenishBitMap @ 0x1400DAEE0 (MiReplenishBitMap.c)
 *     MiFlushTbListEarly @ 0x1400DB720 (MiFlushTbListEarly.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400F4884 (MiReplaceRotateWithDemandZero.c)
 *     MmUnmapIoSpace @ 0x1400F5130 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1400F52B8 (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x1400F855C (MiZeroPageWorkMapping.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400FA0BC (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiReplacePageTablePage @ 0x140122280 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTableTail @ 0x140125B10 (MiDeleteSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x140127970 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x14012DE00 (MiCreateSystemPageTableTail.c)
 *     MmSetPageProtection @ 0x14012EF20 (MmSetPageProtection.c)
 *     MiDeleteNonPagedPoolTail @ 0x140131750 (MiDeleteNonPagedPoolTail.c)
 *     MiGetPteFromCopyList @ 0x140138004 (MiGetPteFromCopyList.c)
 *     MmRemoveExecuteGrants @ 0x14013BF24 (MmRemoveExecuteGrants.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiDecommitLargePoolVa @ 0x140146B90 (MiDecommitLargePoolVa.c)
 *     MmMapMemoryDumpMdlEx @ 0x14015F904 (MmMapMemoryDumpMdlEx.c)
 *     MiFlushValidPteFromTb @ 0x140174624 (MiFlushValidPteFromTb.c)
 *     MiResetAccessBitPte @ 0x1401783E0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x140179890 (MiResetAccessBitsTail.c)
 *     MiFlushHyperSpace @ 0x14017E888 (MiFlushHyperSpace.c)
 *     MiUnmapRetpolineStubs @ 0x14018065C (MiUnmapRetpolineStubs.c)
 *     MiReplacePfnWithGapMapping @ 0x1401869E4 (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x140186E14 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186EF8 (MiDemoteValidLargePageOneLevel.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 *     MiReplicatePfnDatabaseMappings @ 0x1402BE410 (MiReplicatePfnDatabaseMappings.c)
 *     MiUnmapMdlCommon @ 0x1402C09C4 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402C1310 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiSimpleAgeWorkingSetTail @ 0x1402C8CE0 (MiSimpleAgeWorkingSetTail.c)
 *     MiLargePageFault @ 0x1402D2A68 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1402D4400 (MiFlushEnclaveTb.c)
 *     MiDeleteAwePageTable @ 0x1402D56A8 (MiDeleteAwePageTable.c)
 *     MiFreePhysicalPages @ 0x1402D5D78 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiFlushKernelCfgBitmap @ 0x1402DD3D0 (MiFlushKernelCfgBitmap.c)
 *     MiReleaseLargePteMappings @ 0x1402DD99C (MiReleaseLargePteMappings.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x1402EC2C8 (MiScrubLargeMappedPage.c)
 *     MiClearDriverHotPatchPtes @ 0x14088D598 (MiClearDriverHotPatchPtes.c)
 *     MmDeleteShadowMapping @ 0x140892398 (MmDeleteShadowMapping.c)
 *     MiMarkBootKernelStack @ 0x1409EE190 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x1409EF52C (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x1409EF854 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x1409EFA54 (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x1409FDF14 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140A0F8D0 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A229A0 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     KiIpiSendRequest @ 0x140099C40 (KiIpiSendRequest.c)
 *     KiFlushRangeWorker @ 0x140100700 (KiFlushRangeWorker.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140125868 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KeFlushCurrentTbOnly @ 0x14017A8A0 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A96C (KeFlushMultipleRangeCurrentTb.c)
 *     KiFlushRangeTb @ 0x14017AA48 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     HvlFlushRangeListTb @ 0x14028D6F0 (HvlFlushRangeListTb.c)
 *     KiFlushAffinity @ 0x1402AA518 (KiFlushAffinity.c)
 *     KiPrepareFlushParameters @ 0x1402AA5E8 (KiPrepareFlushParameters.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     VmFlushTb @ 0x140328E2C (VmFlushTb.c)
 *     ExFlushTb @ 0x14033BFE8 (ExFlushTb.c)
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
    v7 = qword_140465850;
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
