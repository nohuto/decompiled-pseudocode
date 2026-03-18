/*
 * XREFs of MiCreateKernelStackNode @ 0x1402C41FC
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x1400DEE10 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiCreateKernelStackNode(_WORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  _QWORD *v7; // rdx
  bool v8; // r8
  KIRQL v9; // di
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x734B694Du);
  v5 = result;
  if ( result )
  {
    result[3] = *a2 - 1LL;
    result[4] = a2[1];
    *((_WORD *)result + 20) = *a1;
    v6 = ExAcquireSpinLockExclusive(&dword_140466720);
    v7 = (_QWORD *)qword_140466718;
    v8 = 0;
    v9 = v6;
    if ( qword_140466718 )
    {
      v10 = v5[3];
      while ( 1 )
      {
        if ( v10 > v7[3] || v10 >= v7[4] )
        {
          v11 = (_QWORD *)v7[1];
          if ( !v11 )
          {
            v8 = 1;
            break;
          }
        }
        else
        {
          v11 = (_QWORD *)*v7;
          if ( !*v7 )
          {
            v8 = 0;
            break;
          }
        }
        v7 = v11;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140466718, (unsigned __int64)v7, v8, v5);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140466720);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v9);
    return v5;
  }
  return result;
}
