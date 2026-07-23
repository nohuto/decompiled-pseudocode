/*
 * XREFs of MiDemoteCombinedPte @ 0x14006C1F0
 * Callers:
 *     MiAgePte @ 0x14006ADC0 (MiAgePte.c)
 *     MiWalkVaCheckCommon @ 0x140087E0C (MiWalkVaCheckCommon.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MiResetAccessBitPte @ 0x14016E930 (MiResetAccessBitPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB8AC (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14001A320 (MiUnlockPageTableCharges.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiIdentifyPfn @ 0x1400A7E20 (MiIdentifyPfn.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiFreeCombineBlock @ 0x14011FB14 (MiFreeCombineBlock.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140126C70 (MiUpdateWorkingSetPrivateSize.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogCombinedPteDelete @ 0x1402CC268 (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDemoteCombinedPte(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  bool v7; // cc
  unsigned __int64 v9; // r13
  _KPROCESS *Process; // r12
  __int64 v11; // rcx
  bool v12; // zf
  char WsleContents; // di
  __int64 v14; // r9
  int v15; // r10d
  int v16; // eax
  unsigned __int8 v17; // r9
  __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  ULONG_PTR v22; // rbx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v27; // rcx
  unsigned __int8 v28; // [rsp+30h] [rbp-98h]
  int v29; // [rsp+34h] [rbp-94h]
  __int64 v30; // [rsp+38h] [rbp-90h]
  __int64 v31; // [rsp+38h] [rbp-90h]
  unsigned __int64 v32; // [rsp+40h] [rbp-88h] BYREF
  __int64 v33; // [rsp+48h] [rbp-80h]
  unsigned __int64 v34; // [rsp+50h] [rbp-78h]
  __int64 v35; // [rsp+58h] [rbp-70h]
  _QWORD v36[3]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v37[2]; // [rsp+78h] [rbp-50h] BYREF

  v3 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 8 * ((a2 >> 3) & 0x1FF));
      v25 = v3 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v3;
      v3 = v25;
      if ( (v24 & 0x42) != 0 )
        v3 = v25 | 0x42;
    }
  }
  v7 = *(_QWORD *)(a3 - 16) <= 1uLL;
  v32 = v3;
  if ( !v7 )
    return 0LL;
  v33 = *(_QWORD *)(((a3 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  Process = 0LL;
  v11 = (*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL;
  v12 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v35 = (__int64)(a2 << 25) >> 16;
  v30 = *(_QWORD *)(qword_14043B808 + 8 * v11);
  if ( v12 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].Affinity.Bitmap[10] )
      return 0LL;
  }
  WsleContents = MiGetWsleContents(v11, (__int64)(a2 << 25) >> 16);
  v34 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v14 + ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 12;
  v16 = v15;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v16 = 1;
  v29 = v16;
  v17 = MiLockPageInline(v9);
  v28 = v17;
  v18 = *(_WORD *)(v9 + 32);
  if ( v18 != 1 && (v18 != 2 || (*(_BYTE *)(v9 + 34) & 8) == 0)
    || *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v30 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v17 >= 2u )
      goto LABEL_48;
LABEL_47:
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    v17 = v28;
LABEL_48:
    __writecr8(v17);
    return 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 - 16), 0LL, 1LL) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v17 >= 2u )
      goto LABEL_48;
    goto LABEL_47;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 384), 0xFFFFFFFF);
  v19 = *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 8) = a2;
  v20 = v19 & 0xFFFFFFFFFLL;
  v31 = v19 & 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 40) = v34 & 0xFFFFFFFFFLL | v19 & 0xFDFFFFF000000000uLL;
  if ( ((v21 >> 5) & 5) == 5 )
    *(_QWORD *)(v9 + 16) = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(32 * ((v21 >> 5) & 0xFFFE))) & 0x3E0;
  if ( v29 )
  {
    memset(v36, 0, sizeof(v36));
    MiIdentifyPfn(v9);
    v20 = v31;
    v17 = v28;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
  {
    v27 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v27);
    v20 = v31;
    v17 = v28;
  }
  __writecr8(v17);
  if ( (v3 & 0x200) != 0 )
  {
    v32 = v3 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
    MiWriteValidPteNewProtection(a2, v32);
    v20 = v31;
  }
  v22 = 48 * v20 - 0x58000000000LL;
  if ( (WsleContents & 0xF) == 8 )
    MiUnlockPageTableCharges(v22, 1);
  MiLockAndDecrementShareCount(v22, 0LL);
  MiUpdateWorkingSetPrivateSize(a1, v35, 1LL, 0LL);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  if ( v29 )
  {
    MiLogCombinedPteDelete(a3);
    v37[1] = 24LL;
    v37[0] = v36;
    EtwTraceKernelEvent((unsigned int)v37, 1, 671088641, 630, 289413890);
  }
  MiFreeCombineBlock(a3 - 48);
  return 1LL;
}
