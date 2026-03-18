/*
 * XREFs of MiLockTransitionLeafPage @ 0x1400BD5EC
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x14002D250 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiOutSwapWorkingSetPte @ 0x1400A5050 (MiOutSwapWorkingSetPte.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiTryDeleteTransitionPte @ 0x1400BFB14 (MiTryDeleteTransitionPte.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiUpdatePrefetchPriority @ 0x14010A580 (MiUpdatePrefetchPriority.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiReplacePageTablePage @ 0x140122280 (MiReplacePageTablePage.c)
 *     MiSetProtectionOnTransitionPte @ 0x14012B720 (MiSetProtectionOnTransitionPte.c)
 *     MiAccessCheck @ 0x14012E614 (MiAccessCheck.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiCheckPteForWriteCluster @ 0x140163148 (MiCheckPteForWriteCluster.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAAEC (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x1402BC550 (MiWalkResetCommitPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiMakeTransitionHeatBatch @ 0x1402EB9DC (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1400BD280 (MiInvalidPteConforms.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockTransitionLeafPage(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  signed __int8 v8; // al
  unsigned __int8 v10; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  int v12; // [rsp+58h] [rbp+10h] BYREF

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
        v6 = v5;
        if ( qword_140465800 )
        {
          if ( (v5 & 0x10) != 0 )
            v6 = v5 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v6 = v5 & ~qword_140465800;
        }
        if ( (*(_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
          break;
      }
    }
    v7 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (unsigned __int64)a2 > 1 )
    {
      *a2 = MiLockPageInline(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    }
    else
    {
      v8 = _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL);
      if ( a2 == (unsigned __int8 *)1 )
      {
        if ( v8 )
          return 0LL;
      }
      else
      {
        v12 = 0;
        if ( v8 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v12);
            while ( *(__int64 *)(v7 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
        }
      }
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v5 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v10 = *a2;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v10);
    }
  }
  if ( (unsigned __int64)a2 <= 1 && (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v5, *(_QWORD *)(v7 + 8));
  return v7;
}
