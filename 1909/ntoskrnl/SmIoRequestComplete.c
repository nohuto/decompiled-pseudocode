/*
 * XREFs of SmIoRequestComplete @ 0x14014A464
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14014A2C8 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014C274 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiStoreFreeWriteSupport @ 0x14014A5B0 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x14014A5E4 (MiStoreModifiedWriteDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1402DE008 (MiStoreLogWriteCompleteFailure.c)
 */

LONG __fastcall SmIoRequestComplete(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _SLIST_ENTRY *v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  __int64 v8; // rbx
  unsigned __int8 v9; // si
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (*a2 & 7) != 0 )
  {
    if ( (*a2 & 7) == 2 )
      *(_QWORD *)(a4 + 8) = (unsigned __int16)*(_QWORD *)(a4 + 8);
  }
  else
  {
    *(_QWORD *)(a4 + 8) &= 1uLL;
  }
  if ( a3 < 0 )
    return KeSetEvent((PRKEVENT)a3, 1, 0);
  v4 = (_SLIST_ENTRY *)(a3 | 0x8000000000000000uLL);
  v5 = *(_DWORD *)((a3 | 0x8000000000000000uLL) + 0x10);
  v6 = *(_QWORD *)(*(_QWORD *)((a3 | 0x8000000000000000uLL) + 0x38) + 192LL);
  if ( v5 < 0 )
  {
    MiStoreLogWriteCompleteFailure((unsigned int)v5);
    v8 = 48 * (__int64)v4[7].Next - 0x58000000000LL;
    v9 = MiLockPageInline(v8);
    *(_BYTE *)(v8 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
    *(_DWORD *)(v6 + 1156) = 32;
  }
  MiStoreModifiedWriteDereference();
  return MiStoreFreeWriteSupport(v4);
}
