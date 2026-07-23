/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x140029F10
 * Callers:
 *     MiFreeMdlPageRun @ 0x140029DE0 (MiFreeMdlPageRun.c)
 *     MmFreeSecureKernelPages @ 0x1402C3324 (MmFreeSecureKernelPages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(ULONG_PTR BugCheckParameter2, int a2)
{
  signed __int64 v3; // r14
  __int64 v5; // rbp
  ULONG_PTR v6; // rbx
  unsigned __int8 v7; // si
  bool v8; // zf
  _QWORD *v9; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = 48 * BugCheckParameter2;
  v5 = 1LL;
  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = MiLockPageInline(v6);
  if ( a2 < 0 )
    *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  v8 = *(_WORD *)(v6 + 32) == 2;
  *(_WORD *)(v6 + 32) -= 2;
  if ( v8 )
  {
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(v6 + 34) &= ~0x10u;
    }
    else
    {
      v9 = (_QWORD *)qword_14043B248;
      if ( qword_14043B248 && ((*(_QWORD *)(v6 + 40) >> 54) & 7) == 1 )
      {
        v11 = v3 / 48;
        while ( v9 )
        {
          v12 = v9[3];
          if ( v11 < v12 )
          {
            v9 = (_QWORD *)*v9;
          }
          else
          {
            if ( v11 - v12 < v9[4] )
              break;
            v9 = (_QWORD *)v9[1];
          }
        }
      }
    }
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
  }
  else
  {
    *(_BYTE *)(v6 + 34) |= 7u;
    v5 = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  return v5;
}
