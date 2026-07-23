/*
 * XREFs of MiCreateKernelStackNode @ 0x1402AB6E4
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x14007FAA0 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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
    v6 = ExAcquireSpinLockExclusive(&dword_14043BD60);
    v7 = (_QWORD *)qword_14043BD58;
    v8 = 0;
    v9 = v6;
    if ( qword_14043BD58 )
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
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14043BD58, (unsigned __int64)v7, v8, v5);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043BD60);
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
