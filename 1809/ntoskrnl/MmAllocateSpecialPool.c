/*
 * XREFs of MmAllocateSpecialPool @ 0x1402ACD54
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetPteLink @ 0x1400AD6E4 (MiGetPteLink.c)
 *     RemoveListHeadPte @ 0x1400AD720 (RemoveListHeadPte.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiInitializeColorBaseSession @ 0x1400E7770 (MiInitializeColorBaseSession.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiNumberWsSwapPagefiles @ 0x1400F0508 (MiNumberWsSwapPagefiles.c)
 *     MiInitializePfn @ 0x1401094B0 (MiInitializePfn.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiExpandSpecialPool @ 0x1402AC64C (MiExpandSpecialPool.c)
 */

unsigned __int64 __fastcall MmAllocateSpecialPool(ULONG_PTR BugCheckParameter3, int a2, int a3, int a4)
{
  int v4; // ebp
  int v5; // r12d
  unsigned __int8 CurrentIrql; // dl
  __int64 v7; // r14
  ULONG_PTR *v8; // rbx
  KSPIN_LOCK *v9; // r13
  int v10; // r11d
  unsigned __int64 SessionVm; // rax
  unsigned __int64 v13; // rsi
  int v14; // eax
  int v15; // r10d
  __int64 v16; // rcx
  __int16 v17; // cx
  __int64 Page; // r15
  unsigned __int64 PteLink; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 updated; // rax
  __int64 v25; // r8
  unsigned __int8 v26; // bl
  struct _KPRCB *v27; // rcx
  unsigned __int64 v28; // r14
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v30; // rbx
  int v31; // edx
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v34; // rdx
  int v35; // r8d
  char v36; // bl
  unsigned __int64 v37; // rsi
  int v38; // ebp
  ULONG_PTR v39; // rcx
  unsigned __int64 v40; // rax
  KSPIN_LOCK *v41; // [rsp+38h] [rbp-80h]
  volatile signed __int32 *v42; // [rsp+40h] [rbp-78h] BYREF
  __int16 v43; // [rsp+48h] [rbp-70h]
  unsigned __int16 v44; // [rsp+4Ah] [rbp-6Eh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v48; // [rsp+D0h] [rbp+18h]

  v4 = a3;
  v5 = a3 & 1;
  if ( (a3 & 1) == 0 && (a3 & 0x200) == 0 && (MiFlags & 0x10000) != 0 )
    v4 = a3 | 0x200;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v5 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, v4, BugCheckParameter3, 0x30uLL);
  v48 = 4;
  v7 = 4LL;
  if ( (v4 & 0x20) != 0 )
  {
    SessionVm = MiGetSessionVm();
    v9 = (KSPIN_LOCK *)qword_14043C988;
    v41 = (KSPIN_LOCK *)qword_14043C988;
    v8 = *(ULONG_PTR **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
    MiInitializeColorBaseSession(0LL);
  }
  else
  {
    v8 = &MiSystemPartition;
    v41 = &qword_14043BFC0;
    v9 = &qword_14043BFC0;
    MiInitializePageColorBase(0LL, 0, (__int64)&v42);
    if ( !v5 && (v4 & v10) == 0 )
      v48 = 6;
  }
  if ( !v9[6] )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((__int64)v8, 1uLL, 1u) )
  {
    ++dword_140439BC4;
    return 0LL;
  }
  v13 = v8[912];
  if ( qword_14043C0E8 > v13 >> 1 )
  {
    if ( !*((_DWORD *)v8 + 1782) || (v14 = MiNumberWsSwapPagefiles((__int64)v8), v15 == v14) )
    {
      ++dword_140439BBC;
LABEL_20:
      v16 = (__int64)v8;
LABEL_21:
      MiReturnCommit(v16, 1uLL);
      return 0LL;
    }
  }
  if ( v5 )
  {
    Page = -1LL;
    v7 = 1LL;
  }
  else
  {
    v16 = (__int64)v8;
    if ( qword_140439BC8 > v8[890] >> 3 )
    {
      ++dword_140439BB4;
      goto LABEL_21;
    }
    if ( !(unsigned int)MiChargeResident(v8, 1uLL, 128LL) )
    {
      ++dword_140439BC0;
      goto LABEL_20;
    }
    v17 = _InterlockedExchangeAdd(v42, 1u);
    if ( v13 < 0x120
      || (Page = MiGetPage((__int64)v8, (unsigned __int16)(v43 & v17) | (unsigned int)v44, 0), Page == -1) )
    {
      ++dword_140439BB0;
      MiReturnCommit((__int64)v8, 1uLL);
      if ( v8 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 920, 1uLL);
      return 0LL;
    }
  }
  KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
  PteLink = MiGetPteLink(v9[v7]);
  if ( PteLink == (__int64)(v20 - v9[v7 + 2]) >> 3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    v21 = MiExpandSpecialPool(v4);
    if ( !v21 )
    {
      if ( !v5 )
      {
        MiReleaseFreshPage(48 * Page - 0x58000000000LL);
        if ( v8 == &MiSystemPartition )
          MiReturnResidentAvailable(1uLL);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 920, 1uLL);
      }
      ++dword_140439BB8;
      goto LABEL_20;
    }
  }
  else
  {
    v21 = RemoveListHeadPte((__int64 *)&v9[v7]);
    v22 = *(_QWORD *)(48 * MiGetContainingPageTable(v21) - 0x58000000000LL + 16);
    v23 = v22;
    if ( qword_14043B180 && (v22 & 0x10) == 0 )
      v23 = v22 & ~qword_14043B180;
    updated = MiUpdatePageFileHighInPte(v22, HIDWORD(v23) + 1);
    *(_QWORD *)(v25 + 16) = updated;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v26 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v27 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v27);
    }
    __writecr8(v26);
  }
  v28 = _InterlockedIncrement64(&qword_14043C0E8);
  if ( v28 == 1 )
    _InterlockedAdd(&dword_14043BF90, 1u);
  if ( v5 )
  {
    MiSwizzleInvalidPte(32LL * v48);
    if ( !MiPteInShadowRange(v21) )
      goto LABEL_75;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v35 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_75;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_75;
    }
    if ( (v34 & 1) != 0 )
      v34 |= 0x8000000000000000uLL;
