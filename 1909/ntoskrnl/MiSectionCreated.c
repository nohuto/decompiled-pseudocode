/*
 * XREFs of MiSectionCreated @ 0x1400C0450
 * Callers:
 *     MiCreateNewSection @ 0x14064FBD4 (MiCreateNewSection.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceControlAreaPfn @ 0x140093E40 (MiReferenceControlAreaPfn.c)
 *     MiInitializeTransitionPfn @ 0x140096BD8 (MiInitializeTransitionPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiLockLeafPage @ 0x1400BC6F0 (MiLockLeafPage.c)
 *     MiReturnPfnReferenceCount @ 0x1400FF01C (MiReturnPfnReferenceCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 *a3)
{
  volatile LONG *v3; // r14
  __int64 *v5; // r15
  KIRQL v7; // bp
  __int64 *v8; // rdi
  __int64 v9; // rdi
  volatile LONG *v10; // rsi
  __int64 v11; // rax
  __int64 *v12; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // rdi
  unsigned int v15; // esi
  unsigned int v16; // edx
  __int64 *v17; // r12
  ULONG_PTR v18; // r13
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbp
  __int64 v21; // rdi
  __int16 v22; // ax
  __int64 v23; // r9
  bool v24; // zf
  struct _KPRCB *v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-68h]
  int v28; // [rsp+24h] [rbp-64h]
  int v29; // [rsp+28h] [rbp-60h] BYREF
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  __int64 v32; // [rsp+40h] [rbp-48h]
  unsigned __int8 v33; // [rsp+98h] [rbp+10h] BYREF
  __int64 *v34; // [rsp+A0h] [rbp+18h]
  unsigned int v35; // [rsp+A8h] [rbp+20h]

  v34 = a3;
  v3 = (volatile LONG *)(a2 + 72);
  v5 = a3;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x200u;
  v8 = *(__int64 **)(a1 + 40);
  if ( (*(_DWORD *)(a2 + 56) & 0x20) != 0 )
  {
    v9 = v8[2];
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v11 = *(_QWORD *)(v9 + 80);
    v31 = 0LL;
    *(_QWORD *)(a2 + 80) = v11;
  }
  else
  {
    v9 = *v8;
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v31 = *(_QWORD *)(v9 + 80);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(v9 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140464280);
  v12 = *(__int64 **)(a1 + 40);
  if ( (*(_DWORD *)(a2 + 56) & 0x20) != 0 )
  {
    v12[2] = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
    v14 = *(_QWORD *)(a2 + 136);
    v15 = *(_DWORD *)(a2 + 172);
    v30 = v14;
    v35 = v15;
    while ( 1 )
    {
      if ( !v5 )
        return v31;
      if ( (*((_BYTE *)v5 + 10) & 4) != 0 )
        goto LABEL_37;
      MmUnmapLockedPages((PVOID)v5[3], (PMDL)v5);
      v17 = v5 + 6;
      v18 = 0LL;
      v19 = 0LL;
      v27 = *((_DWORD *)v5 + 4);
      v16 = v27;
      v28 = *((_DWORD *)v5 + 10) >> 12;
      v20 = v14 + 8LL * v27;
      v33 = 17;
      if ( !v28 )
        goto LABEL_37;
      do
      {
        v32 = *v17;
        v21 = 48 * v32 - 0x58000000000LL;
        if ( v16 >= v15 )
        {
          MiReturnPfnReferenceCount(48 * v32 - 0x58000000000LL);
          *v17 = -1LL;
          goto LABEL_33;
        }
        if ( (v20 & 0xFFFFFFFFFFFFF000uLL) != v19 )
        {
          if ( v19 )
            MiUnlockProtoPoolPage(v18, v33);
          while ( 1 )
          {
            v18 = MiLockProtoPoolPage(v20, &v33);
            if ( v18 )
              break;
            MmAccessFault(2uLL, v20, 0, 0LL);
          }
          v19 = v20 & 0xFFFFFFFFFFFFF000uLL;
        }
        MiLockLeafPage((unsigned __int64 *)v20, 0);
        v22 = MI_READ_PTE_LOCK_FREE(v20);
        if ( v23 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (v22 & 0x400) != 0 )
        {
          v29 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v29);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          MiInitializeTransitionPfn(v32, (_QWORD *)v20, -1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 )
            MiReferenceControlAreaPfn(a2, 0LL, 1u);
          goto LABEL_32;
        }
        MiReturnPfnReferenceCount(v21);
        *v17 = -1LL;
LABEL_32:
        v15 = v35;
LABEL_33:
        v20 += 8LL;
        v16 = v27 + 1;
        ++v17;
        v24 = v28-- == 1;
        ++v27;
      }
      while ( !v24 );
      v5 = v34;
      if ( v19 )
        MiUnlockProtoPoolPage(v18, v33);
      v14 = v30;
LABEL_37:
      v5 = (__int64 *)*v5;
      v34 = v5;
    }
  }
  *v12 = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  *(_DWORD *)(a2 + 56) &= ~2u;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  __writecr8(v7);
  KeAbPostRelease((ULONG_PTR)v12);
  return v31;
}
