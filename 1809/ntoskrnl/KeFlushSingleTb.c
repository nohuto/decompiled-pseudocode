/*
 * XREFs of KeFlushSingleTb @ 0x1400ECE74
 * Callers:
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiNoFaultFound @ 0x1400E9414 (MiNoFaultFound.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiMapSinglePage @ 0x14012194C (MiMapSinglePage.c)
 *     MiFillPhysicalPages @ 0x14012B050 (MiFillPhysicalPages.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x14012D744 (MiSwapStackPageNoDpc.c)
 *     MiTradeActivePage @ 0x14012DFF4 (MiTradeActivePage.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     MiClearPageFileHash @ 0x140156988 (MiClearPageFileHash.c)
 *     MmStealTopLevelPage @ 0x14015DF84 (MmStealTopLevelPage.c)
 *     MiJumpStackTarget @ 0x14015EA10 (MiJumpStackTarget.c)
 *     MiPrepareToStealNonPagedPool @ 0x14016B7BC (MiPrepareToStealNonPagedPool.c)
 *     MiPfnRangeIsZero @ 0x140184794 (MiPfnRangeIsZero.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1401B52EC (MiUpdateImagePfnImportRelocations.c)
 *     MiScrubAwePage @ 0x1402B1E4C (MiScrubAwePage.c)
 *     MiDbgCopyMemoryTarget @ 0x1402BAB80 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1402BAFFC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BB0E8 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402BB494 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x1402BC5C8 (MiLargePageFault.c)
 *     MiRelocateImagePfn @ 0x1405E0930 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14072AC5C (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x1409C0DC8 (MxCopyPage.c)
 *     MxSwapPages @ 0x1409C14C8 (MxSwapPages.c)
 * Callees:
 *     KxFlushSingleTb @ 0x1400ECF40 (KxFlushSingleTb.c)
 *     KiIsSecureProcessFlush @ 0x1400EDB74 (KiIsSecureProcessFlush.c)
 *     KiPreprocessFlushTb @ 0x1400EDBB0 (KiPreprocessFlushTb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1401BD290 (KiSetUserTbFlushPending.c)
 *     HvlFlushRangeListTb @ 0x140279838 (HvlFlushRangeListTb.c)
 *     KiFlushAffinity @ 0x140293FC8 (KiFlushAffinity.c)
 *     KiPrepareFlushParameters @ 0x140294098 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x14030B8E0 (VmFlushTb.c)
 *     ExFlushTb @ 0x14031D4E8 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v5; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  _KPROCESS *Process; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v15; // eax
  int v16; // r8d
  char v17; // r11
  int v18; // r9d
  char v19; // r10
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v21; // rcx
  unsigned __int8 v22; // [rsp+40h] [rbp-40h] BYREF
  char v23; // [rsp+41h] [rbp-3Fh] BYREF
  _BYTE v24[6]; // [rsp+42h] [rbp-3Eh] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h] BYREF
  __int128 v28; // [rsp+60h] [rbp-20h]

  _R15D = 0;
  v5 = 0;
  if ( (unsigned __int8)KiPreprocessFlushTb(0, a2, a3, (unsigned int)&v23, (__int64)&v22) )
  {
    if ( ((1 << a2) & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v28 = 1LL;
            *((_QWORD *)&v28 + 1) = a1;
            __asm { invpcid r15d, [rbp+var_20] }
          }
          else
          {
            KiSetUserTbFlushPending(Process, v8, v9, v10);
          }
        }
      }
    }
    __invlpg((void *)a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v22);
    v5 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( (_BYTE)result || v23 )
  {
    KiPrepareFlushParameters(a2, &v27, v24);
    v15 = KiFlushAffinity(a3);
    LOBYTE(v16) = v24[0];
    LOBYTE(v18) = v17;
    v26 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v27, v15, v16, v18, v19, 1, (__int64)&v26);
    v5 |= result;
  }
  if ( !v5 )
    result = KxFlushSingleTb(a1, a2, a3);
  v12 = a1 & 0xFFFFFFFFFFFFF001uLL;
  if ( VmTbFlushEnabled )
  {
    v25 = v12 | 1;
    result = VmFlushTb(1LL, &v25, a2);
  }
  if ( ExTbFlushActive )
  {
    v25 = v12 | 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExFlushTb(1LL, &v25, a2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v21 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v21);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
