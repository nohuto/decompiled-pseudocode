/*
 * XREFs of MiLockTransitionLeafPage @ 0x1400DD76C
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x14002CE60 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiOutSwapWorkingSetPte @ 0x1400C51D0 (MiOutSwapWorkingSetPte.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiTryDeleteTransitionPte @ 0x1400DFC94 (MiTryDeleteTransitionPte.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiUpdatePrefetchPriority @ 0x14010A9B0 (MiUpdatePrefetchPriority.c)
 *     MiReplacePageTablePage @ 0x140121430 (MiReplacePageTablePage.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiSetProtectionOnTransitionPte @ 0x14012AD00 (MiSetProtectionOnTransitionPte.c)
 *     MiAccessCheck @ 0x14012DD24 (MiAccessCheck.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiCheckPteForWriteCluster @ 0x1401636F8 (MiCheckPteForWriteCluster.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAD8C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x1402BC7F0 (MiWalkResetCommitPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiMakeTransitionHeatBatch @ 0x1402EBC7C (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1400DD400 (MiInvalidPteConforms.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
        if ( qword_140465B00 )
        {
          if ( (v5 & 0x10) != 0 )
            v6 = v5 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v6 = v5 & ~qword_140465B00;
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
