/*
 * XREFs of MiGetPagePrivilege @ 0x1400B29B0
 * Callers:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiRevertValidPte @ 0x1400B22A0 (MiRevertValidPte.c)
 *     MiCombineCandidate @ 0x1400B2610 (MiCombineCandidate.c)
 *     MiWsleFree @ 0x1400B2BB0 (MiWsleFree.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 *     MiPageMightBeZero @ 0x14012596C (MiPageMightBeZero.c)
 *     MiTradeActivePage @ 0x14012DFF4 (MiTradeActivePage.c)
 *     MiDbgWriteCheck @ 0x1402BB574 (MiDbgWriteCheck.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiGetTopLevelPfn @ 0x140083810 (MiGetTopLevelPfn.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPagePrivilege(__int64 BugCheckParameter2, int a2, unsigned __int64 *a3)
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
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r10
  unsigned __int64 v20; // r8
  int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned int v23; // r8d
  int v24; // eax

  if ( (MiFlags & 0x2000) == 0
    || ((*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7) != 3
    || MiIsPfnFileOnly(BugCheckParameter2) )
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
          if ( *(_QWORD *)(v14 + 720) )
          {
            *a3 = v11;
            a3[1] = *(_QWORD *)(v14 + 720);
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
    return 16 * ((v8 >> 18) & 1) + 3;
  v17 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( qword_14043B180 && (v16 & 0x10) == 0 )
    v17 = ~qword_14043B180 & v16;
  v18 = v17 >> 16;
  v19 = *(_QWORD *)v18;
  if ( (*(_DWORD *)(*(_QWORD *)v18 + 56LL) & 0x20) == 0 )
    return 2LL;
  v20 = *(_QWORD *)(v18 + 8);
  if ( v9 < v20 || v9 >= v20 + 8LL * *(unsigned int *)(v18 + 44) )
    return 0LL;
  v21 = *(_DWORD *)(v19 + 92);
  v22 = v16 >> 5;
  if ( (v8 & 0x40000) == 0 )
  {
    if ( (v21 & 0x180000) != 0 )
    {
      v24 = 8;
      if ( (v22 & 2) != 0 )
        v24 = 11;
      v23 = v24;
      goto LABEL_51;
    }
    return 0LL;
  }
  v23 = 2;
  if ( (v21 & 0x180000) != 0 )
  {
    v23 = 10;
    if ( (v22 & 2) != 0 )
      v23 = 11;
  }
LABEL_51:
  if ( a3 )
  {
    a3[1] = *(_QWORD *)(*(_QWORD *)(v19 + 96) + 48LL);
    *a3 = (__int64)(v9 - *(_QWORD *)(v19 + 136)) >> 3 << 12;
  }
  return v23;
}
