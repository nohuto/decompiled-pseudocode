/*
 * XREFs of MiGetPagePrivilege @ 0x140024900
 * Callers:
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiRevertValidPte @ 0x14004F8F0 (MiRevertValidPte.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiMarkPfnVerified @ 0x140098744 (MiMarkPfnVerified.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1400A469C (MiReferencePageForModifiedWrite.c)
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiClearPfnImageVerified @ 0x1400DBB6C (MiClearPfnImageVerified.c)
 *     MiTradeActivePage @ 0x1400F6324 (MiTradeActivePage.c)
 *     MiCombineCandidate @ 0x1401400F0 (MiCombineCandidate.c)
 *     MiPageMightBeZero @ 0x1401426B8 (MiPageMightBeZero.c)
 *     MiDbgWriteCheck @ 0x1402D15E8 (MiDbgWriteCheck.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiGetTopLevelPfn @ 0x1400E2680 (MiGetTopLevelPfn.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPagePrivilege(ULONG_PTR BugCheckParameter2, int a2, unsigned __int64 *a3)
{
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rbp
  unsigned int v10; // r14d
  unsigned __int64 v11; // rbp
  unsigned __int8 v12; // r12
  __int64 TopLevelPfn; // rax
  unsigned __int64 v14; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v16; // r10
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  int v22; // r11d
  unsigned __int64 v23; // r10
  int v24; // r11d
  unsigned int v25; // r8d
  int v26; // eax

  if ( (MiFlags & 0x2000) == 0
    || ((*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7) != 3
    || (unsigned int)MiIsPfnFileOnly() )
  {
    return 0LL;
  }
  if ( a3 && (v8 & 0x8000) == 0 )
    a3 = 0LL;
  v9 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  if ( (v7 & 0x200000000000000LL) == 0 )
  {
    if ( (v8 & 0x40000) != 0 )
    {
      v10 = 17;
      if ( (unsigned __int64)((__int64)(v9 << 25) >> 16) < 0xFFFF800000000000uLL )
        return 2;
    }
    else if ( *(_QWORD *)(BugCheckParameter2 + 8) )
    {
      v11 = (__int64)(v9 << 25) >> 16;
      if ( v11 < 0xFFFF800000000000uLL )
      {
        v10 = 20;
        if ( a3 )
        {
          if ( a2 )
            v12 = 17;
          else
            v12 = MiLockPageInline(BugCheckParameter2);
          TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
          v14 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !a2 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            __writecr8(v12);
          }
          if ( *(_QWORD *)(v14 + 728) )
          {
            *a3 = v11;
            a3[1] = *(_QWORD *)(v14 + 728);
          }
          else
          {
            return 0;
          }
        }
      }
      else
      {
        v10 = 1;
        if ( a3 )
        {
          *a3 = v11;
          a3[1] = 0LL;
        }
      }
    }
    else
    {
      v10 = 4;
      if ( a3 )
      {
        *a3 = 0LL;
        a3[1] = 0LL;
      }
    }
    return v10;
  }
  v16 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( (v16 & 0x400) == 0 )
  {
    v17 = 16 * ((v8 >> 18) & 1);
    if ( a3 )
    {
      *a3 = 0LL;
      a3[1] = 0LL;
    }
    return (unsigned int)(v17 + 3);
  }
  v18 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( qword_140465B00 && (v16 & 0x10) == 0 )
    v18 = ~qword_140465B00 & v16;
  v19 = v18 >> 16;
  v20 = *(_QWORD *)v19;
  if ( (*(_DWORD *)(*(_QWORD *)v19 + 56LL) & 0x20) == 0 )
    return 2LL;
  v21 = *(_QWORD *)(v19 + 8);
  if ( v9 < v21 || v9 >= v21 + 8LL * *(unsigned int *)(v19 + 44) )
    return 0LL;
  v22 = *(_DWORD *)(v20 + 92);
  if ( (v22 & 0xC0000) != 0 && (v22 & 0x20000) != 0 && v19 != v20 + 128 )
    return 40LL;
  v23 = v16 >> 5;
  v24 = v22 & 0xC0000;
  if ( (v8 & 0x40000) == 0 )
  {
    if ( v24 )
    {
      v26 = 8;
      if ( (v23 & 2) != 0 )
        v26 = 11;
      v25 = v26;
      goto LABEL_56;
    }
    return 0LL;
  }
  v25 = 2;
  if ( v24 )
  {
    v25 = 10;
    if ( (v23 & 2) != 0 )
      v25 = 11;
  }
LABEL_56:
  if ( a3 )
  {
    a3[1] = *(_QWORD *)(*(_QWORD *)(v20 + 96) + 56LL);
    *a3 = (__int64)(v9 - *(_QWORD *)(v20 + 136)) >> 3 << 12;
  }
  return v25;
}
