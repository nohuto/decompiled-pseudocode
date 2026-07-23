/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x140003F00
 * Callers:
 *     MiHandleCollidedFault @ 0x140003C24 (MiHandleCollidedFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x140005930 (KeAbPreWait.c)
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiImagePageOk @ 0x14002CFA8 (MiImagePageOk.c)
 *     MiIsFaultPteIntact @ 0x14002D02C (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiRelockProtoPoolPage @ 0x14002DDDC (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4, int *a5)
{
  int *v6; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  ULONG_PTR v12; // rbp
  int v13; // eax
  __int64 v14; // r12
  _RTL_BALANCED_NODE *v15; // rsi
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+10h]
  unsigned __int8 v21; // [rsp+88h] [rbp+20h] BYREF

  v21 = a4;
  v6 = a5;
  v20 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v9 = MI_READ_PTE_LOCK_FREE(v20);
  v11 = *v6;
  v12 = *(_QWORD *)a2 - 32LL;
  v19 = v9;
  if ( !v11 )
  {
    if ( (unsigned int)MiAddLockedPageCharge(a2, 2LL) )
    {
      v13 = *v6;
    }
    else
    {
      *v6 = 1;
      v13 = 1;
    }
    v11 = v13;
    if ( !v13 && a3 && *(_WORD *)(a3 + 32) >= 0x7FFFu )
    {
      *v6 = 1;
      MiRemoveLockedPageChargeAndDecRef(a2);
      v11 = *v6;
    }
  }
  if ( v11 == 1 && a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedAdd((volatile signed __int32 *)(v12 + 176), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v10) = v21;
    MiUnlockProtoPoolPage(a3, v10);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
    }
    __writecr8(v21);
  }
  v14 = 0LL;
  if ( a1[7] )
  {
    LOBYTE(v10) = 17;
    v14 = MiReleaseFaultState(a1 + 7, v10, 0LL);
  }
  if ( *(_QWORD *)(v12 + 216) )
  {
    v17 = KeAbPreAcquire(v12, 0LL);
    v15 = (_RTL_BALANCED_NODE *)v17;
    if ( v17 )
      KeAbPreWait(v17);
  }
  else
  {
    v15 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v12 + 56), WrPageIn, 0, 0, 0LL);
  if ( v15 )
  {
    KeAbPreAcquire(v12, v15);
    KeAbPostReleaseEx(v12);
  }
  MiFreeInPageSupportBlock((PVOID)v12);
  if ( a1[7] )
    MiRelockFaultState(a1 + 7, v14);
  if ( *v6 == 1 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, &v21);
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
    if ( (unsigned int)MiIsFaultPteIntact(a1, *a1, v20, &v19) && (unsigned int)MiImagePageOk(*a1, a2) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return 3221226548LL;
  }
  v18 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2);
  return v18 - 1073740748;
}
