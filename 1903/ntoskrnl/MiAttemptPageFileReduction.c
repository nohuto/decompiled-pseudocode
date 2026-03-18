/*
 * XREFs of MiAttemptPageFileReduction @ 0x1402CD708
 * Callers:
 *     MiProcessDereferenceList @ 0x140165044 (MiProcessDereferenceList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiOkToShrinkPageFiles @ 0x1400AD7CC (MiOkToShrinkPageFiles.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402CEC98 (MiQueueSyncModifiedWriterApc.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 */

int __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  KIRQL v4; // al
  KIRQL v5; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rax
  __int64 *v8; // rsi
  int *v9; // rbx
  __int64 v10; // rcx
  __int64 FileInformation; // [rsp+38h] [rbp-D0h] BYREF
  int v13[22]; // [rsp+48h] [rbp-C0h] BYREF
  int Object[28]; // [rsp+A8h] [rbp-60h] BYREF

  FileInformation = 0LL;
  memset(v13, 0, sizeof(v13));
  memset(Object, 0, 0x68uLL);
  Object[1] = 0;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 16LL;
  *(_QWORD *)&Object[4] = &Object[2];
  *(_QWORD *)&Object[2] = &Object[2];
  BYTE2(Object[0]) = 6;
  *(_QWORD *)&Object[6] = v2;
  if ( (*(_BYTE *)(a1 + 79) & 0x10) == 0 )
  {
    Object[8] = *(unsigned __int8 *)(a1 + 76);
    Object[9] = *(_DWORD *)(a1 + 40);
LABEL_10:
    MiQueueSyncModifiedWriterApc(v2, (int)v13, (int)MiAttemptPageFileReductionApc, (int)Object, Object);
    v8 = (__int64 *)(v2 + 7904);
    v9 = &Object[10];
    do
    {
      v7 = (unsigned int)*v9;
      if ( (_DWORD)v7 )
      {
        v10 = *v8;
        FileInformation = v7 << 12;
        LODWORD(v7) = IoSetInformation(*(PFILE_OBJECT *)(v10 + 56), FileAllocationInformation, 8u, &FileInformation);
      }
      ++v8;
      ++v9;
      --v3;
    }
    while ( v3 );
    return v7;
  }
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1280));
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v5);
  LODWORD(v7) = MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 8424), *(_QWORD *)(v2 + 8552));
  if ( (_DWORD)v7 )
  {
    Object[8] = 16;
    goto LABEL_10;
  }
  return v7;
}