LABEL_75:
    *(_QWORD *)v21 = v34;
    if ( v35 )
      goto LABEL_76;
    goto LABEL_77;
  }
  ValidPte = MiMakeValidPte(v21, Page, v48 | 0x80000000);
  v30 = ValidPte;
  if ( (v4 & 0x20) != 0 )
    v30 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  MiInitializePfn(48 * Page - 0x58000000000LL, v21, v48, 4);
  if ( MiPteInShadowRange(v21) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v31 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_66;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_66;
    }
    if ( (v30 & 1) != 0 )
      v30 |= 0x8000000000000000uLL;
  }
LABEL_66:
  *(_QWORD *)v21 = v30;
  if ( v31 )
  {
    v34 = v30;
LABEL_76:
    MiWritePteShadow(v21, v34);
  }
LABEL_77:
  if ( v28 > qword_140439BA8 )
    qword_140439BA8 = v28;
  v36 = MEMORY[0xFFFFF78000000320];
  v37 = (__int64)(v21 << 25) >> 16;
  memset((void *)v37, MEMORY[0xFFFFF78000000320] | 1, 0x1000uLL);
  v38 = v4 & 0x40;
  v39 = BugCheckParameter3 - 8;
  if ( !v38 )
    v39 = BugCheckParameter3;
  if ( a4 && (a4 == 1 || MmSpecialPoolCatchOverruns != 1) )
  {
    v40 = v37 + 4080;
  }
  else
  {
    v40 = v37;
    v37 = (v37 - v39 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  *(_QWORD *)v40 = 0LL;
  *(_QWORD *)(v40 + 8) = 0LL;
  *(_DWORD *)v40 = v39;
  if ( v41 != &qword_14043BFC0 )
  {
    *(_DWORD *)v40 = v39 | 0x2000;
    _InterlockedAdd64((volatile signed __int64 *)v41 + 7, 1uLL);
  }
  *(_BYTE *)(v40 + 2) = v36 | 1;
  *(_DWORD *)(v40 + 4) = a2;
  if ( v5 )
    *(_DWORD *)v40 |= 0x8000u;
  else
    _InterlockedAdd64(&qword_140439BC8, 1uLL);
  if ( v38 )
    *(_DWORD *)v40 |= 0x4000u;
  return v37;
}
