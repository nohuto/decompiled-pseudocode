/*
 * XREFs of MiFlushTbList @ 0x1400740C0
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiCreateSystemPageTable @ 0x140026730 (MiCreateSystemPageTable.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiDeleteVa @ 0x140069700 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x14006B2C0 (MiAgePteWorker.c)
 *     MiGetNextPageTablePte @ 0x140070A30 (MiGetNextPageTablePte.c)
 *     MiProtectPrivateMemory @ 0x140070DC0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A40 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteSystemPagableVm @ 0x140079F10 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsleCluster @ 0x14007B968 (MiTerminateWsleCluster.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiFlushTbListEarly @ 0x1400854DC (MiFlushTbListEarly.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085B00 (MiSetReadOnlyOnSectionView.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086780 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MiMakeSystemAddressValid @ 0x140088180 (MiMakeSystemAddressValid.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x140097FD0 (MiFlushTbAsNeeded.c)
 *     MiObtainSystemCacheView @ 0x1400AD220 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400AD930 (MmMapViewInSystemCache.c)
 *     MiCopyPage @ 0x1400B1C50 (MiCopyPage.c)
 *     MiFreeWsleList @ 0x1400B2AB0 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x1400B3310 (MiWsleFlush.c)
 *     MiCopyOnWrite @ 0x1400B45E0 (MiCopyOnWrite.c)
 *     MiSetPagingOfDriver @ 0x1400DADFC (MiSetPagingOfDriver.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     MiReplenishBitMap @ 0x1400EFDF0 (MiReplenishBitMap.c)
 *     MiGetNextPageTableTail @ 0x14010EF80 (MiGetNextPageTableTail.c)
 *     MiReplacePageTablePage @ 0x14011BE8C (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTableTail @ 0x140120730 (MiDeleteSystemPageTableTail.c)
 *     MiZeroPageWorkMapping @ 0x140121324 (MiZeroPageWorkMapping.c)
 *     MiReplaceRotateWithDemandZero @ 0x1401229F0 (MiReplaceRotateWithDemandZero.c)
 *     MmUnmapIoSpace @ 0x140123220 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x14012337C (MiZeroAndFlushPtes.c)
 *     MiDeleteNonPagedPoolTail @ 0x140123F50 (MiDeleteNonPagedPoolTail.c)
 *     MiCreateSystemPageTableTail @ 0x140127F50 (MiCreateSystemPageTableTail.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C20C (MiFlushDirtyBitsToPfn.c)
 *     MiGetPteFromCopyList @ 0x14012D808 (MiGetPteFromCopyList.c)
 *     MmSetPageProtection @ 0x140133580 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x140139FA4 (MmRemoveExecuteGrants.c)
 *     KiOutSwapKernelStacks @ 0x14013CFB8 (KiOutSwapKernelStacks.c)
 *     MmMapMemoryDumpMdlEx @ 0x140144420 (MmMapMemoryDumpMdlEx.c)
 *     MiDecommitLargePoolVa @ 0x14015B2E0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x14016A7B0 (MiFlushValidPteFromTb.c)
 *     MiResetAccessBitPte @ 0x14016E830 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x14016F9B0 (MiResetAccessBitsTail.c)
 *     MiFlushHyperSpace @ 0x140175F54 (MiFlushHyperSpace.c)
 *     MiPfnRangeIsZero @ 0x140184654 (MiPfnRangeIsZero.c)
 *     MiClearSystemAccessBits @ 0x140184A1C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184B04 (MiDemoteValidLargePageOneLevel.c)
 *     MiMapMdlCommon @ 0x14018EAF4 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1402A9424 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9C70 (MmProtectMdlSystemAddress.c)
 *     MmFreeSpecialPool @ 0x1402AD178 (MmFreeSpecialPool.c)
 *     MiSwitchToTransition @ 0x1402AF640 (MiSwitchToTransition.c)
 *     MiDeleteAwePageTable @ 0x1402B0234 (MiDeleteAwePageTable.c)
 *     MiFreePhysicalPages @ 0x1402B08E0 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402B15BC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2278 (MiWriteAwePtes.c)
 *     MiSimpleAgeWorkingSetTail @ 0x1402B3B20 (MiSimpleAgeWorkingSetTail.c)
 *     MiJoinBitmapPages @ 0x1402B4EC0 (MiJoinBitmapPages.c)
 *     MiLargePageFault @ 0x1402BC3D8 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD1D4 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1402BDD0C (MiFlushEnclaveTb.c)
 *     MiFlushKernelCfgBitmap @ 0x1402C33E0 (MiFlushKernelCfgBitmap.c)
 *     MiReleaseLargePteMappings @ 0x1402C399C (MiReleaseLargePteMappings.c)
 *     MiBuildForkPte @ 0x1402C7BF0 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402C8B68 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x1402CA118 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x1402CF238 (MiScrubLargeMappedPage.c)
 *     MiUnmapRetpolineStubs @ 0x140853E10 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140854900 (MiClearDriverHotPatchPtes.c)
 *     MmDeleteShadowMapping @ 0x140858ECC (MmDeleteShadowMapping.c)
 *     MiMarkBootKernelStack @ 0x1409B6464 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B7C6C (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x1409B86AC (MiTradeBootImagePage.c)
 *     MiInitializeTbFlush @ 0x1409B9C04 (MiInitializeTbFlush.c)
 *     MmFreeLoaderBlock @ 0x1409C5164 (MmFreeLoaderBlock.c)
 *     MiProtectSharedUserPage @ 0x1409DF218 (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x1409F77A0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     KeFlushTb @ 0x1400755B0 (KeFlushTb.c)
 *     KiIpiSendRequest @ 0x1400ED370 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1400EDBC4 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiFlushRangeWorker @ 0x140109AC0 (KiFlushRangeWorker.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173C9C (KeFlushMultipleRangeCurrentTb.c)
 *     KiFlushRangeTb @ 0x140173D64 (KiFlushRangeTb.c)
 *     KeFlushCurrentTbOnly @ 0x140173E00 (KeFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1402713D0 (HvlNotifyLongSpinWait.c)
 *     HvlFlushRangeListTb @ 0x140279648 (HvlFlushRangeListTb.c)
 *     KiFlushAffinity @ 0x140293DD8 (KiFlushAffinity.c)
 *     KiPrepareFlushParameters @ 0x140293EA8 (KiPrepareFlushParameters.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298330 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     VmFlushTb @ 0x14030B6F0 (VmFlushTb.c)
 *     ExFlushTb @ 0x14031D2F8 (ExFlushTb.c)
 */

