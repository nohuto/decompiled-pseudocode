/*
 * XREFs of MiLockProtoPoolPage @ 0x140054DD0
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x140093954 (MiAllocateInPageSupport.c)
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteSubsectionPages @ 0x1400BC810 (MiDeleteSubsectionPages.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiSectionCreated @ 0x1400C0450 (MiSectionCreated.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiMakeImageReadOnly @ 0x140129598 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140138E9C (MiDeletePerSessionProtos.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiDeleteMergedPte @ 0x140142A28 (MiDeleteMergedPte.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     MiGetPageFileSectionForReservation @ 0x14016340C (MiGetPageFileSectionForReservation.c)
 *     MiLockDriverPageRange @ 0x1402BD214 (MiLockDriverPageRange.c)
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x1402CA310 (MiReplaceLockedPage.c)
 *     MiEliminateStaleExtents @ 0x1402CB648 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402CB72C (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x1402D27D0 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x1402DE7F0 (MiInitializeProtoPfn.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiAreChargesNeededToLockPage @ 0x140054D10 (MiAreChargesNeededToLockPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeForLockedPage @ 0x1400CABD8 (MiChargeForLockedPage.c)
 *     MiLockOwnedProtoPage @ 0x1400CF120 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400FA460 (MiWriteValidPteVolatile.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  __int64 *v3; // r14
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // rsi
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  _BYTE *v11; // rdi
  char i; // al
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v15; // di
  struct _KPRCB *CurrentPrcb; // rcx
  int v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+28h] [rbp-30h] BYREF
  int v19; // [rsp+70h] [rbp+18h] BYREF
  int v20; // [rsp+78h] [rbp+20h] BYREF

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
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    *a2 = CurrentIrql;
  }
  else
  {
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  v9 = *v3;
  v18 = v9;
  if ( (v9 & 1) == 0
    || (v9 & 0x200) != 0
    || v6 != (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL) )
  {
    if ( a2 )
    {
      v15 = *a2;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v15);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v8) || (unsigned int)MiChargeForLockedPage(v10, 1LL) )
    ++*(_WORD *)(v8 + 32);
  if ( a2 )
  {
    MiLockOwnedProtoPage(v8, *a2);
  }
  else
  {
    v11 = (_BYTE *)(*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL);
    for ( i = *(_BYTE *)(v8 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v8 + 34) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v17 = 0;
      while ( (*(_BYTE *)(v8 + 34) & 0x20) != 0 )
        KeYieldProcessorEx(&v17);
      MiLockPageInline(v8);
    }
    *(_BYTE *)(v8 + 34) = i | 0x20;
    if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 && (*v11 & 0x20) == 0 )
      MiWriteValidPteVolatile(v11, 1LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 48 * v6 - 0x58000000000LL;
}
