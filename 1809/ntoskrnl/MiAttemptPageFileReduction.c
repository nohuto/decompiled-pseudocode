/*
 * XREFs of MiAttemptPageFileReduction @ 0x1402B74BC
 * Callers:
 *     MiProcessDereferenceList @ 0x140154150 (MiProcessDereferenceList.c)
 * Callees:
 *     MiOkToShrinkPageFiles @ 0x140091738 (MiOkToShrinkPageFiles.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402B8AE8 (MiQueueSyncModifiedWriterApc.c)
 *     IoSetInformation @ 0x140702520 (IoSetInformation.c)
 */

int __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  KIRQL v4; // al
  KIRQL v5; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rax
  int *v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 FileInformation; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int Object[28]; // [rsp+A8h] [rbp-60h] BYREF

  memset(Object, 0, 0x68uLL);
  LOWORD(Object[0]) = 0;
  Object[1] = 0;
  v2 = 16LL;
  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&Object[4] = &Object[2];
  *(_QWORD *)&Object[2] = &Object[2];
  BYTE2(Object[0]) = 6;
  *(_QWORD *)&Object[6] = v3;
  if ( (*(_BYTE *)(a1 + 79) & 0x10) == 0 )
  {
    Object[8] = *(unsigned __int8 *)(a1 + 76);
    Object[9] = *(_DWORD *)(a1 + 40);
LABEL_10:
    MiQueueSyncModifiedWriterApc(v3, (int)&v13, (int)MiAttemptPageFileReductionApc, (int)Object, Object);
    v8 = &Object[10];
    v9 = (__int64 *)(v3 + 7136);
    do
    {
      v7 = (unsigned int)*v8;
      if ( (_DWORD)v7 )
      {
        v10 = *v9;
        FileInformation = v7 << 12;
        LODWORD(v7) = IoSetInformation(*(PFILE_OBJECT *)(v10 + 56), FileAllocationInformation, 8u, &FileInformation);
      }
      ++v9;
      ++v8;
      --v2;
    }
    while ( v2 );
    return v7;
  }
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1280));
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1280));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v5);
  LODWORD(v7) = MiOkToShrinkPageFiles(*(_QWORD *)(v3 + 7656), *(_QWORD *)(v3 + 7784));
  if ( (_DWORD)v7 )
  {
    Object[8] = 16;
    goto LABEL_10;
  }
  return v7;
}
