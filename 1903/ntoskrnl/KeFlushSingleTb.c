/*
 * XREFs of KeFlushSingleTb @ 0x14009F7D4
 * Callers:
 *     MiNoFaultFound @ 0x140075DA0 (MiNoFaultFound.c)
 *     MiValidateInPage @ 0x140098340 (MiValidateInPage.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiAbortCombineScan @ 0x1400B8A28 (MiAbortCombineScan.c)
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 *     MiTradeActivePage @ 0x1400F6324 (MiTradeActivePage.c)
 *     MiFillPhysicalPages @ 0x14012B9B4 (MiFillPhysicalPages.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x140134888 (MiSwapStackPageNoDpc.c)
 *     MiPrepareToStealNonPagedPool @ 0x14013BFF4 (MiPrepareToStealNonPagedPool.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
 *     MiMapSinglePage @ 0x140154AD0 (MiMapSinglePage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140155448 (MiUpdateImagePfnImportRelocations.c)
 *     MiClearPageFileHash @ 0x140159440 (MiClearPageFileHash.c)
 *     MmStealTopLevelPage @ 0x14018EB24 (MmStealTopLevelPage.c)
 *     MiJumpStackTarget @ 0x1402C44C0 (MiJumpStackTarget.c)
 *     MiDbgCopyMemoryTarget @ 0x1402D0BB0 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1402D103C (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D115C (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402D1508 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x1402D2D08 (MiLargePageFault.c)
 *     MiScrubAwePage @ 0x1402D7A00 (MiScrubAwePage.c)
 *     MiRelocateImagePfn @ 0x140605680 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14074D994 (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x1409FBD30 (MxCopyPage.c)
 *     MxSwapPages @ 0x1409FC488 (MxSwapPages.c)
 * Callees:
 *     KxFlushSingleTb @ 0x14009F8A0 (KxFlushSingleTb.c)
 *     KiIsSecureProcessFlush @ 0x14009FA08 (KiIsSecureProcessFlush.c)
 *     KiPreprocessFlushTb @ 0x1400B94A0 (KiPreprocessFlushTb.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1401C4CD0 (KiSetUserTbFlushPending.c)
 *     HvlFlushRangeListTb @ 0x14028D990 (HvlFlushRangeListTb.c)
 *     KiFlushAffinity @ 0x1402AA7B8 (KiFlushAffinity.c)
 *     KiPrepareFlushParameters @ 0x1402AA888 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x1403293DC (VmFlushTb.c)
 *     ExFlushTb @ 0x14033C588 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v5; // si
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  int v11; // eax
  int v12; // r8d
  char v13; // r11
  int v14; // r9d
  char v15; // r10
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v17; // rcx
  unsigned __int8 v18; // [rsp+40h] [rbp-40h] BYREF
  char v19; // [rsp+41h] [rbp-3Fh] BYREF
  _BYTE v20[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h] BYREF
  __int128 v24; // [rsp+60h] [rbp-20h]

  _R15D = 0;
  v5 = 0;
  if ( (unsigned __int8)KiPreprocessFlushTb(0, a2, a3, (unsigned int)&v19, (__int64)&v18) )
  {
    if ( ((1 << a2) & 0xA) != 0 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
    {
      if ( (KiFlushPcid & 2) != 0 )
      {
        *(_QWORD *)&v24 = 1LL;
        *((_QWORD *)&v24 + 1) = a1;
        __asm { invpcid r15d, [rbp+var_20] }
      }
      else
      {
        KiSetUserTbFlushPending();
      }
    }
    __invlpg((void *)a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v18);
    v5 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( (_BYTE)result || v19 )
  {
    KiPrepareFlushParameters(a2, &v23, v20);
    v11 = KiFlushAffinity(a3);
    LOBYTE(v12) = v20[0];
    LOBYTE(v14) = v13;
    v22 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v23, v11, v12, v14, v15, 1, (__int64)&v22);
    v5 |= result;
  }
  if ( !v5 )
    result = KxFlushSingleTb(a1, a2, a3);
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v21 = v9;
    result = VmFlushTb(1LL, &v21, a2);
  }
  if ( ExTbFlushActive )
  {
    v21 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExFlushTb(1LL, &v21, a2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v17);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
