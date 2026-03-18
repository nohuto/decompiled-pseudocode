/*
 * XREFs of MiCreateDecayPfn @ 0x14011C714
 * Callers:
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiMakeTransitionPte @ 0x14002C580 (MiMakeTransitionPte.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiCreateDecayPfn(unsigned int a1)
{
  PSLIST_ENTRY result; // rax
  ULONG_PTR v3; // rdi
  unsigned __int16 *v4; // rbx
  __int64 TransitionPte; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned __int8 v8; // si
  unsigned __int64 v9; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  result = RtlpInterlockedPopEntrySList(&stru_1404664F0);
  v3 = (ULONG_PTR)result;
  if ( result )
  {
    v4 = *(unsigned __int16 **)(qword_140466188
                              + 8LL * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]);
    TransitionPte = MiMakeTransitionPte((__int64)&result[0x5800000000LL] / 48, 4);
    v7 = *(_QWORD *)(v3 + 40) ^ v6;
    *(_QWORD *)(v3 + 16) = TransitionPte;
    *(_QWORD *)(v3 + 40) ^= v7 & 0xFFFFFFFFFLL;
    v8 = MiLockPageInline(v3);
    *(_BYTE *)(v3 + 35) |= 8u;
    v9 = *(_QWORD *)(v3 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)a1 << 58);
    *(_QWORD *)(v3 + 40) = v9;
    *(_QWORD *)(v3 + 40) = v9 ^ (v9 ^ ((unsigned __int64)*v4 << 40)) & 0x3FF0000000000LL;
    *(_BYTE *)(v3 + 35) = *(_BYTE *)(v3 + 35) & 0xF8 | 5;
    MiInsertPageInList(v3, 4u);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v8);
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
