/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x140100F44
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x140100C88 (MiHandleCollidedFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeInPageSupportBlock @ 0x140091C70 (MiFreeInPageSupportBlock.c)
 *     MiRelockProtoPoolPage @ 0x140091D24 (MiRelockProtoPoolPage.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14009CBA0 (KeAbPreWait.c)
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiIsFaultPteIntact @ 0x140102138 (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x1401023B0 (MiRelockFaultState.c)
 *     MiImagePageOk @ 0x14010255C (MiImagePageOk.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(_QWORD *a1, ULONG_PTR a2, ULONG_PTR a3, unsigned __int8 a4, int *a5)
{
  int *v6; // r15
  __int64 v9; // rax
  int v10; // ecx
  ULONG_PTR v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r12
  _KLOCK_ENTRY *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PRTL_BALANCED_NODE v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v30; // ebx
  __int64 v31; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp+10h]
  unsigned __int8 v33; // [rsp+88h] [rbp+20h] BYREF

  v33 = a4;
  v6 = a5;
  v32 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v9 = MI_READ_PTE_LOCK_FREE(v32);
  v10 = *v6;
  v11 = *(_QWORD *)a2 - 32LL;
  v31 = v9;
  if ( !v10 )
  {
    if ( (unsigned int)MiAddLockedPageCharge(a2, 2) )
    {
      v15 = *v6;
    }
    else
    {
      *v6 = 1;
      v15 = 1;
    }
    v10 = v15;
    if ( !v15 && a3 && *(_WORD *)(a3 + 32) >= 0x7FFFu )
    {
      *v6 = 1;
      MiRemoveLockedPageChargeAndDecRef(a2, v12, v13, v14);
      v10 = *v6;
    }
  }
  if ( v10 == 1 && a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    MiRemoveLockedPageChargeAndDecRef(a3, v26, v27, v28);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedAdd((volatile signed __int32 *)(v11 + 176), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiUnlockProtoPoolPage(a3, v33);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v33);
  }
  v16 = 0LL;
  if ( a1[7] )
    v16 = MiReleaseFaultState((__int64)(a1 + 7), 17, 0LL);
  if ( *(_QWORD *)(v11 + 216) )
  {
    v25 = KeAbPreAcquire(v11, 0LL, 0);
    v17 = (_KLOCK_ENTRY *)v25;
    if ( v25 )
      KeAbPreWait((__int64)v25);
  }
  else
  {
    v17 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v11 + 56), WrPageIn, 0, 0, 0LL);
  if ( v17 )
  {
    KeAbPreAcquire(v11, &v17->TreeNode, 0);
    KeAbPostReleaseEx(v11, v17);
  }
  MiFreeInPageSupportBlock((char *)v11);
  if ( a1[7] )
    MiRelockFaultState(a1 + 7, v16);
  if ( *v6 == 1 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, (char *)&v33);
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
    if ( (unsigned int)MiIsFaultPteIntact(a1, *a1, v32, &v31) && (unsigned int)MiImagePageOk(*a1, a2) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2, v21, v22, v23);
    return 3221226548LL;
  }
  v30 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2, v18, v19, v20);
  return v30 - 1073740748;
}
