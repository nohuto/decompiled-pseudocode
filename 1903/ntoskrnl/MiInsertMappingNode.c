/*
 * XREFs of MiInsertMappingNode @ 0x140175100
 * Callers:
 *     MmAllocateMappingAddress @ 0x1407343E0 (MmAllocateMappingAddress.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertMappingNode(_QWORD *a1)
{
  unsigned __int64 v1; // rdi
  KIRQL v3; // al
  _QWORD *v4; // rdx
  bool v5; // r8
  KIRQL v6; // bl
  _QWORD *v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1[3];
  v3 = ExAcquireSpinLockExclusive(&dword_140466700);
  v4 = (_QWORD *)qword_140466708;
  v5 = 0;
  v6 = v3;
  if ( qword_140466708 )
  {
    while ( 1 )
    {
      if ( v1 < v4[3] )
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
        {
          v5 = 0;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          break;
        }
      }
      v4 = v7;
    }
  }
  RtlAvlInsertNodeEx(&qword_140466708, (unsigned __int64)v4, v5, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140466700);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
