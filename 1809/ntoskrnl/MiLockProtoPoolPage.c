/*
 * XREFs of MiLockProtoPoolPage @ 0x14002F030
 * Callers:
 *     MiAllocateInPageSupport @ 0x14002C548 (MiAllocateInPageSupport.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiResolveProtoCombine @ 0x14007BF64 (MiResolveProtoCombine.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiSectionCreated @ 0x140092660 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x1400930D8 (MiInitializeImageProtos.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiDeleteMergedPte @ 0x14011FC90 (MiDeleteMergedPte.c)
 *     MiMakeImageReadOnly @ 0x1401293E8 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x1401370A4 (MiDeletePerSessionProtos.c)
 *     MiConvertStandbyToProto @ 0x14013EB50 (MiConvertStandbyToProto.c)
 *     MiGetPageFileSectionForReservation @ 0x1401577DC (MiGetPageFileSectionForReservation.c)
 *     MiPurgeImageSection @ 0x140176720 (MiPurgeImageSection.c)
 *     MiReplaceLockedPage @ 0x14018B174 (MiReplaceLockedPage.c)
 *     MiInitializeDynamicPfns @ 0x1402A68F4 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x1402B5DE0 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402B5EB4 (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x1402BC424 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x1402C4D4C (MiInitializeProtoPfn.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x14002DE70 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x140030D40 (MiAreChargesNeededToLockPage.c)
 *     MiLockOwnedProtoPage @ 0x140030EC0 (MiLockOwnedProtoPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  __int64 *v3; // r14
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // rsi
  __int64 v7; // r11
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 v14; // di
  struct _KPRCB *CurrentPrcb; // rcx
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+60h] [rbp+18h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v3 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = *v3;
  v18 = *v3;
  v5 = v18 & 1;
  do
  {
    if ( !v5 || (v4 & 0x200) != 0 )
      return 0LL;
    v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL;
  }
  while ( (*(_QWORD *)(v7 + 48 * v6) & 0x20000000000000LL) == 0 );
  v8 = 48 * v6 - 0x58000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    *a2 = CurrentIrql;
  }
  else
  {
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  v10 = *v3;
  v18 = v10;
  if ( (v10 & 1) == 0
    || (v10 & 0x200) != 0
    || v6 != (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL) )
  {
    if ( a2 )
    {
      v14 = *a2;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v14);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v8) || (unsigned int)MiChargeForLockedPage(v12, 1) )
    ++*(_WORD *)(v8 + 32);
  if ( a2 )
    v11 = *a2;
  else
    LOBYTE(v11) = 17;
  MiLockOwnedProtoPage(v8, v11);
  return 48 * v6 - 0x58000000000LL;
}