void __fastcall MiFlushTbList(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v6; // cl
  unsigned __int64 v7; // rdx
  unsigned int v8; // r13d
  _KPROCESS *Process; // rax
  unsigned __int64 SecureHandle; // rax
  unsigned int v11; // r11d
  _QWORD *v12; // r12
  char v13; // r14
  char v14; // di
  unsigned __int8 v15; // r15
  struct _KPRCB *v16; // r14
  _KTHREAD *CurrentThread; // rax
  _KPROCESS *v18; // rdx
  unsigned __int16 Count; // r8
  _WORD *v20; // rdi
  __int64 v21; // rcx
  __int64 *v22; // rdx
  __int64 v23; // rcx
  int v24; // r10d
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // edi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v34; // rcx
  _QWORD *v35; // r14
  __int64 v36; // r12
  struct _KPRCB *v37; // rcx
  unsigned int v38; // r11d
  int v39; // eax
  unsigned __int8 v40; // r10
  char v41; // al
  struct _KPRCB *v42; // rcx
  unsigned __int8 v43; // di
  struct _KPRCB *v44; // rcx
  signed __int32 v45[8]; // [rsp+0h] [rbp-148h] BYREF
  char v46[4]; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v47; // [rsp+44h] [rbp-104h]
  _QWORD *v48; // [rsp+48h] [rbp-100h] BYREF
  int v49; // [rsp+50h] [rbp-F8h]
  unsigned int v50; // [rsp+54h] [rbp-F4h]
  __int64 v51; // [rsp+58h] [rbp-F0h] BYREF
  _WORD v52[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v53; // [rsp+64h] [rbp-E4h]
  _QWORD v54[21]; // [rsp+68h] [rbp-E0h] BYREF

  v4 = (unsigned int)a1[3];
  if ( (_DWORD)v4 )
  {
    v6 = *((_BYTE *)a1 + 4);
    v7 = qword_14043A110;
    if ( (v6 & 2) == 0 )
    {
      v8 = *a1;
      if ( *a1 != 1 )
        goto LABEL_48;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors.Bitmap[15] )
        goto LABEL_53;
      SecureHandle = Process->SecureState.SecureHandle;
      if ( SecureHandle )
        LOBYTE(SecureHandle) = 1;
      if ( (_BYTE)SecureHandle )
LABEL_53:
        v7 = -1LL;
    }
    v8 = *a1;
    if ( *a1 == 1 )
    {
      v11 = 0;
      v47 = 0;
LABEL_10:
      if ( *((_BYTE *)a1 + 5) || *((_QWORD *)a1 + 2) > v7 )
      {
        if ( (v6 & 1) != 0 )
          KeFlushCurrentTbOnly(v8, v7);
        else
          KeFlushTb(v8, v11, a3, a4);
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
              _InterlockedOr(v45, 0);
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
                  v34 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v34);
                }
                v14 = 1;
              }
              else
              {
                v14 = 0;
                v35 = a1 + 6;
                v36 = v4;
                do
                {
                  KiFlushRangeTb(*v35++, v8);
                  --v36;
                }
                while ( v36 );
                v12 = a1 + 6;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                {
                  v37 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v37);
                }
                v13 = 1;
              }
              v11 = v47;
              __writecr8(CurrentIrql);
            }
          }
          else
          {
            v14 = 0;
          }
          if ( v8 == 1 && *v12 <= 0x7FFFFFFEFFFFuLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle
            || v14 )
          {
            KiPrepareFlushParameters(v8, &v51, v46);
            v39 = KiFlushAffinity(v38);
            v41 = HvlFlushRangeListTb(v51, v39, (unsigned __int8)v46[0], v40, v14, v4, (__int64)v12);
            v11 = v47;
            v13 |= v41;
          }
          if ( v13 )
            goto LABEL_32;
          v48 = v12;
          v49 = v4;
          v50 = v8;
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
LABEL_41:
              v27 = 2147483652LL;
              if ( v11 != 1 )
                v27 = 4LL;
              KiIpiSendRequest((_DWORD)v16, v24, (_DWORD)v20, (unsigned int)&v48, v4, v27);
              KiFlushRangeWorker(&v48);
              v31 = 0;
              while ( v16->PacketBarrier )
              {
                if ( (++v31 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29, v28, v30) )
                {
                  HvlNotifyLongSpinWait(v31);
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
            _InterlockedOr(v45, 0);
            CurrentThread = v16->CurrentThread;
            v53 = 0;
            v18 = CurrentThread->ApcState.Process;
            Count = v18->ActiveProcessors.Count;
            LOWORD(CurrentThread) = v18->ActiveProcessors.Size;
            v52[0] = Count;
            v52[1] = (_WORD)CurrentThread;
            if ( Count )
            {
              memmove(v54, v18->ActiveProcessors.Bitmap, 8LL * Count);
              Count = v52[0];
              v11 = v47;
            }
            v20 = v52;
            v21 = (unsigned int)KiProcessorIndexToNumberMappingTable[v16->Number] >> 6;
            if ( Count > (unsigned int)v21 )
            {
              v22 = &v54[v21];
              v23 = *v22;
              _bittestandreset64(&v23, KiProcessorIndexToNumberMappingTable[v16->Number] & 0x3F);
              *v22 = v23;
              Count = v52[0];
            }
            v24 = 0;
            v25 = 0;
            if ( Count )
            {
              do
              {
                v26 = v54[v25];
                if ( v26 )
                {
                  if ( v25 != v16->Group || v26 != v16->GroupSetMember )
                    goto LABEL_41;
                }
              }
              while ( ++v25 < v52[0] );
            }
          }
          KiFlushRangeWorker(&v48);
LABEL_30:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
          {
            v42 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v42);
          }
          __writecr8(v15);
LABEL_32:
          if ( VmTbFlushEnabled )
            VmFlushTb((unsigned int)v4, v12, v8);
          if ( ExTbFlushActive )
          {
            v43 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v43 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            ExFlushTb((unsigned int)v4, v12, v8);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v43 < 2u )
            {
              v44 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v44);
            }
            __writecr8(v43);
          }
          goto LABEL_35;
        }
        KeFlushMultipleRangeCurrentTb((unsigned int)v4, a1 + 6, v8);
      }
LABEL_35:
      *((_BYTE *)a1 + 4) &= ~8u;
      a1[3] = 0;
      *((_QWORD *)a1 + 2) = 0LL;
      return;
    }
LABEL_48:
    v11 = ((v6 & 8) != 0) + 1;
    v47 = v11;
    goto LABEL_10;
  }
}
