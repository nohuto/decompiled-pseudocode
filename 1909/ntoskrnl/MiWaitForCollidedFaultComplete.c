/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x140109964
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x1401096A8 (MiHandleCollidedFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiIsFaultPteIntact @ 0x1400CBAE8 (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x1400CBD60 (MiRelockFaultState.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeInPageSupportBlock @ 0x1400CEFD0 (MiFreeInPageSupportBlock.c)
 *     MiRelockProtoPoolPage @ 0x1400CF084 (MiRelockProtoPoolPage.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 *     MiImagePageOk @ 0x140109BA4 (MiImagePageOk.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        unsigned __int64 *a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned __int8 a4,
        int *a5)
{
  int *v6; // r15
  __int64 v9; // rax
  int v10; // ecx
  ULONG_PTR v11; // rbp
  int v12; // eax
  __int64 v13; // r12
  _RTL_BALANCED_NODE *v14; // rsi
  PRTL_BALANCED_NODE v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v18; // ebx
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+10h]
  unsigned __int8 v21; // [rsp+88h] [rbp+20h] BYREF

  v21 = a4;
  v6 = a5;
  v20 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v9 = MI_READ_PTE_LOCK_FREE(v20);
  v10 = *v6;
  v11 = *(_QWORD *)a2 - 32LL;
  v19 = v9;
  if ( !v10 )
  {
    if ( (unsigned int)MiAddLockedPageCharge(a2, 2) )
    {
      v12 = *v6;
    }
    else
    {
      *v6 = 1;
      v12 = 1;
    }
    v10 = v12;
    if ( !v12 && a3 && *(_WORD *)(a3 + 32) >= 0x7FFFu )
    {
      *v6 = 1;
      MiRemoveLockedPageChargeAndDecRef(a2);
      v10 = *v6;
    }
  }
  if ( v10 == 1 && a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedAdd((volatile signed __int32 *)(v11 + 176), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiUnlockProtoPoolPage(a3, v21);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v21);
  }
  v13 = 0LL;
  if ( a1[7] )
    v13 = MiReleaseFaultState((__int64)(a1 + 7), 0x11u, 0LL);
  if ( *(_QWORD *)(v11 + 216) )
  {
    v16 = KeAbPreAcquire(v11, 0LL, 0);
    v14 = v16;
    if ( v16 )
      KeAbPreWait((__int64)v16);
  }
  else
  {
    v14 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v11 + 56), WrPageIn, 0, 0, 0LL);
  if ( v14 )
  {
    KeAbPreAcquire(v11, v14, 0);
    KeAbPostReleaseEx(v11);
  }
  MiFreeInPageSupportBlock((char *)v11);
  if ( a1[7] )
    MiRelockFaultState((__int64)(a1 + 7), v13);
  if ( *v6 == 1 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, (char *)&v21);
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)MiIsFaultPteIntact((__int64)a1, *a1, v20, &v19) && (unsigned int)MiImagePageOk(*a1, a2) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return 3221226548LL;
  }
  v18 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2);
  return v18 - 1073740748;
}
