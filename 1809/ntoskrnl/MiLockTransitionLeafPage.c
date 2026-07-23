/*
 * XREFs of MiLockTransitionLeafPage @ 0x140095684
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiOutSwapWorkingSetPte @ 0x14003DD60 (MiOutSwapWorkingSetPte.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiReservePageFileSpaceForPage @ 0x1400817F0 (MiReservePageFileSpaceForPage.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MiAccessCheck @ 0x14009294C (MiAccessCheck.c)
 *     MiSetProtectionOnTransitionPte @ 0x140093AF8 (MiSetProtectionOnTransitionPte.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiTryDeleteTransitionPte @ 0x140094E6C (MiTryDeleteTransitionPte.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiUpdatePrefetchPriority @ 0x1400B7100 (MiUpdatePrefetchPriority.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MiReplacePageTablePage @ 0x14011BEFC (MiReplacePageTablePage.c)
 *     MiCheckPteForWriteCluster @ 0x140150878 (MiCheckPteForWriteCluster.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A3BBC (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x1402A5650 (MiWalkResetCommitPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 *     MiMakeTransitionHeatBatch @ 0x1402CEE04 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInvalidPteConforms @ 0x140039720 (MiInvalidPteConforms.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockTransitionLeafPage(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  signed __int8 v10; // al
  unsigned __int8 v12; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  int v14; // [rsp+58h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v5 = v4;
      if ( (unsigned __int64)a2 > 1 && ((v4 & 1) != 0 || (v4 & 0x400) != 0) || (v4 & 0x800) == 0 )
        return 0LL;
      if ( MiInvalidPteConforms(v4) )
      {
        v7 = v5;
        if ( qword_14043B180 )
        {
          if ( (v5 & 0x10) != 0 )
            v7 = v5 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v7 = v5 & ~qword_14043B180;
        }
        v8 = 0x20000000000000LL;
        if ( (*(_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
          break;
      }
    }
    v9 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (unsigned __int64)a2 > 1 )
    {
      *a2 = MiLockPageInline(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    }
    else
    {
      v10 = _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL);
      if ( a2 == (unsigned __int8 *)1 )
      {
        if ( v10 )
          return 0LL;
      }
      else
      {
        v14 = 0;
        if ( v10 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v14, v8, v6);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
        }
      }
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v5 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v12 = *a2;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v12);
    }
  }
  if ( (unsigned __int64)a2 <= 1 && (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v5, *(_QWORD *)(v9 + 8));
  return v9;
}
