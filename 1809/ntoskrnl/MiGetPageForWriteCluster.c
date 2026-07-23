/*
 * XREFs of MiGetPageForWriteCluster @ 0x140150760
 * Callers:
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 * Callees:
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 *     MiCheckPteForWriteCluster @ 0x140150878 (MiCheckPteForWriteCluster.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPageForWriteCluster(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        int a5,
        int *a6,
        _DWORD *a7)
{
  ULONG_PTR v9; // rax
  int v10; // esi
  __int64 v11; // rdi
  struct _KPRCB *CurrentPrcb; // rcx

  *a7 = 1;
  v9 = MiCheckPteForWriteCluster();
  v10 = 0;
  v11 = v9;
  if ( v9 )
  {
    *a7 = MiReferencePageForModifiedWrite(v9, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(a4);
    if ( *a7 )
      goto LABEL_8;
  }
  else if ( (unsigned int)*a6 <= 0x1F )
  {
    if ( qword_14043B180 )
    {
      if ( (a3 & 0x10) == 0 )
        a3 &= ~qword_14043B180;
    }
    if ( !_bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(a3)) )
    {
      v11 = qword_14043BE80;
      v10 = *a6 + 1;
LABEL_8:
      *a6 = v10;
      return (v11 + 0x58000000000LL) / 48;
    }
  }
  return -1LL;
}
