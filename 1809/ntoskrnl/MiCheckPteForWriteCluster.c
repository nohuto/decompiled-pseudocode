/*
 * XREFs of MiCheckPteForWriteCluster @ 0x140150878
 * Callers:
 *     MiGetPageForWriteCluster @ 0x140150760 (MiGetPageForWriteCluster.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckPteForWriteCluster(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 *a6)
{
  __int64 result; // rax
  unsigned __int8 v9; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  result = MiLockTransitionLeafPage(a2, a6);
  if ( !result )
    return 0LL;
  if ( (*(_BYTE *)(result + 34) & 7) != 3
    || *(_WORD *)(result + 32)
    || (*(_QWORD *)(result + 16) & 0xFFFFFFFFFC00FC1FuLL) != a3 )
  {
    goto LABEL_11;
  }
  if ( qword_14043B180 && (a3 & 0x10) == 0 )
    a3 &= ~qword_14043B180;
  if ( _bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(a3)) )
  {
LABEL_11:
    v9 = *a6;
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
    return 0LL;
  }
  return result;
}
