/*
 * XREFs of MiPrivateFixup @ 0x140101BD0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002BDF0 (MiMakeProtectionPfnCompatible.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MiObtainFaultCharges @ 0x140053790 (MiObtainFaultCharges.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiGetEffectivePagePriorityThread @ 0x14008DCDC (MiGetEffectivePagePriorityThread.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeInPageSupportBlock @ 0x140091C70 (MiFreeInPageSupportBlock.c)
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
 *     MiInitializeReadInProgressPfn @ 0x1400A5280 (MiInitializeReadInProgressPfn.c)
 *     MiGetInPageSupportBlock @ 0x1400A61EC (MiGetInPageSupportBlock.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiDereferenceControlAreaProbe @ 0x1400DF7D0 (MiDereferenceControlAreaProbe.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiIsFaultPteIntact @ 0x140102138 (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x1401023B0 (MiRelockFaultState.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x140135A54 (MiReturnFaultCharges.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRelocateImagePfn @ 0x140605680 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x14066D148 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(unsigned __int64 *a1, ULONG_PTR a2, int a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  _KPROCESS *Process; // rsi
  struct _KTHREAD *v10; // rax
  unsigned int v11; // edi
  ULONG_PTR *v12; // r13
  bool v13; // zf
  _QWORD *v14; // r14
  __int64 v15; // r9
  ULONG_PTR v16; // rdi
  __int64 v17; // rdi
  char *v18; // r15
  __int64 v19; // r13
  char EffectivePagePriorityThread; // al
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  ULONG_PTR v24; // rax
  __int64 v25; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r8d
  volatile signed __int64 *v30; // rsi
  unsigned int v31; // esi
  int IsFaultPteIntact; // r13d
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // r12
  __int64 v37; // rcx
  char v38; // al
  __int64 v40; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v42; // rcx
  struct _KPRCB *v43; // rcx
  int v44; // [rsp+30h] [rbp-59h]
  __int64 Page; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-31h]
  __int64 v47; // [rsp+60h] [rbp-29h]
  ULONG_PTR v48; // [rsp+68h] [rbp-21h]
  unsigned __int64 v49; // [rsp+70h] [rbp-19h]
  __int64 v50; // [rsp+78h] [rbp-11h] BYREF
  struct _KTHREAD *v51; // [rsp+80h] [rbp-9h]
  __int64 v52[10]; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int8 v53; // [rsp+E8h] [rbp+5Fh] BYREF
  volatile signed __int64 *v54; // [rsp+F0h] [rbp+67h]
  int v55; // [rsp+F8h] [rbp+6Fh]
  __int64 v56; // [rsp+100h] [rbp+77h]

  v56 = a4;
  v55 = a3;
  v54 = (volatile signed __int64 *)a2;
  CurrentThread = KeGetCurrentThread();
  v7 = a1[7];
  v47 = v7;
  v51 = CurrentThread;
  v8 = *a1;
  v13 = (*(_BYTE *)(v7 + 184) & 7) == 0;
  Process = CurrentThread->ApcState.Process;
  v49 = *a1;
  if ( !v13 || (v10 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10]) == 0LL )
  {
    v11 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v12 = *(ULONG_PTR **)(qword_140466188 + 8LL * *(unsigned __int16 *)(v7 + 174));
    if ( v8 >= 0xFFFF800000000000uLL )
    {
      if ( (MiFlags & 0x10000) == 0 || (MiFlags & 0x4000) == 0 )
        goto LABEL_6;
      v13 = ((*(_DWORD *)(a4 + 16) >> 5) & 2) == 0;
    }
    else
    {
      v13 = (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0;
    }
    if ( !v13 )
    {
      v14 = 0LL;
      goto LABEL_7;
    }
LABEL_6:
    v14 = (_QWORD *)MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
    if ( !v14 )
      return 3221225626LL;
LABEL_7:
    v46 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v50 = MI_READ_PTE_LOCK_FREE(v46);
    v48 = (v15 + 0x58000000000LL) / 48;
    MiObtainFaultCharges(v12, 1u, 2);
    if ( v14 || v8 < 0xFFFF800000000000uLL )
    {
      Page = MiGetPage(
               (__int64)v12,
               dword_140465AB0 & v48 | (*(_QWORD *)(v56 + 40) >> 58 << byte_140465A4D) | (((*(_QWORD *)(v56 + 40) >> 36) & 3) << byte_140465A4E),
               0LL);
      v16 = Page;
      if ( Page == -1 )
      {
        v31 = -1073741670;
        goto LABEL_48;
      }
    }
    else
    {
      v40 = MiReleaseFaultState((__int64)(a1 + 7), 1, &v53);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v53 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v53);
      Page = MiAllocateDriverPage(v12, v11);
      v16 = Page;
      MiRelockFaultState(a1 + 7, v40);
      if ( !(unsigned int)MiIsFaultPteIntact(a1, *a1, v46, &v50) )
      {
        v31 = -1073740748;
LABEL_48:
        if ( v16 != -1LL )
          MiReleaseFreshPage(48 * v16 - 0x58000000000LL);
        MiReturnFaultCharges(v12, 1LL, 2LL);
        if ( v14 )
          MiReleasePtes((__int64)&qword_1404669C0, (unsigned __int64)v14, 1u);
        return v31;
      }
    }
    v17 = 48 * v16 - 0x58000000000LL;
    v18 = (char *)MiGetInPageSupportBlock(2);
    if ( v18 )
    {
      v19 = (__int64)v51;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v51);
      v21 = v46;
      v22 = v49;
      *((_DWORD *)v18 + 48) |= 0x20u;
      *((_DWORD *)v18 + 20) = v23;
      *((_QWORD *)v18 + 11) = v23;
      *((_QWORD *)v18 + 31) = v17;
      MiInitializeReadInProgressPfn(v22, &Page, 1, v21, (__int64)v18, EffectivePagePriorityThread & 7 | 0x48);
      if ( (*(_BYTE *)(v47 + 184) & 7) == 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
      v52[0] = MI_READ_PTE_LOCK_FREE(v46);
      v24 = (ULONG_PTR)v54;
      *((_QWORD *)v18 + 26) = v54;
      _InterlockedAdd64((volatile signed __int64 *)(v24 + 112), 1uLL);
      v47 = MiReleaseFaultState((__int64)(a1 + 7), 1, &v53);
      --*(_WORD *)(v19 + 486);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v53 < 2u )
      {
        v42 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v42);
      }
      __writecr8(v53);
      v25 = Page;
      MiCopyPage(Page, v48, 0LL, v14 != 0LL ? 73 : 17);
      if ( v14 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v17);
        MiMakeValidPte((unsigned __int64)v14, v25, ProtectionPfnCompatible | 0xA0000000);
        if ( MiPteInShadowRange((unsigned __int64)v14) )
        {
          if ( (unsigned int)MiPteHasShadow(v28) )
          {
            v29 = 1;
            if ( !HIBYTE(word_140465BEC) && (v27 & 1) != 0 )
              v27 |= 0x8000000000000000uLL;
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                 && (v27 & 1) != 0 )
          {
            v27 |= 0x8000000000000000uLL;
          }
        }
        *v14 = v27;
        if ( v29 )
          MiWritePteShadow(v14, v27);
        v30 = v54;
        if ( *(__int64 *)(v56 + 8) < 0 )
          MiRelocateImagePfn((ULONG_PTR)v54, a5, v44, 2);
        MiReleasePtes((__int64)&qword_1404669C0, (unsigned __int64)v14, 1u);
      }
      else
      {
        v30 = v54;
      }
      MiDereferenceControlAreaProbe(v30, 0);
      v31 = 0;
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiLeaveGuardedRegionUnsafe(v19);
      MiRelockFaultState(a1 + 7, v47);
      IsFaultPteIntact = MiIsFaultPteIntact(a1, *a1, v46, v52);
      v36 = MiLockPageInline(v17);
      *(_BYTE *)(v17 + 34) &= ~0x20u;
      v37 = *(_QWORD *)(v17 + 24);
      *(_QWORD *)v17 = 0LL;
      if ( (v37 & 0x4000000000000000LL) == 0 )
        *(_BYTE *)(v17 + 34) |= 0x10u;
      if ( IsFaultPteIntact == 1 )
      {
        MiAddLockedPageCharge(v17, 3);
        v33 = *(_QWORD *)(v17 + 24);
        v38 = *(_BYTE *)(v17 + 34) & 0xF8 | 6;
        *(_QWORD *)(v17 + 24) = v33 ^ ((v33 + 1) ^ v33) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v17 + 34) = v38;
        if ( !v14 && v49 >= 0xFFFF800000000000uLL )
          *(_BYTE *)(v17 + 35) |= 8u;
      }
      else
      {
        v31 = -1073740748;
      }
      MiRemoveLockedPageChargeAndDecRef(v17, v33, v34, v35);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36 < 2u )
      {
        v43 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v43);
      }
      __writecr8(v36);
      *((_DWORD *)v18 + 48) &= ~0x20u;
      if ( *((int *)v18 + 44) > 1 )
        KeSetEvent((PRKEVENT)(v18 + 56), 0, 0);
      MiFreeInPageSupportBlock(v18);
      return v31;
    }
    if ( v14 )
      MiReleasePtes((__int64)&qword_1404669C0, (unsigned __int64)v14, 1u);
    MiReleaseFreshPage(v17);
    MiReturnFaultCharges(v12, 1LL, 2LL);
    return 3221225626LL;
  }
  if ( v10 != CurrentThread )
    *((_DWORD *)a1 + 20) |= 4u;
  return 297LL;
}
