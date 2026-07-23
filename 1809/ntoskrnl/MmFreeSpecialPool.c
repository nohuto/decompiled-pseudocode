/*
 * XREFs of MmFreeSpecialPool @ 0x1402AD368
 * Callers:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiCheckSpecialPoolSlop @ 0x1402AC36C (MiCheckSpecialPoolSlop.c)
 *     MiRemoveSpecialPoolRange @ 0x1402ACAC0 (MiRemoveSpecialPoolRange.c)
 *     VerifierFreeTrackedPool @ 0x1402BA60C (VerifierFreeTrackedPool.c)
 */

void __fastcall MmFreeSpecialPool(ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 *v2; // rsi
  ULONG_PTR v3; // r15
  unsigned int *v4; // r14
  unsigned __int8 CurrentIrql; // dl
  unsigned int v6; // ecx
  BOOL v7; // r8d
  __int16 v8; // ax
  int v9; // r12d
  __int64 v10; // r13
  ULONG_PTR v11; // r9
  _BYTE *v12; // rax
  unsigned __int8 *v13; // r8
  unsigned int v14; // ecx
  unsigned int i; // edx
  unsigned int v16; // ecx
  ULONG_PTR v17; // rdi
  __int64 v18; // r14
  ULONG_PTR v19; // r14
  __int64 v20; // rdx
  int v21; // r9d
  __int64 v22; // r11
  char v23; // r8
  PKSPIN_LOCK v24; // r13
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int8 v28; // r15
  unsigned __int16 v29; // ax
  __int64 v30; // rdx
  __int64 v31; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR *v33; // rdi
  __int64 SessionVm; // rax
  unsigned __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  int v38; // r9d
  char v39; // r8
  ULONG_PTR BugCheckParameter4[2]; // [rsp+20h] [rbp-10h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp+0h]
  int v42; // [rsp+38h] [rbp+8h] BYREF
  __int64 v43; // [rsp+40h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+18h]
  unsigned __int64 v45[6]; // [rsp+50h] [rbp+20h] BYREF
  int v46; // [rsp+80h] [rbp+50h] BYREF
  __int16 v47; // [rsp+84h] [rbp+54h]
  __int64 v48; // [rsp+88h] [rbp+58h]
  __int64 v49; // [rsp+90h] [rbp+60h]
  __int64 v50; // [rsp+98h] [rbp+68h]

  memset(v45, 0, 0x28uLL);
  v2 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL;
  v4 = (unsigned int *)(BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL);
  if ( (BugCheckParameter1 & 0xFFF) == 0 )
    v4 = (unsigned int *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 4080);
  CurrentIrql = KeGetCurrentIrql();
  v6 = *v4;
  v7 = (*v4 & 0x8000) != 0;
  if ( CurrentIrql > (unsigned __int8)(2 - ((*v4 & 0x8000) != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, BugCheckParameter1, 0x31uLL);
  SpinLock = &qword_14043BFC0;
  v8 = v6;
  if ( (v6 & 0x2000) != 0 )
  {
    SpinLock = (PKSPIN_LOCK)qword_14043C988;
    v8 = v6;
  }
  v9 = v7 | 0x20;
  if ( (v6 & 0x2000) == 0 )
    v9 = v7;
  v10 = v8 & 0x1FFF;
  if ( (BugCheckParameter1 & 0xFFF) != 0 )
  {
    v11 = 4096 - (unsigned int)(BugCheckParameter1 & 0xFFF);
    if ( ((v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v11 )
      KeBugCheckEx(0xC1u, BugCheckParameter1, v8 & 0x1FFF, v11, 0x21uLL);
    v12 = v4 + 4;
    if ( (v6 & 0x4000) != 0 )
      v12 = v4 + 6;
    MiCheckSpecialPoolSlop(v12, BugCheckParameter1, v4);
  }
  v13 = (unsigned __int8 *)(BugCheckParameter1 + v10);
  v14 = (BugCheckParameter1 & 0xFFFFF000) - (BugCheckParameter1 + v10) + 4096;
  if ( (BugCheckParameter1 & 0xFFF) == 0 )
  {
    v14 = (BugCheckParameter1 & 0xFFFFF000) - (BugCheckParameter1 + v10) + 4080;
    if ( (*v4 & 0x4000) != 0 )
      v14 = (BugCheckParameter1 & 0xFFFFF000) - (BugCheckParameter1 + v10) + 4072;
  }
  for ( i = 0; i < v14; ++i )
  {
    if ( *v13 != (unsigned __int16)(unsigned __int8)*((_WORD *)v4 + 1) )
      KeBugCheckEx(0xC1u, BugCheckParameter1, (ULONG_PTR)v13, *v4, 0x24uLL);
    ++v13;
  }
  if ( (*v4 & 0x6000) == 0x4000 )
    VerifierFreeTrackedPool(BugCheckParameter1);
  *(_DWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = -1737080031;
  *(_DWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x1C) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x20) = v10;
  *(_DWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v9;
  *(_QWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x28) = BugCheckParameter1;
  *(_QWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x40) = KeGetCurrentThread();
  *(_QWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x30) = BugCheckParameter4;
  v16 = 4096 - ((unsigned __int64)BugCheckParameter4 & 0xFFF);
  *(_DWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x38) = v16;
  if ( ((unsigned __int64)BugCheckParameter4 & 0xFFF) != 0x1000 )
  {
    if ( v16 > 0x400 )
      v16 = 1024;
    memmove((void *)(v3 + 72), BugCheckParameter4, v16);
  }
  if ( (v9 & 1) == 0 )
  {
    v43 = MI_READ_PTE_LOCK_FREE(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    BugCheckParameter2 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v43) >> 12) & 0xFFFFFFFFFLL;
    v17 = 48 * BugCheckParameter2 - 0x58000000000LL;
    v18 = 48 * (*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFLL);
    _InterlockedDecrement64(&qword_140439BC8);
    v19 = v18 - 0x58000000000LL;
    v43 = MiSwizzleInvalidPte(-268435456LL);
    if ( MiPteInShadowRange((unsigned __int64)v2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v21 = 1;
        if ( HIBYTE(word_14043B26C) == (_BYTE)v22 )
        {
LABEL_34:
          if ( (v23 & 1) != 0 )
            v20 |= 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        goto LABEL_34;
      }
    }
    *v2 = v20;
    if ( v21 )
      MiWritePteShadow((__int64)v2, v20);
    v24 = SpinLock;
    v48 = 20LL;
    v47 = v22;
    v49 = v22;
    v50 = v22;
    v46 = &qword_14043BFC0 != SpinLock ? 2 : 0;
    MiInsertTbFlushEntry((__int64)&v46, v3, 1LL, 0);
    MiFlushTbList(&v46, v25, v26, v27);
    v28 = MiLockPageInline(v17);
    *(_QWORD *)(v17 + 24) |= 0x4000000000000000uLL;
    if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        BugCheckParameter2,
        *(_BYTE *)(v17 + 34) & 7,
        *(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v29 = *(_WORD *)(v17 + 32);
    if ( v29 != 1 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, BugCheckParameter2, *(_BYTE *)(v17 + 34) & 7, v29);
    MiDecrementShareCount(v17);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v42 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v42, v30, v31);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    MiDecrementShareCount(v19);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v28);
    v45[3] = 1LL;
    v33 = &MiSystemPartition;
    v45[0] = 1LL;
    goto LABEL_70;
  }
  if ( (v9 & 0x20) != 0 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(2);
  v35 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33 = *(ULONG_PTR **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  MiDeleteSystemPagableVm(SessionVm, 0LL, v35, 1LL, 1, v45);
  if ( v45[1] )
    v45[3] -= v45[1];
  v36 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v2);
  if ( qword_14043B180 )
  {
    if ( (v36 & 0x10) != 0 )
      v36 &= ~0x10u;
    else
      v36 &= ~(_DWORD)qword_14043B180;
  }
  v43 = MiSwizzleInvalidPte(*(_QWORD *)&v36 | 0xFFFFFFFFF0000000uLL);
  if ( MiPteInShadowRange((unsigned __int64)v2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v38 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
LABEL_65:
        if ( (v39 & 1) != 0 )
          v37 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      goto LABEL_65;
    }
  }
  *v2 = v37;
  if ( v38 )
    MiWritePteShadow((__int64)v2, v37);
  v24 = SpinLock;
LABEL_70:
  if ( _InterlockedExchangeAdd64(&qword_14043C0E8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    _InterlockedDecrement(&dword_14043BF90);
  MiRemoveSpecialPoolRange(v24, v9, v2);
  if ( v24 != &qword_14043BFC0 )
    _InterlockedDecrement64((volatile signed __int64 *)v24 + 7);
  if ( v45[0] )
  {
    if ( v33 == &MiSystemPartition )
      MiReturnResidentAvailable(v45[0]);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 920, v45[0]);
  }
  if ( v45[3] )
    MiReturnCommit((__int64)v33, v45[3]);
}
