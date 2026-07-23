/*
 * XREFs of MiUpdatePerSessionProto @ 0x140136FE8
 * Callers:
 *     MiDereferenceSubsectionProtos @ 0x1406CA300 (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile LONG *v4; // r14
  KIRQL v8; // si
  unsigned __int64 v9; // rdx
  bool v10; // r8
  __int64 result; // rax
  unsigned __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = (volatile LONG *)(a1 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( !a4 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)(a2 + 24), (unsigned __int64 *)a3);
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(a2 + 24);
  v10 = 0;
  if ( !v9 )
    goto LABEL_3;
  while ( *(_DWORD *)(a3 + 64) < *(_DWORD *)(v9 + 64) )
  {
    v12 = *(_QWORD *)v9;
    if ( !*(_QWORD *)v9 )
    {
      v10 = 0;
      goto LABEL_3;
    }
LABEL_10:
    v9 = v12;
  }
  v12 = *(_QWORD *)(v9 + 8);
  if ( v12 )
    goto LABEL_10;
  v10 = 1;
LABEL_3:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a2 + 24), v9, v10, (_QWORD *)a3);
LABEL_4:
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v8;
  __writecr8(v8);
  return result;
}
