/*
 * XREFs of MiFinishLastForkPageTable @ 0x1402E4130
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x1402E3C34 (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x1402E439C (MiFreeForkMaps.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2)
{
  BOOL v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  __int64 v12; // rdx
  int v13; // r8d
  bool v14; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v3 = 1;
  v4 = 48 * a2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL;
  v6 = (__int64)(v5 << 25) >> 16 << 25 >> 16;
  if ( v6 >= 0xFFFFF68000000000uLL )
    v3 = v6 > 0xFFFFF6FFFFFFFFFFuLL;
  v7 = MiLockPageInline(v4);
  MiRemoveLockedPageChargeAndDecRef(v4, v8, v9, v10);
  if ( v3 )
  {
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
    {
      MiDecrementShareCount(v4);
      goto LABEL_18;
    }
    v11 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                    + 8 * ((v5 >> 3) & 0x1FF));
    if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v11) & 1) != 0 )
      goto LABEL_16;
    MiMakeValidPte(v5, a2, -2147483644);
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( !HIBYTE(word_140465BEC) )
        {
          v14 = (v12 & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v14 = (v12 & 1) == 0;
LABEL_12:
        if ( !v14 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    *v11 = v12;
    if ( v13 )
      MiWritePteShadow((__int64)v11);
LABEL_16:
    LOBYTE(v12) = 17;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v11, v12, 0x80000000LL);
  }
LABEL_18:
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
