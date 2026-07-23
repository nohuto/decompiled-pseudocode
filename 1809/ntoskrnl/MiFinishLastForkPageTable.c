/*
 * XREFs of MiFinishLastForkPageTable @ 0x1402C9FE0
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x1402C9AD0 (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x1402CA24C (MiFreeForkMaps.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2)
{
  BOOL v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // si
  __int64 *v8; // rdi
  __int64 v9; // rdx
  int v10; // r8d
  bool v11; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v3 = 1;
  v4 = 48 * a2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL;
  v6 = (__int64)(v5 << 25) >> 16 << 25 >> 16;
  if ( v6 >= 0xFFFFF68000000000uLL )
    v3 = v6 > 0xFFFFF6FFFFFFFFFFuLL;
  v7 = MiLockPageInline(v4);
  MiRemoveLockedPageChargeAndDecRef(v4);
  if ( v3 )
  {
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
    {
      MiDecrementShareCount(v4);
      goto LABEL_18;
    }
    v8 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                   + 8 * ((v5 >> 3) & 0x1FF));
    if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) & 1) != 0 )
      goto LABEL_16;
    MiMakeValidPte(v5, a2, -2147483644);
    if ( MiPteInShadowRange((unsigned __int64)v8) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v10 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v11 = (v9 & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v11 = (v9 & 1) == 0;
LABEL_12:
        if ( !v11 )
          v9 |= 0x8000000000000000uLL;
      }
    }
    *v8 = v9;
    if ( v10 )
      MiWritePteShadow((__int64)v8, v9);
LABEL_16:
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v8, 0x11u, 0x80000000LL);
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
