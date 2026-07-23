/*
 * XREFs of MiPrivateFixup @ 0x140125F10
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiGetInPageSupportBlock @ 0x14002C610 (MiGetInPageSupportBlock.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiIsFaultPteIntact @ 0x14002D02C (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiObtainFaultCharges @ 0x140064D50 (MiObtainFaultCharges.c)
 *     MiInitializeReadInProgressPfn @ 0x1400656D0 (MiInitializeReadInProgressPfn.c)
 *     MiDereferenceControlAreaProbe @ 0x140094C2C (MiDereferenceControlAreaProbe.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x140134924 (MiReturnFaultCharges.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRelocateImagePfn @ 0x1405E0930 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140654BD4 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(__int64 a1, ULONG_PTR a2, int a3, __int64 a4, __int64 a5)
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
  int v28; // r8d
  volatile signed __int64 *v29; // rsi
  unsigned int v30; // esi
  int IsFaultPteIntact; // r13d
  unsigned __int8 v32; // r12
  __int64 v33; // rcx
  char v34; // al
  __int64 v36; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v38; // rcx
  struct _KPRCB *v39; // rcx
  int v40; // [rsp+30h] [rbp-59h]
  __int64 Page; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-31h]
  __int64 v43; // [rsp+60h] [rbp-29h]
  ULONG_PTR v44; // [rsp+68h] [rbp-21h]
  unsigned __int64 v45; // [rsp+70h] [rbp-19h]
  __int64 v46; // [rsp+78h] [rbp-11h] BYREF
  struct _KTHREAD *v47; // [rsp+80h] [rbp-9h]
  __int64 v48[10]; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int8 v49; // [rsp+E8h] [rbp+5Fh] BYREF
  volatile signed __int64 *v50; // [rsp+F0h] [rbp+67h]
  int v51; // [rsp+F8h] [rbp+6Fh]
  __int64 v52; // [rsp+100h] [rbp+77h]

  v52 = a4;
  v51 = a3;
  v50 = (volatile signed __int64 *)a2;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 56);
  v43 = v7;
  v47 = CurrentThread;
  v8 = *(_QWORD *)a1;
  v13 = (*(_BYTE *)(v7 + 184) & 7) == 0;
  Process = CurrentThread->ApcState.Process;
  v45 = *(_QWORD *)a1;
  if ( !v13 || (v10 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10]) == 0LL )
  {
    v11 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v12 = *(ULONG_PTR **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v7 + 174));
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
    v14 = (_QWORD *)MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
    if ( !v14 )
      return 3221225626LL;
LABEL_7:
    v42 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v46 = MI_READ_PTE_LOCK_FREE(v42);
    v44 = (v15 + 0x58000000000LL) / 48;
    MiObtainFaultCharges(v12, 1u, 2);
    if ( v14 || v8 < 0xFFFF800000000000uLL )
    {
      Page = MiGetPage(
               (__int64)v12,
               dword_14043B148 & v44 | (((*(_QWORD *)(v52 + 40) >> 36) & 3) << byte_14043B10A) | (*(_QWORD *)(v52 + 40) >> 58 << byte_14043B109),
               0);
      v16 = Page;
      if ( Page == -1 )
      {
        v30 = -1073741670;
        goto LABEL_48;
      }
    }
    else
    {
      v36 = MiReleaseFaultState((__int64 *)(a1 + 56), 1, &v49);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v49 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v49);
      Page = MiAllocateDriverPage(v12, v11);
      v16 = Page;
      MiRelockFaultState((__int64 *)(a1 + 56), v36);
      if ( !(unsigned int)MiIsFaultPteIntact(a1, *(_QWORD *)a1, v42, &v46) )
      {
        v30 = -1073740748;
LABEL_48:
        if ( v16 != -1LL )
          MiReleaseFreshPage(48 * v16 - 0x58000000000LL);
        MiReturnFaultCharges(v12, 1LL, 2LL);
        if ( v14 )
          MiReleasePtes((__int64)&qword_14043C060, (unsigned __int64)v14, 1u);
        return v30;
      }
    }
    v17 = 48 * v16 - 0x58000000000LL;
    v18 = (char *)MiGetInPageSupportBlock(2);
    if ( v18 )
    {
      v19 = (__int64)v47;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v47);
      v21 = v42;
      v22 = v45;
      *((_DWORD *)v18 + 48) |= 0x20u;
      *((_DWORD *)v18 + 20) = v23;
      *((_QWORD *)v18 + 11) = v23;
      *((_QWORD *)v18 + 31) = v17;
      MiInitializeReadInProgressPfn(v22, &Page, 1, v21, (__int64)v18, EffectivePagePriorityThread & 7 | 0x48);
      if ( (*(_BYTE *)(v43 + 184) & 7) == 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
      v48[0] = MI_READ_PTE_LOCK_FREE(v42);
      v24 = (ULONG_PTR)v50;
      *((_QWORD *)v18 + 26) = v50;
      _InterlockedAdd64((volatile signed __int64 *)(v24 + 112), 1uLL);
      v43 = MiReleaseFaultState((__int64 *)(a1 + 56), 1, &v49);
      --*(_WORD *)(v19 + 486);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v49 < 2u )
      {
        v38 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v38);
      }
      __writecr8(v49);
      v25 = Page;
      MiCopyPage(Page, v44, 0LL, v14 != 0LL ? 73 : 17);
      if ( v14 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v17);
        MiMakeValidPte((unsigned __int64)v14, v25, ProtectionPfnCompatible | 0xA0000000);
        if ( MiPteInShadowRange((unsigned __int64)v14) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v28 = 1;
            if ( !HIBYTE(word_14043B26C) && (v27 & 1) != 0 )
              v27 |= 0x8000000000000000uLL;
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                 && (v27 & 1) != 0 )
          {
            v27 |= 0x8000000000000000uLL;
          }
        }
        *v14 = v27;
        if ( v28 )
          MiWritePteShadow((__int64)v14, v27);
        v29 = v50;
        if ( *(__int64 *)(v52 + 8) < 0 )
          MiRelocateImagePfn((ULONG_PTR)v50, a5, v40, 2);
        MiReleasePtes((__int64)&qword_14043C060, (unsigned __int64)v14, 1u);
      }
      else
      {
        v29 = v50;
      }
      MiDereferenceControlAreaProbe(v29, 0);
      v30 = 0;
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiLeaveGuardedRegionUnsafe(v19);
      MiRelockFaultState((__int64 *)(a1 + 56), v43);
      IsFaultPteIntact = MiIsFaultPteIntact(a1, *(_QWORD *)a1, v42, v48);
      v32 = MiLockPageInline(v17);
      *(_BYTE *)(v17 + 34) &= ~0x20u;
      v33 = *(_QWORD *)(v17 + 24);
      *(_QWORD *)v17 = 0LL;
      if ( (v33 & 0x4000000000000000LL) == 0 )
        *(_BYTE *)(v17 + 34) |= 0x10u;
      if ( IsFaultPteIntact == 1 )
      {
        MiAddLockedPageCharge(v17, 3);
        v34 = *(_BYTE *)(v17 + 34) & 0xF8 | 6;
        *(_QWORD *)(v17 + 24) ^= ((*(_QWORD *)(v17 + 24) + 1LL) ^ *(_QWORD *)(v17 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v17 + 34) = v34;
        if ( !v14 && v45 >= 0xFFFF800000000000uLL )
          *(_BYTE *)(v17 + 35) |= 8u;
      }
      else
      {
        v30 = -1073740748;
      }
      MiRemoveLockedPageChargeAndDecRef(v17);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
      {
        v39 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v39);
      }
      __writecr8(v32);
      *((_DWORD *)v18 + 48) &= ~0x20u;
      if ( *((int *)v18 + 44) > 1 )
        KeSetEvent((PRKEVENT)(v18 + 56), 0, 0);
      MiFreeInPageSupportBlock(v18);
      return v30;
    }
    if ( v14 )
      MiReleasePtes((__int64)&qword_14043C060, (unsigned __int64)v14, 1u);
    MiReleaseFreshPage(v17);
    MiReturnFaultCharges(v12, 1LL, 2LL);
    return 3221225626LL;
  }
  if ( v10 != CurrentThread )
    *(_DWORD *)(a1 + 80) |= 4u;
  return 297LL;
}
