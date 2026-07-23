/*
 * XREFs of MiCreateDecayPfn @ 0x1400294F4
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiCreateDecayPfn(unsigned int a1)
{
  PSLIST_ENTRY result; // rax
  ULONG_PTR v3; // rdi
  unsigned __int16 *v4; // rbx
  __int64 v5; // rdx
  unsigned __int8 v6; // si
  unsigned __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  result = RtlpInterlockedPopEntrySList(&ListHead);
  v3 = (ULONG_PTR)result;
  if ( result )
  {
    v4 = *(unsigned __int16 **)(qword_14043B808
                              + 8LL
                              * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3));
    result[1].Next = (_SLIST_ENTRY *)MiSwizzleInvalidPte(((((__int64)&result[0x5800000000LL] / 48) & 0xFFFFFFFFFLL) << 12) | 0x880);
    *(_QWORD *)(v3 + 40) = v5 | *(_QWORD *)(v3 + 40) & 0xFFFFFFF000000000uLL;
    v6 = MiLockPageInline(v3);
    *(_BYTE *)(v3 + 35) |= 8u;
    v7 = *(_QWORD *)(v3 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)a1 << 58);
    *(_QWORD *)(v3 + 40) = v7;
    *(_QWORD *)(v3 + 40) = v7 ^ (v7 ^ ((unsigned __int64)*v4 << 40)) & 0x3FF0000000000LL;
    *(_BYTE *)(v3 + 35) = *(_BYTE *)(v3 + 35) & 0xF8 | 5;
    MiInsertPageInList(v3);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
